/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
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
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyTuple__XOVT24GHXwqiEj5GCsEGCA tyTuple__XOVT24GHXwqiEj5GCsEGCA;
typedef struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw tyObject_Target__9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence__tNFrR3kRuS1FSwuiLGoSSA tySequence__tNFrR3kRuS1FSwuiLGoSSA;
typedef struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence__7lEisrXlQEzwtUKW5pzRCw tySequence__7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ tySequence__Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence__4eRCaZmrYLLw2k30GPTiMw tySequence__4eRCaZmrYLLw2k30GPTiMw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw tySequence__pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ;
typedef struct tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
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
typedef struct tyTuple__z822nu9bFF1AlQnLrHjdwpA tyTuple__z822nu9bFF1AlQnLrHjdwpA;
typedef struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw tyTuple__xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw tyTuple__QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg;
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
typedef NU8 tyArray__YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU8 tyEnum_TBackend__4OBsgZ9cscH2JLUE5Wcz01g;
typedef NU8 tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ;
struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU64 tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA {
tySequence__7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence__tNFrR3kRuS1FSwuiLGoSSA* msgContext;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence__Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_FilenameOption__eL86bAtPxXWHj24F5gOMFQ;
typedef NU8 tyEnum_Command__0zjcIQ623TIRGPdtjLwTFA;
typedef NU8 tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_ExceptionSystem__1mkAogyaDAT7g9cQjzsgKLQ;
typedef NU8 tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg {
tySequence__4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU32 tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA;
typedef NU8 tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA;
typedef NU8 tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug[11];
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
typedef NU8 tySet_tyEnum_StdOrrKind__6cbmyTzDPaZU9afMe4mz3Ug;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc__YD0MR9bJ2x4beJkZdnjXN9cA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc__k2HFjxisIgDALbEUFojxaQ;
typedef NU8 tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc__oL9coyIA2VDTGdUcur9aL9bew;
struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw {
tyEnum_TBackend__4OBsgZ9cscH2JLUE5Wcz01g backend;
tyObject_Target__9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* macrosToExpand;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* arcToExpand;
tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A m;
tyEnum_FilenameOption__eL86bAtPxXWHj24F5gOMFQ filenameOption;
NimStringDesc* unitSep;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_Command__0zjcIQ623TIRGPdtjLwTFA cmd;
NimStringDesc* cmdInput;
NIM_BOOL projectIsCmd;
NIM_BOOL implicitCmd;
tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw selectedGC;
tyEnum_ExceptionSystem__1mkAogyaDAT7g9cQjzsgKLQ exc;
NIM_BOOL hintProcessingDots;
NI verbosity;
NI numberOfProcessors;
NF lastCmdTime;
tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
NI spellSuggestMax;
tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ features;
tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA legacyFeatures;
NimStringDesc* arguments;
tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug modifiedyNotes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug cmdlineNotes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug foreignPackageNotes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug notes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug warningAsErrors;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
NI maxLoopIterationsVM;
NIM_BOOL isVmTrace;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* nimblePaths;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* outDir;
NimStringDesc* jsonBuildFile;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyTuple__47w2DboNEPf69aPgubZdd7Q nimStdlibVersion;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* cfileSpecificOptions;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
tySet_tyEnum_StdOrrKind__6cbmyTzDPaZU9afMe4mz3Ug lastMsgWasDot;
NI32 projectMainIdx;
NI32 projectMainIdx2;
NimStringDesc* command;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NimStringDesc* commandLine;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* extraCmds;
NIM_BOOL keepComments;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
NimStringDesc* docRoot;
NimStringDesc* docCmd;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* configFiles;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* cCompilerPath;
tySequence__pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc__YD0MR9bJ2x4beJkZdnjXN9cA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc__k2HFjxisIgDALbEUFojxaQ writelnHook;
tyProc__oL9coyIA2VDTGdUcur9aL9bew structuredErrorHook;
NimStringDesc* cppCustomNamespace;
tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig* vmProfileData;
};
typedef NU8 tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
struct tyTuple__XOVT24GHXwqiEj5GCsEGCA {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 tySet_tyEnum_ProcessOption__bnU6W8LhTMnT4JaSWtGlSA;
typedef NimStringDesc* tyArray__8ZvwQIddfpj2THRVPsFzIQ[1];
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
struct tyTuple__z822nu9bFF1AlQnLrHjdwpA {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q Field0;
NimStringDesc* Field1;
};
struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyFile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* nimname;
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA flags;
NimStringDesc* customArgs;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__tNFrR3kRuS1FSwuiLGoSSA {
  TGenericSeq Sup;
  tyTuple__z822nu9bFF1AlQnLrHjdwpA data[SEQ_DECL_SIZE];
};
struct tySequence__7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple__xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence__4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple__QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath_msgs_538)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, secureHash_stdZsha49_840)(NIM_CHAR* str, NI strLen_0, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toGeneratedFile_options_4233)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* path, NimStringDesc* ext);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__stdZsha49_879)(tyArray__YtcvxHNKV4YiecPE9ap1mcA self);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_systemZio_389)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll_systemZio_350)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, close_systemZio_217)(FILE* f);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingDir, NimStringDesc** args, NI argsLen_0, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* env, tySet_tyEnum_ProcessOption__bnU6W8LhTMnT4JaSWtGlSA options);
N_LIB_PRIVATE N_NIMCALL(void, write_pureZstreams_177)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*, nospinputStream)(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p);
N_LIB_PRIVATE N_NIMCALL(void, close_pureZstreams_57)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, readOutput_gorgeimpl_9)(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p, tyTuple__XOVT24GHXwqiEj5GCsEGCA* Result);
N_LIB_PRIVATE N_NIMCALL(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*, nospoutputStream)(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, atEnd_pureZstreams_63)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine_pureZstreams_539)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NI, nospwaitForExit)(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p, NI timeout);
N_LIB_PRIVATE N_NIMCALL(void, nospclose)(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p);
N_LIB_PRIVATE N_NIMCALL(void, writeFile_systemZio_474)(NimStringDesc* filename, NimStringDesc* content);
static N_INLINE(void, popSafePoint)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, nimBorrowCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5317)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5279)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5324)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5322)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5273)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TM__69a9b06YSkBJW7wqzuZfJ29aQ_2, "\011", 1);
STRING_LITERAL(TM__69a9b06YSkBJW7wqzuZfJ29aQ_3, "gorge_", 6);
STRING_LITERAL(TM__69a9b06YSkBJW7wqzuZfJ29aQ_4, "txt", 3);
STRING_LITERAL(TM__69a9b06YSkBJW7wqzuZfJ29aQ_6, "\012", 1);
extern TNimType NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_;
extern TNimType NTIoserror__BeJgrOdDsczOwEWOZbRfKA_;
extern TSafePoint* excHandler_system_2565;
extern TSafePoint* excHandler_system_2565;
extern TSafePoint* excHandler_system_2565;
extern TSafePoint* excHandler_system_2565;
extern Exception* currException_system_2566;
extern Exception* currException_system_2566;
extern Exception* currException_system_2566;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5226;
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
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
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).prev = excHandler_system_2565;
	excHandler_system_2565 = s;
}
N_LIB_PRIVATE N_NIMCALL(void, readOutput_gorgeimpl_9)(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p, tyTuple__XOVT24GHXwqiEj5GCsEGCA* Result) {
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* output;
	unsureAsgnRef((void**)&(*Result).Field0, NIM_NIL);
	(*Result).Field1 = 0;
	unsureAsgnRef((void**) (&(*Result).Field0), ((NimStringDesc*) NIM_NIL));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL T3_;
			NimStringDesc* T4_;
			T3_ = (NIM_BOOL)0;
			T3_ = atEnd_pureZstreams_63(output);
			if (!!(T3_)) goto LA2;
			T4_ = (NimStringDesc*)0;
			T4_ = readLine_pureZstreams_539(output);
			unsureAsgnRef((void**) (&(*Result).Field0), resizeString((*Result).Field0, (T4_ ? T4_->Sup.len : 0) + 0));
appendString((*Result).Field0, T4_);
			unsureAsgnRef((void**) (&(*Result).Field0), resizeString((*Result).Field0, 1));
appendString((*Result).Field0, ((NimStringDesc*) &TM__69a9b06YSkBJW7wqzuZfJ29aQ_6));
		} LA2: ;
	}
	{
		if (!(((NI) 0) < ((*Result).Field0 ? (*Result).Field0->Sup.len : 0))) goto LA7_;
		unsureAsgnRef((void**) (&(*Result).Field0), setLengthStr((*Result).Field0, ((NI) ((NI)(((*Result).Field0 ? (*Result).Field0->Sup.len : 0) - ((NI) 1))))));
	}
	LA7_: ;
	(*Result).Field1 = nospwaitForExit(p, ((NI) -1));
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
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef_system_5317)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent__system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5279)(void* usr) {
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
static N_INLINE(void, rtlAddZCT_system_5322)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_system_5273((&gch_system_5226.zct), c);
}
static N_INLINE(void, decRef_system_5324)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent__system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent__system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT_system_5322(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_system_5279(src);
		incRef_system_5317(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_system_5279((*dest));
		decRef_system_5324(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_system_2566), (*currException_system_2566).up);
}
N_LIB_PRIVATE N_NIMCALL(void, opGorge_gorgeimpl_13)(NimStringDesc* cmd, NimStringDesc* input, NimStringDesc* cache, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyTuple__XOVT24GHXwqiEj5GCsEGCA* Result) {
	NimStringDesc* workingDir;
	NimStringDesc* T1_;
{	unsureAsgnRef((void**)&(*Result).Field0, NIM_NIL);
	(*Result).Field1 = 0;
	T1_ = (NimStringDesc*)0;
	T1_ = toFullPath_msgs_538(conf, info.fileIndex);
	workingDir = nosparentDir(T1_);
	{
		tyArray__YtcvxHNKV4YiecPE9ap1mcA h;
		NimStringDesc* T6_;
		NimStringDesc* filename;
		NimStringDesc* T7_;
		NimStringDesc* T8_;
		FILE* f;
		NIM_BOOL volatile readSuccessful;
		TSafePoint TM__69a9b06YSkBJW7wqzuZfJ29aQ_5;
		tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p;
		tyArray__8ZvwQIddfpj2THRVPsFzIQ T15_;
		if (!(((NI) 0) < (cache ? cache->Sup.len : 0))) goto LA4_;
		nimZeroMem((void*)h, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((cmd ? cmd->Sup.len : 0) + (input ? input->Sup.len : 0) + (cache ? cache->Sup.len : 0) + 2);
appendString(T6_, cmd);
appendString(T6_, ((NimStringDesc*) &TM__69a9b06YSkBJW7wqzuZfJ29aQ_2));
appendString(T6_, input);
appendString(T6_, ((NimStringDesc*) &TM__69a9b06YSkBJW7wqzuZfJ29aQ_2));
appendString(T6_, cache);
		secureHash_stdZsha49_840(T6_->data, (T6_ ? T6_->Sup.len : 0), h);
		T7_ = (NimStringDesc*)0;
		T8_ = (NimStringDesc*)0;
		T8_ = dollar__stdZsha49_879(h);
		T7_ = rawNewString((T8_ ? T8_->Sup.len : 0) + 6);
appendString(T7_, ((NimStringDesc*) &TM__69a9b06YSkBJW7wqzuZfJ29aQ_3));
appendString(T7_, T8_);
		filename = toGeneratedFile_options_4233(conf, T7_, ((NimStringDesc*) &TM__69a9b06YSkBJW7wqzuZfJ29aQ_4));
		f = (FILE*)0;
		{
			NIM_BOOL T11_;
			NimStringDesc* colontmp_;
			NI colontmp__2;
			T11_ = (NIM_BOOL)0;
			T11_ = !((((*conf).globalOptions &((NU64)1<<((NU)(((tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw) 1))&63U)))!=0));
			if (!(T11_)) goto LA12_;
			T11_ = open_systemZio_389(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
			LA12_: ;
			if (!T11_) goto LA13_;
			colontmp_ = readAll_systemZio_350(f);
			colontmp__2 = ((NI) 0);
			unsureAsgnRef((void**) (&(*Result).Field0), copyString(colontmp_));
			(*Result).Field1 = colontmp__2;
			close_systemZio_217(f);
			goto BeforeRet_;
		}
		LA13_: ;
		readSuccessful = NIM_FALSE;
		pushSafePoint(&TM__69a9b06YSkBJW7wqzuZfJ29aQ_5);
		TM__69a9b06YSkBJW7wqzuZfJ29aQ_5.status = setjmp(TM__69a9b06YSkBJW7wqzuZfJ29aQ_5.context);
		if (TM__69a9b06YSkBJW7wqzuZfJ29aQ_5.status == 0) {
		nimZeroMem((void*)T15_, sizeof(tyArray__8ZvwQIddfpj2THRVPsFzIQ));
		p = nospstartProcess(cmd, workingDir, T15_, 0, ((tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*) NIM_NIL), 12);
		{
			tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T20_;
			tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T21_;
			if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA18_;
			T20_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
			T20_ = nospinputStream(p);
			write_pureZstreams_177(T20_, input);
			T21_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
			T21_ = nospinputStream(p);
			close_pureZstreams_57(T21_);
		}
		LA18_: ;
		readOutput_gorgeimpl_9(p, Result);
		nospclose(p);
		readSuccessful = NIM_TRUE;
		{
			if (!((*Result).Field1 == ((NI) 0))) goto LA24_;
			writeFile_systemZio_474(filename, (*Result).Field0);
		}
		LA24_: ;
		popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(nimBorrowCurrentException()->Sup.m_type, (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_))||isObj(nimBorrowCurrentException()->Sup.m_type, (&NTIoserror__BeJgrOdDsczOwEWOZbRfKA_))) {
				TM__69a9b06YSkBJW7wqzuZfJ29aQ_5.status = 0;
				{
					NimStringDesc* colontmp__3;
					NI colontmp__4;
					if (!!(readSuccessful)) goto LA30_;
					colontmp__3 = ((NimStringDesc*) NIM_NIL);
					colontmp__4 = ((NI) -1);
					unsureAsgnRef((void**) (&(*Result).Field0), copyString(colontmp__3));
					(*Result).Field1 = colontmp__4;
				}
				LA30_: ;
				popCurrentException();
			}
		}
		if (TM__69a9b06YSkBJW7wqzuZfJ29aQ_5.status != 0) reraiseException();
	}
	goto LA2_;
	LA4_: ;
	{
		TSafePoint TM__69a9b06YSkBJW7wqzuZfJ29aQ_7;
		tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* p_2;
		tyArray__8ZvwQIddfpj2THRVPsFzIQ T33_;
		pushSafePoint(&TM__69a9b06YSkBJW7wqzuZfJ29aQ_7);
		TM__69a9b06YSkBJW7wqzuZfJ29aQ_7.status = setjmp(TM__69a9b06YSkBJW7wqzuZfJ29aQ_7.context);
		if (TM__69a9b06YSkBJW7wqzuZfJ29aQ_7.status == 0) {
		nimZeroMem((void*)T33_, sizeof(tyArray__8ZvwQIddfpj2THRVPsFzIQ));
		p_2 = nospstartProcess(cmd, workingDir, T33_, 0, ((tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*) NIM_NIL), 12);
		{
			tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T38_;
			tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T39_;
			if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA36_;
			T38_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
			T38_ = nospinputStream(p_2);
			write_pureZstreams_177(T38_, input);
			T39_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
			T39_ = nospinputStream(p_2);
			close_pureZstreams_57(T39_);
		}
		LA36_: ;
		readOutput_gorgeimpl_9(p_2, Result);
		nospclose(p_2);
		popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(nimBorrowCurrentException()->Sup.m_type, (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_))||isObj(nimBorrowCurrentException()->Sup.m_type, (&NTIoserror__BeJgrOdDsczOwEWOZbRfKA_))) {
				NimStringDesc* colontmp__5;
				NI colontmp__6;
				TM__69a9b06YSkBJW7wqzuZfJ29aQ_7.status = 0;
				colontmp__5 = ((NimStringDesc*) NIM_NIL);
				colontmp__6 = ((NI) -1);
				unsureAsgnRef((void**) (&(*Result).Field0), copyString(colontmp__5));
				(*Result).Field1 = colontmp__6;
				popCurrentException();
			}
		}
		if (TM__69a9b06YSkBJW7wqzuZfJ29aQ_7.status != 0) reraiseException();
	}
	LA2_: ;
	}BeforeRet_: ;
}
