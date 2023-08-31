// import logo from './logo.svg';
// import './App.css';

// function App() {
//   return (
//     <><heading>Hello World</heading><div>
//       <h1>Welcome to my app</h1>
//       <MyButton />
//     </div></>
//   );
// }

// export default App;

function MyButton() {
  return (
    <button>I'm a button</button>
  )
}

function AboutPage() {
  return (
    <>
      <h1>About</h1>
      <p>Hello there.<br />How do you do?</p>
    </>
  );
}

export default function MyApp() {
  return (
      <div>
        <h1>Welcome to My App</h1>
        <MyButton/>
      </div>
  );
}