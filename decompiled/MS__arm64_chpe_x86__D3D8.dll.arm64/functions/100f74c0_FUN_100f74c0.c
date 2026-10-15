/*
 * FUN_100f74c0 at 100f74c0
 * undefined FUN_100f74c0(void)
 * Address ranges: 100f74c0-100f750f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100f74c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 0x520;
  }
  iVar2 = FUN_100e9f38(iVar1,param_2,param_3,param_4,param_5,*(undefined4 *)(iVar2 + 0x172c0));
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 0x38;
  }
  return iVar1;
}

