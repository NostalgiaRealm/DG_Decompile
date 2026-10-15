/*
 * FUN_10063e30 at 10063e30
 * undefined FUN_10063e30(void)
 * Address ranges: 10063e30-10063f1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063e30(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = *(int *)(param_1 + 0x19cc);
  if (iVar1 != 0) {
    FUN_100684a0(iVar1);
    FUN_100833b0(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19cc) = 0;
  iVar1 = *(int *)(param_1 + 0x19c8);
  if (iVar1 != 0) {
    FUN_1005f600(iVar1);
    FUN_100833b0(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c8) = 0;
  iVar1 = *(int *)(param_1 + 0x19c4);
  if (iVar1 != 0) {
    FUN_100684a0(iVar1);
    FUN_100833b0(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19c4) = 0;
  iVar1 = *(int *)(param_1 + 0x19c0);
  if (iVar1 != 0) {
    FUN_1005f600(iVar1);
    FUN_100833b0(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c0) = 0;
  iVar1 = *(int *)(param_1 + 0x1cac);
  if (iVar1 != 0) {
    FUN_1007df90(iVar1);
    FUN_100833b0(iVar1,0x10);
    *(int *)(param_1 + 0x1cac) = 0;
  }
  return;
}

