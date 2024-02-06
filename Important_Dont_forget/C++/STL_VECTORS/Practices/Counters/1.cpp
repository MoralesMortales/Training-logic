#include <vector>
#include <iostream>
#include <string>

using namespace std;

string secret = "ouo";

void funct(){
    cout<<secret<<"\n";
}

int main(int argc, char const *argv[])
{
    cout<<"e "<<::secret;
    return 0;
}
