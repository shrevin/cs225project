import React, { Component } from 'react'
import moment from 'moment';

class HideText extends Component{
        constructor(props){
            super(props)
            this.state={
                getDate: false,
            }
    }

    ToggleButton(){
        this.setState((currentState)=> ({
            textDisplay: moment().format('MMMM do YYYY'),
        }));
    }

    render(){
        const moment = require('moment')
        const getDate = moment().format('MMMM do YYYY')
        return(
            <div>
                <button> onClick={ () => this.ToggleButton()}>
                Toggle
                </button>
                {!this.state.textDisplay && this.props.text}
            </div>
        )
    }
    componentDidMount(){
        this.myInterval = setInterval(()=> {
            this.setState({
                getDate: this.state.getTime
            })
        },1000)
    }
}
export default HideText