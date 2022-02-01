#include <iostream>
#include <dirent.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	DIR *dir; //declare a pointer to hold the names of the folders
	char *name; // this will be used to hold the name entered by the user through the terminal
	struct dirent *entry; // this will be used for scanning the directory
	bool test = false; // this will be used to check to see if the folder was found and deleted successfully.
	
	for(int i = 1; i < argc; i++) // traverse through the users' inputs
	{
		strcpy(name, argv[i]); //copies the users' input to a string named name
		dir = opendir(name); //opens a directory
		if (dir == NULL) cout << argv[i] << " don't exist\n"; // checks to see if the directory exist
		else
		{
			cout << "Removed successfully\n";
			rmdir(name); // deletes directory.
		}
	}
}