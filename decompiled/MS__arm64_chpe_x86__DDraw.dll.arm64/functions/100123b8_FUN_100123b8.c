/*
 * FUN_100123b8 at 100123b8
 * undefined FUN_100123b8(void)
 * Address ranges: 100123b8-1001261f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100123b8(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d4;
  undefined4 auStack_4c8 [290];
  
  cVar9 = '\x01';
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_10034140(param_1,&local_4e0);
    uVar11 = 7;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar11 = 5;
    }
    if (((uVar11 < *(uint *)(&DAT_100b35b0 + *(int *)(param_1 + 0x1c) * 4)) ||
        (*(int *)(param_1 + 0x28) != 0)) || (*(int *)(param_1 + 0x24) == 1)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar1 = local_4dc;
    if (bVar8) {
      uVar1 = 0;
    }
    uVar2 = local_4dc;
    if (*(int *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x1510 + 0x520) == 0xa000) {
      uVar2 = uVar1;
    }
    iVar4 = *(int *)(param_1 + 0xc);
    if ((iVar4 != 0) && (uVar11 = *(uint *)(param_1 + 0x24), uVar11 != 0)) {
      uVar5 = *(uint *)(param_1 + 0x2c);
      uVar10 = 0;
      do {
        if (uVar5 != 0) {
          uVar6 = *(uint *)(param_1 + 0x20);
          uVar12 = 0;
          iVar13 = uVar5 * uVar10;
          do {
            uVar3 = uVar12;
            if (uVar6 <= uVar12) {
              uVar3 = 0;
            }
            iVar7 = uVar3 + uVar6 * uVar10;
            uVar12 = uVar12 + 1;
            auStack_4c8[iVar13 * 3] = *(undefined4 *)(iVar4 + iVar7 * 8);
            auStack_4c8[iVar13 * 3 + 1] = *(undefined4 *)(iVar4 + 4 + iVar7 * 8);
            auStack_4c8[iVar13 * 3 + 2] = 0;
            iVar13 = iVar13 + 1;
          } while (uVar12 < uVar5);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
    cVar9 = FUN_10010c18(param_1 + 0x48,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c),
                         *(uint *)(param_1 + 0x24),1,local_4e0,uVar2,local_4d4);
    if (((cVar9 != '\0') && (param_2 != '\0')) && (bVar8)) {
      cVar9 = FUN_10010ea8(param_1 + 0xac,*(int *)(param_1 + 0x54),local_4dc);
      FUN_100122c0(param_1);
      if (cVar9 == '\0') {
        FUN_10010fe0(param_1 + 0x48,1,1);
      }
    }
  }
  return cVar9;
}

