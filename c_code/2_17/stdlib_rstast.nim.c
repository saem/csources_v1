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
typedef struct tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA;
typedef struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw tySequence__V9cBl110bSARQ3Xk9bVaXHDw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef NU8 tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ {
tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind;
union{
struct {NimStringDesc* text;
} _kind_1;
struct {NimStringDesc* labelFmt;
} _kind_2;
struct {NimStringDesc* lineIndent;
} _kind_3;
struct {NimStringDesc* adType;
} _kind_4;
struct {NI level;
} _kind_5;
struct {NI order;
} _kind_6;
struct {tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA info;
} _kind_7;
};
NimStringDesc* anchor;
tySequence__V9cBl110bSARQ3Xk9bVaXHDw* sons;
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
struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw {
  TGenericSeq Sup;
  tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__V9cBl110bSARQ3Xk9bVaXHDw)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__atGg6Dddbb7ASNaCLVdS9aA)(void* p, NI op);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_system_5345)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5343)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5294)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5300)(void* usr);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5338)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstNode_packagesZdocutilsZrstast_109)(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind, tySequence__V9cBl110bSARQ3Xk9bVaXHDw* sons, NimStringDesc* anchor);
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstLeaf_packagesZdocutilsZrstast_187)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, add_packagesZdocutilsZrstast_196)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* son);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderRstToText_packagesZdocutilsZrstast_452)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* node);
N_LIB_PRIVATE TNimType NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_;
N_LIB_PRIVATE TNimType NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_;
TNimNode* NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[75];
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_;
extern TNimType NTIuint4954__M4na42GvebBMnI5wV9cYMxg_;
extern TNimType NTIint4954__kDPg4wXyR8DDyA0MeEjIsw_;
extern TNimType NTIint5150__sVg18TP9cLifHyygRe9cro9aA_;
N_LIB_PRIVATE TNimType NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_;
N_LIB_PRIVATE TNimType NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_;
STRING_LITERAL(TM__FFuHZ12IqCWTUfe3IbRMEg_7, "`", 1);
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5247;
static N_NIMCALL(void, Marker_tySequence__V9cBl110bSARQ3Xk9bVaXHDw)(void* p, NI op) {
	tySequence__V9cBl110bSARQ3Xk9bVaXHDw* a;
	NI T1_;
	a = (tySequence__V9cBl110bSARQ3Xk9bVaXHDw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, Marker_tyRef__atGg6Dddbb7ASNaCLVdS9aA)(void* p, NI op) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* a;
	a = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)p;
	switch ((*a).kind) {
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 73):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 71):
	nimGCvisit((void*)(*a)._kind_1.text, op);
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 8):
	nimGCvisit((void*)(*a)._kind_2.labelFmt, op);
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 28):
	nimGCvisit((void*)(*a)._kind_3.lineIndent, op);
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 52):
	nimGCvisit((void*)(*a)._kind_4.adType, op);
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 2):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 1):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 3):
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 36):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 37):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 19):
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 41):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 70):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 67):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 15):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 58):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 51):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 43):
	break;
	default:
	break;
	} 
	nimGCvisit((void*)(*a).anchor, op);
	nimGCvisit((void*)(*a).sons, op);
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
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
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5300)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent__system_716(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_system_5300(p);
	decRef_system_5345(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstNode_packagesZdocutilsZrstast_109)(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind, tySequence__V9cBl110bSARQ3Xk9bVaXHDw* sons, NimStringDesc* anchor) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* T1_;
	NimStringDesc* T2_;
	result = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)0;
	T1_ = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)0;
	T1_ = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) newObj((&NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_), sizeof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ));
	(*T1_).kind = kind;
	genericSeqAssign((&(*T1_).sons), sons, (&NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_));
	T2_ = (NimStringDesc*)0;
	T2_ = (*T1_).anchor; (*T1_).anchor = copyStringRC1(anchor);
	if (T2_) nimGCunrefNoCycle(T2_);
	result = T1_;
	return result;
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
N_LIB_PRIVATE N_NIMCALL(void, add_packagesZdocutilsZrstast_196)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* son) {
	NI T1_;
	asgnRef((void**) (&(*father).sons), (tySequence__V9cBl110bSARQ3Xk9bVaXHDw*) incrSeqV3((TGenericSeq*)((*father).sons), (&NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_)));
	T1_ = (*father).sons->Sup.len++;
	asgnRef((void**) (&(*father).sons->data[T1_]), son);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstLeaf_packagesZdocutilsZrstast_187)(NimStringDesc* s) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	tySequence__V9cBl110bSARQ3Xk9bVaXHDw* T1_;
	NimStringDesc* T2_;
	result = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)0;
	T1_ = (tySequence__V9cBl110bSARQ3Xk9bVaXHDw*)0;
	T1_ = NIM_NIL;
	result = newRstNode_packagesZdocutilsZrstast_109(((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 73), T1_, ((NimStringDesc*) NIM_NIL));
	T2_ = (NimStringDesc*)0;
	T2_ = (*result)._kind_1.text; (*result)._kind_1.text = copyStringRC1(s);
	if (T2_) nimGCunrefNoCycle(T2_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, len_packagesZdocutilsZrstast_102)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstNode_packagesZdocutilsZrstast_157)(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind, tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA info, tySequence__V9cBl110bSARQ3Xk9bVaXHDw* sons) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* T1_;
	result = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)0;
	T1_ = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)0;
	T1_ = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) newObj((&NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_), sizeof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ));
	(*T1_).kind = kind;
	genericSeqAssign((&(*T1_).sons), sons, (&NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_));
	result = T1_;
	(*result)._kind_7.info = info;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add_packagesZdocutilsZrstast_203)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, NimStringDesc* s) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* T1_;
	NI T2_;
	T1_ = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)0;
	T1_ = newRstLeaf_packagesZdocutilsZrstast_187(s);
	asgnRef((void**) (&(*father).sons), (tySequence__V9cBl110bSARQ3Xk9bVaXHDw*) incrSeqV3((TGenericSeq*)((*father).sons), (&NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_)));
	T2_ = (*father).sons->Sup.len++;
	asgnRef((void**) (&(*father).sons->data[T2_]), T1_);
}
N_LIB_PRIVATE N_NIMCALL(void, addIfNotNil_packagesZdocutilsZrstast_210)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* son) {
	{
		if (!!((son == ((tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) NIM_NIL)))) goto LA3_;
		add_packagesZdocutilsZrstast_196(father, son);
	}
	LA3_: ;
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderRstToText_packagesZdocutilsZrstast_452)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* node) {
	NimStringDesc* result;
{	result = (NimStringDesc*)0;
	{
		if (!(node == ((tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) NIM_NIL))) goto LA3_;
		result = ((NimStringDesc*) NIM_NIL);
		goto BeforeRet_;
	}
	LA3_: ;
	switch ((*node).kind) {
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 73):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 71):
	{
		result = resizeString(result, ((*node)._kind_1.text ? (*node)._kind_1.text->Sup.len : 0) + 0);
appendString(result, (*node)._kind_1.text);
	}
	break;
	default:
	{
		{
			if (!((*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 59) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 67) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 68) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 58))) goto LA9_;
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__FFuHZ12IqCWTUfe3IbRMEg_7));
		}
		LA9_: ;
		{
			NI i;
			NI colontmp_;
			NI T12_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			T12_ = ((*node).sons ? (*node).sons->Sup.len : 0);
			colontmp_ = T12_;
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA14;
					i = i_2;
					{
						NimStringDesc* T22_;
						{
							NIM_BOOL T18_;
							T18_ = (NIM_BOOL)0;
							T18_ = ((*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 58) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 51));
							if (!(T18_)) goto LA19_;
							T18_ = (i == ((NI) 0));
							LA19_: ;
							if (!T18_) goto LA20_;
							goto LA15;
						}
						LA20_: ;
						T22_ = (NimStringDesc*)0;
						T22_ = renderRstToText_packagesZdocutilsZrstast_452((*node).sons->data[i]);
						result = resizeString(result, (T22_ ? T22_->Sup.len : 0) + 0);
appendString(result, T22_);
					} LA15: ;
					i_2 += ((NI) 1);
				} LA14: ;
			}
		}
		{
			if (!((*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 59) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 67) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 68) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ) 58))) goto LA25_;
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__FFuHZ12IqCWTUfe3IbRMEg_7));
		}
		LA25_: ;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, lastSon_packagesZdocutilsZrstast_190)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* n) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	NI T1_;
	result = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = (*n).sons->data[(NI)(T1_ - ((NI) 1))];
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_rstastDatInit000)(void) {
static TNimNode* TM__FFuHZ12IqCWTUfe3IbRMEg_2_3[3];
static TNimNode* TM__FFuHZ12IqCWTUfe3IbRMEg_3_74[74];
NI TM__FFuHZ12IqCWTUfe3IbRMEg_5;
static char* NIM_CONST TM__FFuHZ12IqCWTUfe3IbRMEg_4[74] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnMarkdownHeadline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnMarkdownTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnFootnote", 
"rnCitation", 
"rnFootnoteGroup", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnInternalRef", 
"rnFootnoteRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnAdmonition", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnInlineCode", 
"rnCodeFragment", 
"rnUnknownRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnInlineTarget", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnDefaultRole", 
"rnLeaf"};
static TNimNode* TM__FFuHZ12IqCWTUfe3IbRMEg_6_3[3];
static TNimNode TM__FFuHZ12IqCWTUfe3IbRMEg_0[91];
NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_.size = sizeof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ);
NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_.align = NIM_ALIGNOF(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ);
NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_.kind = 18;
NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_.base = 0;
NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_.flags = 2;
TM__FFuHZ12IqCWTUfe3IbRMEg_2_3[0] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[1];
NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_.size = sizeof(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ);
NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_.align = NIM_ALIGNOF(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ);
NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_.kind = 14;
NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_.base = 0;
NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_.flags = 3;
for (TM__FFuHZ12IqCWTUfe3IbRMEg_5 = 0; TM__FFuHZ12IqCWTUfe3IbRMEg_5 < 74; TM__FFuHZ12IqCWTUfe3IbRMEg_5++) {
TM__FFuHZ12IqCWTUfe3IbRMEg_0[TM__FFuHZ12IqCWTUfe3IbRMEg_5+2].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[TM__FFuHZ12IqCWTUfe3IbRMEg_5+2].offset = TM__FFuHZ12IqCWTUfe3IbRMEg_5;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[TM__FFuHZ12IqCWTUfe3IbRMEg_5+2].name = TM__FFuHZ12IqCWTUfe3IbRMEg_4[TM__FFuHZ12IqCWTUfe3IbRMEg_5];
TM__FFuHZ12IqCWTUfe3IbRMEg_3_74[TM__FFuHZ12IqCWTUfe3IbRMEg_5] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[TM__FFuHZ12IqCWTUfe3IbRMEg_5+2];
}
TM__FFuHZ12IqCWTUfe3IbRMEg_0[76].len = 74; TM__FFuHZ12IqCWTUfe3IbRMEg_0[76].kind = 2; TM__FFuHZ12IqCWTUfe3IbRMEg_0[76].sons = &TM__FFuHZ12IqCWTUfe3IbRMEg_3_74[0];
NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_.node = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[76];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[1].kind = 3;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[1].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, kind);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[1].typ = (&NTIrstnodekind__DNoJcMFu9cjq4EGXsLl82CQ_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[1].name = "kind";
TM__FFuHZ12IqCWTUfe3IbRMEg_0[1].sons = &NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[0];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[1].len = 74;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[77].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[77].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, _kind_1.text);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[77].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[77].name = "text";
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[73] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[77];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[71] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[77];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[78].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[78].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, _kind_2.labelFmt);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[78].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[78].name = "labelFmt";
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[8] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[78];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[79].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[79].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, _kind_3.lineIndent);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[79].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[79].name = "lineIndent";
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[28] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[79];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[80].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[80].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, _kind_4.adType);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[80].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[80].name = "adType";
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[52] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[80];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[81].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[81].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, _kind_5.level);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[81].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[81].name = "level";
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[2] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[81];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[1] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[81];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[3] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[81];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[82].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[82].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, _kind_6.order);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[82].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[82].name = "order";
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[36] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[82];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[37] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[82];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[19] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[82];
NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_.size = sizeof(tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA);
NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_.align = NIM_ALIGNOF(tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA);
NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_.kind = 18;
NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_.base = 0;
NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_.flags = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_6_3[0] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[85];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[85].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[85].offset = offsetof(tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA, line);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[85].typ = (&NTIuint4954__M4na42GvebBMnI5wV9cYMxg_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[85].name = "line";
TM__FFuHZ12IqCWTUfe3IbRMEg_6_3[1] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[86];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[86].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[86].offset = offsetof(tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA, col);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[86].typ = (&NTIint4954__kDPg4wXyR8DDyA0MeEjIsw_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[86].name = "col";
TM__FFuHZ12IqCWTUfe3IbRMEg_6_3[2] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[87];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[87].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[87].offset = offsetof(tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA, fileIndex);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[87].typ = (&NTIint5150__sVg18TP9cLifHyygRe9cro9aA_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[87].name = "fileIndex";
TM__FFuHZ12IqCWTUfe3IbRMEg_0[84].len = 3; TM__FFuHZ12IqCWTUfe3IbRMEg_0[84].kind = 2; TM__FFuHZ12IqCWTUfe3IbRMEg_0[84].sons = &TM__FFuHZ12IqCWTUfe3IbRMEg_6_3[0];
NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_.node = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[84];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[83].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[83].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, _kind_7.info);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[83].typ = (&NTItlineinfo__LpCBEHcAwE2yCs4l9cD1BOA_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[83].name = "info";
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[41] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[83];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[70] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[83];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[67] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[83];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[15] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[83];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[58] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[83];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[51] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[83];
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[43] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[83];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[88].len = 0; TM__FFuHZ12IqCWTUfe3IbRMEg_0[88].kind = 2;
NimDT___22EYjMYlm9cWcheQxrewdHQ_kind[74] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[88];
TM__FFuHZ12IqCWTUfe3IbRMEg_2_3[1] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[89];
TM__FFuHZ12IqCWTUfe3IbRMEg_0[89].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[89].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, anchor);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[89].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[89].name = "anchor";
TM__FFuHZ12IqCWTUfe3IbRMEg_2_3[2] = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[90];
NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_.size = sizeof(tySequence__V9cBl110bSARQ3Xk9bVaXHDw*);
NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_.align = NIM_ALIGNOF(tySequence__V9cBl110bSARQ3Xk9bVaXHDw*);
NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_.kind = 24;
NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_.base = (&NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_);
NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_.marker = Marker_tySequence__V9cBl110bSARQ3Xk9bVaXHDw;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[90].kind = 1;
TM__FFuHZ12IqCWTUfe3IbRMEg_0[90].offset = offsetof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ, sons);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[90].typ = (&NTIrstnodeseq__V9cBl110bSARQ3Xk9bVaXHDw_);
TM__FFuHZ12IqCWTUfe3IbRMEg_0[90].name = "sons";
TM__FFuHZ12IqCWTUfe3IbRMEg_0[0].len = 3; TM__FFuHZ12IqCWTUfe3IbRMEg_0[0].kind = 2; TM__FFuHZ12IqCWTUfe3IbRMEg_0[0].sons = &TM__FFuHZ12IqCWTUfe3IbRMEg_2_3[0];
NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_.node = &TM__FFuHZ12IqCWTUfe3IbRMEg_0[0];
NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_.size = sizeof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*);
NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_.align = NIM_ALIGNOF(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*);
NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_.kind = 22;
NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_.base = (&NTIrstnode__22EYjMYlm9cWcheQxrewdHQ_);
NTIprstnode__atGg6Dddbb7ASNaCLVdS9aA_.marker = Marker_tyRef__atGg6Dddbb7ASNaCLVdS9aA;
}

