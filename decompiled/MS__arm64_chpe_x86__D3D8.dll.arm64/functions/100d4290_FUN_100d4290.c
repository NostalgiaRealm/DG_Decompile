/*
 * FUN_100d4290 at 100d4290
 * undefined FUN_100d4290(void)
 * Address ranges: 100d4290-100d42d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d4290(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 != 0) {
    FUN_100dafb0(iVar1);
    *(int *)(param_1 + 0x3a8) = 0;
    FUN_100d4a78(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

