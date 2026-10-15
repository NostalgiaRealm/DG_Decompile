/*
 * FUN_1007ce50 at 1007ce50
 * undefined FUN_1007ce50(void)
 * Address ranges: 1007ce50-1007ce9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007ce50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 0x520;
  }
  iVar2 = FUN_10076328(iVar1,param_2,param_3,param_4,param_5,*(undefined4 *)(iVar2 + 0x172c0));
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 0x38;
  }
  return iVar1;
}

