/*
 * FUN_10017b10 at 10017b10
 * undefined FUN_10017b10(void)
 * Address ranges: 10017b10-10017b57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017b10(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    iVar1 = **(int **)(*(int *)(param_1 + 0x18) + 0xad0);
  }
  FUN_1001aae8(iVar1,param_1,param_3,param_4,0,0,0,0);
  return;
}

