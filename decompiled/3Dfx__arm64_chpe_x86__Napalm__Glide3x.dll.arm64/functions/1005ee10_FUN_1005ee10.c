/*
 * FUN_1005ee10 at 1005ee10
 * undefined FUN_1005ee10(void)
 * Address ranges: 1005ee10-1005ee27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005ee10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x3ac) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

