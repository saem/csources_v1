/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
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
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og {
NIM_BOOL trueColorIsSupported;
NIM_BOOL trueColorIsEnabled;
NIM_BOOL fgSetColor;
};
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
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU16 tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
typedef NU8 tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ {
NIM_CHAR fill;
NIM_CHAR align;
NIM_CHAR sign;
NIM_BOOL alternateForm;
NIM_BOOL padWithZero;
NI minimumWidth;
NI precision;
NIM_CHAR typ;
NI endPosition;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
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
typedef NU8 tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_NIMCALL(void, Marker_tyRef__flNJLrANZti6Wiy5LTlGGA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM__CN3raB9atujkEiPpxYAdlgQ_3)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle_systemZio_228)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, write_systemZio_205)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode_pureZterminal_295)(NI style);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, formatValue_pureZstrformat_160)(NimStringDesc** result, NimStringDesc* value, NimStringDesc* specifier);
N_LIB_PRIVATE N_NIMCALL(void, formatValue_pureZterminal_172)(NimStringDesc** result, NI value, NimStringDesc* specifier);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__systemZdollars_3)(NI x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier_pureZstrformat_56)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5308)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5270)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5315)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5313)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5264)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, formatInt_pureZterminal_180)(NI n, NI radix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NimStringDesc*, mkDigit_pureZstrformat_5)(NI v, NIM_CHAR typ);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE TNimType NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_;
extern TNimType NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_;
N_LIB_PRIVATE TNimType NTIpterminal__flNJLrANZti6Wiy5LTlGGA_;
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_4, "\033[", 2);
extern TNimType NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_5, "invalid type in format string for number, expected one  of \'x\', \'X\', \'b\', \'d\', \'o\' but got: ", 92);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_6, "0x", 2);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_7, "0b", 2);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_8, "0o", 2);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_9, "0", 1);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_10, "-", 1);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_11, "m", 1);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_12, "\033[0m", 4);
N_LIB_PRIVATE tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* gTerm_pureZterminal_10;
N_LIB_PRIVATE NI gFG_pureZterminal_278;
N_LIB_PRIVATE NI gBG_pureZterminal_279;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5217;
static N_NIMCALL(void, Marker_tyRef__flNJLrANZti6Wiy5LTlGGA)(void* p, NI op) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* a;
	a = (tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*)p;
}
static N_NIMCALL(void, TM__CN3raB9atujkEiPpxYAdlgQ_3)(void) {
	nimGCvisit((void*)gTerm_pureZterminal_10, 0);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty_pureZterminal_502)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle_systemZio_228(f);
	T2_ = (int)0;
	T2_ = isatty(T1_);
	result = !((T2_ == ((NI32) 0)));
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
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef_system_5308)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent__system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5270)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent__system_716(((NI) (ptrdiff_t) (usr)), ((NI) 8));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU32)(((NU) (x))) < (NU32)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT_system_5313)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_system_5264((&gch_system_5217.zct), c);
}
static N_INLINE(void, decRef_system_5315)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent__system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent__system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT_system_5313(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_system_5270(src);
		incRef_system_5308(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_system_5270((*dest));
		decRef_system_5315(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(NimStringDesc*, mkDigit_pureZstrformat_5)(NI v, NIM_CHAR typ) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		if (!(v < ((NI) 10))) goto LA3_;
		result = nimCharToStr(((NIM_CHAR) (((NI) ((NI)(((NI) 48) + v))))));
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_CHAR T6_;
		T6_ = (NIM_CHAR)0;
		{
			if (!((NU8)(typ) == (NU8)(120))) goto LA9_;
			T6_ = 97;
		}
		goto LA7_;
		LA9_: ;
		{
			T6_ = 65;
		}
		LA7_: ;
		result = nimCharToStr(((NIM_CHAR) (((NI) ((NI)((NI)(((NU8)(T6_)) + v) - ((NI) 10)))))));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, formatInt_pureZterminal_180)(NI n, NI radix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec) {
	NimStringDesc* result;
	NI64 n_2;
	NIM_BOOL negative;
	NU64 v;
	NimStringDesc* xx;
	result = (NimStringDesc*)0;
	n_2 = ((NI64) (n));
	negative = (n_2 < IL64(0));
	{
		if (!negative) goto LA3_;
		v = (NU64)((NU64)(((NU64) ((NI64)((NU64) ~(n_2))))) + (NU64)(1ULL));
	}
	goto LA1_;
	LA3_: ;
	{
		v = ((NU64) (n_2));
	}
	LA1_: ;
	xx = ((NimStringDesc*) NIM_NIL);
	{
		if (!spec.alternateForm) goto LA8_;
		switch (((NU8)(spec.typ))) {
		case 88:
		{
			xx = copyString(((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_6));
		}
		break;
		case 120:
		{
			xx = copyString(((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_6));
		}
		break;
		case 98:
		{
			xx = copyString(((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_7));
		}
		break;
		case 111:
		{
			xx = copyString(((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_8));
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA8_: ;
	{
		if (!(v == 0ULL)) goto LA17_;
		result = copyString(((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_9));
	}
	goto LA15_;
	LA17_: ;
	{
		result = ((NimStringDesc*) NIM_NIL);
		{
			while (1) {
				NU64 d;
				NimStringDesc* T22_;
				if (!((NU64)(0ULL) < (NU64)(v))) goto LA21;
				d = (NU64)((NU64)(v) % (NU64)(((NU64) (radix))));
				v = (NU64)((NU64)(v) / (NU64)(((NU64) (radix))));
				T22_ = (NimStringDesc*)0;
				T22_ = mkDigit_pureZstrformat_5(((NI) (d)), spec.typ);
				result = resizeString(result, (T22_ ? T22_->Sup.len : 0) + 0);
appendString(result, T22_);
			} LA21: ;
		}
		{
			NI idx;
			NI colontmp_;
			NI i;
			idx = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)((result ? result->Sup.len : 0) / ((NI) 2));
			i = ((NI) 0);
			{
				while (1) {
					NIM_CHAR T26_;
					if (!(i < colontmp_)) goto LA25;
					idx = i;
					T26_ = (NIM_CHAR)0;
					T26_ = result->data[idx];
					result->data[idx] = result->data[(NI)((NI)((result ? result->Sup.len : 0) - idx) - ((NI) 1))];
					result->data[(NI)((NI)((result ? result->Sup.len : 0) - idx) - ((NI) 1))] = T26_;
					i += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA15_: ;
	{
		NIM_BOOL sign;
		NIM_BOOL T31_;
		NI toFill;
		if (!spec.padWithZero) goto LA29_;
		T31_ = (NIM_BOOL)0;
		T31_ = negative;
		if (T31_) goto LA32_;
		T31_ = !(((NU8)(spec.sign) == (NU8)(45)));
		LA32_: ;
		sign = T31_;
		toFill = (NI)((NI)((NI)(spec.minimumWidth - (result ? result->Sup.len : 0)) - (xx ? xx->Sup.len : 0)) - sign);
		{
			NimStringDesc* T37_;
			NimStringDesc* T38_;
			if (!(((NI) 0) < toFill)) goto LA35_;
			T37_ = (NimStringDesc*)0;
			T38_ = (NimStringDesc*)0;
			T38_ = nsuRepeatChar(48, ((NI) (toFill)));
			T37_ = rawNewString((T38_ ? T38_->Sup.len : 0) + (result ? result->Sup.len : 0) + 0);
appendString(T37_, T38_);
appendString(T37_, result);
			result = T37_;
		}
		LA35_: ;
	}
	LA29_: ;
	{
		NimStringDesc* T43_;
		if (!negative) goto LA41_;
		T43_ = (NimStringDesc*)0;
		T43_ = rawNewString((xx ? xx->Sup.len : 0) + (result ? result->Sup.len : 0) + 1);
appendString(T43_, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_10));
appendString(T43_, xx);
appendString(T43_, result);
		result = T43_;
	}
	goto LA39_;
	LA41_: ;
	{
		NimStringDesc* T47_;
		if (!!(((NU8)(spec.sign) == (NU8)(45)))) goto LA45_;
		T47_ = (NimStringDesc*)0;
		T47_ = rawNewString((xx ? xx->Sup.len : 0) + (result ? result->Sup.len : 0) + 1);
appendChar(T47_, spec.sign);
appendString(T47_, xx);
appendString(T47_, result);
		result = T47_;
	}
	goto LA39_;
	LA45_: ;
	{
		NimStringDesc* T49_;
		T49_ = (NimStringDesc*)0;
		T49_ = rawNewString((xx ? xx->Sup.len : 0) + (result ? result->Sup.len : 0) + 0);
appendString(T49_, xx);
appendString(T49_, result);
		result = T49_;
	}
	LA39_: ;
	{
		if (!((NU8)(spec.align) == (NU8)(60))) goto LA52_;
		{
			NI i_2;
			NI colontmp__2;
			NI i_3;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (result ? result->Sup.len : 0);
			i_3 = colontmp__2;
			{
				while (1) {
					if (!(i_3 < spec.minimumWidth)) goto LA56;
					i_2 = i_3;
					result = addChar(result, spec.fill);
					i_3 += ((NI) 1);
				} LA56: ;
			}
		}
	}
	goto LA50_;
	LA52_: ;
	{
		NI toFill_2;
		toFill_2 = (NI)(spec.minimumWidth - (result ? result->Sup.len : 0));
		{
			NI half;
			NimStringDesc* T62_;
			NimStringDesc* T63_;
			NimStringDesc* T64_;
			if (!((NU8)(spec.align) == (NU8)(94))) goto LA60_;
			half = (NI)(toFill_2 / ((NI) 2));
			T62_ = (NimStringDesc*)0;
			T63_ = (NimStringDesc*)0;
			T63_ = nsuRepeatChar(spec.fill, ((NI) (half)));
			T64_ = (NimStringDesc*)0;
			T64_ = nsuRepeatChar(spec.fill, ((NI) ((NI)(toFill_2 - half))));
			T62_ = rawNewString((T63_ ? T63_->Sup.len : 0) + (result ? result->Sup.len : 0) + (T64_ ? T64_->Sup.len : 0) + 0);
appendString(T62_, T63_);
appendString(T62_, result);
appendString(T62_, T64_);
			result = T62_;
		}
		goto LA58_;
		LA60_: ;
		{
			{
				NimStringDesc* T70_;
				NimStringDesc* T71_;
				if (!(((NI) 0) < toFill_2)) goto LA68_;
				T70_ = (NimStringDesc*)0;
				T71_ = (NimStringDesc*)0;
				T71_ = nsuRepeatChar(spec.fill, ((NI) (toFill_2)));
				T70_ = rawNewString((T71_ ? T71_->Sup.len : 0) + (result ? result->Sup.len : 0) + 0);
appendString(T70_, T71_);
appendString(T70_, result);
				result = T70_;
			}
			LA68_: ;
		}
		LA58_: ;
	}
	LA50_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue_pureZterminal_172)(NimStringDesc** result, NI value, NimStringDesc* specifier) {
	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec;
	NI radix;
	NimStringDesc* T13_;
{	{
		NimStringDesc* T5_;
		if (!((specifier ? specifier->Sup.len : 0) == ((NI) 0))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = dollar__systemZdollars_3(value);
		unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T5_ ? T5_->Sup.len : 0) + 0));
appendString((*result), T5_);
		goto BeforeRet_;
	}
	LA3_: ;
	spec = parseStandardFormatSpecifier_pureZstrformat_56(specifier, ((NI) 0), NIM_FALSE);
	radix = ((NI) 10);
	switch (((NU8)(spec.typ))) {
	case 120:
	case 88:
	{
		radix = ((NI) 16);
	}
	break;
	case 100:
	case 0:
	{
	}
	break;
	case 98:
	{
		radix = ((NI) 2);
	}
	break;
	case 111:
	{
		radix = ((NI) 8);
	}
	break;
	default:
	{
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T11_;
		NimStringDesc* T12_;
		T11_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T11_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T11_).Sup.Sup.Sup.m_type = (&NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_);
		(*T11_).Sup.Sup.name = "ValueError";
		T12_ = (NimStringDesc*)0;
		T12_ = rawNewString(93);
appendString(T12_, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_5));
appendChar(T12_, spec.typ);
		asgnRef((void**) (&(*T11_).Sup.Sup.message), T12_);
		asgnRef((void**) (&(*T11_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T11_, "ValueError", "formatValue", "strformat.nim", 487);
	}
	break;
	}
	T13_ = (NimStringDesc*)0;
	T13_ = formatInt_pureZterminal_180(value, radix, spec);
	unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T13_ ? T13_->Sup.len : 0) + 0));
appendString((*result), T13_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode_pureZterminal_295)(NI style) {
	NimStringDesc* result;
	NimStringDesc* fmtRes;
	result = (NimStringDesc*)0;
	fmtRes = rawNewString(((NI) 41));
	formatValue_pureZstrformat_160((&fmtRes), ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_4), ((NimStringDesc*) NIM_NIL));
	formatValue_pureZterminal_172((&fmtRes), style, ((NimStringDesc*) NIM_NIL));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_11));
	result = copyString(fmtRes);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setStyle_pureZterminal_313)(FILE* f, tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style) {
	{
		tyEnum_Style__NXKayqTLMsAibFwNceBlpA s;
		NI i;
		s = (tyEnum_Style__NXKayqTLMsAibFwNceBlpA)0;
		i = ((NI) 1);
		{
			while (1) {
				if (!(i <= ((NI) 9))) goto LA3;
				{
					NimStringDesc* T8_;
					if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) (i))- 1))&15U)))!=0)) goto LA6_;
					s = ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) (i));
					T8_ = (NimStringDesc*)0;
					T8_ = ansiStyleCode_pureZterminal_295(((NI) (s)));
					write_systemZio_205(f, T8_);
				}
				LA6_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, resetAttributes_pureZterminal_280)(FILE* f) {
	write_systemZio_205(f, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_12));
	gFG_pureZterminal_278 = ((NI) 0);
	gBG_pureZterminal_279 = ((NI) 0);
}
N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor_pureZterminal_387)(FILE* f, tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	NimStringDesc* T5_;
	gFG_pureZterminal_278 = fg;
	{
		if (!bright) goto LA3_;
		gFG_pureZterminal_278 += ((NI) 60);
	}
	LA3_: ;
	T5_ = (NimStringDesc*)0;
	T5_ = ansiStyleCode_pureZterminal_295(gFG_pureZterminal_278);
	write_systemZio_205(f, T5_);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalInit000)(void) {
{
	TFrame FR_; FR_.len = 0;

	nimRegisterThreadLocalMarker(TM__CN3raB9atujkEiPpxYAdlgQ_3);

}/* preInitProc end */
{
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalDatInit000)(void) {
static TNimNode* TM__CN3raB9atujkEiPpxYAdlgQ_2_3[3];
static TNimNode TM__CN3raB9atujkEiPpxYAdlgQ_0[4];
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.size = sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og);
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.align = NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og);
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.kind = 18;
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.base = 0;
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.flags = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_2_3[0] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[1];
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, trueColorIsSupported);
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].name = "trueColorIsSupported";
TM__CN3raB9atujkEiPpxYAdlgQ_2_3[1] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[2];
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, trueColorIsEnabled);
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].name = "trueColorIsEnabled";
TM__CN3raB9atujkEiPpxYAdlgQ_2_3[2] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[3];
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, fgSetColor);
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].name = "fgSetColor";
TM__CN3raB9atujkEiPpxYAdlgQ_0[0].len = 3; TM__CN3raB9atujkEiPpxYAdlgQ_0[0].kind = 2; TM__CN3raB9atujkEiPpxYAdlgQ_0[0].sons = &TM__CN3raB9atujkEiPpxYAdlgQ_2_3[0];
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.node = &TM__CN3raB9atujkEiPpxYAdlgQ_0[0];
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.size = sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.align = NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.kind = 22;
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.base = (&NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.marker = Marker_tyRef__flNJLrANZti6Wiy5LTlGGA;
}

