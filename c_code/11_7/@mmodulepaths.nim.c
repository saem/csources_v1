/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <setjmp.h>
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
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
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
typedef struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w;
typedef struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
};
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
typedef NU8 tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w;
typedef NU8 tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringDesc* Field0;
NI Field1;
NI Field2;
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
struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA {
NI id;
NimStringDesc* s;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* next;
NI h;
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
typedef NU16 tySet_tyEnum_TRenderFlag__wrPgUo1ExBlHvFnXN2nSHw;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName_modulepaths_10)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, pathSubs_options_4203)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* p, NimStringDesc* config);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath_msgs_538)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(void, popSafePoint)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, nimBorrowCurrentException)(void);
N_LIB_PRIVATE N_NOINLINE(void, liMessage_msgs_1118)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w msg, NimStringDesc* arg, tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw eh, tyTuple__kN8up2W6YKc5YA9avn5mV5w info2, NIM_BOOL isRaw);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5329)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5291)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5336)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5334)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5285)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, reraiseException)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderTree_renderer_46)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag__wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, findModule_options_4508)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* modulename, NimStringDesc* currentModule);
static N_INLINE(NIM_BOOL, isEmpty_options_4493)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__renderer_2107)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NI32, fileInfoIdx_msgs_376)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename);
extern TNimType NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_3, "invalid path: ", 14);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_5, "/home/saem/Development/nim/nimskull-csource-gen/compiler/modulepaths.nim", 72);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__GM5IT6miOywfWPAzqo7pmA_4 = {((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_5),
((NI) 116),
((NI) 16)}
;
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_6, " ", 1);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_7, "using \'.\' instead of \'/\' in import paths is deprecated", 54);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__GM5IT6miOywfWPAzqo7pmA_8 = {((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_5),
((NI) 147),
((NI) 14)}
;
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_9, ".", 1);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_10, "/", 1);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_11, "invalid module name: \'$1\'", 25);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__GM5IT6miOywfWPAzqo7pmA_12 = {((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_5),
((NI) 152),
((NI) 14)}
;
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_13, "cannot open file: ", 18);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__GM5IT6miOywfWPAzqo7pmA_14 = {((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_5),
((NI) 162),
((NI) 16)}
;
extern TSafePoint* excHandler_system_2565;
extern TSafePoint* excHandler_system_2565;
extern TSafePoint* excHandler_system_2565;
extern TSafePoint* excHandler_system_2565;
extern Exception* currException_system_2566;
extern Exception* currException_system_2566;
extern Exception* currException_system_2566;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5238;
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).prev = excHandler_system_2565;
	excHandler_system_2565 = s;
}
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(void, popSafePoint)(void) {
	excHandler_system_2565 = (*excHandler_system_2565).prev;
}
static N_INLINE(Exception*, nimBorrowCurrentException)(void) {
	Exception* result;
	result = (Exception*)0;
	result = currException_system_2566;
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
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef_system_5329)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent__system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5291)(void* usr) {
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
static N_INLINE(void, rtlAddZCT_system_5334)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_system_5285((&gch_system_5238.zct), c);
}
static N_INLINE(void, decRef_system_5336)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent__system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent__system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT_system_5334(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_system_5291(src);
		incRef_system_5329(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_system_5291((*dest));
		decRef_system_5336(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_system_2566), (*currException_system_2566).up);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName_modulepaths_10)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* volatile result;
	result = (NimStringDesc*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 20):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 21):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		TSafePoint TM__GM5IT6miOywfWPAzqo7pmA_2;
		NimStringDesc* T2_;
		tyTuple__7q7q3E6Oj24ZNVJb9aonhAg T3_;
		pushSafePoint(&TM__GM5IT6miOywfWPAzqo7pmA_2);
		TM__GM5IT6miOywfWPAzqo7pmA_2.status = setjmp(TM__GM5IT6miOywfWPAzqo7pmA_2.context);
		if (TM__GM5IT6miOywfWPAzqo7pmA_2.status == 0) {
		T2_ = (NimStringDesc*)0;
		T2_ = toFullPath_msgs_538(conf, (*n).info.fileIndex);
		nimZeroMem((void*)(&T3_), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
		nossplitFile(T2_, (&T3_));
		result = pathSubs_options_4203(conf, (*n)._kind_3.strVal, T3_.Field0);
		popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(nimBorrowCurrentException()->Sup.m_type, (&NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_))) {
				NimStringDesc* T6_;
				TM__GM5IT6miOywfWPAzqo7pmA_2.status = 0;
				T6_ = (NimStringDesc*)0;
				T6_ = rawNewString(((*n)._kind_3.strVal ? (*n)._kind_3.strVal->Sup.len : 0) + 14);
appendString(T6_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_3));
appendString(T6_, (*n)._kind_3.strVal);
				liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), T6_, ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__GM5IT6miOywfWPAzqo7pmA_4, NIM_FALSE);
				result = copyString((*n)._kind_3.strVal);
				popCurrentException();
			}
		}
		if (TM__GM5IT6miOywfWPAzqo7pmA_2.status != 0) reraiseException();
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = copyString((*(*n)._kind_5.ident).s);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = copyString((*(*(*n)._kind_4.sym).name).s);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 29):
	{
		tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n0;
		tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n1;
		NimStringDesc* modname;
		NimStringDesc* T10_;
		NimStringDesc* T11_;
		n0 = (*n)._kind_6.sons->data[((NI) 0)];
		n1 = (*n)._kind_6.sons->data[((NI) 1)];
		modname = getModuleName_modulepaths_10(conf, (*n)._kind_6.sons->data[((NI) 2)]);
		result = getModuleName_modulepaths_10(conf, n1);
		T10_ = (NimStringDesc*)0;
		T10_ = renderTree_renderer_46(n0, 4);
		T11_ = (NimStringDesc*)0;
		T11_ = nsuReplaceStr(T10_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_6), ((NimStringDesc*) NIM_NIL));
		result = resizeString(result, (T11_ ? T11_->Sup.len : 0) + 0);
