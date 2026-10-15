/*
 * FUN_10055900 at 10055900
 * undefined FUN_10055900(void)
 * Address ranges: 10055900-10055943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10055900(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 != 0) {
    FUN_100689a0(iVar1);
    *(int *)(param_1 + 0x3a8) = 0;
    FUN_10070328(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

