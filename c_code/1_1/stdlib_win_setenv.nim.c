/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
#include <errno.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NI16 tyArray__hRiwoQg80Y7aPFGOHwHBwQ[32768];
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, tyProc__3pVglHKolpBa6UoJifpHkA) (NCSTRING lpName, NCSTRING lpValue);
static N_INLINE(NIM_BOOL, eqeq__system_7778)(NCSTRING x, NCSTRING y);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
STRING_LITERAL(TM__UOYsq9cbb0VE8vr3Xt181HA_4, "kernel32", 8);
STRING_LITERAL(TM__UOYsq9cbb0VE8vr3Xt181HA_5, "kernel32", 8);
extern wchar_t** _wenviron;
static void* TM__UOYsq9cbb0VE8vr3Xt181HA_2;
tyProc__3pVglHKolpBa6UoJifpHkA Dl_1426063361_;
static N_INLINE(NIM_BOOL, eqeq__system_7778)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(int, setEnvImpl_stdZprivateZwin95setenv_20)(NCSTRING name, NCSTRING value, int overwrite) {
	int result;
	NCSTRING s;
{	result = (int)0;
	{
		NIM_BOOL T3_;
		NCSTRING T5_;
		NIM_BOOL T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = (overwrite == ((NI32) 0));
		if (!(T3_)) goto LA4_;
		T5_ = (NCSTRING)0;
		T5_ = getenv(name);
		T6_ = (NIM_BOOL)0;
		T6_ = eqeq__system_7778(T5_, ((NCSTRING) NIM_NIL));
		T3_ = !(T6_);
		LA4_: ;
		if (!T3_) goto LA7_;
		result = ((int) 0);
		goto BeforeRet_;
	}
	LA7_: ;
	{
		int e;
		if (!!(((NU8)(value[((NI) 0)]) == (NU8)(0)))) goto LA11_;
		e = _putenv_s(name, value);
		{
			if (!!((e == ((NI32) 0)))) goto LA15_;
			errno = e;
			result = ((int) -1);
			goto BeforeRet_;
		}
		LA15_: ;
		result = ((int) 0);
		goto BeforeRet_;
	}
	LA11_: ;
	{
		int T19_;
		T19_ = (int)0;
		T19_ = _putenv_s(name, "  ");
		if (!!((T19_ == ((NI32) 0)))) goto LA20_;
		errno = ((int) 22);
		result = ((int) -1);
		goto BeforeRet_;
	}
	LA20_: ;
	s = getenv(name);
	s[((NI) 0)] = 0;
	s[((NI) 1)] = 61;
	{
		tyArray__hRiwoQg80Y7aPFGOHwHBwQ buf;
		NI16* buf2;
		size_t len;
		NI16* T31_;
		NI16* T32_;
		if (!!((_wenviron == ((wchar_t**) NIM_NIL)))) goto LA24_;
		nimZeroMem((void*)buf, sizeof(tyArray__hRiwoQg80Y7aPFGOHwHBwQ));
		buf2 = ((NI16*) ((&buf[(((NI) 0))- 0])));
		len = (size_t)0;
		{
			int T28_;
			T28_ = (int)0;
			T28_ = mbstowcs_s((&len), buf2, ((size_t) 32768), name, ((size_t) 32767));
			if (!!((T28_ == ((NI32) 0)))) goto LA29_;
			errno = ((int) 22);
			result = ((int) -1);
			goto BeforeRet_;
		}
		LA29_: ;
		T31_ = (NI16*)0;
		T31_ = _wgetenv(buf2);
		T31_[((NI) 0)] = ((NI16) 0);
		T32_ = (NI16*)0;
		T32_ = _wgetenv(buf2);
		T32_[((NI) 1)] = ((NI16) 61);
	}
	LA24_: ;
	{
		NI32 T35_;
		T35_ = (NI32)0;
		T35_ = Dl_1426063361_(name, value);
		if (!(T35_ == ((NI32) 0))) goto LA36_;
		errno = ((int) 22);
		result = ((int) -1);
		goto BeforeRet_;
	}
	LA36_: ;
	result = ((int) 0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_win_setenvDatInit000)(void) {
if (!((TM__UOYsq9cbb0VE8vr3Xt181HA_2 = nimLoadLibrary(((NimStringDesc*) &TM__UOYsq9cbb0VE8vr3Xt181HA_4)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__UOYsq9cbb0VE8vr3Xt181HA_5));
	Dl_1426063361_ = (tyProc__3pVglHKolpBa6UoJifpHkA) nimGetProcAddr(TM__UOYsq9cbb0VE8vr3Xt181HA_2, "SetEnvironmentVariableA");
}

