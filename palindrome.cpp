#include<iostream>
#include<cstring>

using namespace std;

#define MAX_STR 25

void getAnswerFromUser(string prompt,char input[],int inputLen);
void getCanonicalForm(char b[]);
bool checkPalindrome(char n[]);
 
int main(int argc, char *argv[]){

	bool p;
	char buffer[MAX_STR];
	string s = "Please input string";
	getAnswerFromUser(s,buffer,25);
	p = checkPalindrome(buffer);
	if(p)
	cout<<"String is a palindrome";
	else 
	cout<<"String is not a palindrome";
	return 0;
}

void getAnswerFromUser(string prompt, char input[],int inputLen) {

	cout<<prompt<<endl;
	cin.getline(input,inputLen);
}

void getCanonicalForm(char b[]){
	int l = strlen(b);
	int j=0;
	int count=0;
	for(int i=0; i<= l-1; i++){
		if(b[i] == '.'|| b[i]== ',' || b[i]== ' '){
			count++;
			for(j=i;j<l;j++)
			b[j] =b[j+1];
		}
	}
	cout<<l<<endl;

	l = l-count;
	cout<<l<<endl;;
	b[l] = '\0';
	cout<<b<<endl;
	/*for(int i=0; i<=l ; i++)
	{
		if(b[i] == ',' || b[i] == '.' || b[i] == ' '){
		//	continue;
			count++;
		}
		else {
		b[j] = b[i];
		j++;
		}
		while(i== l){
			b[l-count] = '\0';
			i++;
		}

	}*/
	
}

bool checkPalindrome(char b[]){
	getCanonicalForm(b);
	cout<<b<<endl;
	int n = strlen(b);
	bool p;
	for(int i=0; i <= n/2 ; i++)
	{	
		if(b[i] == b[n-i-1])
		 p = true;
		else{
	//	cout<<b[i];
		 p = false;
		break;
		}
	}
	return p;
}
		




