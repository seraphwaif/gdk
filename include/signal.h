/*********************************************************************************
*Copyright,2018-2028,Longyou
*FileName: signal.h
*Module: gray
*Author: DaXiang
*Version: 1.0
*Date: 2020
*Description:
*Others:
*Function List:
*History:
**********************************************************************************/

#ifndef __GRAY_SDK_SIGNAL_H__
#define __GRAY_SDK_SIGNAL_H__



#ifndef _NATIVE_
//#define raise ___raise___
#endif


int ___raise___( int signal );

void( *signal( int signal, void( * func ) (int) ) ) (int);


#endif