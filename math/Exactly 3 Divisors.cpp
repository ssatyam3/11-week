/*
Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

Input:
N = 6
Output: 1
Explanation: The only number less than 6 with 
3 divisors is 4.

Input:
N = 10
Output: 2
Explanation: 4 and 9 have 3 divisors.

*/

// logic : 1. Every number is having 2 divisors - 1, N
 /*               2. We need to find number which is having 3 divisors 
                3. Every number which is square of prime number satisfies this condition.
                4. Because if a number is perfect square then it will have one common divisor. In case of 9: 3*3
                5. Hence we check for prime numbers till sqrt of N instead of looping through all numbers till N. 
 */


class Solution{
    public:
  
    // to check if a no is prime or not
    bool isPrime(int n){
        for(int i=2 ; i*i<=n ; i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
 
    int exactly3Divisors(int N)
    {
        //Your code here
        int cnt=0;
      // we check for all the prime numbers in 1 to sqrt(n) because we know the number with exactly three divisors are 4, 9, 25, 36 ,49 so we need to check till sqrt 
        for(int i=2 ; i*i<=N ; i++){
            if(isPrime(i)){
                cnt++;
            }
        }
        return cnt;
    }
};
