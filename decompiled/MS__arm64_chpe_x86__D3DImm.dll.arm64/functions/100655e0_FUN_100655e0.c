/*
 * FUN_100655e0 at 100655e0
 * undefined FUN_100655e0(void)
 * Address ranges: 100655e0-1006560b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100655e0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) - 1U < 3) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
    if (*(int *)(param_2 + 4) == 4) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

