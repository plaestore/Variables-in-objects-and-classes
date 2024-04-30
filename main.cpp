#include <iostream>
#include <string>
using namespace std;

//Proper way to use variables in classes and Objects//

class DavidsClass{
    public:
        void setName(string x){
        name=x;
        }
        string getName(){
        return name;
        }

    private:
    string name;
};



int main(){

    DavidsClass DavidsObject;
    DavidsObject.setName("Sir David Anane!!");
    cout <<DavidsObject.getName();


return 0;
}
