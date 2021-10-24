#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
system("tput setaf 2");
cout<<"\n\t\t\e[1m-----List the all images-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is <\e[1mdocker images\e[0m>:\n\n ";
system("tput setaf 7");
system("docker images");
endl(cout);

}
