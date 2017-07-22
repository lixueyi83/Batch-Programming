
#include <iostream> 

using namespace std; 

int main(int argc, char* argv[]) 
{ 
	cout << "\n\nHello, C++ Programming Language!"<<endl;
	cout << "----------------------------" << endl; 
	cout << "filename = " << __FILE__ << endl;
	cout << "line = "<< __LINE__ << endl;
	cout << "time = "<< __TIME__ << " date = "<< __DATE__ << endl; 
	cout << "funcname = "<< __func__ << endl; 
	cout << "----------------------------" << endl; 
	cout << endl << endl;
	return 0; 
}
