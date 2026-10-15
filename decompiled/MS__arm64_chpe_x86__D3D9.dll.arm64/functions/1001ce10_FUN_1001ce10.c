/*
 * FUN_1001ce10 at 1001ce10
 * undefined FUN_1001ce10(void)
 * Address ranges: 1001ce10-1001ce57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ce10(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    iVar1 = **(int **)(*(int *)(param_1 + 0x18) + 0xd94);
  }
  FUN_1001fe48(iVar1,param_1,param_3,param_4,0,0,0,0);
  return;
}

