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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw;
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
typedef NU8 tyArray__qtqsWM5aXmcpMIVmvq3kAA[16];
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 tyArray__FleBT9cC2nxhgiXmSYYnEKA[4];
typedef NU32 tyArray__JlnxiR65D9cjJpwi6uBZRtA[2];
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw {
tyArray__FleBT9cC2nxhgiXmSYYnEKA state;
tyArray__JlnxiR65D9cjJpwi6uBZRtA count;
tyArray__w5VB8h5K8DB3oWrO5U2wqg buffer;
};
typedef NU32 tyArray__U0SiHM0pVagA9c71oWelQMA[16];
typedef NU8 tyArray__cdsir9aPB24hAk6k77P9b9bCA[8];
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, md5Init_pureZmd53_160)(tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw* c);
static N_INLINE(void, zeroMem_system_1724)(void* p, NI size);
N_LIB_PRIVATE N_NIMCALL(void, md5Update_pureZmd53_162)(tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw* c, NCSTRING input, NI len);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, transform_pureZmd53_143)(void* buffer, NU32* state);
N_LIB_PRIVATE N_NIMCALL(void, encode_pureZmd53_74)(NU32* dest, NCSTRING src);
N_LIB_PRIVATE N_NIMCALL(void, FF_pureZmd53_42)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, F_pureZmd53_11)(NU32 x, NU32 y, NU32 z);
static N_INLINE(void, rot_pureZmd53_31)(NU32* x, NU8 n);
N_LIB_PRIVATE N_NIMCALL(void, GG_pureZmd53_50)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, G_pureZmd53_16)(NU32 x, NU32 y, NU32 z);
N_LIB_PRIVATE N_NIMCALL(void, HH_pureZmd53_58)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, H_pureZmd53_21)(NU32 x, NU32 y, NU32 z);
N_LIB_PRIVATE N_NIMCALL(void, II_pureZmd53_66)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, I_pureZmd53_26)(NU32 x, NU32 y, NU32 z);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, md5Final_pureZmd53_166)(tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw* c, NU8* digest);
N_LIB_PRIVATE N_NIMCALL(void, decode_pureZmd53_115)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__pureZmd53_182)(tyArray__qtqsWM5aXmcpMIVmvq3kAA d);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
extern TNimType NTIuint56__k3HXouOuhqAKq0dx450lXQ_;
N_LIB_PRIVATE TNimType NTImd53digest__qtqsWM5aXmcpMIVmvq3kAA_;
STRING_LITERAL(TM__evv4Z8qaB9aehA3eX73W1Cw_2, "0123456789abcdef", 16);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(void, zeroMem_system_1724)(void* p, NI size) {
	nimZeroMem(p, size);
}
N_LIB_PRIVATE N_NIMCALL(void, md5Init_pureZmd53_160)(tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw* c) {
	(*c).state[(((NI) 0))- 0] = ((NU32) 1732584193);
	(*c).state[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	(*c).state[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	(*c).state[(((NI) 3))- 0] = ((NU32) 271733878);
	(*c).count[(((NI) 0))- 0] = ((NU32) 0);
	(*c).count[(((NI) 1))- 0] = ((NU32) 0);
	zeroMem_system_1724(((void*) ((*c).buffer)), ((NI) 64));
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
N_LIB_PRIVATE N_NIMCALL(void, encode_pureZmd53_74)(NU32* dest, NCSTRING src) {
	NI j;
	j = ((NI) 0);
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 15))) goto LA3;
				i = res;
				dest[(i)- 0] = (NU32)((NU32)((NU32)(((NU32) (((NU8)(src[j])))) | (NU32)((NU64)(((NU32) (((NU8)(src[(NI)(j + ((NI) 1))]))))) << (NU64)(((NI) 8)))) | (NU32)((NU64)(((NU32) (((NU8)(src[(NI)(j + ((NI) 2))]))))) << (NU64)(((NI) 16)))) | (NU32)((NU64)(((NU32) (((NU8)(src[(NI)(j + ((NI) 3))]))))) << (NU64)(((NI) 24))));
				j += ((NI) 4);
				res += ((NI) 1);
			} LA3: ;
		}
	}
}
static N_INLINE(NU32, F_pureZmd53_11)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x & y) | (NU32)((NU32)((NU32) ~(x)) & z));
	return result;
}
static N_INLINE(void, rot_pureZmd53_31)(NU32* x, NU8 n) {
	(*x) = (NU32)((NU32)((NU32)((*x)) << (NU32)(n)) | (NU32)((NU32)((*x)) >> (NU32)((NU32)((NU32)(((NU32) 32)) - (NU32)(((NU32) (n)))))));
}
N_LIB_PRIVATE N_NIMCALL(void, FF_pureZmd53_42)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = F_pureZmd53_11(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_pureZmd53_31(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}
static N_INLINE(NU32, G_pureZmd53_16)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x & z) | (NU32)(y & (NU32)((NU32) ~(z))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, GG_pureZmd53_50)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = G_pureZmd53_16(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_pureZmd53_31(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}
static N_INLINE(NU32, H_pureZmd53_21)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x ^ y) ^ z);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, HH_pureZmd53_58)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = H_pureZmd53_21(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_pureZmd53_31(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}
static N_INLINE(NU32, I_pureZmd53_26)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)(y ^ (NU32)(x | (NU32)((NU32) ~(z))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, II_pureZmd53_66)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
	T1_ = (NU32)0;
	T1_ = I_pureZmd53_26(b, c, d);
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot_pureZmd53_31(a, s);
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
}
N_LIB_PRIVATE N_NIMCALL(void, transform_pureZmd53_143)(void* buffer, NU32* state) {
	tyArray__U0SiHM0pVagA9c71oWelQMA myBlock;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	nimZeroMem((void*)myBlock, sizeof(tyArray__U0SiHM0pVagA9c71oWelQMA));
	encode_pureZmd53_74(myBlock, ((NCSTRING) (buffer)));
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	FF_pureZmd53_42((&a), b, c, d, myBlock[(((NI) 0))- 0], ((NU8) 7), ((NU32) IL64(3614090360)));
	FF_pureZmd53_42((&d), a, b, c, myBlock[(((NI) 1))- 0], ((NU8) 12), ((NU32) IL64(3905402710)));
	FF_pureZmd53_42((&c), d, a, b, myBlock[(((NI) 2))- 0], ((NU8) 17), ((NU32) 606105819));
	FF_pureZmd53_42((&b), c, d, a, myBlock[(((NI) 3))- 0], ((NU8) 22), ((NU32) IL64(3250441966)));
	FF_pureZmd53_42((&a), b, c, d, myBlock[(((NI) 4))- 0], ((NU8) 7), ((NU32) IL64(4118548399)));
	FF_pureZmd53_42((&d), a, b, c, myBlock[(((NI) 5))- 0], ((NU8) 12), ((NU32) 1200080426));
	FF_pureZmd53_42((&c), d, a, b, myBlock[(((NI) 6))- 0], ((NU8) 17), ((NU32) IL64(2821735955)));
	FF_pureZmd53_42((&b), c, d, a, myBlock[(((NI) 7))- 0], ((NU8) 22), ((NU32) IL64(4249261313)));
	FF_pureZmd53_42((&a), b, c, d, myBlock[(((NI) 8))- 0], ((NU8) 7), ((NU32) 1770035416));
	FF_pureZmd53_42((&d), a, b, c, myBlock[(((NI) 9))- 0], ((NU8) 12), ((NU32) IL64(2336552879)));
	FF_pureZmd53_42((&c), d, a, b, myBlock[(((NI) 10))- 0], ((NU8) 17), ((NU32) IL64(4294925233)));
	FF_pureZmd53_42((&b), c, d, a, myBlock[(((NI) 11))- 0], ((NU8) 22), ((NU32) IL64(2304563134)));
	FF_pureZmd53_42((&a), b, c, d, myBlock[(((NI) 12))- 0], ((NU8) 7), ((NU32) 1804603682));
	FF_pureZmd53_42((&d), a, b, c, myBlock[(((NI) 13))- 0], ((NU8) 12), ((NU32) IL64(4254626195)));
	FF_pureZmd53_42((&c), d, a, b, myBlock[(((NI) 14))- 0], ((NU8) 17), ((NU32) IL64(2792965006)));
	FF_pureZmd53_42((&b), c, d, a, myBlock[(((NI) 15))- 0], ((NU8) 22), ((NU32) 1236535329));
	GG_pureZmd53_50((&a), b, c, d, myBlock[(((NI) 1))- 0], ((NU8) 5), ((NU32) IL64(4129170786)));
	GG_pureZmd53_50((&d), a, b, c, myBlock[(((NI) 6))- 0], ((NU8) 9), ((NU32) IL64(3225465664)));
	GG_pureZmd53_50((&c), d, a, b, myBlock[(((NI) 11))- 0], ((NU8) 14), ((NU32) 643717713));
	GG_pureZmd53_50((&b), c, d, a, myBlock[(((NI) 0))- 0], ((NU8) 20), ((NU32) IL64(3921069994)));
	GG_pureZmd53_50((&a), b, c, d, myBlock[(((NI) 5))- 0], ((NU8) 5), ((NU32) IL64(3593408605)));
	GG_pureZmd53_50((&d), a, b, c, myBlock[(((NI) 10))- 0], ((NU8) 9), ((NU32) 38016083));
	GG_pureZmd53_50((&c), d, a, b, myBlock[(((NI) 15))- 0], ((NU8) 14), ((NU32) IL64(3634488961)));
	GG_pureZmd53_50((&b), c, d, a, myBlock[(((NI) 4))- 0], ((NU8) 20), ((NU32) IL64(3889429448)));
	GG_pureZmd53_50((&a), b, c, d, myBlock[(((NI) 9))- 0], ((NU8) 5), ((NU32) 568446438));
	GG_pureZmd53_50((&d), a, b, c, myBlock[(((NI) 14))- 0], ((NU8) 9), ((NU32) IL64(3275163606)));
	GG_pureZmd53_50((&c), d, a, b, myBlock[(((NI) 3))- 0], ((NU8) 14), ((NU32) IL64(4107603335)));
	GG_pureZmd53_50((&b), c, d, a, myBlock[(((NI) 8))- 0], ((NU8) 20), ((NU32) 1163531501));
	GG_pureZmd53_50((&a), b, c, d, myBlock[(((NI) 13))- 0], ((NU8) 5), ((NU32) IL64(2850285829)));
	GG_pureZmd53_50((&d), a, b, c, myBlock[(((NI) 2))- 0], ((NU8) 9), ((NU32) IL64(4243563512)));
	GG_pureZmd53_50((&c), d, a, b, myBlock[(((NI) 7))- 0], ((NU8) 14), ((NU32) 1735328473));
	GG_pureZmd53_50((&b), c, d, a, myBlock[(((NI) 12))- 0], ((NU8) 20), ((NU32) IL64(2368359562)));
	HH_pureZmd53_58((&a), b, c, d, myBlock[(((NI) 5))- 0], ((NU8) 4), ((NU32) IL64(4294588738)));
	HH_pureZmd53_58((&d), a, b, c, myBlock[(((NI) 8))- 0], ((NU8) 11), ((NU32) IL64(2272392833)));
	HH_pureZmd53_58((&c), d, a, b, myBlock[(((NI) 11))- 0], ((NU8) 16), ((NU32) 1839030562));
	HH_pureZmd53_58((&b), c, d, a, myBlock[(((NI) 14))- 0], ((NU8) 23), ((NU32) IL64(4259657740)));
	HH_pureZmd53_58((&a), b, c, d, myBlock[(((NI) 1))- 0], ((NU8) 4), ((NU32) IL64(2763975236)));
	HH_pureZmd53_58((&d), a, b, c, myBlock[(((NI) 4))- 0], ((NU8) 11), ((NU32) 1272893353));
	HH_pureZmd53_58((&c), d, a, b, myBlock[(((NI) 7))- 0], ((NU8) 16), ((NU32) IL64(4139469664)));
	HH_pureZmd53_58((&b), c, d, a, myBlock[(((NI) 10))- 0], ((NU8) 23), ((NU32) IL64(3200236656)));
	HH_pureZmd53_58((&a), b, c, d, myBlock[(((NI) 13))- 0], ((NU8) 4), ((NU32) 681279174));
	HH_pureZmd53_58((&d), a, b, c, myBlock[(((NI) 0))- 0], ((NU8) 11), ((NU32) IL64(3936430074)));
	HH_pureZmd53_58((&c), d, a, b, myBlock[(((NI) 3))- 0], ((NU8) 16), ((NU32) IL64(3572445317)));
	HH_pureZmd53_58((&b), c, d, a, myBlock[(((NI) 6))- 0], ((NU8) 23), ((NU32) 76029189));
	HH_pureZmd53_58((&a), b, c, d, myBlock[(((NI) 9))- 0], ((NU8) 4), ((NU32) IL64(3654602809)));
	HH_pureZmd53_58((&d), a, b, c, myBlock[(((NI) 12))- 0], ((NU8) 11), ((NU32) IL64(3873151461)));
	HH_pureZmd53_58((&c), d, a, b, myBlock[(((NI) 15))- 0], ((NU8) 16), ((NU32) 530742520));
	HH_pureZmd53_58((&b), c, d, a, myBlock[(((NI) 2))- 0], ((NU8) 23), ((NU32) IL64(3299628645)));
	II_pureZmd53_66((&a), b, c, d, myBlock[(((NI) 0))- 0], ((NU8) 6), ((NU32) IL64(4096336452)));
	II_pureZmd53_66((&d), a, b, c, myBlock[(((NI) 7))- 0], ((NU8) 10), ((NU32) 1126891415));
	II_pureZmd53_66((&c), d, a, b, myBlock[(((NI) 14))- 0], ((NU8) 15), ((NU32) IL64(2878612391)));
	II_pureZmd53_66((&b), c, d, a, myBlock[(((NI) 5))- 0], ((NU8) 21), ((NU32) IL64(4237533241)));
	II_pureZmd53_66((&a), b, c, d, myBlock[(((NI) 12))- 0], ((NU8) 6), ((NU32) 1700485571));
	II_pureZmd53_66((&d), a, b, c, myBlock[(((NI) 3))- 0], ((NU8) 10), ((NU32) IL64(2399980690)));
	II_pureZmd53_66((&c), d, a, b, myBlock[(((NI) 10))- 0], ((NU8) 15), ((NU32) IL64(4293915773)));
	II_pureZmd53_66((&b), c, d, a, myBlock[(((NI) 1))- 0], ((NU8) 21), ((NU32) IL64(2240044497)));
	II_pureZmd53_66((&a), b, c, d, myBlock[(((NI) 8))- 0], ((NU8) 6), ((NU32) 1873313359));
	II_pureZmd53_66((&d), a, b, c, myBlock[(((NI) 15))- 0], ((NU8) 10), ((NU32) IL64(4264355552)));
	II_pureZmd53_66((&c), d, a, b, myBlock[(((NI) 6))- 0], ((NU8) 15), ((NU32) IL64(2734768916)));
	II_pureZmd53_66((&b), c, d, a, myBlock[(((NI) 13))- 0], ((NU8) 21), ((NU32) 1309151649));
	II_pureZmd53_66((&a), b, c, d, myBlock[(((NI) 4))- 0], ((NU8) 6), ((NU32) IL64(4149444226)));
	II_pureZmd53_66((&d), a, b, c, myBlock[(((NI) 11))- 0], ((NU8) 10), ((NU32) IL64(3174756917)));
	II_pureZmd53_66((&c), d, a, b, myBlock[(((NI) 2))- 0], ((NU8) 15), ((NU32) 718787259));
	II_pureZmd53_66((&b), c, d, a, myBlock[(((NI) 9))- 0], ((NU8) 21), ((NU32) IL64(3951481745)));
	state[(((NI) 0))- 0] = (NU32)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 1))- 0] = (NU32)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 2))- 0] = (NU32)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 3))- 0] = (NU32)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
}
N_LIB_PRIVATE N_NIMCALL(void, md5Update_pureZmd53_162)(tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw* c, NCSTRING input, NI len) {
	NCSTRING input_2;
	NI Index;
	NI PartLen;
	input_2 = input;
	Index = ((NI) ((NU32)((NU32)((NU32)((*c).count[(((NI) 0))- 0]) >> (NU64)(((NI) 3))) & ((NU32) 63))));
	(*c).count[(((NI) 0))- 0] = (NU32)((NU32)((*c).count[(((NI) 0))- 0]) + (NU32)((NU32)((NU64)(((NU32) (len))) << (NU64)(((NI) 3)))));
	{
		if (!((NU32)((*c).count[(((NI) 0))- 0]) < (NU32)((NU32)((NU64)(((NU32) (len))) << (NU64)(((NI) 3)))))) goto LA3_;
		(*c).count[(((NI) 1))- 0] = (NU32)((NU32)((*c).count[(((NI) 1))- 0]) + (NU32)(((NU32) 1)));
	}
	LA3_: ;
	(*c).count[(((NI) 1))- 0] = (NU32)((NU32)((*c).count[(((NI) 1))- 0]) + (NU32)((NU32)((NU32)(((NU32) (len))) >> (NU64)(((NI) 29)))));
	PartLen = (NI)(((NI) 64) - Index);
	{
		NI i;
		if (!(PartLen <= len)) goto LA7_;
		copyMem_system_1727(((void*) ((&(*c).buffer[(Index)- 0]))), ((void*) (input_2)), ((NI) (PartLen)));
		transform_pureZmd53_143(((void*) ((*c).buffer)), (*c).state);
		i = PartLen;
		{
			while (1) {
				if (!((NI)(i + ((NI) 63)) < len)) goto LA10;
				transform_pureZmd53_143(((void*) ((&input_2[i]))), (*c).state);
				i += ((NI) 64);
			} LA10: ;
		}
		copyMem_system_1727(((void*) ((&(*c).buffer[(((NI) 0))- 0]))), ((void*) ((&input_2[i]))), ((NI) ((NI)(len - i))));
	}
	goto LA5_;
	LA7_: ;
	{
		copyMem_system_1727(((void*) ((&(*c).buffer[(Index)- 0]))), ((void*) ((&input_2[((NI) 0)]))), ((NI) (len)));
	}
	LA5_: ;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == ((NimStringDesc*) NIM_NIL));
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, decode_pureZmd53_115)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0) {
	NI i;
	i = ((NI) 0);
	{
		NI j;
		NI colontmp_;
		NI res;
		j = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (srcLen_0-1);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				j = res;
				dest[i] = ((NU8) ((NU32)(src[j] & ((NU32) 255))));
				dest[(NI)(i + ((NI) 1))] = ((NU8) ((NU32)((NU32)((NU32)(src[j]) >> (NU64)(((NI) 8))) & ((NU32) 255))));
				dest[(NI)(i + ((NI) 2))] = ((NU8) ((NU32)((NU32)((NU32)(src[j]) >> (NU64)(((NI) 16))) & ((NU32) 255))));
				dest[(NI)(i + ((NI) 3))] = ((NU8) ((NU32)((NU32)((NU32)(src[j]) >> (NU64)(((NI) 24))) & ((NU32) 255))));
				i += ((NI) 4);
				res += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, md5Final_pureZmd53_166)(tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw* c, NU8* digest) {
	tyArray__cdsir9aPB24hAk6k77P9b9bCA Bits;
	NI PadLen;
	NI Index;
	nimZeroMem((void*)Bits, sizeof(tyArray__cdsir9aPB24hAk6k77P9b9bCA));
	PadLen = (NI)0;
	decode_pureZmd53_115(Bits, 8, (*c).count, 2);
	Index = ((NI) ((NU32)((NU32)((NU32)((*c).count[(((NI) 0))- 0]) >> (NU64)(((NI) 3))) & ((NU32) 63))));
	{
		if (!(Index < ((NI) 56))) goto LA3_;
		PadLen = (NI)(((NI) 56) - Index);
	}
	goto LA1_;
	LA3_: ;
	{
		PadLen = (NI)(((NI) 120) - Index);
	}
	LA1_: ;
	md5Update_pureZmd53_162(c, "\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000", PadLen);
	md5Update_pureZmd53_162(c, ((NCSTRING) (Bits)), ((NI) 8));
	decode_pureZmd53_115(digest, 16, (*c).state, 4);
	zeroMem_system_1724(((void*) (c)), ((NI) 88));
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__pureZmd53_182)(tyArray__qtqsWM5aXmcpMIVmvq3kAA d) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 15))) goto LA3;
				i = res;
				result = addChar(result, ((NimStringDesc*) &TM__evv4Z8qaB9aehA3eX73W1Cw_2)->data[(NI)((NI)((NI64)(((NI) (d[(i)- 0]))) >> (NU64)(((NI) 4))) & ((NI) 15))]);
				result = addChar(result, ((NimStringDesc*) &TM__evv4Z8qaB9aehA3eX73W1Cw_2)->data[(NI)(((NI) (d[(i)- 0])) & ((NI) 15))]);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getMD5_pureZmd53_195)(NimStringDesc* s) {
	NimStringDesc* result;
	tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw c;
	tyArray__qtqsWM5aXmcpMIVmvq3kAA d;
	result = (NimStringDesc*)0;
	nimZeroMem((void*)(&c), sizeof(tyObject_MD5Context__oMciKUdSdCaIeMtcxbiPOw));
	nimZeroMem((void*)d, sizeof(tyArray__qtqsWM5aXmcpMIVmvq3kAA));
	md5Init_pureZmd53_160((&c));
	md5Update_pureZmd53_162((&c), nimToCStringConv(s), (s ? s->Sup.len : 0));
	md5Final_pureZmd53_166((&c), d);
	result = dollar__pureZmd53_182(d);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_md5DatInit000)(void) {
NTImd53digest__qtqsWM5aXmcpMIVmvq3kAA_.size = sizeof(tyArray__qtqsWM5aXmcpMIVmvq3kAA);
NTImd53digest__qtqsWM5aXmcpMIVmvq3kAA_.align = NIM_ALIGNOF(tyArray__qtqsWM5aXmcpMIVmvq3kAA);
NTImd53digest__qtqsWM5aXmcpMIVmvq3kAA_.kind = 16;
NTImd53digest__qtqsWM5aXmcpMIVmvq3kAA_.base = (&NTIuint56__k3HXouOuhqAKq0dx450lXQ_);
NTImd53digest__qtqsWM5aXmcpMIVmvq3kAA_.flags = 1;
}

