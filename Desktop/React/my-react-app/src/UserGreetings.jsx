// This is conditional rendering Conditional Rendering = kisi cheez ko dikhao ya na dikhao, condition ke hisaab se!
//Matlab: Agar koi condition true ho → component dikhega. Agar false ho → nahi dikhega.

// IF-ELSE (ternary)
// { isLoggedIn ? <p>Welcome, User!</p> : <p>Please log in.</p> }

// IF ELSE Function se
// function MyComponent() {
//   if (isLoading) {
//     return <p>Loading...</p>;
//   } else {
//     return <p>Data loaded!</p>;
//   }
// }


// // Yeh jo neche code likha us ko ese bhe likh sakte jese me yeh wala likh rha 

// import React from 'react';

// function UserGreetings(props) {

//   const welcomeMessage = 
//     <h2 className="welcome-message">
//       Welcome {props.username}
//     </h2>
  

//   const loginPrompt = 
//     <h2 className="login-prompt">
//       Please log in to continue
//     </h2>


//   return (
//     props.isLoggedIn ? welcomeMessage : loginPrompt
//   );
// }

// export default UserGreetings;





import PropTypes from 'prop-types'; // Achi practice ha kr lia kro debug me asaani hote


function UserGreetings (props) {
    if (props.isLoggedIn) {
        return (
            <h2 className="welcome-message">Welcome {props.username}</h2>
        );
    } else {
        return (
            <h2 className="login-prompt">Please log in to continue</h2>
        );
    }
}

UserGreetings.propTypes = {
    isLoggedIn: PropTypes.bool,
    username: PropTypes.string,
}

// React component ko jab props milte nahi (parent se ya jab user koi prop nahi bhejta) tab defaultProps se default value lag jati hai.

// Ye ek backup value hoti hai — takay app crash na ho aur koi sensible default value dikh jaye.

UserGreetings.defaultProps = {
  username: "Guest", // Guest a nhi rha pata nhi kya problem hai, jab waha username na likho app.jsx me to default ata welcome guest, lakin nhi a rha, abhi me wapis username likh rha
  isLoggedIn: false,
};
export default UserGreetings
