

// function UseContextHook2 (props) {
//     return (
//      <div className="box">
//         <h2>UseContextHook2</h2>
//         <UseContextHook3 user ={props.user}/>
        
//     </div>
//     )
// }

// export default UseContextHook2;


import UseContextHook3 from './UseContextHook3';
import React, {useContext} from 'react';
import { MyContext } from './App';

function UseContextHook2 () {
    const user = useContext(MyContext);
    return (
     <div className="box">
        <h2>UseContextHook2</h2>
        {user.name}
        <UseContextHook3/>
    </div>
    )
}

export default UseContextHook2;