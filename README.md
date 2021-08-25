# Welcome to our Encryption & Decryption Project 
## We have defined 2 algorithms for our code
# First 1,
## we ask the end_user to input a **key** (part of our algorithm)
![Alt Text](https://github.com/ebrahembebo23/encryption-project/blob/main/E1.jpg)
### Then,
## we've created a simple menu to simplify the Project Running to the user and make him choose one of different options: 
1. *Encrypt*
2. *Decrypt*
3. *Change the Key*
4. *Exit* 
![Alt Text](https://github.com/ebrahembebo23/encryption-project/blob/main/E2.jpg)
## Our algorithm based on the **key** that entered by the user 
### so, let's talk about the key the we mentioned above:
### **Key** is variable that shift every letter in the string that has been input by the user by its value in 2 ways :
#### Forward when user choose Encrypt option
#### Backward when user choose Decrypt option
### also there is *change key* option to make user able to change it whenever he want
## Finall option to the user is to *Exit* the program
# The second algorithm
## we don't ask the end_user about the **key** but we just give a certain value to the **key** and it's equals to 3  
### Then,
## we've created a simple menu to simplify the Project Running to the user and make him choose one of different options: 
1. *Encrypt*
2. *Decrypt*
3. *Exit*
![Alt Text](https://github.com/ebrahembebo23/encryption-project/blob/main/E33.jpg)
 # third algorithm
 ## The program baised on three main functions 
### encryption_key()
#### Select two large prime numbers x and y then compute them (n = x * y) then calculate the euler t= (x − 1)(y − 1)  then choose an integer e that must be between 1 and euler and must be comprime with it finally we choose  d that d is the multiplicative inverse of e in mod ø (n)
, the key is (n,e)
### 2 encrypt()
#### For each character in the message we change it based on C=M^n( mod n )
### 3: decrypt()
#### For each character in the message we change it based on M = C ^ d ( mod n )the inverse of the encryption equation
