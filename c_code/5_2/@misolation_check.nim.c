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
typedef struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA;
typedef struct tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA;
typedef struct tySequence__Bre9bNyuQOg1EJKitjSzn8w tySequence__Bre9bNyuQOg1EJKitjSzn8w;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
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
typedef NU8 tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw;
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__NbBRo5rVxVVQby3QsoZkZQ) (tyObject_TType__facALICuu8zUj0hjvbTLFg* t);
typedef NI tyArray__emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA {
NI elems;
NI counter;
NI max;
tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* head;
tySequence__Bre9bNyuQOg1EJKitjSzn8w* data;
tyArray__emiAJ8okywrJw7ZHLzlXbQ a;
};
typedef NU8 tyEnum_TDistinctCompare__9bNKHGs63atuMFXnAleTveg;
typedef NU8 tySet_tyEnum_TTypeCmpFlag__72pgRXSg7774cr9aCWVPORw;
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
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A {
  TGenericSeq Sup;
  tyObject_TType__facALICuu8zUj0hjvbTLFg* data[SEQ_DECL_SIZE];
};
struct tySequence__Bre9bNyuQOg1EJKitjSzn8w {
  TGenericSeq Sup;
  tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsTyRef_types_648)(tyObject_TType__facALICuu8zUj0hjvbTLFg* typ);
