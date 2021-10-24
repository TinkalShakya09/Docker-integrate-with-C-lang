#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string img1, img2, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Create a new image from a container's changes--------\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1m'docker commit <container_name> <new_image_name:verion'\e[0m \n ";
cout<<"For Example :- docker commit os1 myos1:v1 \n";
cout<<"But you can only tpye\e[1m container name\e[0m and\e[1m new image name with version\e[0m\n\n";
system("tput setaf 7");
cout<<"Enter the container name : ";
cin>>img1;
cout<<"Enter the new image name with verion : ";
cin>>img2;

cmd="docker commit ";
cmd1=cmd+img1+" "+img2;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
