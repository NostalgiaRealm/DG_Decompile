/*
 * FUN_1005aaf0 at 1005aaf0
 * undefined FUN_1005aaf0(void)
 * Address ranges: 1005aaf0-1005abdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005aaf0(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = *(int *)(param_1 + 0x19cc);
  if (iVar1 != 0) {
    FUN_1005f170(iVar1);
    FUN_10079ff0(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19cc) = 0;
  iVar1 = *(int *)(param_1 + 0x19c8);
  if (iVar1 != 0) {
    FUN_100562c0(iVar1);
    FUN_10079ff0(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c8) = 0;
  iVar1 = *(int *)(param_1 + 0x19c4);
  if (iVar1 != 0) {
    FUN_1005f170(iVar1);
    FUN_10079ff0(iVar1,0x968);
  }
  *(int *)(param_1 + 0x19c4) = 0;
  iVar1 = *(int *)(param_1 + 0x19c0);
  if (iVar1 != 0) {
    FUN_100562c0(iVar1);
    FUN_10079ff0(iVar1,0x28);
  }
  *(int *)(param_1 + 0x19c0) = 0;
  iVar1 = *(int *)(param_1 + 0x1cac);
  if (iVar1 != 0) {
    FUN_10074c50(iVar1);
    FUN_10079ff0(iVar1,0x10);
    *(int *)(param_1 + 0x1cac) = 0;
  }
  return;
}

