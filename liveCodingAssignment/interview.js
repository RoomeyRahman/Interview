const a = [1,2,2,4,3,7,8,5,3];

const removeDuplicate = a.filter(function(v) {
    return a.indexOf(v) == a.lastIndexOf(v);
});
  

console.log("answer 1: ", removeDuplicate)


function sortString(str) {
    return Array.from(str) 
        .sort() 
        .join(''); 
}

function anagramsArray(arr) {
    const resultObj = arr.reduce((accumulator, str) => {
        const sortedStr = sortString(str);
        if(!accumulator[sortedStr]) {
            accumulator[sortedStr] = [];
        }
        accumulator[sortedStr].push(str);
        return accumulator;
    }, {});

    return Object.keys(resultObj).map(key => resultObj[key]);
}

const arr = ["add", "dad", "god", "dog", "vile", "live", "evil", "odd"];
const anagramGrp = anagramsArray(arr);

console.log("answer 2 : ", anagramGrp);