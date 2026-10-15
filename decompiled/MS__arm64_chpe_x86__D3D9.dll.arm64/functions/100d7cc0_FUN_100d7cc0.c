/*
 * FUN_100d7cc0 at 100d7cc0
 * undefined FUN_100d7cc0(void)
 * Address ranges: 100d7cc0-100d807f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100d7cc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,uint param_7)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int local_2c8;
  undefined1 auStack_298 [600];
  
  uVar9 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar8 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar8 == 0) {
      FUN_100071d0(0);
    }
  }
  if (param_5 == 0 || 1 < param_7) goto LAB_100d8034;
  uVar10 = FUN_100dadb0(param_1 + -0x66b4);
  if ((uVar10 & 1) == 0) goto LAB_100d8034;
  local_2c8 = 0;
  if (*(int *)(param_1 + 0x5bd4) != 0) {
    local_2c8 = FUN_100e5650(param_1 + 100,*(int *)(param_1 + 0x5bd4));
  }
  if (param_6 == 0) {
    uVar4 = *(uint *)(param_5 + -0x30);
    uVar10 = (ulonglong)uVar4;
    if (uVar4 == 0) goto LAB_100d8034;
    piVar5 = (int *)(param_1 + -0x59c0);
    puVar2 = (uint *)(param_1 + -0x59b8);
    uVar15 = *puVar2;
    uVar14 = 0;
    if (uVar15 == 0) {
LAB_100d7e78:
      puVar3 = (uint *)(param_1 + -0x59bc);
      if (uVar15 == *puVar3) {
        uVar13 = (ulonglong)(*puVar3 << 1) * 0x260;
        uVar9 = (undefined4)uVar13;
        if (uVar13 >> 0x20 != 0) {
          uVar9 = 0xffffffff;
        }
        iVar8 = FUN_101322b0(uVar9);
        if (iVar8 != 0) {
          if (*puVar3 != 0) {
            uVar15 = 0;
            do {
              FUN_101325a0(iVar8 + uVar15 * 0x260,*piVar5 + uVar15 * 0x260,0x260);
              uVar15 = uVar15 + 1;
            } while (uVar15 < *puVar3);
          }
          FUN_101322d0(*piVar5);
          *piVar5 = iVar8;
          *puVar3 = *puVar3 << 1;
        }
      }
      for (uVar15 = *puVar2; uVar14 < uVar15; uVar15 = uVar15 - 1) {
        iVar8 = *piVar5 + uVar15 * 0x260;
        FUN_101325a0(iVar8,iVar8 + -0x260,0x260);
      }
      iVar8 = uVar14 * 0x260;
      *(ulonglong *)(iVar8 + *piVar5) = uVar10;
      *(uint *)(iVar8 + *piVar5 + 8) = uVar4;
      FUN_100a2df0(uVar4,*(undefined1 *)(param_1 + -0x59b4),auStack_298);
      FUN_101325a0(iVar8 + *piVar5 + 0xc,auStack_298,0x254);
      *puVar2 = *puVar2 + 1;
    }
    else {
      uVar12 = 0;
      uVar11 = uVar15;
      do {
        uVar14 = uVar11 + uVar12 >> 1;
        uVar13 = *(ulonglong *)(*piVar5 + uVar14 * 0x260);
        uVar7 = uVar14;
        if (uVar13 <= uVar10) {
          if (uVar10 <= uVar13) break;
          uVar12 = uVar14 + 1;
          uVar14 = uVar12;
          uVar7 = uVar11;
        }
        uVar11 = uVar7;
      } while (uVar11 != uVar12);
      if ((uVar14 == uVar15) || (iVar8 = uVar14 * 0x260, *(ulonglong *)(iVar8 + *piVar5) != uVar10))
      goto LAB_100d7e78;
    }
    iVar8 = *piVar5 + iVar8 + 0xc;
  }
  else {
    if ((local_2c8 == 0) ||
       (pcVar1 = (char *)(param_6 + 0x279), *(char *)(*(int *)(local_2c8 + 0x85c) + 1) != '\x03')) {
      pcVar1 = (char *)(param_6 + 0x278);
    }
    iVar8 = 0;
    if (*pcVar1 != '\0') {
      iVar8 = param_6 + 0x14;
    }
  }
  uVar9 = 0x8876086c;
  if (iVar8 != 0) {
    uVar9 = FUN_1000a3e0(param_1 + -0x66b4,param_2,param_3,param_4,param_5 + -0x68,param_1 + 0x6dc,
                         *(undefined4 *)(param_1 + 0x5c24),iVar8,param_7);
  }
LAB_100d8034:
  if (bVar6) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar9;
}

