// Input:
// 2
// 10
// 50
// Output:
// 0 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45
function jumpingNumberUsingBFS(jump, n) {
    var q = [];
    var arr = []
    q.push(jump);
    while (q.length) {
        jump = q[0];
        q.shift();
        if (jump <= n) {
            arr.push(jump);
            let last_digit = jump % 10;
            if (last_digit == 0) {
                q.push((jump * 10) + last_digit + 1);
            } else if (last_digit == 9) {
                q.push((jump * 10) + last_digit - 1);
            } else {
                q.push((jump * 10) + last_digit - 1);
                q.push((jump * 10) + last_digit + 1);
            }
        }
    }
    return arr;
}

function findNumber(){
    // var n = window.promt("enter input")
    var arr = [0];
    for (let i = 1; (i <= 9 && i <= 50); i++) {
        arr = [...arr, ...jumpingNumberUsingBFS(i, 50)];
    }
    console.log(arr.sort(function(a, b){return a - b}));
}
findNumber();