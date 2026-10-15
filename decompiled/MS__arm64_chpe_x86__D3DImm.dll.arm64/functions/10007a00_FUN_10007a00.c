/*
 * FUN_10007a00 at 10007a00
 * undefined FUN_10007a00(void)
 * Address ranges: 10007a00-10007c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10007a00(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar8 = 0;
  uVar7 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x4f8 + uVar7 * 100) & 0x1f;
    if (uVar6 == 1) break;
    iVar5 = param_1 + uVar7 * 100;
    iVar10 = uVar6 * 3;
    if (*(char *)(iVar10 + 0x1009d1d0) != '\0') {
      uVar8 = *(uint *)(&DAT_1009d230 + (uVar7 + (*(uint *)(iVar5 + 0x4fc) & 0xf) * 8) * 4) | uVar8;
    }
    if ((&DAT_1009d1d1)[iVar10] != '\0') {
      uVar8 = *(uint *)(&DAT_1009d230 + (uVar7 + (*(uint *)(iVar5 + 0x500) & 0xf) * 8) * 4) | uVar8;
    }
    iVar10 = (*(uint *)(iVar5 + 0x504) & 0x1f) * 3;
    if (*(char *)(iVar10 + 0x1009d1d0) != '\0') {
      uVar8 = *(uint *)(&DAT_1009d230 + (uVar7 + (*(uint *)(iVar5 + 0x508) & 0xf) * 8) * 4) | uVar8;
    }
    if ((&DAT_1009d1d1)[iVar10] != '\0') {
      uVar8 = *(uint *)(&DAT_1009d230 + (uVar7 + (*(uint *)(iVar5 + 0x50c) & 0xf) * 8) * 4) | uVar8;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  if (uVar8 == 0) {
    uVar8 = 2;
  }
  uVar6 = uVar8 & 0xfffff807;
  uVar7 = 0;
  do {
    if ((8 << (ulonglong)(uVar7 & 0x1f) & uVar8 & 0x7f8) != 0) {
      iVar5 = param_1 + uVar7 * 100;
      iVar10 = 3;
      uVar3 = *(uint *)(iVar5 + 0x520);
      uVar2 = uVar3 & 0xf0000;
      uVar9 = uVar7;
      if ((uVar2 - 0x10000 & 0xfffcffff) != 0 || uVar2 == 0x40000) {
        uVar9 = uVar3 & 7;
        iVar1 = param_2 + uVar9 * 8;
        if (*(char *)(iVar1 + 0x4c) == -1) {
          uVar9 = 0xffffffff;
        }
        else {
          iVar10 = *(byte *)(iVar1 + 0x4d) - 1;
        }
      }
      bVar4 = *(byte *)(iVar5 + 0x554);
      if ((bVar4 != 0) && (bVar4 < 5)) {
        iVar10 = bVar4 - 1;
      }
      if (uVar9 != 0xffffffff) {
        uVar6 = iVar10 << (ulonglong)((uVar9 + 9) * 2 & 0x1f) | 8 << (ulonglong)(uVar9 & 0x1f) |
                uVar6;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  if (*(int *)(param_1 + 0x304) != 0) {
    uVar6 = uVar6 | 4;
  }
  if ((*(int *)(param_1 + 0x4c0) - 1U < 3) && (*(int *)(param_1 + 0x300) != 0)) {
    uVar6 = uVar6 | 4;
  }
  return uVar6 | 0x40000000;
}

