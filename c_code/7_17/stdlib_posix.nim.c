/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <sys/types.h>
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
N_LIB_PRIVATE TNimType NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_;
N_LIB_PRIVATE int MAP_POPULATE_posixZposix_1001 = ((int) 0);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixDatInit000)(void) {
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.size = sizeof(pid_t);
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.align = NIM_ALIGNOF(pid_t);
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.kind = 34;
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.base = 0;
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.flags = 3;
}

