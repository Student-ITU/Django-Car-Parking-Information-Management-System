import React, { createContext, useContext, useState } from 'react';

import Header from './Header.jsx'
import Footer from './Footer.jsx'
import Food from './Food.jsx'
import Card from './Card.jsx'
import Button from './Button/Button.jsx'
import Student from './Student.jsx'
import UserGreetings from './UserGreetings.jsx'
import List from './List.jsx'
import ClickEvents from './ClickEvents.jsx'
// import ClickEvents from './ClickEvents.jsx'
// 1st name jo likh rhy yeh component function ka name hai jis name se wo banayaa, and jo 2nd link jo hai wo file ka name hai, jo file ka name likha 
import UseEffectHook from './UseEffectHook.jsx'

import ProfilePicture from './ProfilePicture.jsx'
import MyComponent from './MyComponent.jsx'
import Counter from './Counter.jsx'
import OnChangeEventHandlerReactUseHooks from './OnChangeEventHandlerReactUseHooks.jsx'
import ColorPicker from './ColorPicker.jsx'
import UpdateObjects from './UpdateObjects.jsx'
import UpdateArraysInState from './UpdateArraysInState.jsx'
import UpdateArrayOfObjectsInState from './UpdateArrayOfObjectsInState.jsx'
import UseContextHook1 from './UseContextHook1.jsx'
import UseRefHook from './UseRefHook.jsx';
import UseRefStopWatch from './UseRefStopWatch.jsx';



//  Step 1 -> Create context
export const MyContext = React.createContext();
export const MyTheme = React.createContext(); // no 2

// Step 2 -> Wrap inside a provider ab sab provider ban gaye 1 2 3 4 in me s ekisi ko bhe consumer banaya ja sakta


// React Routes -> Yeh ham abhi routes create kr rhy
import Home from "./components/Home";
import About from "./components/About";
import Dashboard from "./components/Dashboard";
import Navbar from "./components/Navbar";
import {createBrowserRouter, RouterProvider} from "react-router-dom";
import MockTest from './components/MockTest.jsx';
import ParameterComponents from './components/ParameterComponents.jsx';
import Courses from './components/Courses.jsx';
import Report from './components/Report.jsx';
import NotFound from './components/NotFound.jsx';
// -> Yeh ham abhi routes create kr rhy, or neeche app ko dein ge return me 
// Yeh sab ho rha a tag se agar kr rhy tab agar link tag se krna to us ke lie neeche wala dekhna
// const router = createBrowserRouter (
//   [
//     {
//       path: "/", // So is wale path par
//       element: <Home/> // Yeh wala element load krna 
//     },
//    {
//       path: "/about", // So is wale path par
//       element: <About/> // Yeh wala element load krna 
//     },
//     {
//       path: "/dashboard", // So is wale path par
//       element: <Dashboard/> // Yeh wala element load krna 
//     },
//   ]
// );

// const router1 = createBrowserRouter (
//   [
//     {
//       path: "/", // So is wale path par
//       element: <div>
//         <Navbar/>
//         <Home/>
        
//       </div> // Yeh wala element load krna 
//     },
//    {
//       path: "/about", // So is wale path par
//       element:  <div>
//         <About/>
//         <Navbar/>
//       </div> // Yeh wala element load krna 
//     },
//     {
//       path: "/dashboard", // So is wale path par
//       element:  <div>
//         <Dashboard/>
//         <Navbar/>
//       </div> // Yeh wala element load krna 
//     },
//     {
//       path: "/student/:id", // So is wale path par
//       element:  <div>
//         <Navbar/>
//         <ParameterComponents/>
//       </div> // Yeh wala element load krna 
//     },
//   ]
// );


// Nested Routes like in /dashboard there is result, /dashboard/result/ like this me abhi sirf dashboard me yeh kaam kr rha, nested route jab bana rhy to jis path me bana rhy like dashboard me to us file ke andar yani dashboard ke file ke andar outlet ko import krna and component likh dena 
// const router1 = createBrowserRouter (
//   [
//     {
//       path: "/", // So is wale path par
//       element: <div>
//         <Navbar/>
//         <Home/>
        
//       </div> // Yeh wala element load krna 
//     },
//    {
//       path: "/about", // So is wale path par
//       element:  <div>
//         <About/>
//         <Navbar/>
//       </div> // Yeh wala element load krna 
//     },
//     {
//       path: "/dashboard", // So is wale path par
//       element:  <div>
//         <Dashboard/>
//         <Navbar/>
//       </div>,
//       children: [ // In ke peeche / yeh nhi lagana path me
//         {
//           path: "courses", 
//           element: <Courses/> 
//         },
//         {
//           path: "mock-tests", 
//           element: <MockTest/> 
//         },
//         {
//           path: "report", 
//           element: <Report/> 
//         },
//       ]
//     },
//     {
//       path: "/student/:id", // So is wale path par
//       element:  <div>
//         <Navbar/>
//         <ParameterComponents/>
//       </div> // Yeh wala element load krna 
//     },
//   ]
// );

// Unexpected Application Error!
// 404 Not Found
// 💿 Hey developer 👋

// You can provide a way better UX than this when your app throws errors by providing your own ErrorBoundary or errorElement prop on your route. Acha agar ham kuch galat url de dete to esa kuch ata is ke lie hamein kya krna wo dekho 

