var s='aabaacddaahag';
var a = new Array(26).fill(0);

s.split('').forEach((e, i) => {
  a[s.charCodeAt(i)-97]++;
})

a.forEach((d, i) => {
  if(d){
    console.log(String.fromCharCode(i+97) +" is " + d);
  }
})
