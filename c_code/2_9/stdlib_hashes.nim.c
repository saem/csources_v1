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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash_pureZhashes_192)(NU8* x, NI xLen_0);
static N_INLINE(NU32, rotl32_pureZhashes_180)(NU32 x, NI r);
static N_INLINE(NI, emarkamp__pureZhashes_3)(NI h, NI val);
static N_INLINE(NI, emarkdollar__pureZhashes_18)(NI h);
static N_INLINE(NU32, rotl32_pureZhashes_180)(NU32 x, NI r) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)((NU64)(x) << (NU64)(r)) | (NU32)((NU32)(x) >> (NU64)((NI)(((NI) 32) - r))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash_pureZhashes_192)(NU8* x, NI xLen_0) {
	NI result;
	NI size;
	NI stepSize;
	NI n;
	NU32 h1;
	NI i;
	NU32 k1_2;
	NI rem;
{	result = (NI)0;
	size = xLen_0;
	stepSize = ((NI) 4);
	n = (NI)(size / stepSize);
	h1 = (NU32)0;
	i = ((NI) 0);
	{
		while (1) {
			NU32 k1;
			NI j;
			if (!(i < (NI)(n * stepSize))) goto LA2;
			k1 = (NU32)0;
			j = stepSize;
			{
				while (1) {
					if (!(((NI) 0) < j)) goto LA4;
					j -= ((NI) 1);
					k1 = (NU32)((NU32)((NU64)(k1) << (NU64)(((NI) 8))) | ((NU32) (x[(NI)(i + j)])));
				} LA4: ;
			}
			i += stepSize;
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) IL64(3432918353))));
			k1 = rotl32_pureZhashes_180(k1, ((NI) 15));
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) 461845907)));
			h1 = (NU32)(h1 ^ k1);
			h1 = rotl32_pureZhashes_180(h1, ((NI) 13));
			h1 = (NU32)((NU32)((NU32)((NU32)(h1) * (NU32)(((NU32) 5)))) + (NU32)(((NU32) IL64(3864292196))));
		} LA2: ;
	}
	k1_2 = (NU32)0;
	rem = (NI)(size % stepSize);
	{
		while (1) {
			if (!(((NI) 0) < rem)) goto LA6;
			rem -= ((NI) 1);
			k1_2 = (NU32)((NU32)((NU64)(k1_2) << (NU64)(((NI) 8))) | ((NU32) (x[(NI)(i + rem)])));
		} LA6: ;
	}
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) IL64(3432918353))));
	k1_2 = rotl32_pureZhashes_180(k1_2, ((NI) 15));
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) 461845907)));
	h1 = (NU32)(h1 ^ k1_2);
	h1 = (NU32)(h1 ^ ((NU32) (size)));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI) 16))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(2246822507))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI) 13))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(3266489909))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI) 16))));
	result = ((NI) (h1));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash_pureZhashes_291)(NimStringDesc* x) {
	NI result;
	result = (NI)0;
	result = murmurHash_pureZhashes_192((NU8*)x->data+(((NI) 0)), (((x ? x->Sup.len : 0)-1))-(((NI) 0))+1);
	return result;
}
static N_INLINE(NI, emarkamp__pureZhashes_3)(NI h, NI val) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	val_2 = ((NU) (val));
	res = (NU)((NU64)(h_2) + (NU64)(val_2));
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI) 10)))));
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI) 6))));
	result = ((NI) (res));
	return result;
}
static N_INLINE(NI, emarkdollar__pureZhashes_18)(NI h) {
	NI result;
	NU h_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	res = (NU)((NU64)(h_2) + (NU64)((NU)((NU64)(h_2) << (NU64)(((NI) 3)))));
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI) 11))));
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI) 15)))));
	result = ((NI) (res));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase_pureZhashes_365)(NimStringDesc* x) {
	NI result;
	NI h;
	result = (NI)0;
	h = ((NI) 0);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				c = x->data[i];
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI) 32))))));
				}
				LA6_: ;
				h = emarkamp__pureZhashes_3(h, ((NU8)(c)));
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = emarkdollar__pureZhashes_18(h);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle_pureZhashes_302)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i;
	NI xLen;
	result = (NI)0;
	h = ((NI) 0);
	i = ((NI) 0);
	xLen = (x ? x->Sup.len : 0);
	{
		while (1) {
			NIM_CHAR c;
			if (!(i < xLen)) goto LA2;
			c = x->data[i];
			{
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				i += ((NI) 1);
			}
			goto LA3_;
			LA5_: ;
			{
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI) 32))))));
				}
				LA10_: ;
				h = emarkamp__pureZhashes_3(h, ((NU8)(c)));
				i += ((NI) 1);
			}
			LA3_: ;
		} LA2: ;
	}
	result = emarkdollar__pureZhashes_18(h);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash_pureZhashes_297)(NimStringDesc* sBuf, NI sPos, NI ePos) {
	NI result;
	result = (NI)0;
	result = murmurHash_pureZhashes_192((NU8*)sBuf->data+(sPos), (ePos)-(sPos)+1);
	return result;
}
