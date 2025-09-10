// import React, {useState, useEffect} from 'react';

// function UseEffectHook() {

//     const [count, setCount] = useState(0);
//     const [decrease, setDecrease] = useState(0);
    
//     function addCount () {
//         setCount(c => c + 1);
//     }

//     function decreaseCount () {
//         setDecrease(c => c - 1);
//     }

//     // useEffect(() => {
//     //     document.title = `Count: ${count}`;
//     // }); // Ab har bare re-render ke baad yeh chale ga, like jab count change hoga ya koi aur state change hogi to yeh chale ga, title change kr de ga.

//     useEffect(() => {
//         document.title = `Count: ${count}`;
//     },[]); // Ab bs aik baar he ho ga jo ke 0 rhy ga useSate by default 0 the that is why

//     useEffect(() => {
//         document.title = `Count: ${decrease}`;
//     },[decrease]); // Ab bs decreaseCount() par he chale ga addCount par nhi

//   return (
//     <div>
//       <h1>UseEffect Hook Example</h1>
//         <button onClick={() => {addCount()}}>Add {count}</button>
//         <button onClick={() => {decreaseCount ()}}>Decrease {decrease}</button>
//     </div>
//   );
// }

// export default UseEffectHook;   


// useEffect (() => {} ) -> Runs after every re-render or update u can say
// useEffect ( () => {}, [] ) -> Runs only on mount
// useEffect ( () => {}, [value] ) -> Runs on mount -> When on "value" changes, value can be anything counter, car etc 

// USE of useEffect hook is to perform side effects in functional components, like fetching data, directly interacting with the DOM, or setting up subscriptions. It replaces lifecycle methods like componentDidMount, componentDidUpdate, and componentWillUnmount in class components.





// ONE LITTLE PROJECT







// USE EFFECT CODE BY BABBAR

import React, { useState, useEffect, use } from "react";

function UseEffectHook() {

  // first -> Side-effect function
  // second -> clean-up function
  // third -> comma separated dep list

  

  const [count, setCount] = useState(0);

  function handleClick () {
    setCount (c => c + 1);
  }

  // Variation 1 -> Runs on every render

  // useEffect(() => {
  //   alert("Component mounted"); // This will run on every render, including the initial mount
  //   // Ab jab count pe click kru ga to har bare render hone se pehle run hota count baad me 1 ho ga alert pehle ai ga
     
  //   // return () => {
  //   //   console.log("Component unmounted");
  //   // };
  // });


  // Variation 2 -> Runs on only first render

    // useEffect(() => {
    //   alert("I will run on first render"); // This will run on every render, including the initial mount
    //   // Ab jab count pe click kru ga to har bare render hone se pehle run hota count baad me 1 ho ga alert pehle ai ga
      
    //   // return () => {
    //   //   console.log("Component unmounted");
    //   // };
    // }, []);

    // Variation 3 -> Runs on first render and when count changes

    // useEffect(() => {
    //   alert("I will run on first render"); // This will run on every render, including the initial mount
    //   // Ab jab count pe click kru ga to har bare render hone se pehle run hota count baad me 1 ho ga alert pehle ai ga
      
    //   // return () => {
    //   //   console.log("Component unmounted");
    //   // };
    // }, [count]);





    // Variation 5 -> Clean up function



      useEffect(() => {
        alert("Component mounted"); // This will run on every render, including the initial mount
        // Ab jab count pe click kru ga to har bare render hone se pehle run hota count baad me 1 ho ga alert pehle ai ga
        
        return () => { // Jab component unmount ho ga to yeh chale ga, like jab page close krunga ya component ko remove krunga, yah jab new component render hoga
          // This is the clean-up function
          // Pehle ai ga component unmount ka alert jab click kru ga, cz agar 2 hai count and me ne click kia unmount ho ga pechle value remove and then component mount ho ga, so value 4 ho jaye ge
          alert("Component unmounted");
        };
      }, [count]);



  return (
    <div>
      Hello Hi how are you and my name is sameer and ok i am good and glad to see u 
      <br />

      <h2>Count is {count}</h2>
      <button onClick={handleClick}>Click me</button>
     
    </div>
  )
}


export default UseEffectHook;


// Variation 4 -> Multiple dependancies


// import React, { useState, useEffect } from "react";

// function MyComponent() {
//   const [width, setWidth] = useState(window.innerWidth);
//   const [height, setHeight] = useState(window.innerHeight);

//   useEffect(() => {
//     function handleResize() {
//       setWidth(window.innerWidth);
//       setHeight(window.innerHeight);
//     }

//     window.addEventListener("resize", handleResize);
//     console.log("EVENT LISTENER ADDED");

//     return () => {
//       window.removeEventListener("resize", handleResize);
//       console.log("EVENT LISTENER REMOVED");
//     };
//   }, []);


//   useEffect(() => {
//     document.title = `Size: ${width} x ${height}`;
//     console.log(`Document title updated: Size: ${width} x ${height}`);
//   }, [width, height]);

//   return (
//     <div>
//       <p>Window Width: {width}px</p>
//       <p>Window Height: {height}px</p>
//     </div>
//   );
// }

// export default MyComponent;

