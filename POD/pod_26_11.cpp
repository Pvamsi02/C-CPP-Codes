/*
Number inversions
Rahul is facing a unique problem, which he doesn't know how to solve. The problem asks him to build the smallest possible number by applying inversion on any digit of the number any number of times.
Inversion of a digit is defined as that digit being replaced by 9 minus that digit. Meaning that inversion of 9 will be 9 - 9 = 0 and inversion of 1 will be 9 - 1 = 8 and so on.

The final output should not have any leading zeroes.

Input Format:
The only line of the input contains an integer N

Output Format:
Print only one single integer on a line as described above.

Constraints:
1 <= N <= 10^18

Examples:
Input:
87
Output:
12

Explanation:

9-8 = 1

and 9 -7 = 2

if we see carefully, 12 is the smallest possible number we can get.
 

Example:
Input:
99
Output:
90

Explanation:

In this case, we do not replace the first 9 since it will lead to a leading zero.
*/
/*
#include<iostream>
using namespace std;
int main()
{
   long t,t1,t2,n,c=1,res=0;
    cin>>n;
    while(n!=0)
    {
        t=n%10;
        if(t==9)
        {
            if(n>=10)
            {
                if(t<5)
                t=c*t;
                
                else
                t=c*(9-t);
            
            }
            else
            {
                t=c*t;
            }
        }
        else
        {
            if(t<5)
                t=c*t;
            else
                t=c*(9-t);
            
        }
        res=res+t;
        c=c*10;
        n=n/10;
    }
    cout<<res;  
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
   long t,t1,t2,n,c=1,res=0;
    cin>>n;
    while(n!=0)
    {
        t=n%10;
        if(t<5)
        t=c*t;
        else
        {
            if(t==9)
                if(n>10)
                t=c*(9-t);
                else
                t=c*t;
                
            else
            t=c*(9-t);
        }
        
                
        res=res+t;
        c=c*10;
        n=n/10;
    }
    cout<<res;
    }
*/
/*
import java.util.*;
public class Main
{
public static void main(String args[])

{
    Scanner sc=new Scanner(System.in);
   long t,t1,t2,n,p=1,res=0;
    n=sc.nextLong();
    while(n!=0)
    {
        t=n%10;
        if(t==9&&n<10||t<5)
            t=p*t;
        else
            t=p*(9-t);
        res=res+t;
        p=p*10;
        n=n/10;
    }
    System.out.println(res);
}
}
*/
/*
p=1
res=0
n=int(input())
while(n!=0):
    t=n%10;
    if(t==9 and n<10 or t<5):
        t=p*t;
    else:
        t=p*(9-t);
    res=res+t;
    p=p*10;
    n=n//10;
print(res)
*/
#include<iostream>
using namespace std;
int main()
{
   long t,t1,t2,n,p=1,res=0;
    cin>>n;
    while(n!=0)
    {
        t=n%10;
        if(t==9&&n<10||t<5)
            t=p*t;
        else
            t=p*(9-t);
        res=res+t;
        p=p*10;
        n=n/10;
    }
    cout<<res;
}