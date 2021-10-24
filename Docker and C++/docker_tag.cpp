#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string img1, img2, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Change the name of container--------\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1m'docker tag <image_name> <docker_user_id/image_name:verion'\e[0m \n ";
cout<<"For Example :- dcoker tag os1 tinkalshakya/os1:v1 \n";
cout<<"But you can only tpye\e[1m images name\e[0m and\e[1m new name with docker user id and version\e[0m\n\n";
system("tput setaf 7");
cout<<"Enter the image name : ";
cin>>img1;
cout<<"Enter the new name with docker id : ";
cin>>img2;

cmd="docker tag ";
cmd1=cmd+img1+" "+img2;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
