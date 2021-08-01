import moment from 'moment';
import React, { Component } from 'react'

class Timer extends Component{
        constructor(props){
            super(props)
            this.state={
                getTime: moment().format('h:mm A')
            }
        }
    render () {
        const moment = require('moment')
        const getTime = moment().format('h:mm A')
        return (
            <div>
                <h1>Current Time: {getTime}</h1>
            </div>
        )
    }

    componentDidMount(){
        this.myInterval = setInterval(()=> {
            this.setState({
                getTime: this.state.getTime
            })
        },1000)
    }
}

export default Timer
