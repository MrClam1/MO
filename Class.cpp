#include "pch.h"
#include "Class.h"
#include <math.h>

using namespace System;
using namespace System::Collections;

Class::Class(void) {
	result = gcnew ArrayList();
	data = gcnew ArrayList();
}

ArrayList^ Class::Oper(ArrayList^ a) {
	data = a;
	int x = Convert::ToSingle(data[3]->ToString())*10;
	int C = Convert::ToSingle(data[2]->ToString());
	float k = Convert::ToSingle(data[5]->ToString());
	float n = Convert::ToSingle(data[4]->ToString());
	int h = Convert::ToSingle(data[6]->ToString());
	int sum = Convert::ToSingle(data[7]->ToString());
	int q = Convert::ToSingle(data[8]->ToString());
	ArrayList^ Cn = gcnew ArrayList();
	for (int i = 1; i <= x; i++) {
		if ((C - (k * i * n)) > 0) {
			Cn->Add(C - (k * i * n));
		}
		else {
			Cn->Add(0);
		}
	}
	ArrayList^ Y = gcnew ArrayList();
	for (int i = 1; i <= x; i++) {
		Y->Add(ceil(C/(k*i)));
	}
	ArrayList^ Nl = gcnew ArrayList();
	for (int i = 1; i <= x; i++) {
		if (Convert::ToSingle(Cn[i - 1]->ToString()) == 0) {
			Nl->Add(0);
		}
		else {
			Nl->Add(ceil(Convert::ToSingle(Y[i - 1]->ToString()) - n));
		}
	}
	for (int i = 1; i <= x; i++) {
		if (Convert::ToSingle(Cn[i - 1]->ToString()) == 0) {
			result->Add(sum - i*q* Convert::ToSingle(Y[i - 1]->ToString()));
		}
		else {
			result->Add(sum - i * q * Convert::ToInt32(Y[i - 1]->ToString()) - h * (Convert::ToInt32(Nl[i - 1] ->ToString())-n));
		}
	}
	for (int i = 1; i <= x; i++) {
		result->Add(Convert::ToInt32(Y[i - 1]->ToString()));
		result->Add(Convert::ToInt32(Nl[i - 1]->ToString()));
	}
	return result;
}