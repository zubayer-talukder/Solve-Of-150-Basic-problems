/* 2. **Checking for Prime Numbers**  
   **Difficulty**: Easy  '


   **Topics**: Basic Programming, Number Theory  


   **Description**: Write a program to determine if a number is prime.  

   **Example**:  
   Input: `number = 7`  
   Output: `Prime`  
   Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.   */
   #include<bits/stdc++.h>
   using namespace std;
   int main()
   {
       int x,flag=0;
       cout<< "number =";
       cin>>x;
       for(auto i=1;i<=sqrt(x);i++){
        if(x%i==0){
            
            break;
        }

       }
       if(flag==1)
       cout<<"Prime "<<endl;
      else  cout<<"NOT Prime "<<endl;
       return 0;
   }
   