// input output structures


// conditional structures

// repetational structures



function add() {
    x = prompt("Please Enter Your Name")
    document.getElementById("demo").innerHTML = x
}


function get_full_name() {
    first_name = document.getElementById("first_name").value
    last_name = document.getElementById("last_name").value

    document.getElementById("demo").innerHTML = first_name + " " + last_name
}

function calc() {
    val_1 = document.getElementById("val_1").value
    val_2 = document.getElementById("val_2").value

    document.getElementById("sum").innerHTML = parseFloat(val_1) + parseFloat(val_2)
    document.getElementById("sub").innerHTML = val_1 - val_2
    document.getElementById("mul").innerHTML = val_1 * val_2
    document.getElementById("div").innerHTML = val_1 / val_2
}