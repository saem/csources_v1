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
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g;
typedef struct tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
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
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef NU8 tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag[9];
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
typedef NU8 tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw;
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
struct tyObject_TType__facALICuu8zUj0hjvbTLFg {
  tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w Sup;
tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A* sons;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* owner;
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym;
NI64 size;
NI16 align;
NI16 paddingAtEnd;
NI16 lockLevel;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType__facALICuu8zUj0hjvbTLFg* typeInst;
tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g uniqueId;
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
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
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
typedef NU8 tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w;
typedef NU8 tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringDesc* Field0;
NI Field1;
NI Field2;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A {
  TGenericSeq Sup;
  tyObject_TType__facALICuu8zUj0hjvbTLFg* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__facALICuu8zUj0hjvbTLFg*, skipTypes_ast_3734)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t, tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kinds);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5308)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5270)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5315)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5313)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5264)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, len_ast_3197)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, ithField_semmacrosanity_53)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t, NI* field);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, ithField_semmacrosanity_5)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NI* field);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, lastSon_ast_4831)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NOINLINE(void, liMessage_msgs_1118)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w msg, NimStringDesc* arg, tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw eh, tyTuple__kN8up2W6YKc5YA9avn5mV5w info2, NIM_BOOL isRaw);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__systemZdollars_3)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NimStringDesc*, toFileLineCol_msgs_615)(tyTuple__kN8up2W6YKc5YA9avn5mV5w info);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, addInt_stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x);
