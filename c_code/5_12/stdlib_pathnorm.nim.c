/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg {
NI i;
NI prev;
NIM_BOOL notFirst;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext_pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next_pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash_pureZpathnorm_63)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot_pureZpathnorm_59)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_system_7735)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot_pureZpathnorm_55)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath_pureZpathnorm_71)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);
STRING_LITERAL(TM__DfU0iuayCGwHDN1Exp9cbKg_2, ".", 1);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext_pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (it.i < (x ? x->Sup.len : 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next_pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	(*it).prev = (*it).i;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it).notFirst);
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		(*it).i += ((NI) 1);
	}
	goto LA1_;
	LA5_: ;
	{
		{
			while (1) {
				NIM_BOOL T10_;
				T10_ = (NIM_BOOL)0;
				T10_ = ((*it).i < (x ? x->Sup.len : 0));
				if (!(T10_)) goto LA11_;
				T10_ = !((((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47))));
				LA11_: ;
				if (!T10_) goto LA9;
				(*it).i += ((NI) 1);
			} LA9: ;
		}
	}
	LA1_: ;
	{
		NI colontmp_;
		NI colontmp__2;
		if (!((*it).prev < (*it).i)) goto LA14_;
		colontmp_ = (*it).prev;
		colontmp__2 = (NI)((*it).i - ((NI) 1));
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	goto LA12_;
	LA14_: ;
	{
		NIM_BOOL T17_;
		T17_ = (NIM_BOOL)0;
		T17_ = hasNext_pureZpathnorm_6((*it), x);
		if (!T17_) goto LA18_;
		result = next_pureZpathnorm_10(it, x);
	}
	goto LA12_;
	LA18_: ;
	LA12_: ;
	{
		while (1) {
			NIM_BOOL T22_;
			T22_ = (NIM_BOOL)0;
			T22_ = ((*it).i < (x ? x->Sup.len : 0));
			if (!(T22_)) goto LA23_;
			T22_ = (((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
			LA23_: ;
			if (!T22_) goto LA21;
			(*it).i += ((NI) 1);
		} LA21: ;
	}
	(*it).notFirst = NIM_TRUE;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash_pureZpathnorm_63)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = (((NU8)(x->data[bounds.Field0])) == ((NU8)(47)) || ((NU8)(x->data[bounds.Field0])) == ((NU8)(47)));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot_pureZpathnorm_59)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (bounds.Field1 == (NI)(bounds.Field0 + ((NI) 1)));
	if (!(T2_)) goto LA3_;
	T2_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	T1_ = ((NU8)(x->data[(NI)(bounds.Field0 + ((NI) 1))]) == (NU8)(46));
	LA4_: ;
	result = T1_;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem_system_1727(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot_pureZpathnorm_55)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath_pureZpathnorm_71)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep) {
	tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it;
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg));
	it.notFirst = (((NI) 0) < (NI)((NI32)((*state)) >> (NU32)(((NI) 1))));
	{
		if (!it.notFirst) goto LA3_;
		{
			while (1) {
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = (it.i < (x ? x->Sup.len : 0));
				if (!(T7_)) goto LA8_;
				T7_ = (((NU8)(x->data[it.i])) == ((NU8)(47)) || ((NU8)(x->data[it.i])) == ((NU8)(47)));
				LA8_: ;
				if (!T7_) goto LA6;
				it.i += ((NI) 1);
			} LA6: ;
		}
	}
	LA3_: ;
	{
		while (1) {
			NIM_BOOL T11_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext_pureZpathnorm_6(it, x);
			if (!T11_) goto LA10;
			b = next_pureZpathnorm_10((&it), x);
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = ((NI)((NI32)((*state)) >> (NU32)(((NI) 1))) == ((NI) 0));
				if (!(T14_)) goto LA15_;
				T14_ = isSlash_pureZpathnorm_63(x, b);
				LA15_: ;
				if (!T14_) goto LA16_;
				{
					NIM_BOOL T20_;
					T20_ = (NIM_BOOL)0;
					T20_ = (((*result) ? (*result)->Sup.len : 0) == ((NI) 0));
					if (T20_) goto LA21_;
					T20_ = !((((NU8)((*result)->data[(NI)(((*result) ? (*result)->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)((*result)->data[(NI)(((*result) ? (*result)->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47))));
					LA21_: ;
					if (!T20_) goto LA22_;
					unsureAsgnRef((void**) (&(*result)), addChar((*result), dirSep));
				}
				LA22_: ;
				(*state) = (NI)((*state) | ((NI) 1));
			}
			goto LA12_;
			LA16_: ;
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = isDotDot_pureZpathnorm_59(x, b);
				if (!T25_) goto LA26_;
				{
					NI d;
					if (!(((NI) 1) <= (NI)((NI32)((*state)) >> (NU32)(((NI) 1))))) goto LA30_;
					d = ((*result) ? (*result)->Sup.len : 0);
					{
						while (1) {
							NIM_BOOL T34_;
							T34_ = (NIM_BOOL)0;
							T34_ = ((NI)((*state) & ((NI) 1)) < (NI)(d - ((NI) 1)));
							if (!(T34_)) goto LA35_;
							T34_ = !((((NU8)((*result)->data[(NI)(d - ((NI) 1))])) == ((NU8)(47)) || ((NU8)((*result)->data[(NI)(d - ((NI) 1))])) == ((NU8)(47))));
							LA35_: ;
							if (!T34_) goto LA33;
							d -= ((NI) 1);
						} LA33: ;
					}
					{
						if (!(((NI) 0) < d)) goto LA38_;
						unsureAsgnRef((void**) (&(*result)), setLengthStr((*result), ((NI) ((NI)(d - ((NI) 1))))));
						(*state) -= ((NI) 2);
					}
					LA38_: ;
				}
				goto LA28_;
				LA30_: ;
				{
					NimStringDesc* T47_;
					{
						NIM_BOOL T43_;
						T43_ = (NIM_BOOL)0;
						T43_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
						if (!(T43_)) goto LA44_;
						T43_ = !((((NU8)((*result)->data[(NI)(((*result) ? (*result)->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)((*result)->data[(NI)(((*result) ? (*result)->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47))));
						LA44_: ;
						if (!T43_) goto LA45_;
						unsureAsgnRef((void**) (&(*result)), addChar((*result), dirSep));
					}
					LA45_: ;
					T47_ = (NimStringDesc*)0;
					T47_ = substr_system_7735(x, b.Field0, b.Field1);
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T47_ ? T47_->Sup.len : 0) + 0));
appendString((*result), T47_);
				}
				LA28_: ;
			}
			goto LA12_;
			LA26_: ;
			{
				NIM_BOOL T49_;
				T49_ = (NIM_BOOL)0;
				T49_ = isDot_pureZpathnorm_55(x, b);
				if (!T49_) goto LA50_;
			}
			goto LA12_;
			LA50_: ;
			{
				NimStringDesc* T61_;
				if (!(b.Field0 <= b.Field1)) goto LA53_;
				{
					NIM_BOOL T57_;
					T57_ = (NIM_BOOL)0;
					T57_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
					if (!(T57_)) goto LA58_;
					T57_ = !((((NU8)((*result)->data[(NI)(((*result) ? (*result)->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)((*result)->data[(NI)(((*result) ? (*result)->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47))));
					LA58_: ;
					if (!T57_) goto LA59_;
					unsureAsgnRef((void**) (&(*result)), addChar((*result), dirSep));
				}
				LA59_: ;
				T61_ = (NimStringDesc*)0;
				T61_ = substr_system_7735(x, b.Field0, b.Field1);
				unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T61_ ? T61_->Sup.len : 0) + 0));
appendString((*result), T61_);
				(*state) += ((NI) 2);
			}
			goto LA12_;
			LA53_: ;
			LA12_: ;
		} LA10: ;
	}
	{
		NIM_BOOL T64_;
		T64_ = (NIM_BOOL)0;
		T64_ = (((*result) ? (*result)->Sup.len : 0) == 0);
		if (!(T64_)) goto LA65_;
		T64_ = !(((x ? x->Sup.len : 0) == 0));
		LA65_: ;
		if (!T64_) goto LA66_;
		unsureAsgnRef((void**) (&(*result)), copyString(((NimStringDesc*) &TM__DfU0iuayCGwHDN1Exp9cbKg_2)));
	}
	LA66_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, normalizePath_pureZpathnorm_127)(NimStringDesc* path, NIM_CHAR dirSep) {
	NimStringDesc* result;
	NI state;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((path ? path->Sup.len : 0))));
	state = ((NI) 0);
	addNormalizePath_pureZpathnorm_71(path, (&result), (&state), dirSep);
	return result;
}
