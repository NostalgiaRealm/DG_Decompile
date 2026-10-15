/*
 * FUN_1002a198 at 1002a198
 * undefined FUN_1002a198(void)
 * Address ranges: 1002a198-1002a297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002a198(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_3 & 0xfffff807;
  uVar5 = 0;
  do {
    if ((8 << (ulonglong)(uVar5 & 0x1f) & param_3 & 0x7f8) != 0) {
      iVar7 = 3;
      iVar1 = param_1 + uVar5 * 0x84;
      uVar3 = *(uint *)(iVar1 + 0x7a4);
      uVar6 = uVar5;
      if (((uVar3 & 0xf0000) - 0x10000 & 0xfffcffff) != 0) {
        uVar6 = uVar3 & 7;
        iVar2 = param_2 + uVar6 * 8;
        if (*(char *)(iVar2 + 0x4c) == -1) {
          uVar6 = 0xffffffff;
        }
        else {
          iVar7 = *(byte *)(iVar2 + 0x4d) - 1;
        }
      }
      bVar4 = *(byte *)(iVar1 + 0x7d8);
      if ((bVar4 != 0) && (bVar4 < 5)) {
        iVar7 = bVar4 - 1;
      }
      if (uVar6 != 0xffffffff) {
        uVar8 = iVar7 << (ulonglong)((uVar6 + 9) * 2 & 0x1f) | 8 << (ulonglong)(uVar6 & 0x1f) |
                uVar8;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (*(int *)(param_1 + 0x4a4) != 0) {
    uVar8 = uVar8 | 4;
  }
  if ((*(int *)(param_1 + 0x660) - 1U < 3) && (*(int *)(param_1 + 0x4a0) != 0)) {
    uVar8 = uVar8 | 4;
  }
  return uVar8 | 0x40000000;
}