N_LIB_PRIVATE N_NIMCALL(void, addInt_stdZprivateZdigitsutils_167)(NimStringDesc** result, NI64 x);
N_LIB_PRIVATE N_NIMCALL(void, internalErrorImpl_msgs_1431)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, NimStringDesc* errMsg, tyTuple__kN8up2W6YKc5YA9avn5mV5w info2);
N_LIB_PRIVATE N_NIMCALL(void, annotateType_semmacrosanity_69)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType__facALICuu8zUj0hjvbTLFg* t, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf);
static N_INLINE(NI, len_ast_4001)(tyObject_TType__facALICuu8zUj0hjvbTLFg* n);
static N_INLINE(NI, safeLen_ast_3190)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__facALICuu8zUj0hjvbTLFg*, elemType_types_263)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t);
static NIM_CONST tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag TM__gkmEeaIyT0wHpJzs9ciIEJg_2 = {
0x10, 0xa9, 0x10, 0x00, 0x00, 0x60, 0x80, 0x00,
0x00}
;
static NIM_CONST tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag TM__gkmEeaIyT0wHpJzs9ciIEJg_3 = {
0x10, 0xa9, 0xe0, 0x00, 0x00, 0xe0, 0x80, 0x00,
0x00}
;
static NIM_CONST tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag TM__gkmEeaIyT0wHpJzs9ciIEJg_4 = {
0x10, 0x09, 0xe0, 0x00, 0x00, 0xe0, 0x80, 0x00,
0x00}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_5, "invalid field at index ", 23);
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_7, "/home/saem/Development/nim/nimskull-csource-gen/compiler/semmacrosanity.nim", 75);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_6 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 58),
((NI) 20)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_8, "(", 1);
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_9, ", ", 2);
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_10, ")", 1);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_11 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 60),
((NI) 22)}
;
extern NIM_CONST tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q unknownLineInfo_lineinfos_280;
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_12 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 66),
((NI) 35)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_13, "() must have a tuple type", 25);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_14 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 71),
((NI) 17)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_15, "[] must have some form of array type", 36);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_16 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 77),
((NI) 17)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_17, "{} must have the set type", 25);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_18 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 83),
((NI) 17)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_19, "float literal must have some float type", 39);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_20 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 88),
((NI) 17)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_21, "integer literal must have some int type", 39);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_22 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 93),
((NI) 17)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_23, "string literal must be of some string type", 42);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_24 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 98),
((NI) 17)}
;
STRING_LITERAL(TM__gkmEeaIyT0wHpJzs9ciIEJg_25, "nil literal must be of some pointer type", 40);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__gkmEeaIyT0wHpJzs9ciIEJg_26 = {((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_7),
((NI) 103),
((NI) 17)}
;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5217;
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
static N_INLINE(NI, len_ast_3197)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n)._kind_6.sons ? (*n)._kind_6.sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, ithField_semmacrosanity_5)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NI* field) {
	tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* result;
{	result = (tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*)0;
	result = ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL);
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 138):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len_ast_3197(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					result = ithField_semmacrosanity_5((*n)._kind_6.sons->data[i], field);
					{
						if (!!((result == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL)))) goto LA7_;
						goto BeforeRet_;
					}
					LA7_: ;
					i_2 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 139):
	{
		{
			if (!!(((*(*n)._kind_6.sons->data[((NI) 0)]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3)))) goto LA12_;
			goto BeforeRet_;
		}
		LA12_: ;
		result = ithField_semmacrosanity_5((*n)._kind_6.sons->data[((NI) 0)], field);
		{
			if (!!((result == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL)))) goto LA16_;
			goto BeforeRet_;
		}
		LA16_: ;
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len_ast_3197(n);
			i_4 = ((NI) 1);
			{
				while (1) {
					if (!(i_4 < colontmp__2)) goto LA20;
					i_3 = i_4;
					switch ((*(*n)._kind_6.sons->data[i_3]).kind) {
					case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T22_;
						T22_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
						T22_ = lastSon_ast_4831((*n)._kind_6.sons->data[i_3]);
						result = ithField_semmacrosanity_5(T22_, field);
						{
							if (!!((result == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL)))) goto LA25_;
							goto BeforeRet_;
						}
						LA25_: ;
					}
					break;
					default:
					{
					}
					break;
					}
					i_4 += ((NI) 1);
				} LA20: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		{
			if (!((*field) == ((NI) 0))) goto LA31_;
			result = (*n)._kind_4.sym;
		}
		goto LA29_;
		LA31_: ;
		{
			(*field) -= ((NI) 1);
		}
		LA29_: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, ithField_semmacrosanity_53)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t, NI* field) {
	tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* result;
	tyObject_TType__facALICuu8zUj0hjvbTLFg* base;
{	result = (tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*)0;
	base = (*t).sons->data[((NI) 0)];
	{
		while (1) {
			tyObject_TType__facALICuu8zUj0hjvbTLFg* b;
			if (!!((base == ((tyObject_TType__facALICuu8zUj0hjvbTLFg*) NIM_NIL)))) goto LA2;
			b = skipTypes_ast_3734(base, TM__gkmEeaIyT0wHpJzs9ciIEJg_4);
			result = ithField_semmacrosanity_5((*b).n, field);
			{
				if (!!((result == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL)))) goto LA5_;
				goto BeforeRet_;
			}
			LA5_: ;
			base = (*b).sons->data[((NI) 0)];
		} LA2: ;
	}
	result = ithField_semmacrosanity_5((*t).n, field);
	}BeforeRet_: ;
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
static N_INLINE(void, addInt_stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x) {
	addInt_stdZprivateZdigitsutils_167(result, ((NI64) (x)));
}
static N_INLINE(NimStringDesc*, toFileLineCol_msgs_615)(tyTuple__kN8up2W6YKc5YA9avn5mV5w info) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = resizeString(result, (info.Field0 ? info.Field0->Sup.len : 0) + 0);
appendString(result, info.Field0);
	{
		if (!(((NI) 0) < info.Field1)) goto LA3_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_8));
		addInt_stdZprivateZdigitsutils_189((&result), info.Field1);
		{
			if (!(((NI) 0) < (NI)(info.Field2 + ((NI) 1)))) goto LA7_;
			result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_9));
			addInt_stdZprivateZdigitsutils_189((&result), (NI)(info.Field2 + ((NI) 1)));
		}
		LA7_: ;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_10));
	}
	LA3_: ;
	return result;
}
static N_INLINE(NI, len_ast_4001)(tyObject_TType__facALICuu8zUj0hjvbTLFg* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
static N_INLINE(NI, safeLen_ast_3190)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 0) && (*n).kind <= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 23))) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = len_ast_3197(n);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, annotateType_semmacrosanity_69)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType__facALICuu8zUj0hjvbTLFg* t, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf) {
	tyObject_TType__facALICuu8zUj0hjvbTLFg* x;
	x = skipTypes_ast_3734(t, TM__gkmEeaIyT0wHpJzs9ciIEJg_2);
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 38):
	{
		tyObject_TType__facALICuu8zUj0hjvbTLFg* x_2;
		x_2 = skipTypes_ast_3734(t, TM__gkmEeaIyT0wHpJzs9ciIEJg_3);
		asgnRef((void**) (&(*n).typ), t);
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
					NI j;
					tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* field;
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					j = (NI)(i - ((NI) 1));
					field = ithField_semmacrosanity_53(x_2, (&j));
					{
						NimStringDesc* T9_;
						NimStringDesc* T10_;
						if (!(field == 0)) goto LA7_;
						T9_ = (NimStringDesc*)0;
						T10_ = (NimStringDesc*)0;
						T10_ = dollar__systemZdollars_3(i);
						T9_ = rawNewString((T10_ ? T10_->Sup.len : 0) + 23);
appendString(T9_, ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_5));
appendString(T9_, T10_);
						liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), T9_, ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_6, NIM_FALSE);
					}
					goto LA5_;
					LA7_: ;
					{
						{
							NimStringDesc* argX60gensym16_;
							if (!!(((*(*n)._kind_6.sons->data[i]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 34)))) goto LA14_;
							argX60gensym16_ = toFileLineCol_msgs_615(TM__gkmEeaIyT0wHpJzs9ciIEJg_11);
							internalErrorImpl_msgs_1431(conf, unknownLineInfo_lineinfos_280, argX60gensym16_, TM__gkmEeaIyT0wHpJzs9ciIEJg_11);
						}
						LA14_: ;
						annotateType_semmacrosanity_69((*(*n)._kind_6.sons->data[i])._kind_6.sons->data[((NI) 1)], (*field).typ, conf);
					}
					LA5_: ;
					i_2 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 37):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 160):
	{
		{
			if (!((*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 18))) goto LA19_;
			asgnRef((void**) (&(*n).typ), t);
			{
				NI i_3;
				NI colontmp__2;
				NI i_4;
				i_3 = (NI)0;
				colontmp__2 = (NI)0;
				colontmp__2 = len_ast_3197(n);
				i_4 = ((NI) 0);
				{
					while (1) {
						if (!(i_4 < colontmp__2)) goto LA23;
						i_3 = i_4;
						{
							NI T26_;
							NimStringDesc* T29_;
							NimStringDesc* T30_;
							T26_ = (NI)0;
							T26_ = len_ast_4001(x);
							if (!(T26_ <= i_3)) goto LA27_;
							T29_ = (NimStringDesc*)0;
							T30_ = (NimStringDesc*)0;
							T30_ = dollar__systemZdollars_3(i_3);
							T29_ = rawNewString((T30_ ? T30_->Sup.len : 0) + 23);
appendString(T29_, ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_5));
appendString(T29_, T30_);
							liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), T29_, ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_12, NIM_FALSE);
						}
						goto LA24_;
						LA27_: ;
						{
							annotateType_semmacrosanity_69((*n)._kind_6.sons->data[i_3], (*x).sons->data[i_3], conf);
						}
						LA24_: ;
						i_4 += ((NI) 1);
					} LA23: ;
				}
			}
		}
		goto LA17_;
		LA19_: ;
		{
			NIM_BOOL T33_;
			T33_ = (NIM_BOOL)0;
			T33_ = ((*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 25));
			if (!(T33_)) goto LA34_;
			T33_ = ((*x).callConv == ((tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA) 9));
			LA34_: ;
			if (!T33_) goto LA35_;
			asgnRef((void**) (&(*n).typ), t);
		}
		goto LA17_;
		LA35_: ;
		{
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_13), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_14, NIM_FALSE);
		}
		LA17_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 41):
	{
		{
			if (!((*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 16) || (*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 24) || (*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 27))) goto LA41_;
			asgnRef((void**) (&(*n).typ), t);
			{
				tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* m;
				m = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_5;
					NI colontmp__3;
					NI i_6;
					i_5 = (NI)0;
					colontmp__3 = (NI)0;
					colontmp__3 = safeLen_ast_3190(n);
					i_6 = ((NI) 0);
					{
						while (1) {
							tyObject_TType__facALICuu8zUj0hjvbTLFg* T47_;
							if (!(i_6 < colontmp__3)) goto LA46;
							i_5 = i_6;
							m = (*n)._kind_6.sons->data[i_5];
							T47_ = (tyObject_TType__facALICuu8zUj0hjvbTLFg*)0;
							T47_ = elemType_types_263(x);
							annotateType_semmacrosanity_69(m, T47_, conf);
							i_6 += ((NI) 1);
						} LA46: ;
					}
				}
			}
		}
		goto LA39_;
		LA41_: ;
		{
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_15), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_16, NIM_FALSE);
		}
		LA39_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 39):
	{
		{
			if (!((*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 19))) goto LA52_;
			asgnRef((void**) (&(*n).typ), t);
			{
				tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* m_2;
				m_2 = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_7;
					NI colontmp__4;
					NI i_8;
					i_7 = (NI)0;
					colontmp__4 = (NI)0;
					colontmp__4 = safeLen_ast_3190(n);
					i_8 = ((NI) 0);
					{
						while (1) {
							tyObject_TType__facALICuu8zUj0hjvbTLFg* T58_;
							if (!(i_8 < colontmp__4)) goto LA57;
							i_7 = i_8;
							m_2 = (*n)._kind_6.sons->data[i_7];
							T58_ = (tyObject_TType__facALICuu8zUj0hjvbTLFg*)0;
							T58_ = elemType_types_263(x);
							annotateType_semmacrosanity_69(m_2, T58_, conf);
							i_8 += ((NI) 1);
						} LA57: ;
					}
				}
			}
		}
		goto LA50_;
		LA52_: ;
		{
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_17), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_18, NIM_FALSE);
		}
		LA50_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 19):
	{
		{
			if (!((*x).kind >= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 36) && (*x).kind <= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 39))) goto LA63_;
			asgnRef((void**) (&(*n).typ), t);
		}
		goto LA61_;
		LA63_: ;
		{
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_19), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_20, NIM_FALSE);
		}
		LA61_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 15):
	{
		{
			if (!((*x).kind >= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 31) && (*x).kind <= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 44) || (*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 1) || (*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 2) || (*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 14))) goto LA69_;
			asgnRef((void**) (&(*n).typ), t);
		}
		goto LA67_;
		LA69_: ;
		{
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_21), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_22, NIM_FALSE);
		}
		LA67_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		{
			if (!((*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 28) || (*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 29))) goto LA75_;
			asgnRef((void**) (&(*n).typ), t);
		}
		goto LA73_;
		LA75_: ;
		{
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_23), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_24, NIM_FALSE);
		}
		LA73_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 23):
	{
		{
			if (!((*x).kind >= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 21) && (*x).kind <= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 22) || (*x).kind >= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 24) && (*x).kind <= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 26) || (*x).kind >= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 28) && (*x).kind <= ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 29) || (*x).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 50))) goto LA81_;
			asgnRef((void**) (&(*n).typ), t);
		}
		goto LA79_;
		LA81_: ;
		{
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__gkmEeaIyT0wHpJzs9ciIEJg_25), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 2), TM__gkmEeaIyT0wHpJzs9ciIEJg_26, NIM_FALSE);
		}
		LA79_: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
