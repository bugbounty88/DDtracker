#include <iostream>
using namespace std;

/*
Hamza, [Github:hamza-kernel, Gmail:hamza2002gaming@gmail.com]
*/

int main(int args, char *argv[]){
		system("#!/bin/bash");
		system("/bin/clear");
		system("/bin/echo 'Hello in my Devices Detector Program'");
		system("/bin/echo 'Your Device Is: '");
		system("/bin/uname -a");
		system("sleep 0.3");
		system("/bin/echo 'Program Starting...'");
		system("/bin/sleep 2");
		system("/bin/echo 'Program Is Now Ready'");
		system("/bin/sleep 0.7");
		system("/bin/sudo /bin/watch -n 1 'dmesg --kernel -H | grep Product: '");
		system("/bin/echo 'Thanks For Testing My Program, Hamza (Github: hamza-kernel)'");
	return 0;
}
