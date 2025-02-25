/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

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
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosrelativePath)(NimStringDesc* path, NimStringDesc* base, NIM_CHAR sep);
static N_INLINE(NIM_BOOL, isEmpty_pathutils_93)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath_pureZpathnorm_71)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NimStringDesc*, slash__pureZos_121)(NimStringDesc* head, NimStringDesc* tail);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash__pathutils_89)(NimStringDesc* base, NimStringDesc* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, relativeTo_pathutils_132)(NimStringDesc* fullPath, NimStringDesc* baseFilename, NIM_CHAR sep) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = nosrelativePath(fullPath, baseFilename, sep);
	return result;
}
static N_INLINE(NIM_BOOL, isEmpty_pathutils_93)(NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((x ? x->Sup.len : 0) == ((NI) 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash__pathutils_111)(NimStringDesc* base, NimStringDesc* f) {
	NimStringDesc* result;
	NimStringDesc* base_2;
	NI state;
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isEmpty_pathutils_93(base);
		if (!T3_) goto LA4_;
		base_2 = nosgetCurrentDir();
	}
	goto LA1_;
	LA4_: ;
	{
		base_2 = base;
	}
	LA1_: ;
	result = rawNewString(((NI) ((NI)((base_2 ? base_2->Sup.len : 0) + (f ? f->Sup.len : 0)))));
	state = ((NI) 0);
	addNormalizePath_pureZpathnorm_71(base_2, (&result), (&state), 47);
	addNormalizePath_pureZpathnorm_71(f, (&result), (&state), 47);
	return result;
}
static N_INLINE(NimStringDesc*, slash__pureZos_121)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = nosjoinPath(head, tail);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toAbsoluteDir_pathutils_71)(NimStringDesc* path) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nosisAbsolute(path);
		if (!T3_) goto LA4_;
		result = copyString(path);
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T7_;
		T7_ = (NimStringDesc*)0;
		T7_ = nosgetCurrentDir();
		result = slash__pureZos_121(T7_, path);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash__pathutils_89)(NimStringDesc* base, NimStringDesc* f) {
	NimStringDesc* result;
	NimStringDesc* base_2;
	NI state;
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isEmpty_pathutils_93(base);
		if (!T3_) goto LA4_;
		base_2 = nosgetCurrentDir();
	}
	goto LA1_;
	LA4_: ;
	{
		base_2 = base;
	}
	LA1_: ;
	result = rawNewString(((NI) ((NI)((base_2 ? base_2->Sup.len : 0) + (f ? f->Sup.len : 0)))));
	state = ((NI) 0);
	addNormalizePath_pureZpathnorm_71(base_2, (&result), (&state), 47);
	addNormalizePath_pureZpathnorm_71(f, (&result), (&state), 47);
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
N_LIB_PRIVATE N_NIMCALL(void, splitFile_pathutils_26)(NimStringDesc* x, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result) {
	tyTuple__7q7q3E6Oj24ZNVJb9aonhAg T1_;
	NimStringDesc* a;
	NimStringDesc* b;
	NimStringDesc* c;
	NimStringDesc* colontmp_;
	NimStringDesc* colontmp__2;
	NimStringDesc* colontmp__3;
	nimZeroMem((void*)(&T1_), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
	nossplitFile(x, (&T1_));
	a = (NimStringDesc*)0;
	a = T1_.Field0;
	b = (NimStringDesc*)0;
	b = T1_.Field1;
	c = (NimStringDesc*)0;
	c = T1_.Field2;
	colontmp_ = copyString(a);
	colontmp__2 = copyString(b);
	colontmp__3 = copyString(c);
	unsureAsgnRef((void**) (&(*Result).Field0), copyString(colontmp_));
	unsureAsgnRef((void**) (&(*Result).Field1), copyString(colontmp__2));
	unsureAsgnRef((void**) (&(*Result).Field2), copyString(colontmp__3));
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toAbsolute_pathutils_137)(NimStringDesc* file, NimStringDesc* base) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nosisAbsolute(file);
		if (!T3_) goto LA4_;
		result = copyString(file);
	}
	goto LA1_;
	LA4_: ;
	{
		result = slash__pathutils_89(base, file);
	}
	LA1_: ;
	return result;
}
