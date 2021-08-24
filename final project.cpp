#include<stdio.h>
	// Declaration and initialization global variable
int  key = 3;
	// make encryption function
int  Encrypt()
{
	char message[100], ch;
    int i, key = 3;
    	// ask user to enter message to encrypt
    printf("Enter a message to encrypt: ");
    scanf("%s", message);
   		// make for loop to make encryption
    for(i = 0; message[i] != '\0'; ++i){
    ch = message[i];
    if(ch >= 'a' && ch <= 'z'){
    ch = ch + key;
    if(ch > 'z'){
    ch = ch - 'z' + 'a' - 1;
    }
    message[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
    ch = ch + key;
    if(ch > 'Z'){
    ch = ch - 'Z' + 'A' - 1;
    }
    message[i] = ch;
    }
    }
    	// print encrypted message
    printf("Encrypted message: %s\n", message);
    return key;
    
}


	// make decreption function
void  Decrypt()
{
	char message[100], ch;
    int i, yy;
    	// ask user to enter message to dycrept
    printf("Enter a message to decrypt: ");
    scanf("%s", message);
    	// ask user to enter the key
    printf("Enter key: ");
    scanf("%d", &yy);
    while (yy != key)
    {
    	if (yy == key)
    	{
    		break;
		}
    	printf("Error! thats wrong kay try again...\nEnter key:");
    	scanf("%d", &yy);
	}
    for(i = 0; message[i] != '\0'; ++i){
    ch = message[i];
    if(ch >= 'a' && ch <= 'z'){
    ch = ch - key;
    if(ch > 'z'){
    ch = ch - 'z' + 'a' - 1;
    }
    message[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
    ch = ch - key;
    if(ch > 'Z'){
    ch = ch - 'Z' + 'A' - 1;
    }
    message[i] = ch;
    }
    }
    printf("Encrypted message: %s\n", message);
    
    
}
// if we need to make encryption and decreption use this function

/*
void Encrypt and Decrypt()

{
	int key = Encrypt();
    printf("The message to decrypt: %s\n ", message);
    for(i = 0; message[i] != '\0'; ++i){
    ch = message[i];
    if(ch >= 'a' && ch <= 'z'){
    ch = ch - key;
    if(ch > 'z'){
    ch = ch - 'z' + 'a' - 1;
    }
    message[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
    ch = ch - key;
    if(ch > 'Z'){
    ch = ch - 'Z' + 'A' - 1;
    }
    message[i] = ch;
    }
    }
    printf("Encrypted message: %s\n", message);
    
}*/

// making menu function to make uset choise from it
int menu(int key) 
{
	
	int choice;
	printf("Please choice one of the menu.\n1- Encrypt\n2- Decrypt\n3- Exit \nEnter your choise: ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			key = Encrypt();
			menu(key);
		case 2:
			
			Decrypt();
			menu(key);
			
		case 3:
		    return 0;
	}

}

 
int main()
{
	//calling function
    int key;
	menu(key);
	
    return 0;
}
