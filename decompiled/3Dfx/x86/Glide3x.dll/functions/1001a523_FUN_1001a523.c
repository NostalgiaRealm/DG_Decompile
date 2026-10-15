/*
 * FUN_1001a523 at 1001a523
 * undefined __fastcall FUN_1001a523(int param_1)
 * Address ranges: 1001a523-1001a56b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a523(int param_1)

{
  uint uVar1;
  int local_8;
  
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x1f8 + uVar1 * 4);
    FUN_1003abc3((void *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3308) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  FUN_1003e26e(2,param_1 + 0x1f8);
  return;
}

