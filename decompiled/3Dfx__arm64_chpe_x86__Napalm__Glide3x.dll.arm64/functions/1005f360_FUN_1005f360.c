/*
 * FUN_1005f360 at 1005f360
 * undefined FUN_1005f360(void)
 * Address ranges: 1005f360-1005f3b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1005f360(int param_1)

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

