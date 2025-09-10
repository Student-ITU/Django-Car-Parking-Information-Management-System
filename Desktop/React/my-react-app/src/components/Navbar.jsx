import React from 'react'
import Home from './Home'
import Dashboard from './Dashboard'
import { Link } from "react-router-dom"
import { NavLink } from "react-router-dom";


function Navbar() {
  return (
    <div>
        {/* <ul>
            <li><a href="/">Home</a></li>
            <li><a href="/about">About</a></li>
            <li><a href="/dashboard">Dashboard</a></li>
        </ul> It is not a good practice, pura page reload hota agar SPA hai yani single page application hia, dubara se sare html render hote us page ke, Backend se HTML dubara fetch hoti hai. React ka entire state loss ho jata hai
        
        
        Agar tum <Link to="/about"> use karo:
        React ke andar hi route change hota hai
        Koi page reload nahi hota.
        Sab kuch fast aur smooth lagta hai, jaise mobile apps.*/}

        {/* <ul>
        <li><Link to="/">Home</Link></li>
        <li><Link to="/about">About</Link></li>
        <li><Link to="/dashboard">Dashboard</Link></li>
        </ul> */}

        {/* MORE BETTER WAY IS NAVLINK IS ME HAM CLASS DE SAKTE AND US KO STYLE KR SAKTE AND HAMEIN PATA CHAL JAYE GA KIS PAR CLICK KIA, INDEX.css me style kia hua,  import { NavLink } from "react-router-dom"; ise import kr lena*/}

       
        <ul>
            <li>
                <NavLink
                to="/"
                className={({ isActive }) => (isActive ? "active-link" : "")}>
                Home
                </NavLink>
            </li>
            <li>
                <NavLink
                to="/about"
                className={({ isActive }) => (isActive ? "active-link" : "")}>
                About
                </NavLink>
            </li>
            <li>
                <NavLink
                to="/dashboard"
                className={({ isActive }) => (isActive ? "active-link" : "")}>
                Dashboard
                </NavLink>
            </li>
        </ul>


        
    </div>
  )
}

export default Navbar