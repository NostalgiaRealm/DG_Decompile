/*
 * FUN_10067740 at 10067740
 * undefined FUN_10067740(void)
 * Address ranges: 10067740-10067797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10067740(int param_1)

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

