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
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
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
typedef struct tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A;
typedef struct tyTuple__z822nu9bFF1AlQnLrHjdwpA tyTuple__z822nu9bFF1AlQnLrHjdwpA;
typedef struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw tyTuple__xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw;
typedef struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw tyTuple__QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray__Re75IspeoxXy2oCZHwcRrA[2];
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
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
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
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
struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA {
NI id;
NimStringDesc* s;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* next;
NI h;
};
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
typedef NU8 tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag[9];
typedef NU8 tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw;
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
struct tySequence__9aZVGG5Gtti9cC9bqRpXCtA3A {
  TGenericSeq Sup;
  tyObject_TType__facALICuu8zUj0hjvbTLFg* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHumanStr_ast_5157)(tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw kind);
static N_INLINE(NimStringDesc*, toFileLineCol_msgs_619)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toMsgFilename_msgs_602)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, addInt_stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x);
N_LIB_PRIVATE N_NIMCALL(void, addInt_stdZprivateZdigitsutils_167)(NimStringDesc** result, NI64 x);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__facALICuu8zUj0hjvbTLFg*, skipTypes_ast_3734)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t, tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHumanStr_ast_5187)(tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kind);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc_astmsgs_17)(NimStringDesc** result, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym);
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc_astmsgs_33)(NimStringDesc** result, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TType__facALICuu8zUj0hjvbTLFg* typ);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_2, " [$1 declared in $2]", 20);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_3, "(", 1);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_4, ", ", 2);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_5, ")", 1);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_6, "field \'$#\' is not accessible for type \'$#\'", 42);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_7, " [discriminant declared in $#]", 30);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_8, " using \'$# = ", 13);
static NIM_CONST tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag TM__CwZLJRLFLWYZLf7meTG1cw_9 = {
0x10, 0xa9, 0xe9, 0x01, 0x00, 0x60, 0xa0, 0x10,
0x00}
;
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_10, " [$1", 4);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_11, " declared in ", 13);
STRING_LITERAL(TM__CwZLJRLFLWYZLf7meTG1cw_12, "]", 1);
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
static N_INLINE(void, addInt_stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x) {
	addInt_stdZprivateZdigitsutils_167(result, ((NI64) (x)));
}
static N_INLINE(NimStringDesc*, toFileLineCol_msgs_619)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info) {
	NimStringDesc* result;
	NimStringDesc* T1_;
	result = (NimStringDesc*)0;
	T1_ = (NimStringDesc*)0;
	T1_ = toMsgFilename_msgs_602(conf, info.fileIndex);
	result = resizeString(result, (T1_ ? T1_->Sup.len : 0) + 0);
appendString(result, T1_);
	{
		if (!(((NI) 0) < ((NI) (info.line)))) goto LA4_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_3));
		addInt_stdZprivateZdigitsutils_189((&result), ((NI) (info.line)));
		{
			if (!(((NI) 0) < (NI)(((NI) (info.col)) + ((NI) 1)))) goto LA8_;
			result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_4));
			addInt_stdZprivateZdigitsutils_189((&result), (NI)(((NI) (info.col)) + ((NI) 1)));
		}
		LA8_: ;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_5));
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc_astmsgs_17)(NimStringDesc** result, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym) {
	tyArray__Re75IspeoxXy2oCZHwcRrA T1_;
	NimStringDesc* T2_;
	nimZeroMem((void*)T1_, sizeof(tyArray__Re75IspeoxXy2oCZHwcRrA));
	T1_[0] = toHumanStr_ast_5157((*sym).kind);
	T1_[1] = toFileLineCol_msgs_619(conf, (*sym).info);
	T2_ = (NimStringDesc*)0;
	T2_ = nsuFormatOpenArray(((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_2), T1_, 2);
	unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T2_ ? T2_->Sup.len : 0) + 0));
