/*
 * FUN_1003a366 at 1003a366
 * undefined __stdcall FUN_1003a366(int * param_1, int param_2)
 * Address ranges: 1003a366-1003a41f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003a366(int *param_1,int param_2)

{
  int *piVar1;
  char in_stack_00000028;
  
  piVar1 = (int *)(param_2 + 0x10);
  FUN_10057c8a(piVar1,param_1,0x2f);
  FUN_10057c8a(piVar1,param_1,0x38);
  if (in_stack_00000028 != '\0') {
    FUN_10056ee5((int)piVar1,1,'\0');
    FUN_10057c8a(piVar1,param_1,0x39);
    FUN_10057c8a(piVar1,param_1,0x37);
  }
  FUN_10057c8a(piVar1,param_1,0x19);
  return;
}

