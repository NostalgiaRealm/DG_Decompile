/*
 * FUN_1003f794 at 1003f794
 * undefined8 __stdcall FUN_1003f794(undefined4 * param_1)
 * Address ranges: 1003f794-1003f7c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003f794(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uStack_8 = 0;
  }
  else {
    uStack_8 = 0x80000000;
  }
  return CONCAT44(uStack_8,*(undefined4 *)*param_1);
}

