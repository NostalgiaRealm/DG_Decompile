/*
 * FUN_100752c0 at 100752c0
 * undefined FUN_100752c0(void)
 * Address ranges: 100752c0-1007532f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100752c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x16c0;
  piVar1 = (int *)(param_1 + 0x6c8);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_10061340(iVar2);
    FUN_100833b0(iVar2,0x78);
  }
  *piVar1 = 0;
  piVar1 = (int *)(param_1 + 0x6cc);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_10061340(iVar2);
    FUN_100833b0(iVar2,0x78);
  }
  *piVar1 = 0;
  return;
}

