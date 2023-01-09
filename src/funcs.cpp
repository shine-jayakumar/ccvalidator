
#include "include/funcs.h"


bool valid_cc(string cc){

    // validates the checksum for the credit card

    int digit {0};
    int sum_digits {0};

    for (int i=0; i < (int)cc.size(); i++){

        // convert char to int
        digit = (int)(cc[i]) - '0';
        
        if (i%2 != 0) {
            
            digit *= 2;
            // reduce num > 10 to single digit
            digit = (digit > 9) ? ( 1 + (digit-10)): digit;
            sum_digits += digit;
        }
        else {
            sum_digits += digit;
        }
    }
    if ( sum_digits % 10 == 0 )
        return true;

    return false;
}

void show_usage(){

    // shows usage
    
    const string usage = 
    "\nccv v.1.0\n"
    "Validates a credit/debit card number\n\n"
    "Usage:  ccv <cc number>\n\n"
    "Example:  ccv 5555555555554444\n\n";

    cout << usage;
}