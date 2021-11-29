#include "CharaCheck.h"

char characheck(char input){

    bool flagcharacheck;
    char convert;

    if(((65<=int(input)) && (int(input)<=90)) || ((97<=int(input)) && (int(input)<=122))){
        flagcharacheck = true;

    }else{
        flagcharacheck = false;
    }

    if(flagcharacheck==true && ((65<=int(input)) && (int(input)<=90))){
        convert = int(input) + 32;

    }else if(flagcharacheck==true && ((97<=int(input)) && (int(input)<=122))){
        convert = int(input) - 32;

    }else{
        convert = '7';
    }
    return convert;
}
