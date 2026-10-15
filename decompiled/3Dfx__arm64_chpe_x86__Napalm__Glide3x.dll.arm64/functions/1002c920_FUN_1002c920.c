/*
 * FUN_1002c920 at 1002c920
 * undefined FUN_1002c920(void)
 * Address ranges: 1002c920-1002c963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c920(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_1001c3b8(*(undefined4 *)(*param_1 + 0x365c));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

