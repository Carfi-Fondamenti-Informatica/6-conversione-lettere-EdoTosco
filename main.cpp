#include <iostream>
#include "CharaCheck.h"
using namespace std;

int main() {
    char lettera;

    cin>>lettera;

    char output = characheck(lettera);

    if(output=='7'){
        cout<<"errore"<<endl;
    }else{
        cout << output << endl;
    }

return 0;
}
