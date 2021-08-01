import moment from 'moment';
import React, { Component } from 'react'

class Date extends Component{
        constructor(props){
            super(props)
            this.state={
                getDate: moment().format('MMMM do YYYY')
            }
        }
    render () {
        const moment = require('moment')
        const getDate = moment().format('MMMM do YYYY')
        return (
            <div>
                <h1>Current Date: {getDate}</h1>
            </div>
        )
    }

    componentDidMount(){
        this.myInterval = setInterval(()=> {
            this.setState({
                getDate: this.state.getDate
            })
        },1000)
    }
}

export default Date
