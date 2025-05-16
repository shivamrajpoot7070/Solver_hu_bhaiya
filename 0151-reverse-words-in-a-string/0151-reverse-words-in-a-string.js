/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(str) {
    let j=str.length-1;
    
    let temp="";
    let ans="";
    
    while(j>=-1){
        
        if(str[j]==' ' || j==-1 ){

        
        if(temp.length>=1){
            for(let i=temp.length-1;i>=0;i--){
                ans+=temp[i];
            }
            ans+=' ';
            temp="";
        }
        }
        else{
            temp+=str[j];
        }
        
        j--;
    }
    
    return ans.trim();
};