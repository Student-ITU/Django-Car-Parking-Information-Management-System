// import UseContextHook4 from './UseContextHook4';

// function UseContextHook3 (props) {
//     return (
//      <div className="box">
//         <h2>UseContextHook3</h2>
//         <UseContextHook4 user ={props.user}/>
        
//     </div>  
//     )
// }

// export default UseContextHook3;


import React, { useContext } from 'react';
import { MyTheme } from './App';



function UseContextHook3 () {

   const { theme, setTheme } = useContext(MyTheme);

    function handleClick() {
    setTheme(theme === 'light' ? 'dark' : 'light');
    }

    return (
     <div className="box">
        <h2>UseContextHook3</h2>
        <button onClick ={handleClick}>Change Theme from {theme}</button>
    </div>  
    )
}
export default UseContextHook3;