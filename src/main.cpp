
// ccv
// version 1.0
// Validates a credit card number

// Author: Shine Jayakumar
// Github: https://github.com/shine-jayakumar
// Repo: https://github.com/shine-jayakumar/ccvalidator.git


#include "include/funcs.h"


int main (int argc, char *argv[]){

    string cc{};

    if (argc > 1){

        cc = string(argv[1]);

        if ( valid_cc(cc) ){
            cout << cc << " [valid]\n";
        }
        else {
            cout << cc << " [invalid]\n";
        }
    }
    else {
        show_usage();
    }

    return 0;
}
