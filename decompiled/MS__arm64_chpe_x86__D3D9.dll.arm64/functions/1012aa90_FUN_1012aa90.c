/*
 * FUN_1012aa90 at 1012aa90
 * undefined FUN_1012aa90(void)
 * Address ranges: 1012aa90-1012aadf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1012aa90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 0x520;
  }
  iVar2 = FUN_1011c788(iVar1,param_2,param_3,param_4,param_5,*(undefined4 *)(iVar2 + 0x172c0));
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 0x38;
  }
  return iVar1;
}

