/*
 * FUN_18011ad48 at 18011ad48
 * undefined FUN_18011ad48(void)
 * Address ranges: 18011ad48-18011ad87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011ad48(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xec) >> (ulonglong)(param_2 & 0x1f);
  uVar1 = *(uint *)(param_1 + 0xf0);
  uVar3 = *(uint *)(param_1 + 0xe8) >> (ulonglong)(param_2 & 0x1f);
  *param_4 = uVar2;
  *param_3 = uVar3;
  uVar1 = uVar1 >> (ulonglong)(param_2 & 0x1f);
  *param_5 = uVar1;
  if (uVar3 == 0) {
    *param_3 = 1;
  }
  if (uVar2 == 0) {
    *param_4 = 1;
  }
  if (uVar1 == 0) {
    *param_5 = 1;
  }
  return;
}

