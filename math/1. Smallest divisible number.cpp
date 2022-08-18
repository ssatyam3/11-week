/* Given a number N, find an integer denoting the smallest number evenly divisible by each number from 1 to n.
Input:
N = 3
Output: 6
Explanation: 6 is the smallest number 
divisible by 1,2,3.
*/

    long long getSmallestDivNum(long long n){
        // code here
        long long ans=1;
        for(long long i=2 ; i<=n ; i++){
            ans = (ans*i)/__gcd(ans,i);
        }
        return ans;
    }
