#include<stdio.h>

	// make encryption function
void  Encrypt(int key)
{
	char message[100], ch;
    int i;
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

    
}


	// make decreption function
void  Decrypt(int key)
{
	char message[100], ch;
    int i, check;
    	// ask user to enter message to dycrept
    printf("Enter a message to decrypt: ");
    scanf("%s", message);
    	// ask user to enter the key
    printf("Enter the key: ");
    scanf("%d", &check);
    while (check != key)
    {
    	printf("Error! this is a wrong key. try again...\nEnter the key:");
    	scanf("%d", &check);
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


void Encrypt_and_Decrypt(int key)

{
	Encrypt(key);
	Decrypt(key);
}

// making menu function to make uset choise from it
int menu(int key) 
{
	
	int choice;
	printf("Please choice one of the menu.\n1- Encrypt\n2- Decrypt\n3- Chang the key\n4- Exit \nEnter your choise: ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
		    Encrypt(key);
			menu(key);
		case 2:		
			Decrypt(key);
			menu(key);
		case 3:
		    printf("Enter the new key:");
			scanf("%d", &key);	
			menu(key);			
		case 4:
		    return 0;
	}

}

 
int main()
{
	//calling function
    int key;
    printf("Enter the key for your Ecryption process");
    scanf("%d", &key);	
	menu(key);
	
    return 0;
}
