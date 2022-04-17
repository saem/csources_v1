/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <math.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
static N_INLINE(NI64, pluspercent__system_712)(NI64 x, NI64 y);
static N_INLINE(NI64, starpercent__system_752)(NI64 x, NI64 y);
static N_INLINE(NF, toBiggestFloat_system_1705)(NI64 i);
static N_INLINE(NF, abs_pureZmath_150)(NF x);
static N_INLINE(NI64, minuspercent__system_732)(NI64 x, NI64 y);
static N_INLINE(NI64, pluspercent__system_712)(NI64 x, NI64 y) {
	NI64 result;
	result = (NI64)0;
	result = ((NI64) ((NU64)((NU64)(((NU64) (x))) + (NU64)(((NU64) (y))))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barplusbar__saturate_1)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = pluspercent__system_712(a, b);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = (a < IL64(0));
		if (T9_) goto LA10_;
		T9_ = (b < IL64(0));
		LA10_: ;
		if (!T9_) goto LA11_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA11_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI64, starpercent__system_752)(NI64 x, NI64 y) {
	NI64 result;
	result = (NI64)0;
	result = ((NI64) ((NU64)((NU64)(((NU64) (x))) * (NU64)(((NU64) (y))))));
	return result;
}
static N_INLINE(NF, toBiggestFloat_system_1705)(NI64 i) {
	NF result;
	result = (NF)0;
	result = ((NF) (i));
	return result;
}
static N_INLINE(NF, abs_pureZmath_150)(NF x) {
	NF result;
	result = (NF)0;
	result = fabs(x);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barstarbar__saturate_52)(NI64 a, NI64 b) {
	NI64 result;
	NF resAsFloat;
	NF floatProd;
	NF T1_;
{	result = (NI64)0;
	resAsFloat = (NF)0;
	floatProd = (NF)0;
	result = starpercent__system_752(a, b);
	floatProd = toBiggestFloat_system_1705(a);
	T1_ = (NF)0;
	T1_ = toBiggestFloat_system_1705(b);
	floatProd = ((NF)(floatProd) * (NF)(T1_));
	resAsFloat = toBiggestFloat_system_1705(result);
	{
		if (!(resAsFloat == floatProd)) goto LA4_;
		goto BeforeRet_;
	}
	LA4_: ;
	{
		NF T8_;
		NF T9_;
		T8_ = (NF)0;
		T8_ = abs_pureZmath_150(((NF)(resAsFloat) - (NF)(floatProd)));
		T9_ = (NF)0;
		T9_ = abs_pureZmath_150(floatProd);
		if (!(((NF)(32.0) * (NF)(T8_)) <= T9_)) goto LA10_;
		goto BeforeRet_;
	}
	LA10_: ;
	{
		if (!(0.0 <= floatProd)) goto LA14_;
		result = IL64(9223372036854775807);
	}
	goto LA12_;
	LA14_: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA12_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI64, minuspercent__system_732)(NI64 x, NI64 y) {
	NI64 result;
	result = (NI64)0;
	result = ((NI64) ((NU64)((NU64)(((NU64) (x))) - (NU64)(((NU64) (y))))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barminusbar__saturate_13)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = minuspercent__system_732(a, b);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		if (!(IL64(0) < b)) goto LA9_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA9_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
	return result;
}
