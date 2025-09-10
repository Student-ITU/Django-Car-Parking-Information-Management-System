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
  const [input, setInput] = useState("");
  const [messages, setMessages] = useState([]);

  const predefinedAnswers = {
    "hello": "Hello! How can I help you today?",
    "hi": "Hi there! How are you?",
    "how are you": "I'm good, thank you! How about you?",
    "what is programming": "Programming is the process of writing instructions for computers.",
    "how to use an api": "API is a set of rules that allows different software to communicate.",
    "what is react": "React is a JavaScript library for building user interfaces.",
    "who created react": "React was created by Jordan Walke at Facebook.",
    "what is javascript": "JavaScript is a programming language used to make web pages interactive.",
    "bye": "Goodbye! Have a great day!",
    "thank you": "You're welcome! If you have more questions, ask anytime."
  };

  const handleSend = () => {
    if (!input.trim()) return; 

    const userMessage = { sender: "user", text: input };
    setMessages(prev => [...prev, userMessage]);
    const key = input.toLowerCase().trim();
    const replyText = predefinedAnswers[key] || "Sorry, I don't understand that.";
    const botMessage = { sender: "bot", text: replyText };
    setMessages(prev => [...prev, botMessage]);
    setInput("");
  };

  const handleKeyPress = (e) => {
    if (e.key === "Enter") {
      handleSend();
    }
  };

  return (
    <>
      <div className="App">
        <div className="sideBar">
          <div className="upperSide">
            <div className="upperSideTop">
              <img src={gptLogo} alt="logo" className="logo" />
              <span className="chatgpt">ChatGPT</span>
            </div>
            <button className="midBtn">
              <img src={addBtn} alt="newchat" className="addBtn" />
              <span>New Chat</span>
            </button>
            <div className="upperSideButton">
              <button className="query"><img src={msgIcon} alt="query" className="msgImg" />What is Programming?</button>
              <button className="query"><img src={msgIcon} alt="query" className="msgImg" />How to use an API?</button>
            </div>
          </div>

          <div className="lowerSide">
            <div className="listItems"><img src={home} alt="home" className="listItemsImg" />Home</div>
            <div className="listItems"><img src={saved} alt="saved" className="listItemsImg" />Saved</div>
            <div className="listItems"><img src={rocket} alt="rocket" className="listItemsImg" />Upgrade to Pro</div>
          </div>
        </div>

        <div className="main">
          <div className="firstdivofnavbar">
            <p className="firstpara">ChatGPT <span className="down-arrow">˅</span></p>
            <p className="secondpara">Saved memory full i</p>
          </div>

          <div className="chats">
            {messages.map((msg, index) => (
              <div key={index} className={msg.sender === "user" ? "chat1" : "chat2"}>
                <img
                  className={msg.sender === "user" ? "imguser" : "gptlogo"}
                  src={msg.sender === "user" ? userIcon : gptImgLogo}
                  alt=""
                />
                <p>{msg.text}</p>
              </div>
            ))}
          </div>

          <div className="chat-footer">
            <div className="input">
              <input
                className="inp"
                placeholder="Send a message"
                value={input}
                onChange={(e) => setInput(e.target.value)}
                onKeyDown={handleKeyPress}
              />
              <button className="send" onClick={handleSend}>
                <img src={sendBtn} alt="send" />
              </button>
            </div>
            <p className="oneline">
              ChatGPT may produce inaccurate information about people, places, or facts. ChatGPT August 20 Version.
            </p>
          </div>
        </div>
      </div>
    </>
  );
}

export default App;
