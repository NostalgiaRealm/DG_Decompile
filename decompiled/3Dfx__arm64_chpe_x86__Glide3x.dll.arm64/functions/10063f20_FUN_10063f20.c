/*
 * FUN_10063f20 at 10063f20
 * undefined FUN_10063f20(void)
 * Address ranges: 10063f20-10063f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10063f20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x944);
  *(int *)(param_1 + 0x944) = param_2;
  return param_2 != iVar1;
}

