
//###
/*
const nemo = ['nemo'];
const large = new Array(100000).fill('nemo');


// O(n) -> Linear Time
function findNemo(array) {
  for(let i = 0; i < array.length; i++) {
    if(array[i] === 'nemo') {
      console.log('Found Nemo!'); // O(1) time on this line 
    }
  }
}

findNemo(nemo);
*/
//####

const boxes = [0,1,2,3,4,5];

function logBoxes(boxes) {
  console.log(boxes[0]); // O(1)
  console.log(boxes[1]); // O(1)
}

logBoxes(boxes); // O(2)


//###
/*
* Big O Notation Calculation
* 1, Always consider worst case
* 2, Drop the constant
* 3, different terms for inputs
*     eg. loop through two different arrays(from inputs) 
          --> O(a+b), since two arrays may have different length, we have two different terms
* 4, Drop the non-dominant terms
      eg. if we have O(n^2+100n+90) --> O(n^2), since n^2 is the most dominant term 
*/