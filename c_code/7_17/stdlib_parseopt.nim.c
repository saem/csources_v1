/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 64
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg;
typedef struct RootObj RootObj;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg {
  RootObj Sup;
NI pos;
NIM_BOOL inShortState;
NIM_BOOL allowWhitespaceAfterColon;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw shortNoVal;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* longNoVal;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cmds;
NI idx;
tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA kind;
NimStringDesc* key;
NimStringDesc* val;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU8 tyArray__S8ib5N31oJbAkqOZTlNg5Q[8192];
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, nosparseCmdLine)(NimStringDesc* c);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, newSeq_systemZio_501)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, paramCount_pureZos_1532)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, paramStr_pureZos_1526)(NI i);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5338)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5300)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5345)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5343)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5294)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, handleShortOption_pureZparseopt_127)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p, NimStringDesc* cmd);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NI, cardSet)(tyArray__S8ib5N31oJbAkqOZTlNg5Q s, NI len);
static N_INLINE(NI, countBits32)(NU32 n);
static N_INLINE(NI, countSetBitsImpl_systemZcountbits95impl_26)(NU32 x);
N_CDECL(int, __builtin_popcount)(unsigned int x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_system_7785)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NI, parseWord_pureZparseopt_25)(NimStringDesc* s, NI i, NimStringDesc** w, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw delim);
static N_INLINE(NIM_BOOL, contains_stdZenumutils_43)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NI, find_stdZenumutils_48)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_system_1735)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, quoteShellCommand_pureZos_601)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, X5BX5D__pureZparseopt_275)(NimStringDesc** s, NI sLen_0, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot__stdZenumutils_80)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
extern TNimType NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTIoptparser__l9cyoK9aLLTUH7LBRIbLqETg_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTIchar__nmiMWKVIe46vacnhAFrQvw_;
N_LIB_PRIVATE TNimType NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_;
extern TNimType NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_;
N_LIB_PRIVATE TNimType NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_;
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__GYgvYKeHVTEls0AcywABHQ_6 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5247;
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef_system_5338)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent__system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5300)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent__system_716(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT_system_5343)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_system_5294((&gch_system_5247.zct), c);
}
static N_INLINE(void, decRef_system_5345)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent__system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent__system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT_system_5343(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_system_5300(src);
		incRef_system_5338(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_system_5300((*dest));
		decRef_system_5345(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(void, initOptParser_pureZparseopt_51)(NimStringDesc* cmdline, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw shortNoVal, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* longNoVal, NIM_BOOL allowWhitespaceAfterColon, tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* Result) {
	(*Result).pos = 0;
	(*Result).inShortState = 0;
	(*Result).allowWhitespaceAfterColon = 0;
	unsureAsgnRef((void**)&(*Result).longNoVal, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).cmds, NIM_NIL);
	(*Result).idx = 0;
	(*Result).kind = 0;
	unsureAsgnRef((void**)&(*Result).key, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).val, NIM_NIL);
	(*Result).Sup.m_type = (&NTIoptparser__l9cyoK9aLLTUH7LBRIbLqETg_);
	(*Result).pos = ((NI) 0);
	(*Result).idx = ((NI) 0);
	(*Result).inShortState = NIM_FALSE;
	nimCopyMem((void*)(*Result).shortNoVal, (NIM_CONST void*)shortNoVal, 32);
	genericSeqAssign((&(*Result).longNoVal), longNoVal, (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_));
	(*Result).allowWhitespaceAfterColon = allowWhitespaceAfterColon;
	{
		if (!!(((cmdline ? cmdline->Sup.len : 0) == 0))) goto LA3_;
		unsureAsgnRef((void**) (&(*Result).cmds), nosparseCmdLine(cmdline));
	}
	goto LA1_;
	LA3_: ;
	{
		NI T6_;
		T6_ = (NI)0;
		T6_ = paramCount_pureZos_1532();
		unsureAsgnRef((void**) (&(*Result).cmds), newSeq_systemZio_501(((NI) (T6_))));
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = paramCount_pureZos_1532();
			res = ((NI) 1);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA9;
					i = res;
					asgnRef((void**) (&(*Result).cmds->data[(NI)(i - ((NI) 1))]), paramStr_pureZos_1526(i));
					res += ((NI) 1);
				} LA9: ;
			}
		}
	}
	LA1_: ;
	(*Result).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA) 0);
	unsureAsgnRef((void**) (&(*Result).key), ((NimStringDesc*) NIM_NIL));
	unsureAsgnRef((void**) (&(*Result).val), ((NimStringDesc*) NIM_NIL));
}
static N_INLINE(NI, countSetBitsImpl_systemZcountbits95impl_26)(NU32 x) {
	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = __builtin_popcount(x);
	result = ((NI) (T1_));
	return result;
}
static N_INLINE(NI, countBits32)(NU32 n) {
	NI result;
	result = (NI)0;
	result = countSetBitsImpl_systemZcountbits95impl_26(n);
	return result;
}
static N_INLINE(NI, cardSet)(tyArray__S8ib5N31oJbAkqOZTlNg5Q s, NI len) {
	NI result;
	NI i;
	result = (NI)0;
	i = ((NI) 0);
	result = ((NI) 0);
	{
		while (1) {
			NI T3_;
			if (!(i < len)) goto LA2;
			T3_ = (NI)0;
			T3_ = countBits32(((NU32) (s[(i)- 0])));
			result += T3_;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, handleShortOption_pureZparseopt_127)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p, NimStringDesc* cmd) {
	NI i;
	i = (*p).pos;
	(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA) 3);
	{
		if (!(i < (cmd ? cmd->Sup.len : 0))) goto LA3_;
		unsureAsgnRef((void**) (&(*p).key), addChar((*p).key, cmd->data[i]));
		i += ((NI) 1);
	}
	LA3_: ;
	(*p).inShortState = NIM_TRUE;
	{
		while (1) {
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = (i < (cmd ? cmd->Sup.len : 0));
			if (!(T7_)) goto LA8_;
			T7_ = (((NU8)(cmd->data[i])) == ((NU8)(9)) || ((NU8)(cmd->data[i])) == ((NU8)(32)));
			LA8_: ;
			if (!T7_) goto LA6;
			i += ((NI) 1);
			(*p).inShortState = NIM_FALSE;
		} LA6: ;
	}
	{
		NIM_BOOL T11_;
		NIM_BOOL T13_;
		NIM_BOOL T15_;
		T11_ = (NIM_BOOL)0;
		T11_ = (i < (cmd ? cmd->Sup.len : 0));
		if (!(T11_)) goto LA12_;
		T13_ = (NIM_BOOL)0;
		T13_ = (((NU8)(cmd->data[i])) == ((NU8)(58)) || ((NU8)(cmd->data[i])) == ((NU8)(61)));
		if (T13_) goto LA14_;
		T15_ = (NIM_BOOL)0;
		T15_ = (((NI) 0) < cardSet((*p).shortNoVal, 32));
		if (!(T15_)) goto LA16_;
		T15_ = !((((*p).shortNoVal[(NU)(((NU8)((*p).key->data[((NI) 0)])))>>3] &(1U<<((NU)(((NU8)((*p).key->data[((NI) 0)])))&7U)))!=0));
		LA16_: ;
		T13_ = T15_;
		LA14_: ;
		T11_ = T13_;
		LA12_: ;
		if (!T11_) goto LA17_;
		{
			NIM_BOOL T21_;
			T21_ = (NIM_BOOL)0;
			T21_ = (i < (cmd ? cmd->Sup.len : 0));
			if (!(T21_)) goto LA22_;
			T21_ = (((NU8)(cmd->data[i])) == ((NU8)(58)) || ((NU8)(cmd->data[i])) == ((NU8)(61)));
			LA22_: ;
			if (!T21_) goto LA23_;
			i += ((NI) 1);
		}
		LA23_: ;
		(*p).inShortState = NIM_FALSE;
		{
			while (1) {
				NIM_BOOL T27_;
				T27_ = (NIM_BOOL)0;
				T27_ = (i < (cmd ? cmd->Sup.len : 0));
				if (!(T27_)) goto LA28_;
				T27_ = (((NU8)(cmd->data[i])) == ((NU8)(9)) || ((NU8)(cmd->data[i])) == ((NU8)(32)));
				LA28_: ;
				if (!T27_) goto LA26;
				i += ((NI) 1);
			} LA26: ;
		}
		unsureAsgnRef((void**) (&(*p).val), substr_system_7785(cmd, i));
		(*p).pos = ((NI) 0);
		(*p).idx += ((NI) 1);
	}
	goto LA9_;
	LA17_: ;
	{
		(*p).pos = i;
	}
	LA9_: ;
	{
		if (!((cmd ? cmd->Sup.len : 0) <= i)) goto LA32_;
		(*p).inShortState = NIM_FALSE;
		(*p).pos = ((NI) 0);
		(*p).idx += ((NI) 1);
	}
	LA32_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseWord_pureZparseopt_25)(NimStringDesc* s, NI i, NimStringDesc** w, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw delim) {
	NI result;
	result = (NI)0;
	result = i;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (result < (s ? s->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		T3_ = ((NU8)(s->data[result]) == (NU8)(34));
		LA4_: ;
		if (!T3_) goto LA5_;
		result += ((NI) 1);
		{
			while (1) {
				if (!(result < (s ? s->Sup.len : 0))) goto LA8;
				{
					if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA11_;
					result += ((NI) 1);
					goto LA7;
				}
				LA11_: ;
				unsureAsgnRef((void**) (&(*w)), addChar((*w), s->data[result]));
				result += ((NI) 1);
			} LA8: ;
		} LA7: ;
	}
	goto LA1_;
	LA5_: ;
	{
		{
			while (1) {
				NIM_BOOL T16_;
				T16_ = (NIM_BOOL)0;
				T16_ = (result < (s ? s->Sup.len : 0));
				if (!(T16_)) goto LA17_;
				T16_ = !(((delim[(NU)(((NU8)(s->data[result])))>>3] &(1U<<((NU)(((NU8)(s->data[result])))&7U)))!=0));
				LA17_: ;
				if (!T16_) goto LA15;
				unsureAsgnRef((void**) (&(*w)), addChar((*w), s->data[result]));
				result += ((NI) 1);
			} LA15: ;
		}
	}
	LA1_: ;
	return result;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem_system_1735)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem_system_1735(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, find_stdZenumutils_48)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NI result;
{	result = (NI)0;
	result = ((NI) 0);
	{
		NimStringDesc** i;
		NI i_2;
		i = (NimStringDesc**)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3;
				i = (&a[i_2]);
				{
					if (!eqStrings((*i), item)) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, contains_stdZenumutils_43)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find_stdZenumutils_48(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nponext)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p) {
	NI i;
{	{
		NI T3_;
		T3_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
		if (!(T3_ <= (*p).idx)) goto LA4_;
		(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA) 0);
		goto BeforeRet_;
	}
	LA4_: ;
	i = (*p).pos;
	{
		while (1) {
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
			if (!(T8_)) goto LA9_;
			T8_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(32)));
			LA9_: ;
			if (!T8_) goto LA7;
			i += ((NI) 1);
		} LA7: ;
	}
	(*p).pos = i;
	unsureAsgnRef((void**) (&(*p).key), setLengthStr((*p).key, ((NI) 0)));
	unsureAsgnRef((void**) (&(*p).val), setLengthStr((*p).val, ((NI) 0)));
	{
		if (!(*p).inShortState) goto LA12_;
		(*p).inShortState = NIM_FALSE;
		{
			if (!(((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0) <= i)) goto LA16_;
			(*p).idx += ((NI) 1);
			(*p).pos = ((NI) 0);
			{
				NI T20_;
				T20_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
				if (!(T20_ <= (*p).idx)) goto LA21_;
				(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA) 0);
				goto BeforeRet_;
			}
			LA21_: ;
		}
		goto LA14_;
		LA16_: ;
		{
			handleShortOption_pureZparseopt_127(p, (*p).cmds->data[(*p).idx]);
			goto BeforeRet_;
		}
		LA14_: ;
	}
	LA12_: ;
	{
		NIM_BOOL T26_;
		T26_ = (NIM_BOOL)0;
		T26_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
		if (!(T26_)) goto LA27_;
		T26_ = ((NU8)((*p).cmds->data[(*p).idx]->data[i]) == (NU8)(45));
		LA27_: ;
		if (!T26_) goto LA28_;
		i += ((NI) 1);
		{
			NIM_BOOL T32_;
			T32_ = (NIM_BOOL)0;
			T32_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
			if (!(T32_)) goto LA33_;
			T32_ = ((NU8)((*p).cmds->data[(*p).idx]->data[i]) == (NU8)(45));
			LA33_: ;
			if (!T32_) goto LA34_;
			(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA) 2);
			i += ((NI) 1);
			i = parseWord_pureZparseopt_25((*p).cmds->data[(*p).idx], i, (&(*p).key), TM__GYgvYKeHVTEls0AcywABHQ_6);
			{
				while (1) {
					NIM_BOOL T38_;
					T38_ = (NIM_BOOL)0;
					T38_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
					if (!(T38_)) goto LA39_;
					T38_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(32)));
					LA39_: ;
					if (!T38_) goto LA37;
					i += ((NI) 1);
				} LA37: ;
			}
			{
				NIM_BOOL T42_;
				T42_ = (NIM_BOOL)0;
				T42_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
				if (!(T42_)) goto LA43_;
				T42_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(61)));
				LA43_: ;
				if (!T42_) goto LA44_;
				i += ((NI) 1);
				{
					while (1) {
						NIM_BOOL T48_;
						T48_ = (NIM_BOOL)0;
						T48_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
						if (!(T48_)) goto LA49_;
						T48_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(32)));
						LA49_: ;
						if (!T48_) goto LA47;
						i += ((NI) 1);
					} LA47: ;
				}
				{
					NIM_BOOL T52_;
					NIM_BOOL T53_;
					NI T55_;
					T52_ = (NIM_BOOL)0;
					T53_ = (NIM_BOOL)0;
					T53_ = (((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0) <= i);
					if (!(T53_)) goto LA54_;
					T55_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
					T53_ = ((*p).idx < T55_);
					LA54_: ;
					T52_ = T53_;
					if (!(T52_)) goto LA56_;
					T52_ = (*p).allowWhitespaceAfterColon;
					LA56_: ;
					if (!T52_) goto LA57_;
					(*p).idx += ((NI) 1);
					i = ((NI) 0);
				}
				LA57_: ;
				{
					NI T61_;
					T61_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
					if (!((*p).idx < T61_)) goto LA62_;
					unsureAsgnRef((void**) (&(*p).val), substr_system_7785((*p).cmds->data[(*p).idx], i));
				}
				LA62_: ;
			}
			goto LA40_;
			LA44_: ;
			{
				NIM_BOOL T65_;
				NIM_BOOL T66_;
				NI T67_;
				NIM_BOOL T69_;
				NI T71_;
				T65_ = (NIM_BOOL)0;
				T66_ = (NIM_BOOL)0;
				T67_ = ((*p).longNoVal ? (*p).longNoVal->Sup.len : 0);
				T66_ = (((NI) 0) < T67_);
				if (!(T66_)) goto LA68_;
				T69_ = (NIM_BOOL)0;
				T69_ = contains_stdZenumutils_43((*p).longNoVal->data, ((*p).longNoVal ? (*p).longNoVal->Sup.len : 0), (*p).key);
				T66_ = !(T69_);
				LA68_: ;
				T65_ = T66_;
				if (!(T65_)) goto LA70_;
				T71_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
				T65_ = ((NI)((*p).idx + ((NI) 1)) < T71_);
				LA70_: ;
				if (!T65_) goto LA72_;
				unsureAsgnRef((void**) (&(*p).val), copyString((*p).cmds->data[(NI)((*p).idx + ((NI) 1))]));
				(*p).idx += ((NI) 1);
			}
			goto LA40_;
			LA72_: ;
			{
				unsureAsgnRef((void**) (&(*p).val), ((NimStringDesc*) NIM_NIL));
			}
			LA40_: ;
			(*p).idx += ((NI) 1);
			(*p).pos = ((NI) 0);
		}
		goto LA30_;
		LA34_: ;
		{
			(*p).pos = i;
			handleShortOption_pureZparseopt_127(p, (*p).cmds->data[(*p).idx]);
		}
		LA30_: ;
	}
	goto LA24_;
	LA28_: ;
	{
		(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA) 1);
		unsureAsgnRef((void**) (&(*p).key), copyString((*p).cmds->data[(*p).idx]));
		(*p).idx += ((NI) 1);
		(*p).pos = ((NI) 0);
	}
	LA24_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_system_5300(p);
	decRef_system_5345(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, X5BX5D__pureZparseopt_275)(NimStringDesc** s, NI sLen_0, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* result;
	NI a;
	NI L;
	result = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)0;
	a = x.a;
	L = (NI)((NI)((NI)(sLen_0 - x.b) - a) + ((NI) 1));
	result = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_), ((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				T4_ = (NimStringDesc*)0;
				T4_ = result->data[i]; result->data[i] = copyStringRC1(s[(NI)(i + a)]);
				if (T4_) nimGCunrefNoCycle(T4_);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
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
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot__stdZenumutils_80)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, npocmdLineRest)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p) {
	NimStringDesc* result;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T1_;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* T2_;
	result = (NimStringDesc*)0;
	T1_ = dotdot__stdZenumutils_80((*p).idx, ((NI) 1));
	T2_ = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)0;
	T2_ = X5BX5D__pureZparseopt_275((*p).cmds->data, ((*p).cmds ? (*p).cmds->Sup.len : 0), T1_);
	result = quoteShellCommand_pureZos_601(T2_->data, (T2_ ? T2_->Sup.len : 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parseoptDatInit000)(void) {
static TNimNode* TM__GYgvYKeHVTEls0AcywABHQ_2_10[10];
static TNimNode* TM__GYgvYKeHVTEls0AcywABHQ_3_4[4];
NI TM__GYgvYKeHVTEls0AcywABHQ_5;
static char* NIM_CONST TM__GYgvYKeHVTEls0AcywABHQ_4[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TM__GYgvYKeHVTEls0AcywABHQ_0[17];
NTIoptparser__l9cyoK9aLLTUH7LBRIbLqETg_.size = sizeof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg);
NTIoptparser__l9cyoK9aLLTUH7LBRIbLqETg_.align = NIM_ALIGNOF(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg);
NTIoptparser__l9cyoK9aLLTUH7LBRIbLqETg_.kind = 17;
NTIoptparser__l9cyoK9aLLTUH7LBRIbLqETg_.base = (&NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_);
TM__GYgvYKeHVTEls0AcywABHQ_2_10[0] = &TM__GYgvYKeHVTEls0AcywABHQ_0[1];
TM__GYgvYKeHVTEls0AcywABHQ_0[1].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[1].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, pos);
TM__GYgvYKeHVTEls0AcywABHQ_0[1].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__GYgvYKeHVTEls0AcywABHQ_0[1].name = "pos";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[1] = &TM__GYgvYKeHVTEls0AcywABHQ_0[2];
TM__GYgvYKeHVTEls0AcywABHQ_0[2].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[2].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, inShortState);
TM__GYgvYKeHVTEls0AcywABHQ_0[2].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__GYgvYKeHVTEls0AcywABHQ_0[2].name = "inShortState";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[2] = &TM__GYgvYKeHVTEls0AcywABHQ_0[3];
TM__GYgvYKeHVTEls0AcywABHQ_0[3].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[3].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, allowWhitespaceAfterColon);
TM__GYgvYKeHVTEls0AcywABHQ_0[3].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__GYgvYKeHVTEls0AcywABHQ_0[3].name = "allowWhitespaceAfterColon";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[3] = &TM__GYgvYKeHVTEls0AcywABHQ_0[4];
NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_.size = sizeof(tySet_tyChar__nmiMWKVIe46vacnhAFrQvw);
NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_.align = NIM_ALIGNOF(tySet_tyChar__nmiMWKVIe46vacnhAFrQvw);
NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_.kind = 19;
NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_.base = (&NTIchar__nmiMWKVIe46vacnhAFrQvw_);
NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_.flags = 3;
TM__GYgvYKeHVTEls0AcywABHQ_0[5].len = 0; TM__GYgvYKeHVTEls0AcywABHQ_0[5].kind = 0;
NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_.node = &TM__GYgvYKeHVTEls0AcywABHQ_0[5];
TM__GYgvYKeHVTEls0AcywABHQ_0[4].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[4].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, shortNoVal);
TM__GYgvYKeHVTEls0AcywABHQ_0[4].typ = (&NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_);
TM__GYgvYKeHVTEls0AcywABHQ_0[4].name = "shortNoVal";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[4] = &TM__GYgvYKeHVTEls0AcywABHQ_0[6];
TM__GYgvYKeHVTEls0AcywABHQ_0[6].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[6].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, longNoVal);
TM__GYgvYKeHVTEls0AcywABHQ_0[6].typ = (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_);
TM__GYgvYKeHVTEls0AcywABHQ_0[6].name = "longNoVal";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[5] = &TM__GYgvYKeHVTEls0AcywABHQ_0[7];
TM__GYgvYKeHVTEls0AcywABHQ_0[7].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[7].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, cmds);
TM__GYgvYKeHVTEls0AcywABHQ_0[7].typ = (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_);
TM__GYgvYKeHVTEls0AcywABHQ_0[7].name = "cmds";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[6] = &TM__GYgvYKeHVTEls0AcywABHQ_0[8];
TM__GYgvYKeHVTEls0AcywABHQ_0[8].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[8].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, idx);
TM__GYgvYKeHVTEls0AcywABHQ_0[8].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__GYgvYKeHVTEls0AcywABHQ_0[8].name = "idx";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[7] = &TM__GYgvYKeHVTEls0AcywABHQ_0[9];
NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_.size = sizeof(tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA);
NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_.align = NIM_ALIGNOF(tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA);
NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_.kind = 14;
NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_.base = 0;
NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_.flags = 3;
for (TM__GYgvYKeHVTEls0AcywABHQ_5 = 0; TM__GYgvYKeHVTEls0AcywABHQ_5 < 4; TM__GYgvYKeHVTEls0AcywABHQ_5++) {
TM__GYgvYKeHVTEls0AcywABHQ_0[TM__GYgvYKeHVTEls0AcywABHQ_5+10].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[TM__GYgvYKeHVTEls0AcywABHQ_5+10].offset = TM__GYgvYKeHVTEls0AcywABHQ_5;
TM__GYgvYKeHVTEls0AcywABHQ_0[TM__GYgvYKeHVTEls0AcywABHQ_5+10].name = TM__GYgvYKeHVTEls0AcywABHQ_4[TM__GYgvYKeHVTEls0AcywABHQ_5];
TM__GYgvYKeHVTEls0AcywABHQ_3_4[TM__GYgvYKeHVTEls0AcywABHQ_5] = &TM__GYgvYKeHVTEls0AcywABHQ_0[TM__GYgvYKeHVTEls0AcywABHQ_5+10];
}
TM__GYgvYKeHVTEls0AcywABHQ_0[14].len = 4; TM__GYgvYKeHVTEls0AcywABHQ_0[14].kind = 2; TM__GYgvYKeHVTEls0AcywABHQ_0[14].sons = &TM__GYgvYKeHVTEls0AcywABHQ_3_4[0];
NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_.node = &TM__GYgvYKeHVTEls0AcywABHQ_0[14];
TM__GYgvYKeHVTEls0AcywABHQ_0[9].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[9].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, kind);
TM__GYgvYKeHVTEls0AcywABHQ_0[9].typ = (&NTIcmdlinekind__XkdXq9atxjiuhkFFh0XYrSA_);
TM__GYgvYKeHVTEls0AcywABHQ_0[9].name = "kind";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[8] = &TM__GYgvYKeHVTEls0AcywABHQ_0[15];
TM__GYgvYKeHVTEls0AcywABHQ_0[15].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[15].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, key);
TM__GYgvYKeHVTEls0AcywABHQ_0[15].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__GYgvYKeHVTEls0AcywABHQ_0[15].name = "key";
TM__GYgvYKeHVTEls0AcywABHQ_2_10[9] = &TM__GYgvYKeHVTEls0AcywABHQ_0[16];
TM__GYgvYKeHVTEls0AcywABHQ_0[16].kind = 1;
TM__GYgvYKeHVTEls0AcywABHQ_0[16].offset = offsetof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg, val);
TM__GYgvYKeHVTEls0AcywABHQ_0[16].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__GYgvYKeHVTEls0AcywABHQ_0[16].name = "val";
TM__GYgvYKeHVTEls0AcywABHQ_0[0].len = 10; TM__GYgvYKeHVTEls0AcywABHQ_0[0].kind = 2; TM__GYgvYKeHVTEls0AcywABHQ_0[0].sons = &TM__GYgvYKeHVTEls0AcywABHQ_2_10[0];
NTIoptparser__l9cyoK9aLLTUH7LBRIbLqETg_.node = &TM__GYgvYKeHVTEls0AcywABHQ_0[0];
}

