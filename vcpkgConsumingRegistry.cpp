// vcpkgConsumingRegistry.cpp : Defines the entry point for the application.
//

#include "vcpkgConsumingRegistry.h"
#include "lely/can/buf.h"

using namespace std;

int main()
{
	can_buf myCanBuff;
	can_buf *ptrMyCanBuff = &myCanBuff;
	size_t size = 0;

	size = can_buf_reserve(ptrMyCanBuff, 3200);

	cout << "Import of lely-canopen successfull, can buffer of size " << size << " reserved\n" << endl;

	return 0;
}
