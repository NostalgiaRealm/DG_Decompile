/*
 * FUN_100563a0 at 100563a0
 * undefined FUN_100563a0(void)
 * Address ranges: 100563a0-100563f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100563a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3ac) == 5) {
    return 3;
  }
  iVar1 = **(int **)(param_1 + 0x3b4);
  if (iVar1 != 0xa000) {
    if (iVar1 == 0xa100) {
      return 2;
    }
    if (iVar1 == 0xb000) {
      return 4;
    }
  }
  return 1;
}

