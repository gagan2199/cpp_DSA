#include <iostream>
    using namespace std;   
    
    int main() {
        int num, originalNum, remainder, result = 0;
        cout << "Enter a three-digit integer: ";
        cin >> num;
        originalNum = num;
    
        while (originalNum != 0) {
            // remainder contains the last digit
            remainder = originalNum % 10;
            
            result += remainder * remainder * remainder;
            
            // removing last digit from the orignal number to get desired value
            originalNum /= 10;
        }
    
        if (result == num)
            cout << num << " is an Armstrong number. ";
        else
            cout << num << " is not an Armstrong number. "<<endl;
    
        return 0;
    }


/* #include <iostream>
    using namespace std;   
    
    int main() {
        int num, originalNum, remainder, result = 0;
        cout << "Enter a three-digit integer: ";
        cin >> num;
        originalNum = num;
    
        while (originalNum != 0) {
            // remainder contains the last digit
            remainder = originalNum % 10;
            
            result += remainder * remainder * remainder;
            
            // removing last digit from the orignal number to get desired value
            originalNum /= 10;
        }
    
        if (result == num)
            cout << num << " is an Armstrong number. ";
        else
            cout << num << " is not an Armstrong number. "<<endl;
    
        return 0;
    } */
