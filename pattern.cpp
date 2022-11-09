// pattern.cpp: define o ponto de entrada para o aplicativo.
//

#include "pattern.h"

using namespace std;

int main()
{
	B* b;

	b = static_cast<B*>(B::Init());

	delete b;
	
	cout << "Hello CMake." << endl;
	return 0;
}
