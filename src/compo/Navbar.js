import React from 'react'

export default function Navbar(props) {
    return (
        <div>
            <nav className={`navbar navbar-expand-lg navbar-${props.mode} bg-${props.mode}`}>
                <div className="container-fluid">
                    <a className="navbar-brand" href="/todo">Navbar</a>
                    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="/todonavbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                        <span className="navbar-toggler-icon"></span>
                    </button>
                    <div className="collapse navbar-collapse" id="navbarSupportedContent">
                        <ul className="navbar-nav me-auto mb-2 mb-lg-0">
                            <li className="nav-item">
                                <a className="nav-link active" aria-current="page" href="/todo">Home</a>
                            </li>
                            <li className="nav-item">
                                <a className="nav-link" href="/todo">Link</a>
                            </li>
                            <li className="nav-item dropdown">
                                <a className="nav-link dropdown-toggle" href="/todo" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                                    Dropdown
                                </a>
                                <ul className="dropdown-menu" aria-labelledby="navbarDropdown">
                                    <li><a className="dropdown-item" href="/todo">Action</a></li>
                                    <li><a className="dropdown-item" href="/todo">Another action</a></li>
                                    <li><hr className="dropdown-divider" /></li>
                                    <li><a className="dropdown-item" href="/todo">Something else here</a></li>
                                </ul>
                            </li>
                            <li className="nav-item">
                                <a className="nav-link disabled" href="/todo" tabIndex="-1" aria-disabled="true">Disabled</a>
                            </li>
                        </ul>
                        <div className="d-flex">
                            <div className="bg-dark rounded mx-1"   onClick={()=>{props.Theme('dark')}} style={{height:'20px',width:'20px',cursor:'pointer'}}></div>
                            <div className="bg-light rounded mx-1"   onClick={()=>{props.Theme('light')}} style={{height:'20px',width:'20px',cursor:'pointer'}}></div>
                            <div className="bg-primary rounded mx-1"   onClick={()=>{props.Theme('primary')}} style={{height:'20px',width:'20px',cursor:'pointer'}}></div>
                            <div className="bg-success rounded mx-1"   onClick={()=>{props.Theme('success')}} style={{height:'20px',width:'20px',cursor:'pointer'}}></div>
                            <div className="bg-warning rounded mx-1"   onClick={()=>{props.Theme('warning')}} style={{height:'20px',width:'20px',cursor:'pointer'}}></div>
                            <div className="bg-secondary rounded mx-1" onClick={()=>{props.Theme('secondary')}} style={{height:'20px',width:'20px',cursor:'pointer'}}></div>
                            <div className="bg-danger rounded mx-1"    onClick={()=>{props.Theme('danger')} } style={{height:'20px',width:'20px',cursor:'pointer'}}></div>
                        </div>
                        <form className="d-flex">
                            <input className="form-control me-2" type="search" placeholder="Search" aria-label="Search" />
                            <button className="btn btn-outline-success" type="submit">Search</button>
                        </form>
                    </div>
                </div>
            </nav>
        </div>
    )
}
