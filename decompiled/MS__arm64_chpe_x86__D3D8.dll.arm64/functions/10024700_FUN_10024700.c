/*
 * FUN_10024700 at 10024700
 * undefined FUN_10024700(void)
 * Address ranges: 10024700-1002480b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10024700(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = param_3 & 0xfffff807;
  uVar7 = 0;
  do {
    if ((8 << (ulonglong)(uVar7 & 0x1f) & param_3 & 0x7f8) != 0) {
      iVar6 = 3;
      uVar3 = *(uint *)(param_1 + (uVar7 + 0xc) * 0x74);
      uVar2 = uVar3 & 0xf0000;
      uVar8 = uVar7;
      if ((uVar2 - 0x10000 & 0xfffcffff) != 0 || uVar2 == 0x40000) {
        uVar8 = uVar3 & 7;
        iVar1 = param_2 + uVar8 * 8;
        if (*(char *)(iVar1 + 0x4c) == -1) {
          uVar8 = 0xffffffff;
        }
        else {
          iVar6 = *(byte *)(iVar1 + 0x4d) - 1;
        }
      }
      bVar4 = *(byte *)(param_1 + uVar7 * 0x74 + 0x5a4);
      if ((bVar4 != 0) && (bVar4 < 5)) {
        iVar6 = bVar4 - 1;
      }
      if (uVar8 != 0xffffffff) {
        uVar5 = iVar6 << (ulonglong)((uVar8 + 9) * 2 & 0x1f) | 8 << (ulonglong)(uVar8 & 0x1f) |
                uVar5;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  if (*(int *)(param_1 + 0x300) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((*(int *)(param_1 + 0x4bc) - 1U < 3) && (*(int *)(param_1 + 0x2fc) != 0)) {
    uVar5 = uVar5 | 4;
  }
  return uVar5 | 0x40000000;
}

