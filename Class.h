#pragma once

using namespace System;
using namespace System::Collections;

ref class Class {
public:
	Class(void);
	ArrayList^ Oper(ArrayList^ a);
private:
	ArrayList^ data;
	ArrayList^ result;
};

