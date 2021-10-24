#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main()
{
cout<<" Commands:\n";
cout<<"\tdocker_pull\t:\tPull the images from registry\n";
cout<<"\tdocker_img\t:\tList the all Images\n";
cout<<"\tdocker_con\t:\tList the all running containers\n";
cout<<"\tdocker_run\t:\tRun the docker Image in a new Container\n";
cout<<"\tdocker_start\t:\tStart the docker container\n";
cout<<"\tdocker_attach\t:\tAttach the started docker container\n";
cout<<"\tdocker_stop\t:\tStop the docker container\n";
cout<<"\tdocker_cimg\t:\tCreate own docker image \n";
cout<<"\tdocker_crun\t:\tRun Created docker image \n";
cout<<"\tdocker_save\t:\tSave the created image to a tar archive\n";
cout<<"\tdocker_load\t:\tload the  image from  tar archive\n";
cout<<"\tdocker_rmc\t:\tremove the containers\n";
cout<<"\tdocker_rmi\t:\tremove the images\n";
cout<<"\tdocker_commit\t:\tcreate a new image from a container's changes\n";
cout<<"\tdocker_tag\t:\tChange the name of created image\n";
cout<<"\tdocker_upload\t:\tupload/push the created image on Docker Hub\n\n";



}
