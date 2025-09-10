import profilePic from './assets/JohnCena.png'
function Card () {
    return (
        <div className="card">
            {/* <img src="src/assets/JohnCena.png" alt="samplePic"/> */}
            <img className="imgg" src={profilePic} alt="samplePic"/>
            <h1 className="name" >Sameer Shahzad</h1>
            <p className="description" >I am an Ethical Hacker and Django Developer</p>
        </div>
    );
}

export default Card