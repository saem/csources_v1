/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 64

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
typedef struct tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
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
typedef struct tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw;
typedef struct tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w;
typedef struct tyObject_IdGeneratorcolonObjectType___9a3T65u6nPPLrld0SrEa57Q tyObject_IdGeneratorcolonObjectType___9a3T65u6nPPLrld0SrEa57Q;
typedef struct tySequence__eiMlYcU7NrAOGD2H36QOOQ tySequence__eiMlYcU7NrAOGD2H36QOOQ;
typedef struct tyObject_TProcCon__s5jyYR8yL1QmFqiHICzU9aQ tyObject_TProcCon__s5jyYR8yL1QmFqiHICzU9aQ;
typedef struct tyObject_TMatchedConcept__9blNHn9cqK8EfxnwsfjDnKvg tyObject_TMatchedConcept__9blNHn9cqK8EfxnwsfjDnKvg;
typedef struct tySequence__eHqUwlHGGaPw0TDPDeL79cQ tySequence__eHqUwlHGGaPw0TDPDeL79cQ;
typedef struct tySequence__oYkV9aFZe0MXcEAprJaOUsA tySequence__oYkV9aFZe0MXcEAprJaOUsA;
typedef struct tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q;
typedef struct tySequence__Mh9agqM29bm9aP5AUL1x7dZGA tySequence__Mh9agqM29bm9aP5AUL1x7dZGA;
typedef struct tySequence__arD7Tw6eD6lvOczWZl9buNg tySequence__arD7Tw6eD6lvOczWZl9buNg;
typedef struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA;
typedef struct tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA;
typedef struct tySequence__Bre9bNyuQOg1EJKitjSzn8w tySequence__Bre9bNyuQOg1EJKitjSzn8w;
typedef struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA;
typedef struct tyObject_TCtx__S3Av1Ng7MBWGEZZBhfDYCw tyObject_TCtx__S3Av1Ng7MBWGEZZBhfDYCw;
typedef struct tySequence__jWKvSdankQPoT5bw9cBU9aiw tySequence__jWKvSdankQPoT5bw9cBU9aiw;
typedef struct tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_ModuleGraphcolonObjectType___RZI3hCs0FTPYx8StfC81qQ tyObject_ModuleGraphcolonObjectType___RZI3hCs0FTPYx8StfC81qQ;
typedef struct tySequence__xSqu3cxq5WeFlOO3YgE6yA tySequence__xSqu3cxq5WeFlOO3YgE6yA;
typedef struct tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w;
typedef struct tySequence__Bis5AbpONWcIRrPyPJS8Yw tySequence__Bis5AbpONWcIRrPyPJS8Yw;
typedef struct tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w;
typedef struct tySequence__E8pi9b5QNahsURYzXMjh3qw tySequence__E8pi9b5QNahsURYzXMjh3qw;
typedef struct tyObject_Table__svXG3o7j9bfi6HJT79cNF29cQ tyObject_Table__svXG3o7j9bfi6HJT79cNF29cQ;
typedef struct tySequence__Hkw5zrAn53wlKDHdJF1GFA tySequence__Hkw5zrAn53wlKDHdJF1GFA;
typedef struct tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_ImportedModule__kyodd8HBOgfP30dipCL3JQ tyObject_ImportedModule__kyodd8HBOgfP30dipCL3JQ;
typedef struct tyObject_TOptionEntry__H9ac5KbrDJVwT1zH5O83r7w tyObject_TOptionEntry__H9ac5KbrDJVwT1zH5O83r7w;
typedef struct tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg;
typedef struct tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ;
typedef struct tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple__KNXySARiHvEh2wA9asnyYmw tyTuple__KNXySARiHvEh2wA9asnyYmw;
typedef struct tyTuple__NAaJgGVgNmlGoqmiWxdOHQ tyTuple__NAaJgGVgNmlGoqmiWxdOHQ;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tyTuple__Y6Ewh3MCxsjd1bsriN6Gag tyTuple__Y6Ewh3MCxsjd1bsriN6Gag;
typedef struct tySequence__vGU8AyGT6KxtLJwEg0BpNw tySequence__vGU8AyGT6KxtLJwEg0BpNw;
typedef struct tyTuple__KvKIqRIx9anKcDMu8DPSkHw tyTuple__KvKIqRIx9anKcDMu8DPSkHw;
typedef NU8 tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
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
struct tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w {
  RootObj Sup;
tyObject_IdGeneratorcolonObjectType___9a3T65u6nPPLrld0SrEa57Q* idgen;
};
typedef tyObject_TType__facALICuu8zUj0hjvbTLFg* tyArray__d88NmFOoQ1OEoX9af4f9aptg[38];
struct tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q {
NI counter;
tySequence__Mh9agqM29bm9aP5AUL1x7dZGA* data;
};
typedef N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, tyProc__RcJNn9bSvWdJgUmA1O6sbHA) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
typedef NU32 tySet_tyEnum_TExprFlag__0WWd9a4ssQWuY7Q6ZKepq9cQ;
typedef N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, tyProc__39auogS0nN05zO6JrT7za9cQ) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TExprFlag__0WWd9a4ssQWuY7Q6ZKepq9cQ flags);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__DZXD9cPwIfL76eNszoUR9aVA) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TType__facALICuu8zUj0hjvbTLFg* t);
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, void* ClE_0);
void* ClE_0;
} tyProc__7JwrY3AhkVNlleAJXClX9cw;
typedef NU32 tySet_tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
typedef N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, tyProc__qlV9aWvA5wrWVg9bI5PqwJyA) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* nOrig, tySet_tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw filter, tySet_tyEnum_TExprFlag__0WWd9a4ssQWuY7Q6ZKepq9cQ flags);
typedef N_NIMCALL_PTR(tyObject_TType__facALICuu8zUj0hjvbTLFg*, tyProc__IDzB9bjws1yntQXPpMRrBvA) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType__facALICuu8zUj0hjvbTLFg* prev);
typedef struct {
N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, ClP_0) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q pt, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, void* ClE_0);
void* ClE_0;
} tyProc__3cacbJ4la9bDJNibHybQSnA;
typedef struct {
N_NIMCALL_PTR(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, ClP_0) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* fn, tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q pt, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, void* ClE_0);
void* ClE_0;
} tyProc__fMj9boIZZOt9cLWRnD3rtKhA;
typedef NI tyArray__emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA {
NI elems;
NI counter;
NI max;
tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* head;
tySequence__Bre9bNyuQOg1EJKitjSzn8w* data;
tyArray__emiAJ8okywrJw7ZHLzlXbQ a;
};
struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence__eHqUwlHGGaPw0TDPDeL79cQ* data;
};
typedef NU8 tyEnum_TTypeAttachedOp__Rp5P9bWYldQTLkZ7DytmxOg;
typedef N_NIMCALL_PTR(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, tyProc__zh0Qj9bYHDZFnJnPjcxz6NQ) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* dc, tyObject_TType__facALICuu8zUj0hjvbTLFg* t, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyEnum_TTypeAttachedOp__Rp5P9bWYldQTLkZ7DytmxOg op, NI col);
typedef NU32 tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ;
struct tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w {
tySequence__Bis5AbpONWcIRrPyPJS8Yw* data;
NI counter;
};
struct tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w {
tySequence__E8pi9b5QNahsURYzXMjh3qw* data;
NI counter;
};
struct tyObject_Table__svXG3o7j9bfi6HJT79cNF29cQ {
tySequence__Hkw5zrAn53wlKDHdJF1GFA* data;
NI counter;
};
struct tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug {
  tyObject_TPassContext__Hb6rFM0ecvtlLf2kv9aU75w Sup;
tyObject_TType__facALICuu8zUj0hjvbTLFg* enforceVoidContext;
tyObject_TType__facALICuu8zUj0hjvbTLFg* voidType;
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* module;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* currentScope;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* moduleScope;
tySequence__eiMlYcU7NrAOGD2H36QOOQ* imports;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* topLevelScope;
tyObject_TProcCon__s5jyYR8yL1QmFqiHICzU9aQ* p;
tyArray__d88NmFOoQ1OEoX9af4f9aptg intTypeCache;
tyObject_TType__facALICuu8zUj0hjvbTLFg* nilTypeCache;
tyObject_TMatchedConcept__9blNHn9cqK8EfxnwsfjDnKvg* matchedConcept;
tySequence__eHqUwlHGGaPw0TDPDeL79cQ* friendModules;
NI instCounter;
NI* templInstCounter;
NI inGenericContext;
NI inStaticContext;
NI inUnrolledContext;
NI compilesContextId;
NI compilesContextIdGenerator;
NI inGenericInst;
tySequence__eHqUwlHGGaPw0TDPDeL79cQ* converters;
tySequence__eHqUwlHGGaPw0TDPDeL79cQ* patterns;
tySequence__oYkV9aFZe0MXcEAprJaOUsA* optionStack;
tyObject_TIdTable__9aiv9bp2t5icFNINcg9c4xi1Q symMapping;
tySequence__arD7Tw6eD6lvOczWZl9buNg* libs;
tyProc__RcJNn9bSvWdJgUmA1O6sbHA semConstExpr;
tyProc__39auogS0nN05zO6JrT7za9cQ semExpr;
tyProc__39auogS0nN05zO6JrT7za9cQ semTryExpr;
tyProc__RcJNn9bSvWdJgUmA1O6sbHA semTryConstExpr;
tyProc__DZXD9cPwIfL76eNszoUR9aVA computeRequiresInit;
tyProc__7JwrY3AhkVNlleAJXClX9cw hasUnresolvedArgs;
tyProc__39auogS0nN05zO6JrT7za9cQ semOperand;
tyProc__RcJNn9bSvWdJgUmA1O6sbHA semConstBoolExpr;
tyProc__qlV9aWvA5wrWVg9bI5PqwJyA semOverloadedCall;
tyProc__IDzB9bjws1yntQXPpMRrBvA semTypeNode;
tyProc__3cacbJ4la9bDJNibHybQSnA semInferredLambda;
tyProc__fMj9boIZZOt9cLWRnD3rtKhA semGenerateInstance;
tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA includedFiles;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA pureEnumFields;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA userPragmas;
tyObject_TCtx__S3Av1Ng7MBWGEZZBhfDYCw* evalContext;
tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA unknownIdents;
tySequence__jWKvSdankQPoT5bw9cBU9aiw* generics;
NI topStmts;
NI lastGenericIdx;
NI hloLoopDetector;
NI inParallelStmt;
tyProc__zh0Qj9bYHDZFnJnPjcxz6NQ instTypeBoundOp;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* selfName;
tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* cache;
tyObject_ModuleGraphcolonObjectType___RZI3hCs0FTPYx8StfC81qQ* graph;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA signatures;
NimStringDesc* recursiveDep;
NIM_BOOL suggestionsMade;
NIM_BOOL isAmbiguous;
tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ features;
NI inTypeContext;
NI inConceptDecl;
tySequence__xSqu3cxq5WeFlOO3YgE6yA* unusedImports;
tyObject_HashSet__Gy4haGrophX9bC5RxnPAc6w exportIndirections;
tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w importModuleMap;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastTLineInfo;
tyObject_Table__svXG3o7j9bfi6HJT79cNF29cQ sideEffects;
NI inUncheckedAssignSection;
};
struct tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw {
NI depthLevel;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA symbols;
tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* parent;
tySequence__eHqUwlHGGaPw0TDPDeL79cQ* allowPrivateAccess;
};
struct tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg {
NI h;
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
typedef NU8 tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag[9];
struct tyObject_IdGeneratorcolonObjectType___9a3T65u6nPPLrld0SrEa57Q {
NI32 module;
NI32 symId;
NI32 typeId_0;
NIM_BOOL sealed;
};
typedef NU8 tyEnum_ImportMode__OHfXXgrGOSWpZv16VYg4yQ;
struct tyObject_ImportedModule__kyodd8HBOgfP30dipCL3JQ {
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* m;
tyEnum_ImportMode__OHfXXgrGOSWpZv16VYg4yQ mode;
union{
struct {tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA imported;
} _mode_2;
struct {tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA exceptSet;
} _mode_3;
};
};
struct tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg {
tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w* key;
RootObj* val;
};
struct tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ {
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* genericSym;
tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA* inst;
};
struct tyTuple__KNXySARiHvEh2wA9asnyYmw {
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* Field0;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q Field1;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyTuple__NAaJgGVgNmlGoqmiWxdOHQ {
NI Field0;
tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ Field1;
};
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
struct tyTuple__KvKIqRIx9anKcDMu8DPSkHw {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q Field0;
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* Field1;
};
struct tyTuple__Y6Ewh3MCxsjd1bsriN6Gag {
NI Field0;
NI Field1;
tySequence__vGU8AyGT6KxtLJwEg0BpNw* Field2;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A {
  TGenericSeq Sup;
  tyObject_TType__facALICuu8zUj0hjvbTLFg* data[SEQ_DECL_SIZE];
};
struct tySequence__eiMlYcU7NrAOGD2H36QOOQ {
  TGenericSeq Sup;
  tyObject_ImportedModule__kyodd8HBOgfP30dipCL3JQ data[SEQ_DECL_SIZE];
};
struct tySequence__eHqUwlHGGaPw0TDPDeL79cQ {
  TGenericSeq Sup;
  tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* data[SEQ_DECL_SIZE];
};
struct tySequence__oYkV9aFZe0MXcEAprJaOUsA {
  TGenericSeq Sup;
  tyObject_TOptionEntry__H9ac5KbrDJVwT1zH5O83r7w* data[SEQ_DECL_SIZE];
};
struct tySequence__Mh9agqM29bm9aP5AUL1x7dZGA {
  TGenericSeq Sup;
  tyObject_TIdPair__AdFnD2YdADPeuJbG2YJ4vg data[SEQ_DECL_SIZE];
};
struct tySequence__arD7Tw6eD6lvOczWZl9buNg {
  TGenericSeq Sup;
  tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA* data[SEQ_DECL_SIZE];
};
struct tySequence__Bre9bNyuQOg1EJKitjSzn8w {
  TGenericSeq Sup;
  tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* data[SEQ_DECL_SIZE];
};
struct tySequence__jWKvSdankQPoT5bw9cBU9aiw {
  TGenericSeq Sup;
  tyObject_TInstantiationPair__HkXM4cJmOpk8zFcmq9c9c3gQ data[SEQ_DECL_SIZE];
};
struct tySequence__xSqu3cxq5WeFlOO3YgE6yA {
  TGenericSeq Sup;
  tyTuple__KNXySARiHvEh2wA9asnyYmw data[SEQ_DECL_SIZE];
};
struct tySequence__Bis5AbpONWcIRrPyPJS8Yw {
  TGenericSeq Sup;
  tyTuple__NAaJgGVgNmlGoqmiWxdOHQ data[SEQ_DECL_SIZE];
};
struct tySequence__E8pi9b5QNahsURYzXMjh3qw {
  TGenericSeq Sup;
  tyTuple__47w2DboNEPf69aPgubZdd7Q data[SEQ_DECL_SIZE];
};
struct tySequence__vGU8AyGT6KxtLJwEg0BpNw {
  TGenericSeq Sup;
  tyTuple__KvKIqRIx9anKcDMu8DPSkHw data[SEQ_DECL_SIZE];
};
struct tySequence__Hkw5zrAn53wlKDHdJF1GFA {
  TGenericSeq Sup;
  tyTuple__Y6Ewh3MCxsjd1bsriN6Gag data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__facALICuu8zUj0hjvbTLFg*, newTypeS_semdata_733)(tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kind, tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newNodeIT_ast_3377)(tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyObject_TType__facALICuu8zUj0hjvbTLFg* typ);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newNodeI_ast_3355)(tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5309)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5271)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5316)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5314)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5265)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, getCurrOwner_semdata_315)(tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, initTabIter_astalgo_3777)(tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg* ti, tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tab);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__facALICuu8zUj0hjvbTLFg*, skipTypes_ast_3734)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t, tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, newSym_ast_3444)(tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw symKind, tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* name, tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g id, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* owner, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options);
