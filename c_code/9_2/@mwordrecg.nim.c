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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU16 tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw;
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
N_LIB_PRIVATE TNimType NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_;
N_LIB_PRIVATE N_NIMCALL(void, compiler_wordrecgDatInit000)(void) {
static TNimNode* TM__U2GgQs2n1Q2Wng1z9ci28MQ_2_293[293];
NI TM__U2GgQs2n1Q2Wng1z9ci28MQ_4;
static char* NIM_CONST TM__U2GgQs2n1Q2Wng1z9ci28MQ_3[293] = {
"", 
"addr", 
"and", 
"as", 
"asm", 
"bind", 
"block", 
"break", 
"case", 
"cast", 
"concept", 
"const", 
"continue", 
"converter", 
"defer", 
"discard", 
"distinct", 
"div", 
"do", 
"elif", 
"else", 
"end", 
"enum", 
"except", 
"export", 
"finally", 
"for", 
"from", 
"func", 
"if", 
"import", 
"in", 
"include", 
"interface", 
"is", 
"isnot", 
"iterator", 
"let", 
"macro", 
"method", 
"mixin", 
"mod", 
"nil", 
"not", 
"notin", 
"object", 
"of", 
"or", 
"out", 
"proc", 
"ptr", 
"raise", 
"ref", 
"return", 
"shl", 
"shr", 
"static", 
"template", 
"try", 
"tuple", 
"type", 
"using", 
"var", 
"when", 
"while", 
"xor", 
"yield", 
":", 
"::", 
"=", 
".", 
"..", 
"*", 
"-", 
"magic", 
"thread", 
"final", 
"profiler", 
"memtracker", 
"objchecks", 
"intdefine", 
"strdefine", 
"booldefine", 
"cursor", 
"noalias", 
"effectsOf", 
"uncheckedAssign", 
"immediate", 
"constructor", 
"destructor", 
"delegator", 
"override", 
"importcpp", 
"cppNonPod", 
"importobjc", 
"importcompilerproc", 
"importc", 
"importjs", 
"exportc", 
"exportcpp", 
"exportnims", 
"incompleteStruct", 
"completeStruct", 
"requiresInit", 
"align", 
"nodecl", 
"pure", 
"sideEffect", 
"header", 
"noSideEffect", 
"gcsafe", 
"noreturn", 
"nosinks", 
"merge", 
"lib", 
"dynlib", 
"compilerproc", 
"core", 
"procvar", 
"base", 
"used", 
"fatal", 
"error", 
"warning", 
"hint", 
"warningAsError", 
"hintAsError", 
"line", 
"push", 
"pop", 
"define", 
"undef", 
"lineDir", 
"stackTrace", 
"lineTrace", 
"link", 
"compile", 
"linksys", 
"deprecated", 
"varargs", 
"callconv", 
"debugger", 
"nimcall", 
"stdcall", 
"cdecl", 
"safecall", 
"syscall", 
"inline", 
"noinline", 
"fastcall", 
"thiscall", 
"closure", 
"noconv", 
"on", 
"off", 
"checks", 
"rangeChecks", 
"boundChecks", 
"overflowChecks", 
"nilChecks", 
"floatChecks", 
"nanChecks", 
"infChecks", 
"styleChecks", 
"staticBoundChecks", 
"nonReloadable", 
"executeOnReload", 
"assertions", 
"patterns", 
"trmacros", 
"sinkInference", 
"warnings", 
"hints", 
"optimization", 
"raises", 
"writes", 
"reads", 
"size", 
"effects", 
"tags", 
"requires", 
"ensures", 
"invariant", 
"assume", 
"assert", 
"deadCodeElim", 
"safecode", 
"package", 
"noforward", 
"reorder", 
"norewrite", 
"nodestroy", 
"pragma", 
"compileTime", 
"noinit", 
"passc", 
"passl", 
"localPassC", 
"borrow", 
"discardable", 
"fieldChecks", 
"subschar", 
"acyclic", 
"shallow", 
"unroll", 
"linearScanEnd", 
"computedGoto", 
"experimental", 
"write", 
"gensym", 
"inject", 
"dirty", 
"inheritable", 
"threadvar", 
"emit", 
"asmNoStackFrame", 
"implicitStatic", 
"global", 
"codegenDecl", 
"unchecked", 
"guard", 
"locks", 
"partial", 
"explain", 
"liftlocals", 
"auto", 
"bool", 
"catch", 
"char", 
"class", 
"compl", 
"const_cast", 
"default", 
"delete", 
"double", 
"dynamic_cast", 
"explicit", 
"extern", 
"false", 
"float", 
"friend", 
"goto", 
"int", 
"long", 
"mutable", 
"namespace", 
"new", 
"operator", 
"private", 
"protected", 
"public", 
"register", 
"reinterpret_cast", 
"restrict", 
"short", 
"signed", 
"sizeof", 
"static_cast", 
"struct", 
"switch", 
"this", 
"throw", 
"true", 
"typedef", 
"typeid", 
"typeof", 
"typename", 
"union", 
"packed", 
"unsigned", 
"virtual", 
"void", 
"volatile", 
"wchar_t", 
"alignas", 
"alignof", 
"constexpr", 
"decltype", 
"nullptr", 
"noexcept", 
"thread_local", 
"static_assert", 
"char16_t", 
"char32_t", 
"stdin", 
"stdout", 
"stderr", 
"inout", 
"bycopy", 
"byref", 
"oneway", 
"bitsize", 
"all"};
static TNimNode TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[294];
NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_.size = sizeof(tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw);
NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_.align = NIM_ALIGNOF(tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw);
NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_.kind = 14;
NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_.base = 0;
NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_.flags = 3;
for (TM__U2GgQs2n1Q2Wng1z9ci28MQ_4 = 0; TM__U2GgQs2n1Q2Wng1z9ci28MQ_4 < 293; TM__U2GgQs2n1Q2Wng1z9ci28MQ_4++) {
TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[TM__U2GgQs2n1Q2Wng1z9ci28MQ_4+0].kind = 1;
TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[TM__U2GgQs2n1Q2Wng1z9ci28MQ_4+0].offset = TM__U2GgQs2n1Q2Wng1z9ci28MQ_4;
TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[TM__U2GgQs2n1Q2Wng1z9ci28MQ_4+0].name = TM__U2GgQs2n1Q2Wng1z9ci28MQ_3[TM__U2GgQs2n1Q2Wng1z9ci28MQ_4];
TM__U2GgQs2n1Q2Wng1z9ci28MQ_2_293[TM__U2GgQs2n1Q2Wng1z9ci28MQ_4] = &TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[TM__U2GgQs2n1Q2Wng1z9ci28MQ_4+0];
}
TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[293].len = 293; TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[293].kind = 2; TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[293].sons = &TM__U2GgQs2n1Q2Wng1z9ci28MQ_2_293[0];
NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_.node = &TM__U2GgQs2n1Q2Wng1z9ci28MQ_0[293];
}

