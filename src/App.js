import Navbar from './compo/Navbar';
import React,{useState} from 'react'
import './App.css';
import ExForm from './compo/ExForm';

function App() {

  const [mode, setmode] = useState('light')

  const removeBody=()=>{
    document.body.classList.remove('bg-success');
    document.body.classList.remove('bg-warning');
    document.body.classList.remove('bg-light');
    document.body.classList.remove('bg-dark');
    document.body.classList.remove('bg-danger');
    document.body.classList.remove('bg-secondary');
  }
  const Theme=(cls)=>{
    removeBody();
    console.log(cls);
    document.body.classList.add('bg-'+cls)
    if (mode === 'light') {
      setmode('dark');
      document.body.style.backgroundColor = "#41444a";
      //{color: props.mode === 'light' ? 'black' : 'white' }
      //showAlert("Dark Mode has been enabled!!", "success");
    }
    else {
      setmode('light');
      document.body.style.backgroundColor = "white";
      //showAlert("Light Mode has been  enabled!!", "success");
   
  }
}
  return (
    <>
    <Navbar mode={mode} Theme={Theme}/>
    <div className="container my-3">
    <ExForm mode={mode} Theme={Theme}/>
    </div>
    </>
  );
}

export default App;
