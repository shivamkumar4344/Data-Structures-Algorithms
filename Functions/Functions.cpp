//Functions
#include<bits/stdc++.h>

using namespace std;


//void printLine();
//int main(){
//	
//	printLine();
//	return 0;
//}
//
//void printLine()
//{
//	for(int i=0;i<10;i++){
//		cout<<"Hello , World !"<<endl;
//	}
//}


//function call stack

//void printA()
//{
//	cout<<"inside A"<<endl;
//	cout<<"going Back to A"<<endl;
//}
//
//int main()
//{
//	cout<<"Inside main"<<endl;
//	printA();
//	cout<<"Returned to A"<<endl;
//	return 0;
//}

//void add3(int a ,int b,int c){
//	cout<<"Sum is: "<<a+b+c<<endl;
//}
//
//int main(){
//	add3(2,7,1);
//}


//int add3(int a ,int b,int c){
//	return a+b+c;
//}
//
//int main(){
//	cout<<add3(2,7,1);
//}



//max of 3 num
//int main()
//{
//	int a,b,c;
//	cin>>a>>b>>c;
//	if(a>b && a>c)
//	{
//		cout<<"A is max"<<endl;
//	}
//	else if(b>a && b>c)
//	{
//		cout<<"B is max"<<endl;
//	}
//	else{
//		cout<<"C is max";
//	}
//	return 0;
//}

//counting from 1 to N
//int main()
//{
//	int n;
//	cin>>n;
//	int count = 0;
//	for(int i=0;i<n;i++)
//	{
//		count++;
//	}
//	cout<<count<<endl;
//	return 0;
//}

//check prime number or not
//int main()
//{
//	int n;
//	cin>>n;
//	
//	bool is_prime = true;
//	if(n==0 || n==1)
//	{
//		is_prime = false;
//	}
//	
//	for(int i=2;i<=n/2;i++)
//	{
//		if(n%i == 0)
//		{
//			is_prime = false;
//			break;
//		}
//	}
//	
//	if(is_prime)
//	{
//		cout<<n<<" is a prime number"<<endl;
//	}
//	else{
//		cout<<n<<" is not a prime number"<<endl;
//	}
//	return 0;
//}

//sum of all even numbers

//int main(){
//	int n = 5;
//	int sum = 0;
//	for(int i=1;i<=n;i++)
//	{
//		if(i%2==0)
//		{
//			sum+=i;
//		}
//	}
//	cout<<"Sum of even numbers is : "<<sum<<endl;
//	return 0;
//}

//print prime numbers

//bool isPrime(int n)
//{
//	if(n==0 || n==1)
//	{
//		return false;
//	}
//	
//	for(int i=2;i<=n/2;i++)
//	{
//		if(n%i==0){
//			return false;
//		}
//	}
//	return true;
//}
//
//
//int main()
//{
//	int n = 100;
//	
//	for(int i=1;i<=n;i++)
//	{
//		if(isPrime(i))
//		{
//			cout<<i<<" ";
//		}
//	}
//	
//	return 0;
//	
//}


//print all digits of an integer

//int main()
//{
//	int n = 123;
//	while(n != 0)
//	{
//		int last = n%10;
//		cout<<last<<" ";
//		n = n/10;
//	}
//	return 0;
//}


//print decimal representation of a binary number
//int main()
//{
//	int i = 0;
//	int n = 101000;
//	int ogN = n;
//	int sum = 0;
//	while(n!=0)
//	{
//		int last = n%10;
//		int power = last * pow(2,i);
//		sum+=power;
//		n/=10;
//		i++;
//	}
//	cout<<"Decimal representation of a binary number "<<ogN<<" is: "<<sum<<endl;
//	return 0;
//}

//converting decimal to binary
//int main()
//{
//	string str = "";
//	int n;
//	cin>>n;
//	while(n !=0 ){
//		int rem = n%2;
//		string s = to_string(rem);
//		str = s+str;
//		n=n/2;
//	}
//	
//	cout<<stoi(str)<<endl;
//	return 0;
//}




