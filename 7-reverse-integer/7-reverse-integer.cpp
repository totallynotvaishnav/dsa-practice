class Solution {
public:
    int reverse(int x) {
         long sum=0;
        int rem;
        while(x){
            rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        
        if(sum>pow(2,31)-1 || sum<-pow(2,31)){
            return 0;
        }
        
        return sum;
    }
    
};