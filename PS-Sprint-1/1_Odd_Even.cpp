/* 
Question: 
1. **Determining Even/Odd Numbers**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming  


   **Description**: Write a program to check whether a number is even or odd.  
   **Example**:  
   Input: `number = 4`  
   Output: `Even`  
   Explanation: Since 4 is divisible  by 2, it is an even number.  
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "number"; // displaying message
    cin >> x; // taking input from user
    if(x%2==0){  // we know that even is  a number where we can easily divided by 2 
        cout << "Even" << endl;
    }
    else // if the input value is not even then surely it will  be a ODD number
        cout << "Odd" << endl;
    return 0;
}