static N_INLINE(tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g, nextSymId_ast_3131)(tyObject_IdGeneratorcolonObjectType___9a3T65u6nPPLrld0SrEa57Q* x);
N_LIB_PRIVATE N_NIMCALL(void, add_ast_4796)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newSymNode_ast_3715)(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym);
N_LIB_PRIVATE N_NIMCALL(void, addSonSkipIntLit_magicsys_136)(tyObject_TType__facALICuu8zUj0hjvbTLFg* father, tyObject_TType__facALICuu8zUj0hjvbTLFg* son, tyObject_IdGeneratorcolonObjectType___9a3T65u6nPPLrld0SrEa57Q* id);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newSymNode_ast_3718)(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info);
static N_INLINE(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newDeref_lowerings_11)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, nextIter_astalgo_3762)(tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg* ti, tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tab);
static NIM_CONST tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag TM__tdBuY2ZF9bI7pxZ6PYkeTmw_2 = {
0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00}
;
static NIM_CONST tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag TM__tdBuY2ZF9bI7pxZ6PYkeTmw_3 = {
0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00}
;
static NIM_CONST tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag TM__tdBuY2ZF9bI7pxZ6PYkeTmw_4 = {
0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00}
;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5218;
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef_system_5309)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent__system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5271)(void* usr) {
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
static N_INLINE(void, rtlAddZCT_system_5314)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_system_5265((&gch_system_5218.zct), c);
}
static N_INLINE(void, decRef_system_5316)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent__system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent__system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT_system_5314(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_system_5271(src);
		incRef_system_5309(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_system_5271((*dest));
		decRef_system_5316(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g, nextSymId_ast_3131)(tyObject_IdGeneratorcolonObjectType___9a3T65u6nPPLrld0SrEa57Q* x) {
	tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g result;
	nimZeroMem((void*)(&result), sizeof(tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g));
	(*x).symId += ((NI) 1);
	nimZeroMem((void*)(&result), sizeof(tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g));
	result.module = (*x).module;
	result.item = (*x).symId;
	return result;
}
static N_INLINE(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newDeref_lowerings_11)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	result = newNodeIT_ast_3377(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	add_ast_4796(result, n);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, semLocals_pluginsZlocals_7)(tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	NI counter;
	tyObject_TType__facALICuu8zUj0hjvbTLFg* tupleType;
	tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* owner;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	counter = ((NI) 0);
	tupleType = newTypeS_semdata_733(((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 18), c);
	result = newNodeIT_ast_3377(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 37), (*n).info, tupleType);
	asgnRef((void**) (&(*tupleType).n), newNodeI_ast_3355(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 138), (*n).info));
	owner = getCurrOwner_semdata_315(c);
	{
		tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* scope;
		scope = (tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw*)0;
		{
			tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* s;
			tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw* current;
			s = (tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw*)0;
			current = (*c).currentScope;
			{
				while (1) {
					if (!!((current == ((tyObject_TScope__1cQRXW6aAknk7ywAwjH3nw*) NIM_NIL)))) goto LA4;
					s = current;
					{
						if (!(s == (*c).topLevelScope)) goto LA7_;
						goto LA2;
					}
					LA7_: ;
					scope = s;
					{
						tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* it;
						tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg it_2;
						tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* s_2;
						it = (tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*)0;
						nimZeroMem((void*)(&it_2), sizeof(tyObject_TTabIter__VYF5VQsIYEVaBL0fKZJkbg));
						s_2 = initTabIter_astalgo_3777((&it_2), (*scope).symbols);
						{
							while (1) {
								if (!!((s_2 == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL)))) goto LA11;
								it = s_2;
								{
									NIM_BOOL T14_;
									tyObject_TType__facALICuu8zUj0hjvbTLFg* T16_;
									T14_ = (NIM_BOOL)0;
									T14_ = ((2099976 &((NU32)1<<((NU)((*it).kind)&31U)))!=0);
									if (!(T14_)) goto LA15_;
									T16_ = (tyObject_TType__facALICuu8zUj0hjvbTLFg*)0;
									T16_ = skipTypes_ast_3734((*it).typ, TM__tdBuY2ZF9bI7pxZ6PYkeTmw_2);
									T14_ = !(((*T16_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 48) || (*T16_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 27) || (*T16_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 8) || (*T16_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 60) || (*T16_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 6) || (*T16_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 7) || (*T16_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 3)));
									LA15_: ;
									if (!T14_) goto LA17_;
									{
										tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* field;
										tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g T23_;
										tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T24_;
										tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a;
										if (!((*it).owner == owner)) goto LA21_;
										T23_ = nextSymId_ast_3131((*c).Sup.idgen);
										field = newSym_ast_3444(((tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw) 19), (*it).name, T23_, owner, (*n).info, 0);
										asgnRef((void**) (&(*field).typ), skipTypes_ast_3734((*it).typ, TM__tdBuY2ZF9bI7pxZ6PYkeTmw_3));
										(*field).position = counter;
										counter += ((NI) 1);
										T24_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
										T24_ = newSymNode_ast_3715(field);
										add_ast_4796((*tupleType).n, T24_);
										addSonSkipIntLit_magicsys_136(tupleType, (*field).typ, (*c).Sup.idgen);
										a = newSymNode_ast_3718(it, (*result).info);
										{
											tyObject_TType__facALICuu8zUj0hjvbTLFg* T27_;
											T27_ = (tyObject_TType__facALICuu8zUj0hjvbTLFg*)0;
											T27_ = skipTypes_ast_3734((*it).typ, TM__tdBuY2ZF9bI7pxZ6PYkeTmw_4);
											if (!((*T27_).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 23))) goto LA28_;
											a = newDeref_lowerings_11(a);
										}
										LA28_: ;
										add_ast_4796(result, a);
									}
									LA21_: ;
								}
								LA17_: ;
								s_2 = nextIter_astalgo_3762((&it_2), (*scope).symbols);
							} LA11: ;
						}
					}
					current = (*current).parent;
				} LA4: ;
			}
		} LA2: ;
	}
	return result;
}
