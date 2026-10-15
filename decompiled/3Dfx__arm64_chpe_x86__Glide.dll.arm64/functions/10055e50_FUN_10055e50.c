/*
 * FUN_10055e50 at 10055e50
 * undefined FUN_10055e50(void)
 * Address ranges: 10055e50-10055e67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055e50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x3ac) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

