/*
 * FUN_10061f28 at 10061f28
 * undefined FUN_10061f28(void)
 * Address ranges: 10061f28-10061f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061f28(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_2 & 0xffff;
  uVar1 = uVar3 + param_3;
  if (uVar3 < uVar1) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x34) + (param_2 >> 0x10) * 8 + 4);
    do {
      uVar5 = -1 << (ulonglong)(uVar3 & 0x1f);
      uVar6 = uVar3 >> 5;
      uVar3 = (uVar3 & 0xffffffe0) + 0x20;
      puVar2 = (uint *)(iVar4 + uVar6 * 4);
      if (uVar1 < uVar3) {
        uVar5 = uVar5 & 0xffffffffU >> (ulonglong)(0x20 - uVar1 & 0x1f);
      }
      *puVar2 = *puVar2 & (uVar5 ^ 0xffffffff);
    } while (uVar3 < uVar1);
  }
  return;
}