static N_INLINE(NI, len_ast_3197)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, checkIsolate_isolation95check_104)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NIM_BOOL, isCompileTimeOnly_types_3525)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias_isolation95check_99)(tyObject_TType__facALICuu8zUj0hjvbTLFg* arg, tyObject_TType__facALICuu8zUj0hjvbTLFg* ret);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValueOnlyType_isolation95check_89)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, searchTypeFor_types_470)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t, tyProc__NbBRo5rVxVVQby3QsoZkZQ predicate);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, wrap_isolation95check_92)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(void, initIntSet_pureZcollectionsZintsets_238)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result);
N_LIB_PRIVATE N_NIMCALL(void, initPackedSet_pureZcollectionsZintsets_16)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias_isolation95check_5)(tyObject_TType__facALICuu8zUj0hjvbTLFg* arg, tyObject_TType__facALICuu8zUj0hjvbTLFg* ret, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsOrIncl_astalgo_402)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* s, NI key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, compareTypes_types_2668)(tyObject_TType__facALICuu8zUj0hjvbTLFg* x, tyObject_TType__facALICuu8zUj0hjvbTLFg* y, tyEnum_TDistinctCompare__9bNKHGs63atuMFXnAleTveg cmp, tySet_tyEnum_TTypeCmpFlag__72pgRXSg7774cr9aCWVPORw flags);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isFinal_types_750)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAliasN_isolation95check_9)(tyObject_TType__facALICuu8zUj0hjvbTLFg* arg, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, lastSon_ast_4831)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, len_ast_4001)(tyObject_TType__facALICuu8zUj0hjvbTLFg* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__facALICuu8zUj0hjvbTLFg*, lastSon_ast_3742)(tyObject_TType__facALICuu8zUj0hjvbTLFg* n);
static N_INLINE(NI, safeLen_ast_3190)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, len_ast_3197)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n)._kind_6.sons ? (*n)._kind_6.sons->Sup.len : 0);
	result = T1_;
	return result;
}
static N_INLINE(NIM_BOOL, isCompileTimeOnly_types_3525)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((*t).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 8) || (*t).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 60));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, wrap_isolation95check_92)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((*t).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 22) || (*t).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 21) || (*t).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 23) || (*t).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 47));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValueOnlyType_isolation95check_89)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = searchTypeFor_types_470(t, wrap_isolation95check_92);
	result = !(T1_);
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
static N_INLINE(void, initIntSet_pureZcollectionsZintsets_238)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result) {
	initPackedSet_pureZcollectionsZintsets_16(Result);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAliasN_isolation95check_9)(tyObject_TType__facALICuu8zUj0hjvbTLFg* arg, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
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
					result = canAliasN_isolation95check_9(arg, (*n)._kind_6.sons->data[i], marker);
					{
						if (!result) goto LA7_;
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
		result = canAliasN_isolation95check_9(arg, (*n)._kind_6.sons->data[((NI) 0)], marker);
		{
			if (!result) goto LA12_;
			goto BeforeRet_;
		}
		LA12_: ;
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
					if (!(i_4 < colontmp__2)) goto LA16;
					i_3 = i_4;
					switch ((*(*n)._kind_6.sons->data[i_3]).kind) {
					case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T18_;
						T18_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
						T18_ = lastSon_ast_4831((*n)._kind_6.sons->data[i_3]);
						result = canAliasN_isolation95check_9(arg, T18_, marker);
						{
							if (!result) goto LA21_;
							goto BeforeRet_;
						}
						LA21_: ;
					}
					break;
					default:
					{
					}
					break;
					}
					i_4 += ((NI) 1);
				} LA16: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = canAlias_isolation95check_5(arg, (*(*n)._kind_4.sym).typ, marker);
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
static N_INLINE(NI, len_ast_4001)(tyObject_TType__facALICuu8zUj0hjvbTLFg* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias_isolation95check_5)(tyObject_TType__facALICuu8zUj0hjvbTLFg* arg, tyObject_TType__facALICuu8zUj0hjvbTLFg* ret, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		tyObject_TType__facALICuu8zUj0hjvbTLFg* xX60gensym7_;
		NIM_BOOL T3_;
		xX60gensym7_ = ret;
		T3_ = (NIM_BOOL)0;
		T3_ = containsOrIncl_astalgo_402(marker, (NI)((NI)((NU64)(((NI) ((*xX60gensym7_).Sup.itemId.module))) << (NU64)(((NI) 24))) + ((NI) ((*xX60gensym7_).Sup.itemId.item))));
		if (!T3_) goto LA4_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA4_: ;
	{
		if (!((*ret).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 21) || (*ret).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 26))) goto LA8_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA8_: ;
	{
		NIM_BOOL T12_;
		T12_ = (NIM_BOOL)0;
		T12_ = compareTypes_types_2668(arg, ret, ((tyEnum_TDistinctCompare__9bNKHGs63atuMFXnAleTveg) 1), 0);
		if (!T12_) goto LA13_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA13_: ;
	switch ((*ret).kind) {
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 17):
	{
		{
			NIM_BOOL T18_;
			T18_ = (NIM_BOOL)0;
			T18_ = isFinal_types_750(ret);
			if (!T18_) goto LA19_;
			result = canAliasN_isolation95check_9(arg, (*ret).n, marker);
			{
				NIM_BOOL T23_;
				NIM_BOOL T24_;
				NI T26_;
				T23_ = (NIM_BOOL)0;
				T24_ = (NIM_BOOL)0;
				T24_ = !(result);
				if (!(T24_)) goto LA25_;
				T26_ = (NI)0;
				T26_ = len_ast_4001(ret);
				T24_ = (((NI) 0) < T26_);
				LA25_: ;
				T23_ = T24_;
				if (!(T23_)) goto LA27_;
				T23_ = !(((*ret).sons->data[((NI) 0)] == ((tyObject_TType__facALICuu8zUj0hjvbTLFg*) NIM_NIL)));
				LA27_: ;
				if (!T23_) goto LA28_;
				result = canAlias_isolation95check_5(arg, (*ret).sons->data[((NI) 0)], marker);
			}
			LA28_: ;
		}
		goto LA16_;
		LA19_: ;
		{
			result = NIM_TRUE;
		}
		LA16_: ;
	}
	break;
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 18):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len_ast_4001(ret);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA34;
					i = i_2;
					result = canAlias_isolation95check_5(arg, (*ret).sons->data[i], marker);
					{
						if (!result) goto LA37_;
						goto LA32;
					}
					LA37_: ;
					i_2 += ((NI) 1);
				} LA34: ;
			}
		} LA32: ;
	}
	break;
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 16):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 24):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 13):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 11):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 4):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 55):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 46):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 47):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 45):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 22):
	{
		tyObject_TType__facALICuu8zUj0hjvbTLFg* T40_;
		T40_ = (tyObject_TType__facALICuu8zUj0hjvbTLFg*)0;
		T40_ = lastSon_ast_3742(ret);
		result = canAlias_isolation95check_5(arg, T40_, marker);
	}
	break;
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 25):
	{
		result = ((*ret).callConv == ((tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA) 9));
	}
	break;
	default:
	{
		result = NIM_FALSE;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias_isolation95check_99)(tyObject_TType__facALICuu8zUj0hjvbTLFg* arg, tyObject_TType__facALICuu8zUj0hjvbTLFg* ret) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isValueOnlyType_isolation95check_89(arg);
		if (!T3_) goto LA4_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA marker;
		nimZeroMem((void*)(&marker), sizeof(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA));
		initIntSet_pureZcollectionsZintsets_238((&marker));
		result = canAlias_isolation95check_5(arg, ret, (&marker));
	}
	LA1_: ;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, checkIsolate_isolation95check_104)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = containsTyRef_types_648((*n).typ);
		if (!T3_) goto LA4_;
		switch ((*n).kind) {
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 23):
		{
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 26) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 32):
		{
			{
				if (!!((((*(*(*n)._kind_6.sons->data[((NI) 0)]).typ).flags &((NU64)1<<((NU)(((tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw) 1))&63U)))!=0))) goto LA10_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			LA10_: ;
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
						if (!(i_2 < colontmp_)) goto LA14;
						i = i_2;
						{
							NIM_BOOL T17_;
							T17_ = (NIM_BOOL)0;
							T17_ = checkIsolate_isolation95check_104((*n)._kind_6.sons->data[i]);
							if (!T17_) goto LA18_;
						}
						goto LA15_;
						LA18_: ;
						{
							tyObject_TType__facALICuu8zUj0hjvbTLFg* argType;
							argType = (*(*n)._kind_6.sons->data[i]).typ;
							{
								NIM_BOOL T23_;
								NIM_BOOL T24_;
								NIM_BOOL T26_;
								T23_ = (NIM_BOOL)0;
								T24_ = (NIM_BOOL)0;
								T24_ = !((argType == ((tyObject_TType__facALICuu8zUj0hjvbTLFg*) NIM_NIL)));
								if (!(T24_)) goto LA25_;
								T26_ = (NIM_BOOL)0;
								T26_ = isCompileTimeOnly_types_3525(argType);
								T24_ = !(T26_);
								LA25_: ;
								T23_ = T24_;
								if (!(T23_)) goto LA27_;
								T23_ = containsTyRef_types_648(argType);
								LA27_: ;
								if (!T23_) goto LA28_;
								{
									NIM_BOOL T32_;
									T32_ = (NIM_BOOL)0;
									T32_ = canAlias_isolation95check_99(argType, (*n).typ);
									if (!T32_) goto LA33_;
									result = NIM_FALSE;
									goto BeforeRet_;
								}
								LA33_: ;
							}
							LA28_: ;
						}
						LA15_: ;
						i_2 += ((NI) 1);
					} LA14: ;
				}
			}
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 92):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 48):
		{
			{
				tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* it;
				it = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_3;
					NI colontmp__2;
					NI i_4;
					i_3 = (NI)0;
					colontmp__2 = (NI)0;
					colontmp__2 = safeLen_ast_3190(n);
					i_4 = ((NI) 0);
					{
						while (1) {
							tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T40_;
							if (!(i_4 < colontmp__2)) goto LA39;
							i_3 = i_4;
							it = (*n)._kind_6.sons->data[i_3];
							T40_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
							T40_ = lastSon_ast_4831(it);
							result = checkIsolate_isolation95check_104(T40_);
							{
								if (!!(result)) goto LA43_;
								goto LA36;
							}
							LA43_: ;
							i_4 += ((NI) 1);
						} LA39: ;
					}
				}
			} LA36: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 97):
		{
			{
				NI i_5;
				NI colontmp__3;
				NI i_6;
				i_5 = (NI)0;
				colontmp__3 = (NI)0;
				colontmp__3 = len_ast_3197(n);
				i_6 = ((NI) 1);
				{
					while (1) {
						tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T49_;
						if (!(i_6 < colontmp__3)) goto LA48;
						i_5 = i_6;
						T49_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
						T49_ = lastSon_ast_4831((*n)._kind_6.sons->data[i_5]);
						result = checkIsolate_isolation95check_104(T49_);
						{
							if (!!(result)) goto LA52_;
							goto LA46;
						}
						LA52_: ;
						i_6 += ((NI) 1);
					} LA48: ;
				}
			} LA46: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 38):
		{
			result = NIM_TRUE;
			{
				NI i_7;
				NI colontmp__4;
				NI i_8;
				i_7 = (NI)0;
				colontmp__4 = (NI)0;
				colontmp__4 = len_ast_3197(n);
				i_8 = ((NI) 1);
				{
					while (1) {
						tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T58_;
						if (!(i_8 < colontmp__4)) goto LA57;
						i_7 = i_8;
						T58_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
						T58_ = lastSon_ast_4831((*n)._kind_6.sons->data[i_7]);
						result = checkIsolate_isolation95check_104(T58_);
						{
							if (!!(result)) goto LA61_;
							goto LA55;
						}
						LA61_: ;
						i_8 += ((NI) 1);
					} LA57: ;
				}
			} LA55: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 41):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 160):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 37):
		{
			{
				tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* it_2;
				it_2 = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_9;
					NI colontmp__5;
					NI i_10;
					i_9 = (NI)0;
					colontmp__5 = (NI)0;
					colontmp__5 = safeLen_ast_3190(n);
					i_10 = ((NI) 0);
					{
						while (1) {
							if (!(i_10 < colontmp__5)) goto LA67;
							i_9 = i_10;
							it_2 = (*n)._kind_6.sons->data[i_9];
							result = checkIsolate_isolation95check_104(it_2);
							{
								if (!!(result)) goto LA70_;
								goto LA64;
							}
							LA70_: ;
							i_10 += ((NI) 1);
						} LA67: ;
					}
				}
			} LA64: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 58):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 59):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 61):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = checkIsolate_isolation95check_104((*n)._kind_6.sons->data[((NI) 1)]);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 67):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 66):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 45):
		{
			result = checkIsolate_isolation95check_104((*n)._kind_6.sons->data[((NI) 0)]);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 115):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 126):
		{
			{
				NI T77_;
				NI T80_;
				T77_ = (NI)0;
				T77_ = len_ast_3197(n);
				if (!(((NI) 0) < T77_)) goto LA78_;
				T80_ = (NI)0;
				T80_ = len_ast_3197(n);
				result = checkIsolate_isolation95check_104((*n)._kind_6.sons->data[(NI)(T80_ - ((NI) 1))]);
			}
			goto LA75_;
			LA78_: ;
			{
				result = NIM_FALSE;
			}
			LA75_: ;
		}
		break;
		default:
		{
			result = NIM_FALSE;
		}
		break;
		}
	}
	goto LA1_;
	LA4_: ;
	{
		result = NIM_TRUE;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
