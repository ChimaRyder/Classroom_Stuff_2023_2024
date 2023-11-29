var calHistory = [];
var memo = 0;


function inputNumber(a) {
    display = document.getElementById("textDisplay");

    if (display.value != "0")
     {
        display.value = display.value + a.toString();
     } else {
        display.value = a.toString();
     }
}

function clearInput() {
    display = document.getElementById("textDisplay");

    display.value = " ";
}

function addNums() {
    display = document.getElementById("textDisplay");
    calHistory.push(parseInt(display.value));
    display.value = "0";

    calHistory.push(1);
}

function subNums() {
    display = document.getElementById("textDisplay");
    calHistory.push(parseInt(display.value));
    display.value = "0";

    calHistory.push(2);
}

function mulNums() {
    display = document.getElementById("textDisplay");
    calHistory.push(parseInt(display.value));
    display.value = "0";

    calHistory.push(3);
}

function divNums() {
    display = document.getElementById("textDisplay");
    calHistory.push(parseInt(display.value));
    display.value = "0";

    calHistory.push(4);
}

function equalsAns() {
    display = document.getElementById("textDisplay");

    op = calHistory.pop();
    var res;

    switch(op) {
        case 1:
            res = calHistory.pop() + parseInt(display.value);
            display.value = res.toString();
            break;
        case 2:
            res = calHistory.pop() - parseInt(display.value);
            display.value = res.toString();
            break;
        case 3:
            res = calHistory.pop() * parseInt(display.value);
            display.value = res.toString();
            break;
        case 4:
            res = calHistory.pop() / parseInt(display.value);
            display.value = res.toString();
            break;
    }
}

function memoryRecall() {
    display = document.getElementById("textDisplay");
    
    if (memo == 0) {
        memo = parseInt(display.value);
    } else {
        display.value = memo.toString();
    }
}

function memoryClear() {
    if (memo != 0){
        memo = 0;
    } else {
        alert("Memory is already empty.");
    }
}

function green() {
    document.body.style.backgroundColor = "green";
}

function green() {
    calc = document.getElementById("calculator");

    calc.style.backgroundColor = "green";
}

function red() {
    calc = document.getElementById("calculator");

    calc.style.backgroundColor = "red";
}

function white() {
    calc = document.getElementById("calculator");

    calc.style.backgroundColor = "white";
}