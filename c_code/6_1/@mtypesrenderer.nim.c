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
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType__facALICuu8zUj0hjvbTLFg* typ;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} _kind_1;
struct {NF floatVal;
} _kind_2;
struct {NimStringDesc* strVal;
} _kind_3;
struct {tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym;
} _kind_4;
struct {tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* ident;
} _kind_5;
struct {tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} _kind_6;
};
};
struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA {
NI id;
NimStringDesc* s;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* next;
NI h;
};
typedef NU8 tyEnum_TPreferedDesc__tnd4qt9c4xddV8oKV5zyusw;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g {
NI32 module;
NI32 item;
};
struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w {
  RootObj Sup;
tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g itemId;
};
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ {
  tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w Sup;
tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* gcUnsafetyReason;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* transformedBody;
} _kind_1;
struct {tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* guard;
NI bitsize;
NI alignment;
} _kind_2;
};
tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType__facALICuu8zUj0hjvbTLFg* typ;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* name;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* owner;
tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* constraint;
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
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderPlainSymbolName_typesrenderer_6)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, len_ast_3197)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderDefinitionName_renderer_88)(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* s, NIM_BOOL noQuotes);
N_LIB_PRIVATE N_NIMCALL(void, renderParamTypes_typesrenderer_123)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ** found, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderType_typesrenderer_15)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, typeToString_types_50)(tyObject_TType__facALICuu8zUj0hjvbTLFg* typ, tyEnum_TPreferedDesc__tnd4qt9c4xddV8oKV5zyusw prefer);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, X5BX5Deq__system_7376)(NimStringDesc** s, NI i, NIM_CHAR x);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_system_5315)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5313)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5264)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5270)(void* usr);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__renderer_2107)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen_0, NimStringDesc* sep);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_2, "var", 3);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_3, "ref.", 4);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_4, "ref", 3);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_5, "ptr.", 4);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_6, "ptr", 3);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_7, "proc(", 5);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_8, "proc", 4);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_9, "tuple[", 6);
STRING_LITERAL(TM__SgHDIVcSir4dkKoe0Xsi0A_10, ", ", 2);
extern TNimType NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5217;
static N_INLINE(NI, len_ast_3197)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n)._kind_6.sons ? (*n)._kind_6.sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderPlainSymbolName_typesrenderer_6)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 31):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 53):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = len_ast_3197(n);
		result = renderPlainSymbolName_typesrenderer_6((*n)._kind_6.sons->data[(NI)(T2_ - ((NI) 1))]);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = copyString((*(*n)._kind_5.ident).s);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = renderDefinitionName_renderer_88((*n)._kind_4.sym, NIM_TRUE);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 43):
	{
		result = renderPlainSymbolName_typesrenderer_6((*n)._kind_6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		result = ((NimStringDesc*) NIM_NIL);
	}
	break;
	}
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
static N_INLINE(void, X5BX5Deq__system_7376)(NimStringDesc** s, NI i, NIM_CHAR x) {
	(*s)->data[(NI)(((*s) ? (*s)->Sup.len : 0) - i)] = x;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderType_typesrenderer_15)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = copyString((*(*n)._kind_5.ident).s);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = typeToString_types_50((*(*n)._kind_4.sym).typ, ((tyEnum_TPreferedDesc__tnd4qt9c4xddV8oKV5zyusw) 0));
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 143):
	{
		{
			NI T6_;
			T6_ = (NI)0;
			T6_ = len_ast_3197(n);
			if (!(T6_ == ((NI) 1))) goto LA7_;
			result = renderType_typesrenderer_15((*n)._kind_6.sons->data[((NI) 0)]);
		}
		goto LA4_;
		LA7_: ;
		{
			result = copyString(((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_2));
		}
		LA4_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 141):
	{
		{
			NI T13_;
			NimStringDesc* T16_;
			NimStringDesc* T17_;
			T13_ = (NI)0;
			T13_ = len_ast_3197(n);
			if (!(T13_ == ((NI) 1))) goto LA14_;
			T16_ = (NimStringDesc*)0;
			T17_ = (NimStringDesc*)0;
			T17_ = renderType_typesrenderer_15((*n)._kind_6.sons->data[((NI) 0)]);
			T16_ = rawNewString((T17_ ? T17_->Sup.len : 0) + 4);
appendString(T16_, ((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_3));
appendString(T16_, T17_);
			result = T16_;
		}
		goto LA11_;
		LA14_: ;
		{
			result = copyString(((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_4));
		}
		LA11_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 142):
	{
		{
			NI T22_;
			NimStringDesc* T25_;
			NimStringDesc* T26_;
			T22_ = (NI)0;
			T22_ = len_ast_3197(n);
			if (!(T22_ == ((NI) 1))) goto LA23_;
			T25_ = (NimStringDesc*)0;
			T26_ = (NimStringDesc*)0;
			T26_ = renderType_typesrenderer_15((*n)._kind_6.sons->data[((NI) 0)]);
			T25_ = rawNewString((T26_ ? T26_->Sup.len : 0) + 4);
appendString(T25_, ((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_5));
appendString(T25_, T26_);
			result = T25_;
		}
		goto LA20_;
		LA23_: ;
		{
			result = copyString(((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_6));
		}
		LA20_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 147):
	{
		{
			NI T31_;
			tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* params;
			T31_ = (NI)0;
			T31_ = len_ast_3197(n);
			if (!(((NI) 1) < T31_)) goto LA32_;
			params = (*n)._kind_6.sons->data[((NI) 0)];
			result = copyString(((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_7));
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = len_ast_3197(params);
				i_2 = ((NI) 1);
				{
					while (1) {
						NimStringDesc* T37_;
						NimStringDesc* T38_;
						if (!(i_2 < colontmp_)) goto LA36;
						i = i_2;
						T37_ = (NimStringDesc*)0;
						T38_ = (NimStringDesc*)0;
						T38_ = renderType_typesrenderer_15((*params)._kind_6.sons->data[i]);
						T37_ = rawNewString((T38_ ? T38_->Sup.len : 0) + 1);
appendString(T37_, T38_);
appendChar(T37_, 44);
						result = resizeString(result, (T37_ ? T37_->Sup.len : 0) + 0);
appendString(result, T37_);
						i_2 += ((NI) 1);
					} LA36: ;
				}
			}
			X5BX5Deq__system_7376((&result), ((NI) 1), 41);
		}
		goto LA29_;
		LA32_: ;
		{
			result = copyString(((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_8));
		}
		LA29_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 35):
	{
		NI typePos;
		NI T41_;
		NimStringDesc* typeStr;
		T41_ = (NI)0;
		T41_ = len_ast_3197(n);
		typePos = (NI)(T41_ - ((NI) 2));
		typeStr = renderType_typesrenderer_15((*n)._kind_6.sons->data[typePos]);
		result = copyString(typeStr);
		{
			NI i_3;
			NI i_4;
			i_3 = (NI)0;
			i_4 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* T45_;
					if (!(i_4 < typePos)) goto LA44;
					i_3 = i_4;
					T45_ = (NimStringDesc*)0;
					T45_ = rawNewString((typeStr ? typeStr->Sup.len : 0) + 1);
appendChar(T45_, 44);
appendString(T45_, typeStr);
					result = resizeString(result, (T45_ ? T45_->Sup.len : 0) + 0);
appendString(result, T45_);
					i_4 += ((NI) 1);
				} LA44: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 134):
	{
		result = copyString(((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_9));
		{
			NI i_5;
			NI colontmp__2;
			NI i_6;
			i_5 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len_ast_3197(n);
			i_6 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* T50_;
					NimStringDesc* T51_;
					if (!(i_6 < colontmp__2)) goto LA49;
					i_5 = i_6;
					T50_ = (NimStringDesc*)0;
					T51_ = (NimStringDesc*)0;
					T51_ = renderType_typesrenderer_15((*n)._kind_6.sons->data[i_5]);
					T50_ = rawNewString((T51_ ? T51_->Sup.len : 0) + 1);
appendString(T50_, T51_);
appendChar(T50_, 44);
					result = resizeString(result, (T50_ ? T50_->Sup.len : 0) + 0);
appendString(result, T50_);
					i_6 += ((NI) 1);
				} LA49: ;
			}
		}
		X5BX5Deq__system_7376((&result), ((NI) 1), 93);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 42):
	{
		NimStringDesc* T53_;
		NimStringDesc* T54_;
		T53_ = (NimStringDesc*)0;
		T54_ = (NimStringDesc*)0;
		T54_ = renderType_typesrenderer_15((*n)._kind_6.sons->data[((NI) 0)]);
		T53_ = rawNewString((T54_ ? T54_->Sup.len : 0) + 1);
appendString(T53_, T54_);
appendChar(T53_, 91);
		result = T53_;
		{
			NI i_7;
			NI colontmp__3;
			NI i_8;
			i_7 = (NI)0;
			colontmp__3 = (NI)0;
			colontmp__3 = len_ast_3197(n);
			i_8 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* T58_;
					NimStringDesc* T59_;
					if (!(i_8 < colontmp__3)) goto LA57;
					i_7 = i_8;
					T58_ = (NimStringDesc*)0;
					T59_ = (NimStringDesc*)0;
					T59_ = renderType_typesrenderer_15((*n)._kind_6.sons->data[i_7]);
					T58_ = rawNewString((T59_ ? T59_->Sup.len : 0) + 1);
appendString(T58_, T59_);
appendChar(T58_, 44);
					result = resizeString(result, (T58_ ? T58_->Sup.len : 0) + 0);
appendString(result, T58_);
					i_8 += ((NI) 1);
				} LA57: ;
			}
		}
		X5BX5Deq__system_7376((&result), ((NI) 1), 93);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 26):
	{
		result = renderType_typesrenderer_15((*n)._kind_6.sons->data[((NI) 0)]);
		{
			NI i_9;
			NI colontmp__4;
			NI i_10;
			i_9 = (NI)0;
			colontmp__4 = (NI)0;
			colontmp__4 = len_ast_3197(n);
			i_10 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* T68_;
					if (!(i_10 < colontmp__4)) goto LA63;
					i_9 = i_10;
					{
						if (!(((NI) 1) < i_9)) goto LA66_;
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__SgHDIVcSir4dkKoe0Xsi0A_10));
					}
					LA66_: ;
					T68_ = (NimStringDesc*)0;
					T68_ = renderType_typesrenderer_15((*n)._kind_6.sons->data[i_9]);
					result = resizeString(result, (T68_ ? T68_->Sup.len : 0) + 0);
appendString(result, T68_);
					i_10 += ((NI) 1);
				} LA63: ;
			}
		}
	}
	break;
	default:
	{
		result = ((NimStringDesc*) NIM_NIL);
	}
	break;
	}
	return result;
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
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
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5270)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent__system_716(((NI) (ptrdiff_t) (usr)), ((NI) 8));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_system_5270(p);
	decRef_system_5315(T1_);
}
N_LIB_PRIVATE N_NIMCALL(void, renderParamTypes_typesrenderer_123)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ** found, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
{	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 76):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len_ast_3197(n);
			i_2 = ((NI) 1);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					renderParamTypes_typesrenderer_123(found, (*n)._kind_6.sons->data[i]);
					i_2 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 35):
	{
		NI typePos;
		NI T6_;
		NimStringDesc* typeStr;
		T6_ = (NI)0;
		T6_ = len_ast_3197(n);
		typePos = (NI)(T6_ - ((NI) 2));
		typeStr = renderType_typesrenderer_15((*n)._kind_6.sons->data[typePos]);
		{
			NIM_BOOL T9_;
			tyObject_TType__facALICuu8zUj0hjvbTLFg* typ;
			T9_ = (NIM_BOOL)0;
			T9_ = ((typeStr ? typeStr->Sup.len : 0) < ((NI) 1));
			if (!(T9_)) goto LA10_;
			T9_ = !(((*(*n)._kind_6.sons->data[(NI)(typePos + ((NI) 1))]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 1)));
			LA10_: ;
			if (!T9_) goto LA11_;
			typ = (*(*n)._kind_6.sons->data[(NI)(typePos + ((NI) 1))]).typ;
			{
				if (!!((typ == 0))) goto LA15_;
				typeStr = typeToString_types_50(typ, ((tyEnum_TPreferedDesc__tnd4qt9c4xddV8oKV5zyusw) 2));
			}
			LA15_: ;
			{
				if (!((typeStr ? typeStr->Sup.len : 0) < ((NI) 1))) goto LA19_;
				goto BeforeRet_;
			}
			LA19_: ;
		}
		LA11_: ;
		{
			NI i_3;
			NI i_4;
			i_3 = (NI)0;
			i_4 = ((NI) 0);
			{
				while (1) {
					NI T24_;
					NimStringDesc* T25_;
					if (!(i_4 < typePos)) goto LA23;
					i_3 = i_4;
					unsureAsgnRef((void**) (&(*found)), (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3((TGenericSeq*)((*found)), (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_)));
					T24_ = (*found)->Sup.len++;
					T25_ = (NimStringDesc*)0;
					T25_ = (*found)->data[T24_]; (*found)->data[T24_] = copyStringRC1(typeStr);
					if (T25_) nimGCunrefNoCycle(T25_);
					i_4 += ((NI) 1);
				} LA23: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* T27_;
		NI T28_;
		NimStringDesc* T29_;
		T27_ = (NimStringDesc*)0;
		T27_ = dollar__renderer_2107(n);
		unsureAsgnRef((void**) (&(*found)), (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3((TGenericSeq*)((*found)), (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_)));
		T28_ = (*found)->Sup.len++;
		T29_ = (NimStringDesc*)0;
		T29_ = (*found)->data[T28_]; (*found)->data[T28_] = copyStringRC1(T27_);
		if (T29_) nimGCunrefNoCycle(T29_);
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderParamTypes_typesrenderer_167)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* sep) {
	NimStringDesc* result;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* found;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	found = NIM_NIL;
	renderParamTypes_typesrenderer_123((&found), n);
	{
		NI T3_;
		T3_ = (found ? found->Sup.len : 0);
		if (!(((NI) 0) < T3_)) goto LA4_;
		result = nsuJoinSep(found->data, (found ? found->Sup.len : 0), sep);
	}
	LA4_: ;
	return result;
}
