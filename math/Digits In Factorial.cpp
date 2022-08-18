/*
Given an integer N. Find the number of digits that appear in its factorial. 
Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
*/

    int digitsInFactorial(int n)
    {
        // code here
        if(n<0){
            return 0;
        }
        if(n<=1){
            return 1;
        }
        double cnt = 0;
        for(int i=2; i<=n ; i++){
            cnt += log10(i);
        }
        
        return cnt+1;
    }
