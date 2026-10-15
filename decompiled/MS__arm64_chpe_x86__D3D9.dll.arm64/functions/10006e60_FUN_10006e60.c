/*
 * FUN_10006e60 at 10006e60
 * undefined FUN_10006e60(void)
 * Address ranges: 10006e60-10006ea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006e60(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(uint *)(param_1 + 0x4c)) {
    uVar1 = (&DAT_101714d8)[*(int *)(*(int *)(param_1 + 0x48) + param_2 * 4) * 0x8a];
  }
  return uVar1;
}