appendString(result, T11_);
		result = resizeString(result, (modname ? modname->Sup.len : 0) + 0);
appendString(result, modname);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 30):
	{
		NimStringDesc* T13_;
		T13_ = (NimStringDesc*)0;
		T13_ = renderTree_renderer_46(n, 4);
		result = nsuReplaceStr(T13_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_6), ((NimStringDesc*) NIM_NIL));
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 45):
	{
		NimStringDesc* T15_;
		liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 20), ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_7), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__GM5IT6miOywfWPAzqo7pmA_8, NIM_FALSE);
		T15_ = (NimStringDesc*)0;
		T15_ = renderTree_renderer_46(n, 4);
		result = nsuReplaceStr(T15_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_9), ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_10));
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 78):
	{
		result = getModuleName_modulepaths_10(conf, (*n)._kind_6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* T18_;
		NimStringDesc* T19_;
		T18_ = (NimStringDesc*)0;
		T18_ = renderTree_renderer_46(n, 0);
		T19_ = (NimStringDesc*)0;
		T19_ = nsuFormatSingleElem(((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_11), T18_);
		liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), T19_, ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__GM5IT6miOywfWPAzqo7pmA_12, NIM_FALSE);
		result = ((NimStringDesc*) NIM_NIL);
	}
	break;
	}
	return result;
}
static N_INLINE(NIM_BOOL, isEmpty_options_4493)(NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((x ? x->Sup.len : 0) == ((NI) 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI32, checkModuleName_modulepaths_21)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NIM_BOOL doLocalError) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullPath;
	NimStringDesc* T1_;
	result = (NI32)0;
	modulename = getModuleName_modulepaths_10(conf, n);
	T1_ = (NimStringDesc*)0;
	T1_ = toFullPath_msgs_538(conf, (*n).info.fileIndex);
	fullPath = findModule_options_4508(conf, modulename, T1_);
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = isEmpty_options_4493(fullPath);
		if (!T4_) goto LA5_;
		{
			NimStringDesc* m;
			NimStringDesc* T16_;
			if (!doLocalError) goto LA9_;
			{
				if (!(((NI) 0) < (modulename ? modulename->Sup.len : 0))) goto LA13_;
				m = modulename;
			}
			goto LA11_;
			LA13_: ;
			{
				m = dollar__renderer_2107(n);
			}
			LA11_: ;
			T16_ = (NimStringDesc*)0;
			T16_ = rawNewString((m ? m->Sup.len : 0) + 18);
appendString(T16_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_13));
appendString(T16_, m);
			liMessage_msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), T16_, ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__GM5IT6miOywfWPAzqo7pmA_14, NIM_FALSE);
		}
		LA9_: ;
		result = ((NI32) -1);
	}
	goto LA2_;
	LA5_: ;
	{
		result = fileInfoIdx_msgs_376(conf, fullPath);
	}
	LA2_: ;
	return result;
}
