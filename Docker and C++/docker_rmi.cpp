#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string img, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Remove the docker image ----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1m'docker rmi <image_name:version/image_id>'\e[0m \n\n ";
system("tput setaf 7");
system("docker images");
cout<<"\n\n which One type the  image name/id : ";
cin>>img;

cmd="docker rmi ";
cmd1=cmd+img;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
