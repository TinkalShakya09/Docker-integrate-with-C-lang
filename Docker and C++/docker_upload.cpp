#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
int key;
system("tput setaf 2");
cout<<"\t---------To Upload the image in docker hub-----------\n";
cout<<"if your image for uploding :\e[1m <docker_user_id/image_name:version>\e[0m format \n";
system("tput setaf 4");
cout<<" then:\n\t Press 1 : for uploading\n otherwish: \n\t Press 2 : To change the format\n";
system("tput setaf 7");
cout<<"Press the Key [1/2] : ";
cin>>key;
endl(cout);
system("docker images");
if(key==1){
system("tput setaf 2");
cout<<"\n\t\e[1m-----Upload the images of your docker hub Account-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is <\e[1mdocker push <docker_user_id/image_name:version>\e[0m>:\n\n ";
system("tput setaf 7");
string con;
cout<<"Which One to upload type here with version : ";
cin>>con;
string cmd="docker push ";
string cmd1= cmd+con;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);
endl(cout);
}
		
else if(key==2){
string img1, img2, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Change the name of image--------\e[0m\n";
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
}
