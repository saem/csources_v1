/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA;
typedef struct tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA;
typedef struct tySequence__Bre9bNyuQOg1EJKitjSzn8w tySequence__Bre9bNyuQOg1EJKitjSzn8w;
typedef struct TGenericSeq TGenericSeq;
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
typedef NI tyArray__emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA {
NI elems;
NI counter;
NI max;
tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* head;
tySequence__Bre9bNyuQOg1EJKitjSzn8w* data;
tyArray__emiAJ8okywrJw7ZHLzlXbQ a;
};
struct TGenericSeq {
NI len;
NI reserved;
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
typedef NU tyArray__VqSA39cBDWnwnJySTumCdjw[8];
struct tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA {
tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* next;
NI key;
tyArray__VqSA39cBDWnwnJySTumCdjw bits;
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
struct tySequence__Bre9bNyuQOg1EJKitjSzn8w {
  TGenericSeq Sup;
  tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(void, bitincl_pureZcollectionsZintsets_98)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* s, NI key);
N_LIB_PRIVATE N_NIMCALL(tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*, intSetPut_pureZcollectionsZintsets_107)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t, NI key);
static N_INLINE(NI, nextTry_stdZpackedsets_41)(NI h, NI maxHash, NI* perturb);
static N_INLINE(NIM_BOOL, mustRehash_pureZcollectionsZintsets_118)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t);
N_LIB_PRIVATE N_NIMCALL(void, intSetEnlarge_pureZcollectionsZintsets_126)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t);
N_LIB_PRIVATE N_NIMCALL(void, intSetRawInsert_pureZcollectionsZintsets_145)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t, tySequence__Bre9bNyuQOg1EJKitjSzn8w** data, tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5309)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5271)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5316)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5314)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5265)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
extern TNimType NTItrunkseq__Bre9bNyuQOg1EJKitjSzn8w_;
extern TNimType NTItrunk__jMZvnc6V09aC24Isyj9alOEA_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5218;
N_LIB_PRIVATE N_NIMCALL(void, initPackedSet_pureZcollectionsZintsets_16)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result) {
	NI T1_;
	(*Result).elems = 0;
	(*Result).counter = 0;
	(*Result).max = 0;
	unsureAsgnRef((void**)&(*Result).head, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).data, NIM_NIL);
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 34; T1_++) {
	(*Result).a[T1_] = 0;
	}
	(*Result).elems = ((NI) 0);
	(*Result).counter = ((NI) 0);
	(*Result).max = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), ((tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*) NIM_NIL));
	unsureAsgnRef((void**) (&(*Result).data), NIM_NIL);
}
static N_INLINE(NI, nextTry_stdZpackedsets_41)(NI h, NI maxHash, NI* perturb) {
	NI result;
	NU perturb2;
	result = (NI)0;
	perturb2 = (NU)((NU64)(((NU) ((*perturb)))) >> (NU64)(((NI) 5)));
	(*perturb) = ((NI) (perturb2));
	result = (NI)((NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) + (*perturb)) & maxHash);
	return result;
}
static N_INLINE(NIM_BOOL, mustRehash_pureZcollectionsZintsets_118)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t) {
	NIM_BOOL result;
	NI length;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	length = (NI)((*t).max + ((NI) 1));
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)((*t).counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - (*t).counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}
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
N_LIB_PRIVATE N_NIMCALL(void, intSetRawInsert_pureZcollectionsZintsets_145)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t, tySequence__Bre9bNyuQOg1EJKitjSzn8w** data, tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* desc) {
	NI h;
	NI perturb;
	h = (NI)((*desc).key & (*t).max);
	perturb = (*desc).key;
	{
		while (1) {
			if (!!(((*data)->data[h] == ((tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*) NIM_NIL)))) goto LA2;
			h = nextTry_stdZpackedsets_41(h, (*t).max, (&perturb));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}
N_LIB_PRIVATE N_NIMCALL(void, intSetEnlarge_pureZcollectionsZintsets_126)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t) {
	tySequence__Bre9bNyuQOg1EJKitjSzn8w* n;
	NI oldMax;
	tySequence__Bre9bNyuQOg1EJKitjSzn8w* T8_;
	n = (tySequence__Bre9bNyuQOg1EJKitjSzn8w*)0;
	oldMax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (tySequence__Bre9bNyuQOg1EJKitjSzn8w*) newSeq((&NTItrunkseq__Bre9bNyuQOg1EJKitjSzn8w_), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= oldMax)) goto LA3;
				i = res;
				{
					if (!!(((*t).data->data[i] == ((tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*) NIM_NIL)))) goto LA6_;
					intSetRawInsert_pureZcollectionsZintsets_145((&(*t)), (&n), (*t).data->data[i]);
				}
				LA6_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	T8_ = (tySequence__Bre9bNyuQOg1EJKitjSzn8w*)0;
	T8_ = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = T8_;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*, intSetPut_pureZcollectionsZintsets_107)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* t, NI key) {
	tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* result;
	NI h;
	NI perturb;
{	result = (tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*)0;
	h = (NI)(key & (*t).max);
	perturb = key;
	{
		while (1) {
			if (!!(((*t).data->data[h] == ((tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*) NIM_NIL)))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5_;
				result = (*t).data->data[h];
				goto BeforeRet_;
			}
			LA5_: ;
			h = nextTry_stdZpackedsets_41(h, (*t).max, (&perturb));
		} LA2: ;
	}
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = mustRehash_pureZcollectionsZintsets_118((&(*t)));
		if (!T9_) goto LA10_;
		intSetEnlarge_pureZcollectionsZintsets_126(t);
	}
	LA10_: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	perturb = key;
	{
		while (1) {
			if (!!(((*t).data->data[h] == ((tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*) NIM_NIL)))) goto LA13;
			h = nextTry_stdZpackedsets_41(h, (*t).max, (&perturb));
		} LA13: ;
	}
	result = (tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*) newObj((&NTItrunk__jMZvnc6V09aC24Isyj9alOEA_), sizeof(tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, bitincl_pureZcollectionsZintsets_98)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* s, NI key) {
	tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* ret;
	tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* t;
	NI u;
	ret = (tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA*)0;
	t = intSetPut_pureZcollectionsZintsets_107(s, (NI)((NI64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] = (NU)((*t).bits[((NI)((NI64)(u) >> (NU64)(((NI) 6))))- 0] | (NU)((NU64)(((NU) 1)) << (NU64)((NI)(u & ((NI) 63)))));
}
N_LIB_PRIVATE N_NIMCALL(void, incl_pureZcollectionsZintsets_55)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* s, NI key) {
{	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI i_2;
			i = (NI)0;
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < (*s).elems)) goto LA7;
					i = i_2;
					{
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						goto BeforeRet_;
					}
					LA10_: ;
					i_2 += ((NI) 1);
				} LA7: ;
			}
		}
		{
			if (!((*s).elems < ((NI) 34))) goto LA14_;
			(*s).a[((*s).elems)- 0] = key;
			(*s).elems += ((NI) 1);
			goto BeforeRet_;
		}
		LA14_: ;
		unsureAsgnRef((void**) (&(*s).data), (tySequence__Bre9bNyuQOg1EJKitjSzn8w*) newSeq((&NTItrunkseq__Bre9bNyuQOg1EJKitjSzn8w_), ((NI) 8)));
		(*s).max = ((NI) 7);
		{
			NI i_3;
			NI i_4;
			i_3 = (NI)0;
			i_4 = ((NI) 0);
			{
				while (1) {
					if (!(i_4 < (*s).elems)) goto LA18;
					i_3 = i_4;
					bitincl_pureZcollectionsZintsets_98(s, (*s).a[(i_3)- 0]);
					i_4 += ((NI) 1);
				} LA18: ;
			}
		}
		(*s).elems = ((NI) 35);
	}
	LA3_: ;
	bitincl_pureZcollectionsZintsets_98(s, key);
	}BeforeRet_: ;
}
