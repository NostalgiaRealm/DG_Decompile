/*
 * FUN_10059690 at 10059690
 * undefined FUN_10059690(void)
 * Address ranges: 10059690-100596d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059690(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 != 0) {
    FUN_1006c640(iVar1);
    *(int *)(param_1 + 0x3a8) = 0;
    FUN_10073fc8(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

