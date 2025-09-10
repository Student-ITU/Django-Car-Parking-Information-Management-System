import React, { useState, useRef } from 'react';


function useRefHook() {

    const [count, setCount] = useState(0);
    // const countRef = useRef(0);
    // let val = 1; // Ab cz useState ke waja se baar baar click par apger re-render ho rha, jis waja se val = 2 a rha baar baar cz 1 hota and 1+1 2 print hota bar baar ab page ne re render bhe hona yaha me use kru ga useRef hook ka, us se ho ga yeh ke re-render se koi frk nhi pare ga -> 
        // val = val + 1;
        // console.log("Val value is ", val);

        // Yeh bhe change krna is ke jaga neeche dekho kya likha .current cz useRef ke andar curent value ho ge
    // useState -> change -> re-render hota ui
    // useRef -> change -> re-render nhi hota ui
    // AB NEECHE DEKHO 

    let val = useRef(0);  
    let refbtn = useRef();

    function handleClick() {
        val.current = val.current + 1;
        console.log("Val value is ", val.current);
        setCount(c => c + 1);
    }

    function handleChangeColor() {
        refbtn.current.style.backgroundColor = "red"; // To yaha dekho me ne us button ke refbtn se is function me change kr dia, ab yeh button ka color change kr de ga, .current ka matlab yeh hai ke useRef hook ke andar jo value store hoti hai wo .current ke andar hoti hai, to yaha me ne refbtn.current se us button ka color change kr dia
    }

  return (
    <div>
      <h2>UseRef Hook Example</h2>
     
    <button ref = {refbtn} onClick={handleClick}>Click {count}</button> {/*ref = {refbtn} is se link ho rha -> let refbtn = useRef(); Yani ham ne kisi or button se kisi or button ko change kr dia */} 
    <button onClick={handleChangeColor}>Change Color of Button 1</button>
    </div>
  );
}

export default useRefHook;