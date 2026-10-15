/*
 * FUN_1001e6f6 at 1001e6f6
 * undefined __fastcall FUN_1001e6f6(int param_1)
 * Address ranges: 1001e6f6-1001e77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001e6f6(int param_1)

{
  uint uVar1;
  int local_8;
  
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x4fc + uVar1 * 4);
    FUN_100380de((void *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x4a0 + uVar1 * 4);
    FUN_100380de((void *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x17);
  FUN_1003b789(3,param_1 + 0x4fc);
  FUN_1003b789(0x17,param_1 + 0x4a0);
  return;
}

