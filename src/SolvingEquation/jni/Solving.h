/*
 * Solving.h
 *
 *  Created on: 12.02.2014
 *      Author: a_melnik
 */

#ifndef SOLVING_H_
#define SOLVING_H_

#include <def.h>
#include <jni.h>

const int LEN = 100;
char  MyStr[LEN];
double a;
double b;
double c;

extern "C" {
	JNIEXPORT jstring Java_test_example_solvingequation_SolvingEquation_Solving(JNIEnv * env, jobject obj, jdouble a, jdouble b, jdouble c);
}


#endif /* SOLVING_H_ */
