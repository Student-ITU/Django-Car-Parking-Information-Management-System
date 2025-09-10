import profilePic from './assets/JohnCena.png'

function ProfilePicture () {
    // const imageUrl = profilePic;
    // const handleClick = () => console.log("OUCH!");
    
    // return (<div><img className="PicSize" onClick={handleClick} src= {imageUrl}></img></div>)

    // Neeche dekho


    const imageUrl = profilePic;
    const handleClick = (e) => e.target.style.display="none";
    
    return (<div><img className="PicSize" onClick={(e) => handleClick(e)} src= {imageUrl}></img></div>) 
}

// Ye (e) => handleClick(e) ek arrow function hai jo handleClick ko call karta hai.
// Ye callback function hai because:
// Tum onClick prop ko ek function dete ho.
// Jab click hota hai, React wo function ko execute karta hai.
// e hota kya hai?
// e ka matlab hai: event object



// Jab tum React ya JavaScript me kisi event handler ko run karte ho (jaise onClick, onChange, onSubmit), browser tumhe automatically ek special object deta hai.
// Is object me us event ki sari info hoti hai:
// kis element pe click hua
// kis mouse button se
// kya key press thi (agar keyboard event hota)
// position waghera



export default ProfilePicture