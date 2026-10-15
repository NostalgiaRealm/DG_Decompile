/*
 * FUN_1001d500 at 1001d500
 * undefined FUN_1001d500(void)
 * Address ranges: 1001d500-1001d55b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d500(int param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x98) >> (ulonglong)(param_2 & 0x1f);
  *param_3 = uVar1;
  uVar2 = *(uint *)(param_1 + 0x9c) >> (ulonglong)(param_2 & 0x1f);
  *param_4 = uVar2;
  uVar3 = *(uint *)(param_1 + 0xa0) >> (ulonglong)(param_2 & 0x1f);
  *param_5 = uVar3;
  if (uVar1 == 0) {
    *param_3 = 1;
  }
  if (uVar2 == 0) {
    *param_4 = 1;
  }
  if (uVar3 == 0) {
    *param_5 = 1;
  }
  return;
}

