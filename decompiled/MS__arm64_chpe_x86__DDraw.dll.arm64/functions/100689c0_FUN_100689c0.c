/*
 * FUN_100689c0 at 100689c0
 * undefined FUN_100689c0(void)
 * Address ranges: 100689c0-100689f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100689c0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(int *)(param_1 + 8) + 0x2ac) == 0) ||
     (*(int *)(*(int *)(param_1 + 8) + 0x2b0) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

