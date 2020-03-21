
enum InstructionType{
	Rtype = 55,
	JType,
	IType3 = 3,
	IType15 = 15,
	IType19 = 19,
	IType103 = 103,
	Utype,
	BType
}

typedef struct{
	char* Mnemonic;
	int Func3;
	int Func7;
}RtypeInstruction;

typedef struct{
	char* Mnemonic;
	int Func3;
	int Func7;
}RtypeInstruction;

typedef struct{
	char* Mnemonic;
	int Func3;
	int Func7;
}RtypeInstruction;