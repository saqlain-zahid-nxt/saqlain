function append_to_prompt(param) {
    if (param == '=') {
        let prompt = document.getElementById("prompt").value
        let result = eval(prompt)

        let h_result =  prompt + " = " + result + "<hr>"
        document.getElementById("history").innerHTML += h_result
        document.getElementById("prompt").value = result
        return
    }

    if (param == 'C') {
        let prompt = document.getElementById("prompt").value
        
        let result = ""

        for (let i = 0; i < prompt.length-1; i++) {
            result += prompt[i];
        }
        

        document.getElementById("prompt").value = result
        return
    }
    
    if (param == 'AC') {
        document.getElementById("prompt").value = ""

        return
    }

    document.getElementById("prompt").value += param
}