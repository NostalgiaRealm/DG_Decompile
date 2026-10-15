/*
 * FUN_100f2a98 at 100f2a98
 * undefined FUN_100f2a98(void)
 * Address ranges: 100f2a98-100f2b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f2a98(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = *(int *)(param_1 + 0x19cc);
  if (iVar1 != 0) {
    FUN_100e0560(iVar1);
    FUN_100fec90(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19cc) = 0;
  iVar1 = *(int *)(param_1 + 0x19c8);
  if (iVar1 != 0) {
    FUN_100e8e80(iVar1);
    FUN_100fec90(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c8) = 0;
  iVar1 = *(int *)(param_1 + 0x19c4);
  if (iVar1 != 0) {
    FUN_100e0560(iVar1);
    FUN_100fec90(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19c4) = 0;
  iVar1 = *(int *)(param_1 + 0x19c0);
  if (iVar1 != 0) {
    FUN_100e8e80(iVar1);
    FUN_100fec90(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c0) = 0;
  iVar1 = *(int *)(param_1 + 0x1cac);
  if (iVar1 != 0) {
    FUN_100f6fe0(iVar1);
    FUN_100fec90(iVar1,0x10);
    *(int *)(param_1 + 0x1cac) = 0;
  }
  return;
}

