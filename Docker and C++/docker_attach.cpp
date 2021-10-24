#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string img, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Attach the started/running docker container----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1m'docker attach <container_name>'\e[0m\n\n";
system("tput setaf 7");
cout<<"Enter the container name : ";
cin>>img;

cmd="docker attach ";
cmd1=cmd+img;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
