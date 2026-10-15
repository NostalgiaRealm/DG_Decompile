/*
 * FUN_100acb38 at 100acb38
 * undefined FUN_100acb38(void)
 * Address ranges: 100acb38-100acdcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100acb38(int param_1,char param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d4;
  undefined4 auStack_4c8 [290];
  
  if (*(int *)(param_1 + 0x54) != 0) {
    return '\x01';
  }
  FUN_100cefa0(param_1,&local_4e0);
  if (10 < *(int *)(param_1 + 0x1c) - 0x15U) {
    uVar12 = 7;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar12 = 5;
    }
    if ((uVar12 < *(uint *)(&DAT_10162c20 + *(int *)(param_1 + 0x1c) * 4)) ||
       (*(int *)(param_1 + 0x28) != 0)) {
      bVar9 = false;
      goto LAB_100acbdc;
    }
  }
  bVar9 = true;
LAB_100acbdc:
  puVar1 = (uint *)(param_1 + 0x24);
  if ((bVar9) && (*puVar1 != 1)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  uVar2 = local_4dc;
  if (bVar9) {
    uVar2 = 0;
  }
  uVar3 = local_4dc;
  if (*(int *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x1510 + 0x520) == 0xa000) {
    uVar3 = uVar2;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if ((iVar5 != 0) && (uVar12 = *puVar1, uVar12 != 0)) {
    uVar6 = *(uint *)(param_1 + 0x2c);
    uVar11 = 0;
    do {
      if (uVar6 != 0) {
        uVar7 = *(uint *)(param_1 + 0x20);
        uVar13 = 0;
        iVar14 = uVar6 * uVar11;
        do {
          uVar4 = uVar13;
          if (uVar7 <= uVar13) {
            uVar4 = 0;
          }
          iVar8 = uVar4 + uVar7 * uVar11;
          uVar13 = uVar13 + 1;
          auStack_4c8[iVar14 * 3] = *(undefined4 *)(iVar5 + iVar8 * 8);
          auStack_4c8[iVar14 * 3 + 1] = *(undefined4 *)(iVar5 + 4 + iVar8 * 8);
          auStack_4c8[iVar14 * 3 + 2] = 0;
          iVar14 = iVar14 + 1;
        } while (uVar13 < uVar6);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar12);
  }
  cVar10 = FUN_100ab158(param_1 + 0x48,*(undefined4 *)(param_1 + 0x14),
                        *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c),*puVar1,1,
                        local_4e0,uVar3,local_4d4);
  if (((cVar10 != '\0') && (param_2 != '\0')) && (bVar9)) {
    cVar10 = FUN_100ab3e8(param_1 + 0xac,*(int *)(param_1 + 0x54),local_4dc);
    FUN_100aca40(param_1);
    if (cVar10 == '\0') {
      FUN_100ab520(param_1 + 0x48,1,1);
    }
  }
  return cVar10;
}

