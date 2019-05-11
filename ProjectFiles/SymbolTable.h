#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h> 
#pragma warning (disable : 4996)
//QUADRABLES

#define DECLARE_ 0
#define ASSIGN_ 1
#define ADD_ 2
typedef struct TypeAndValue {
	int Type;
	char*  Value;
} TypeAndValue;
typedef struct SymbolData
{
	int Type;	//					representing the type of the token or Function
	bool Initilzation;//			indicate the symbol Initilzed a value or not 
	bool Used;//					indicate used or not as it needed in output 
	int BracesScope;//				representing the scope number that the variable is decleared
	char * Value;//					representing the value of assigned token
	char * IdentifierName;//		The name of Varible
	bool Modifiable;//				represent var constant or not 
	bool IsFunctionSymbol;//		representing Function  Symbol 
	int ArgNum;//					representing Function  Arguments Number 
	int  *ArrTypes;//				representing Function  Arguments Types 

}SymbolData;
//-------------------------------------------------Linked List Node -------------------------------
typedef struct SymbolNode {
	struct SymbolData * DATA;
	int ID;// representing the ID of the Symbol 
	struct SymbolNode *Next;
} SymbolNode;
//---------------------------------------- Needed Functions with the Linked List------------------
struct SymbolData* setSymbol(int type, int init, bool used, int brace, char * name,bool Modifiable, int ScopeNum);// Get a Symbol Entity
void pushSymbol(int ID, struct SymbolData* data);// to Insert a node in list
//struct SymbolNode* getSymbolNODE();// to delete a node in list and return this node
//int countNODE();// count the number of NODES
//bool isEmpty();//Is the list empty?
struct SymbolData* getSymbol(int rID);// Return a Symbol Entity given his ID in LIST
//void setValue(int index, char * value); //set a string numerical value for Symbol
void setUsed(int rID);
void setInitilization(int rID);

SymbolNode * getID(char * Identifiyer, int rBraceSCope);// given Variable NAME AND SCOPE return ID
bool CheckIDENTIFYER(char * ID);//check weather identifuer is defined before or not

int getSymbolType(char*rID);
void setFuncArg(int ArgCount, int*ArgTypes, SymbolData *rD);
int checkArgType(int ArgCount, int*ArgTypes, char *rD, int Scope);
void DeadSymbols(int Brace);
// ----------------------------------------------PRINTING FUNCTIONS------------------------
void printUsed(FILE *f);
void printNotUsed(FILE *f);
void printInitilized(FILE *f);
void printNotInit(FILE *f);
void PrintSymbolTable(FILE*F);
//----------------------------------------------------------------------------------------------
void DestroyList();
//---------------------------------------QUADRABLES
typedef struct Reg
{
	char* reg;
	char* var;
	int used;
}Reg;
typedef struct QuadData
{
	int OpCode;	//					representing the type of the token or Function
	char*Arg1;
	char*Arg2;
	char*Result;

}QuadData;
typedef struct QuadNode {
	struct QuadData * DATA;
	int ID;// representing the ID of the Symbol 
	struct QuadNode *Next;
} QuadNode;
void InsertQuadruple(QuadData*rD, int ID);
void setQuad(int Op, char* Arg1, char* Arg2, char*Result, int rID);// i only need to call this in  yacc
void PrintQuadList(FILE * f);