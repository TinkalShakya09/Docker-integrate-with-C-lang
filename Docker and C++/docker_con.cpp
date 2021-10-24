#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
int key;
cout<<" To show the all containers :\n\t Press 1 : Running Containers\n\t Press 2 : Running and Stoped both\n";
cout<<"Press the Key [1/2] : ";
cin>>key;

if(key==1){
system("tput setaf 2");
cout<<"\n\t\e[1m-----List the all running containers-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1mdocker ps\e[0m\n\n ";
system("tput setaf 7");
system("docker ps");
endl(cout);
}

else if(key==2){
system("tput setaf 2");
cout<<"\n\t\e[1m-----List the all running and stopped containers-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1mdocker ps -a\e[0m\n\n ";
system("tput setaf 7");
system("docker ps -a");
endl(cout);
}
}
