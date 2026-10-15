/*
 * FUN_1006c360 at 1006c360
 * undefined FUN_1006c360(void)
 * Address ranges: 1006c360-1006c387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006c360(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != 0) {
    uVar1 = 0;
    *(int *)(*(int *)(param_1 + 4) + 0x88) = param_2;
  }
  return uVar1;
}

