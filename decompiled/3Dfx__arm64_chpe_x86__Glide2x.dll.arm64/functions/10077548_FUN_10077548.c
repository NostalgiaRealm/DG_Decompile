/*
 * FUN_10077548 at 10077548
 * undefined FUN_10077548(void)
 * Address ranges: 10077548-1007766f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10077548(undefined8 param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_4 < param_5) {
    uVar4 = param_4;
    do {
      uVar5 = -1 << (ulonglong)(uVar4 & 0x1f);
      uVar3 = uVar4 >> 5;
      uVar4 = (uVar4 & 0xffffffe0) + 0x20;
      puVar1 = (uint *)(param_2 + uVar3 * 4);
      if (param_5 < uVar4) {
        uVar5 = uVar5 & 0xffffffffU >> (ulonglong)(0x20 - param_5 & 0x1f);
      }
      *puVar1 = *puVar1 & (uVar5 ^ 0xffffffff);
    } while (uVar4 < param_5);
  }
  uVar4 = param_4 + 0x1f >> 5;
  uVar5 = param_5 >> 5;
  if (uVar4 < uVar5) {
    do {
      uVar3 = -1 << (ulonglong)(uVar4 & 0x1f);
      uVar2 = uVar4 >> 5;
      uVar4 = (uVar4 & 0xffffffe0) + 0x20;
      puVar1 = (uint *)(param_3 + uVar2 * 4);
      if (uVar5 < uVar4) {
        uVar3 = uVar3 & 0xffffffffU >> (ulonglong)(0x20 - uVar5 & 0x1f);
      }
      *puVar1 = *puVar1 & (uVar3 ^ 0xffffffff);
    } while (uVar4 < uVar5);
  }
  uVar4 = (param_5 >> 5) - 1;
  if ((param_5 & 0x1f) != 0) {
    uVar4 = param_5 >> 5;
  }
  puVar1 = (uint *)(param_3 + (param_4 >> 10) * 4);
  uVar2 = 1 << (ulonglong)(param_4 >> 5 & 0x1f);
  uVar3 = *puVar1;
  uVar5 = uVar2 | uVar3;
  if (*(int *)(param_2 + (param_4 >> 5) * 4) != -1) {
    uVar5 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  *puVar1 = uVar5;
  puVar1 = (uint *)(param_3 + (uVar4 >> 5) * 4);
  uVar2 = 1 << (ulonglong)(uVar4 & 0x1f);
  uVar3 = *puVar1;
  uVar5 = uVar2 | uVar3;
  if (*(int *)(param_2 + uVar4 * 4) != -1) {
    uVar5 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  *puVar1 = uVar5;
  return;
}

