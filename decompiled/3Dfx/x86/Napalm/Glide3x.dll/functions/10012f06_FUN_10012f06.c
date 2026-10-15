/*
 * FUN_10012f06 at 10012f06
 * undefined __fastcall FUN_10012f06(int param_1)
 * Address ranges: 10012f06-10012f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10012f06(int param_1)

{
  uint uVar1;
  int local_8;
  
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x994 + uVar1 * 4);
    FUN_1003dfd1((void *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x920 + uVar1 * 4);
    FUN_1003dfd1((void *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x1d);
  FUN_10041677(3,param_1 + 0x994);
  FUN_10041677(0x1d,param_1 + 0x920);
  return;
}

