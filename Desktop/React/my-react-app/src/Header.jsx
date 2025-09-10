function Header () {
    // This is inline styling points to remember -> (,) lagana, "" sab kuch string me likhna, camelCase me likhna sab - na ai, and jis me lagana hai style={styles} yeh likh dena styles name change ho sakta
    const styles =  {
        backgroundColor: "rgb(217, 128, 202)",
    }

    return (
        <header style={styles}>  
            <h1>My Website</h1>
            <nav>
                <ul>
                    <li><a href="#"></a>Home</li>
                    <li><a href="#"></a>Services</li>
                    <li><a href="#"></a>Contact</li>
                </ul>
            </nav>
            <hr></hr>
        </header>
    );
}

export default Header // Tumne Header.jsx mein likha hai: export default Header. Matlab jab koi doosri file (App.jsx) import Header from './Header.jsx' karegi, woh is function ko hi default lega.


// export default se component doosri file ko milta hai.
// import se woh doosri file mein use hota hai.
// <ComponentName /> tag se woh page pe render hota hai.
// export likhe bina, file apna component doosron ko nahi degi — aur import bina maal ke kaise laaye
// Header jo tumne likha hai — yeh hi tumhara React component hai!

