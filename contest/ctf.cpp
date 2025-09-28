// C++ program to implement XOR - Encryption 
#include<bits/stdc++.h> 

// The same function is used to encrypt and 
// decrypt 
void encryptDecrypt(char inpString[]) 
{ 
	// Define XOR key 
	// Any character value will work 
	char xorKey = 'P'; 

	// calculate length of input string 
	int len = strlen(inpString); 

	// perform XOR operation of key 
	// with every character in string 
	for (int i = 0; i < len; i++) 
	{ 
		inpString[i] = inpString[i] ^ xorKey; 
		printf("%c",inpString[i]); 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	char sampleString[] ="wWmeW3eohIPWGuHOVnYtCMNL"; 

	// Encrypt the string 
	// printf("Encrypted String: "); 
	// encryptDecrypt(sampleString); 
	// printf("\n"); 

	// Decrypt the string 
	printf("Decrypted String: "); 
	encryptDecrypt(sampleString); 

	return 0; 
} 
