/*
 * FUN_10058d6f at 10058d6f
 * undefined __stdcall FUN_10058d6f(int * param_1, int param_2)
 * Address ranges: 10058d6f-10058e30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10058d6f(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x18);
  FUN_100a138c(piVar1,param_1,0x2f);
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a05ed((int)piVar1,1,'\0');
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x39);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x37);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x19);
  return;
}

