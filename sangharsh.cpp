#include<unistd.h>
#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main()
{
    string input;
    while(input!="exit")
    {
        char tmp[20];
        getcwd(tmp,20);
        time_t t=time(NULL);
        string currTime=ctime(&t);

        //currTime.pop_back();
        cout<<"\n[ "<<currTime.substr(0,16)<<" ] [ "<<tmp<<" ] sanghar-sh  >> ";
        getline(cin,input);

        system((const char*)input.c_str()); //convert to const*
    }
}
