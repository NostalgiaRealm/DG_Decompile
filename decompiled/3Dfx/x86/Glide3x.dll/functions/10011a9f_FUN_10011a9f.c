/*
 * FUN_10011a9f at 10011a9f
 * undefined __fastcall FUN_10011a9f(int param_1)
 * Address ranges: 10011a9f-10011b28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10011a9f(int param_1)

{
  uint uVar1;
  int local_8;
  
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x97c + uVar1 * 4);
    FUN_1003abc3((void *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x920 + uVar1 * 4);
    FUN_1003abc3((void *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x17);
  FUN_1003e26e(3,param_1 + 0x97c);
  FUN_1003e26e(0x17,param_1 + 0x920);
  return;
}

