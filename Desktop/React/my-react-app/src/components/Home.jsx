import React from 'react'
import { useNavigate } from 'react-router-dom'

const Home = () => {

  const navigate = useNavigate();
  function handleClick() {
    navigate('/about');
  }
  return (
    <div>
        Home
        <br />
        <button onClick={handleClick}>Move to About Page</button> {/* useNavigation use krne lage ke button ko dabaye to chale jaye /about pr, to home page pe button show ho g ause click krein ge and move to about page ho jaye ga */}
        
    </div>
   
  )
}

export default Home