import logo from './logo.svg';
import './App.css';
import { render } from '@testing-library/react';
import React, {Component} from 'react';
import Timer from './Timer';
import Date from './Date';
import HideText from './HideText';

class App extends Component{

  constructor(props) {
    super(props);
    this.state = {
      showTime: false,
    }
  }

  render(){
    return (
      <div className="App">
        {this.state.showTime ? <Timer /> : <Date />}
        {/* <Timer /> */}

        <button onClick={ () => this.setState({showTime: !this.state.showTime})}>
          Toggle
        </button>

        {/* <HideText/> */}
        <header className="App-header">
          {/* <img src={logo} className="App-logo" alt="logo" /> */}
          <p>
            This is the time
          </p>
        </header>
      </div>
    )
  }
}

export default App
