/*
 * FUN_1006e6d1 at 1006e6d1
 * undefined __stdcall FUN_1006e6d1(int * param_1, int param_2)
 * Address ranges: 1006e6d1-1006e792
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e6d1(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x18);
  FUN_100c3be1(piVar1,param_1,0x2f);
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c2e34((int)piVar1,1,'\0');
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x39);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x37);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x19);
  return;
}

