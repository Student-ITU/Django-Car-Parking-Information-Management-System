import { useState } from 'react'
import './App.css'
import gptLogo from './assets/chatGpt.svg'
import addBtn from './assets/add-30.png'
import msgIcon from './assets/message.svg'
import home from './assets/home.svg'
import saved from './assets/bookmark.svg'
import rocket from './assets/rocket.svg'
import sendBtn from './assets/send.svg'
import userIcon from './assets/user.png'
import gptImgLogo from './assets/chatgptLogo.svg'


function App() {

  return (
    <>
     <div className="App">
      <div className="sideBar">
        <div className="upperSide">
          <div className="upperSideTop"><img src={gptLogo} alt="logo" className="logo"/><span className="chatgpt">ChatGPT</span></div>
          <button className="midBtn"><img src={addBtn} alt="newchat" className="addBtn"/><span>New Chat</span></button>
          <div className="upperSideButton">
            <button className="query"><img src={msgIcon} alt="query" className="msgImg" />What is Programming?</button>
            <button className="query"><img src={msgIcon} alt="query" className="msgImg"/>How to use an API?</button>
          </div>
        </div>

        <div className="lowerSide">
          <div className="listItems"><img src={home} alt="home" className="listItemsImg" />Home</div>
          <div className="listItems"><img src={saved} alt="saved" className="listItemsImg" />Saved</div>
          <div className="listItems"><img src={rocket} alt="rocket" className="listItemsImg" />Upgrade to Pro</div>
        </div>
      </div>
      <div className="main">
        <div className="chats">
          <div className="chat"><img src={userIcon} alt="" /></div>
          <div className="chat"><img src={gptImgLogo} alt="" /></div>
        </div>
        <div className="input">
          <input type="text" placeholder='Send a message '/><button className="send"><img src={sendBtn} alt="" /></button>
        </div>
      </div>
     </div>
    </>
  )
}

export default App
