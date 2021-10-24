import React from 'react'

export default function ExForm(props) {
    return (
        <div className="container" >
            <form>
                <div className="mb-3">
                    <label htmlFor="exampleInputEmail1" className="form-label" style={{ color: props.mode === 'light' ? 'black' : 'white' }}>Email address</label>
                    <input type="email" className="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" />
                    <div id="emailHelp" className="form-text">We'll never share your email with anyone else.</div>
                </div>
                <div className="mb-3 col-4">
                    <label htmlFor="inputPassword5" className="form-label" style={{ color: props.mode === 'light' ? 'black' : 'white' }}>Password</label>
                    <input type="password" id="inputPassword5" className="form-control" aria-describedby="passwordHelpBlock"/>
                    <div id="passwordHelpBlock" className ="form-text" >
                    Must be 8-20 characters long.
                    </div>
                </div>
                <div className="mb-3 form-check" style={{ color: props.mode === 'light' ? 'black' : 'white' }}>
                    <input type="checkbox" className="form-check-input" id="exampleCheck1" />
                    <label className="form-check-label" htmlFor="exampleCheck1">Check me out</label>
                </div>
                <button type="submit" className="btn btn-primary">Submit</button>
            </form>
        </div>
    )
}
