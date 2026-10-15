/*
 * FUN_10126068 at 10126068
 * undefined FUN_10126068(void)
 * Address ranges: 10126068-10126157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10126068(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = *(int *)(param_1 + 0x19cc);
  if (iVar1 != 0) {
    FUN_10112db0(iVar1);
    FUN_10132260(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19cc) = 0;
  iVar1 = *(int *)(param_1 + 0x19c8);
  if (iVar1 != 0) {
    FUN_1011b6d0(iVar1);
    FUN_10132260(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c8) = 0;
  iVar1 = *(int *)(param_1 + 0x19c4);
  if (iVar1 != 0) {
    FUN_10112db0(iVar1);
    FUN_10132260(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19c4) = 0;
  iVar1 = *(int *)(param_1 + 0x19c0);
  if (iVar1 != 0) {
    FUN_1011b6d0(iVar1);
    FUN_10132260(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c0) = 0;
  iVar1 = *(int *)(param_1 + 0x1cac);
  if (iVar1 != 0) {
    FUN_1012a5b0(iVar1);
    FUN_10132260(iVar1,0x10);
    *(int *)(param_1 + 0x1cac) = 0;
  }
  return;
}

