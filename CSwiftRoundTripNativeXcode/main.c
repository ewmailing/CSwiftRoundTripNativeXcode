//
//  main.c
//  CSwiftRoundTripNativeXcode
//
//  Created by Eric Wing on 6/25/15.
//  Copyright (c) 2015 PlayControl Software LLC. All rights reserved.
//

#include "ObjCTrampoline.h"

int main(int argc, char* argv[])
{
	int retval = ObjCTrampoline_EnterMain(argc, argv);
	
	return retval;
	
}
