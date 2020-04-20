﻿#ifndef _STRING_UTILS_H
#define _STRING_UTILS_H

#include "uart.h"

/**********************************************************************
 * 函数名称： simple_strtoul
 * 功能描述： 字符串转换为无符号长整型数(long)
 * 输入参数： 
 *	cp -- 转换的字符串
 *	endptr -- 第一个不能转换的字符的指针
 *	base -- 字符串 str 所采用的进制，范围2 至36，或0
 * 输出参数： 无
 * 返 回 值： 回转换后的无符号长整数，如果没有执行有效的转换，则返回一个零值
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/

unsigned long simple_strtoul(const char *cp,char **endp,unsigned int base);

/**********************************************************************
 * 函数名称： simple_strtol
 * 功能描述： 字符串转换为长整型数(long)
 * 输入参数： 
 *	cp -- 转换的字符串
 *	endptr -- 第一个不能转换的字符的指针
 *	base -- 字符串 str 所采用的进制，范围2 至36，或0
 * 输出参数： 无
 * 返 回 值： 回转换后的长整数，如果没有执行有效的转换，则返回一个零值
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/

long simple_strtol(const char *cp,char **endp,unsigned int base);

/**********************************************************************
 * 函数名称： gets
 * 功能描述： 将串口输入的字符转换为字符串
 * 输入参数： 
 *	s[] -- 字符数组指针，字符缓冲区
 * 输出参数： 无
 * 返 回 值： 字符串指针
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/

char *gets(char s[]);
/**********************************************************************
 * 函数名称： get_int
 * 功能描述： 将从串口输入的字符转换为长整型数(long)
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 转换后的长整型数
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/

int get_int(void);
/**********************************************************************
 * 函数名称： get_uint
 * 功能描述： 将从串口输入的字符转换为无符号长整型数(unsigned long)
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 转换后的无符号长整型数
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2020/02/16	     V1.0	  zh(angenao)	      创建
 ***********************************************************************/

unsigned int get_uint(void);


#endif /* _STRING_UTILS_H */