const router1 = createBrowserRouter (
  [
    {
      path: "/", // So is wale path par
      element: <div>
        <Navbar/>
        <Home/>
        
      </div> // Yeh wala element load krna 
    },
   {
      path: "/about", // So is wale path par
      element:  <div>
        <About/>
        <Navbar/>
      </div> // Yeh wala element load krna 
    },
    {
      path: "/dashboard", // So is wale path par
      element:  <div>
        <Dashboard/>
        <Navbar/>
      </div>,
      children: [ // In ke peeche / yeh nhi lagana path me
        {
          path: "courses", 
          element: <Courses/> 
        },
        {
          path: "mock-tests", 
          element: <MockTest/> 
        },
        {
          path: "report", 
          element: <Report/> 
        },
      ]
    },
    {
      path: "/student/:id", // So is wale path par
      element:  <div>
        <Navbar/>
        <ParameterComponents/>
      </div> // Yeh wala element load krna 
    },
    {
      path: "*", // So is wale path ke waja se kuch bhe agar ham ne url me galat path dia to yeh chale ga is me 
      element:  <div>
        <NotFound/>
      </div> // Yeh wala element load krna 
    },
  ]
);

function App() {

  // return (
  //   <>
  //   <Header/>  
  //   <Footer/> 
  //   {/* Ab issue yeh hai ke return to sirf aik he statement ko return krne deta we all know, so yaha ham fragment me band kr dein ge ese */}
  //   {/* <Header></Header>  or we can also write like this */}
  //   <Food/>
  //   <Card/>
  //   {/* <Card/>
  //   <Card/> so i can make as many as i want*/}
  //   <Button/>

  //   <Student name="Sameer Shahzad" description="Ethical Hacker" isStudent={true} age={20}/>
  //   <Student name="Ali Khalid" description="Software Developer" isStudent={true} age={21}/>

  //   <UserGreetings isLoggedIn={true} username="sameer"/>

  //   <List /> {/* Is ke baad jo likh rha wo props se kr rhay, like ham app.jsx se bhej rhy */}
  //   </>
  // );

  const fruits = [
      {id: 1, name: "apple", calories: 95},
      {id: 2, name: "orange", calories: 45},
      {id: 3, name: "banana", calories: 105},
      {id: 4, name: "coconut", calories: 159},
      {id: 5, name: "pineapple", calories: 37}
    ];

    const vegetables = [
      {id: 1, name: "Potatoes", calories: 98},
      {id: 2, name: "Corn", calories: 43},
      {id: 3, name: "carrots", calories: 10},
      {id: 4, name: "Cucumber", calories: 153},
      {id: 5, name: "Onion", calories: 32}
    ];

    const [user, setuser] = useState({name: "Sameer"}); // Yeh value de rha usecontext ko
    const [theme, setTheme] = useState("light"); //Yeh me aik or kar rha practice ke lie to number means ke pehle yeh kia then no 2 ese > no 1

    return (<>

    <Header/> 
    <Footer/> 
    {/* Ab issue yeh hai ke return to sirf aik he statement ko return krne deta we all know, so yaha ham fragment me band kr dein ge ese */}
    {/* <Header></Header>  or we can also write like this */} 
    <Food/>
    <Card/>
    {/* <Card/>
    //   <Card/> so i can make as many as i want*/}
    <Button/>

    <Student name="Sameer Shahzad" description="Ethical Hacker" isStudent={true} age={20}/>
    <Student name="Ali Khalid" description="Software Developer" isStudent={true} age={21}/>

    <UserGreetings isLoggedIn={true} username="sameer"/>

    {/* <List /> Is ke baad jo likh rha wo props se kr rhay, like ham app.jsx se bhej rhy */}
    {fruits.length > 0 ? <List items={fruits} category="Fruits"/> : null}

    {vegetables.length > 0 ? <List items={vegetables} category="Vegetables"/> : null}

    <ClickEvents/>
    <ProfilePicture/>
    <MyComponent/>
    <Counter/>

    <OnChangeEventHandlerReactUseHooks/>
    <ColorPicker/>
    <UpdateObjects/>
    <UpdateArraysInState/>
    <UpdateArrayOfObjectsInState/>
    <UseEffectHook/>
    {/* Wo jo return statement likhte clear krne ke lie useeffect me us ka kaam tab hota ke agar me app.jsx se componenet mita du, like hata du to wo chale ga, na ke tab jab render new value hoye to wo pechle value ko del kr rha, wo pura component <UseEffectHook/> agr is pure ko remove kr du tab chale ga, to component unmount ho gya and return chal jaye ga */}

    {/* <MyContext.Provider value={user}>
      <UseContextHook1/>  */}
      {/* Provider me likh dia matlab is time usecontexthook 1 2 3 4 sab provider me he hain cz usecontexthook 1 ke andar 2 ha 2 me 3 and 3 me 4, to yeh sab provider me hain, ab in me se jin ko chaye value un ko consumer bana sakte, baki sab se uper yeh line likhne import React, { createContext, useContext } from 'react'; and neeche jaha sab ko import kr rhy waha yeh export const MyContext = React.createContext();*/} 
  {/* </MyContext.Provider> */}


    {/* no 3  and step 4 me child c yah 3 wale file me krne laga, cz 2 me kr chuka*/}
  {/* <MyTheme.Provider value={theme}>
      <UseContextHook1/> 
  </MyTheme.Provider> */}



  <MyContext.Provider value={user}>
  <MyTheme.Provider value={{ theme, setTheme }} >
  <div class="container" style={{ backgroundColor: theme === 'light' ? 'pink' : 'red', color: theme === 'light' ? 'black' : 'white' }}>
    <UseContextHook1 />
  </div>
</MyTheme.Provider>

  </MyContext.Provider>


  {/*  UseRef samjhne lage */}

  <UseRefHook/>

  <br />
  <br />
  <div className="div0">
    <div className="div1"><UseRefStopWatch/></div>
    </div>
  
    <div>
      <RouterProvider router={router1}/>
    </div>


  </>);
}
export default App


// export {UseContextHook1} // Export bhe krna 
// Cant use multiple returns
