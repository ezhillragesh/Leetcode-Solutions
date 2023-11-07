/**
 * @param {number[]} dist
 * @param {number[]} speed
 * @return {number}
 */
var eliminateMaximum = function(dist, speed) {
    let timeToReach=[];
    for(let i=0;i<dist.length;++i){
        timeToReach[i]=(dist[i]/speed[i]);
    }
    timeToReach.sort((a, b) => a - b); 
    var count=0;
    for(let i=0;i<dist.length;++i){
        if(timeToReach[i]<=i){
            break;
        }
        count++;
    }
    return count;
    
};