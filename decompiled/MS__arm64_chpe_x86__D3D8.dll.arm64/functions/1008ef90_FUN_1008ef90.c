/*
 * FUN_1008ef90 at 1008ef90
 * undefined FUN_1008ef90(void)
 * Address ranges: 1008ef90-1008efaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008ef90(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x148);
  }
  return uVar1;
}