appendString((*result), T2_);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, genFieldDefect_astmsgs_61)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* field, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* disc) {
	NimStringDesc* result;
	NimStringDesc* obj;
	tyArray__Re75IspeoxXy2oCZHwcRrA T1_;
	NimStringDesc* T8_;
	result = (NimStringDesc*)0;
	obj = (*(*(*disc).owner).name).s;
	nimZeroMem((void*)T1_, sizeof(tyArray__Re75IspeoxXy2oCZHwcRrA));
	T1_[0] = copyString(field);
	T1_[1] = copyString(obj);
	result = nsuFormatOpenArray(((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_6), T1_, 2);
	{
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		if (!(((*conf).globalOptions &((NU64)1<<((NU)(((tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw) 36))&63U)))!=0)) goto LA4_;
		T6_ = (NimStringDesc*)0;
		T6_ = toFileLineCol_msgs_619(conf, (*disc).info);
		T7_ = (NimStringDesc*)0;
		T7_ = nsuFormatSingleElem(((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_7), T6_);
		result = resizeString(result, (T7_ ? T7_->Sup.len : 0) + 0);
appendString(result, T7_);
	}
	LA4_: ;
	T8_ = (NimStringDesc*)0;
	T8_ = nsuFormatSingleElem(((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_8), (*(*disc).name).s);
	result = resizeString(result, (T8_ ? T8_->Sup.len : 0) + 0);
appendString(result, T8_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc_astmsgs_33)(NimStringDesc** result, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TType__facALICuu8zUj0hjvbTLFg* typ) {
	tyObject_TType__facALICuu8zUj0hjvbTLFg* typ_2;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	typ_2 = skipTypes_ast_3734(typ, TM__CwZLJRLFLWYZLf7meTG1cw_9);
	T1_ = (NimStringDesc*)0;
	T1_ = toHumanStr_ast_5187((*typ_2).kind);
	T2_ = (NimStringDesc*)0;
	T2_ = nsuFormatSingleElem(((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_10), T1_);
	unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T2_ ? T2_->Sup.len : 0) + 0));
appendString((*result), T2_);
	{
		NimStringDesc* T7_;
		NimStringDesc* T8_;
		if (!!(((*typ_2).sym == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL)))) goto LA5_;
		T7_ = (NimStringDesc*)0;
		T8_ = (NimStringDesc*)0;
		T8_ = toFileLineCol_msgs_619(conf, (*(*typ_2).sym).info);
		T7_ = rawNewString((T8_ ? T8_->Sup.len : 0) + 13);
appendString(T7_, ((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_11));
appendString(T7_, T8_);
		unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T7_ ? T7_->Sup.len : 0) + 0));
appendString((*result), T7_);
	}
	LA5_: ;
	unsureAsgnRef((void**) (&(*result)), resizeString((*result), 1));
appendString((*result), ((NimStringDesc*) &TM__CwZLJRLFLWYZLf7meTG1cw_12));
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLocMaybe_astmsgs_21)(NimStringDesc** result, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((*conf).globalOptions &((NU64)1<<((NU)(((tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw) 36))&63U)))!=0);
		if (!(T3_)) goto LA4_;
		T3_ = !((sym == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL)));
		LA4_: ;
		if (!T3_) goto LA5_;
		addDeclaredLoc_astmsgs_17(result, conf, sym);
	}
	LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, typSym_astmsgs_5)(tyObject_TType__facALICuu8zUj0hjvbTLFg* t) {
	tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* result;
	result = (tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*)0;
	result = (*t).sym;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (result == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL));
		if (!(T3_)) goto LA4_;
		T3_ = ((*t).kind == ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 11));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = (*(*t).sons->data[((NI) 0)]).sym;
	}
	LA5_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLocMaybe_astmsgs_51)(NimStringDesc** result, tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TType__facALICuu8zUj0hjvbTLFg* typ) {
	{
		if (!(((*conf).globalOptions &((NU64)1<<((NU)(((tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw) 36))&63U)))!=0)) goto LA3_;
		addDeclaredLoc_astmsgs_33(result, conf, typ);
	}
	LA3_: ;
}
