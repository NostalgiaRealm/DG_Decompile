/*
 * FUN_10058534 at 10058534
 * undefined __stdcall FUN_10058534(int param_1, int param_2, uint param_3, uint param_4)
 * Address ranges: 10058534-10058632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10058534(int param_1,int param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 < param_4) {
    uVar2 = param_3;
    do {
      uVar3 = -1 << ((byte)uVar2 & 0x1f);
      uVar6 = uVar2 >> 5;
      uVar2 = (uVar2 & 0xffffffe0) + 0x20;
      uVar4 = 0xffffffffU >> (0x20 - ((byte)param_4 & 0x1f) & 0x1f) & uVar3;
      if (uVar2 <= param_4) {
        uVar4 = uVar3;
      }
      puVar1 = (uint *)(param_1 + uVar6 * 4);
      *puVar1 = *puVar1 & ~uVar4;
    } while (uVar2 < param_4);
  }
  uVar4 = param_3 + 0x1f >> 5;
  uVar2 = param_4 >> 5;
  if (uVar4 < uVar2) {
    do {
      uVar6 = -1 << ((byte)uVar4 & 0x1f);
      uVar5 = uVar4 >> 5;
      uVar4 = (uVar4 & 0xffffffe0) + 0x20;
      uVar3 = 0xffffffffU >> (0x20 - ((byte)uVar2 & 0x1f) & 0x1f) & uVar6;
      if (uVar4 <= uVar2) {
        uVar3 = uVar6;
      }
      puVar1 = (uint *)(param_2 + uVar5 * 4);
      *puVar1 = *puVar1 & ~uVar3;
    } while (uVar4 < uVar2);
  }
  if ((param_4 & 0x1f) == 0) {
    uVar2 = uVar2 - 1;
  }
  uVar3 = param_3 >> 5 & 0x1f;
  uVar4 = *(uint *)(param_2 + (param_3 >> 10) * 4);
  if (*(int *)(param_1 + (param_3 >> 5) * 4) == -1) {
    uVar4 = uVar4 | 1 << uVar3;
  }
  else {
    uVar4 = uVar4 & ~(1 << uVar3);
  }
  *(uint *)(param_2 + (param_3 >> 10) * 4) = uVar4;
  uVar4 = *(uint *)(param_2 + (uVar2 >> 5) * 4);
  if (*(int *)(param_1 + uVar2 * 4) == -1) {
    uVar4 = uVar4 | 1 << (uVar2 & 0x1f);
  }
  else {
    uVar4 = uVar4 & ~(1 << (uVar2 & 0x1f));
  }
  *(uint *)(param_2 + (uVar2 >> 5) * 4) = uVar4;
  return;
}

