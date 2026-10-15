/*
 * FUN_1001b158 at 1001b158
 * undefined FUN_1001b158(void)
 * Address ranges: 1001b158-1001b197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b158(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x4c) >> (ulonglong)(param_2 & 0x1f);
  *param_3 = uVar1;
  uVar2 = *(uint *)(param_1 + 0x50) >> (ulonglong)(param_2 & 0x1f);
  *param_4 = uVar2;
  if (uVar1 == 0) {
    *param_3 = 1;
  }
  if (uVar2 == 0) {
    *param_4 = 1;
  }
  return;
}

