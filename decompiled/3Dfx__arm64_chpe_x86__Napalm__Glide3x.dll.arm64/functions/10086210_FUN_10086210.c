/*
 * FUN_10086210 at 10086210
 * undefined FUN_10086210(void)
 * Address ranges: 10086210-10086573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10086210(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  byte *local_50;
  char *local_4c [3];
  
  pcVar16 = (char *)*param_1;
  iVar15 = 0;
  uVar17 = (uint)*(byte *)param_1[1];
  cVar3 = *pcVar16;
  puVar5 = (uint *)(param_1 + 2);
  pbVar9 = (byte *)param_1[1] + 1;
joined_r0x10086258:
  if (cVar3 == '\0') {
    return iVar15;
  }
  while( true ) {
    if (uVar17 == 0) {
      return iVar15;
    }
    puVar18 = puVar5;
    if (uVar17 == 0x20) goto LAB_100862b8;
    if (uVar17 == 0x25) break;
    cVar3 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    if ((int)cVar3 == uVar17) {
      uVar17 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    else {
      uVar17 = 0;
    }
    if (*pcVar16 == '\0') {
      if (iVar15 != 0) {
        return iVar15;
      }
      return -1;
    }
  }
  bVar2 = *pbVar9;
  pbVar1 = pbVar9 + 1;
  local_50 = pbVar1;
  if (bVar2 < 99) {
    if (bVar2 == 0x25) {
      local_50 = pbVar9 + 2;
      uVar17 = (uint)*pbVar1;
      if (*pcVar16 != '%') {
        uVar17 = 0;
      }
      goto LAB_10086504;
    }
switchD_100862b0_caseD_65:
    uVar17 = 0;
    goto LAB_10086504;
  }
  bVar4 = false;
  uVar19 = 0x10;
  switch(bVar2) {
  case 99:
    uVar17 = (uint)*pbVar1;
    cVar3 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    *(char *)*puVar5 = cVar3;
LAB_10086454:
    local_50 = pbVar9 + 2;
    iVar15 = iVar15 + 1;
    puVar18 = puVar5 + 1;
    break;
  case 100:
  case 0x69:
    bVar4 = true;
  case 0x6f:
  case 0x75:
  case 0x78:
    if (bVar2 == 100 || bVar2 == 0x75) {
      uVar11 = 10;
    }
    else {
      if (bVar2 != 0x78) {
        uVar19 = 0;
      }
      uVar11 = 8;
      if (bVar2 != 0x6f) {
        uVar11 = uVar19;
      }
    }
    local_50 = pbVar9 + 2;
    bVar2 = *pbVar1;
    if (bVar4) {
      iVar6 = FUN_100835f0();
    }
    else {
      iVar6 = FUN_10083620(pcVar16,local_4c,uVar11);
    }
    if ((local_4c[0] == pcVar16) || ((!bVar4 && (iVar6 < 0)))) {
LAB_100863a8:
      uVar17 = 0;
      pcVar16 = local_4c[0];
    }
    else {
      *(int *)*puVar5 = iVar6;
LAB_10086398:
      uVar17 = (uint)bVar2;
      iVar15 = iVar15 + 1;
      puVar18 = puVar5 + 1;
      pcVar16 = local_4c[0];
    }
    break;
  default:
    goto switchD_100862b0_caseD_65;
  case 0x6c:
    local_50 = pbVar9 + 2;
    if (*pbVar1 != 0x6c) goto switchD_100862b0_caseD_65;
    bVar2 = pbVar9[2];
    pbVar1 = pbVar9 + 3;
    uVar17 = bVar2 - 0x6f;
    if ((9 < uVar17) || ((0x241U >> (ulonglong)(uVar17 & 0x1f) & 1) == 0)) {
      uVar17 = bVar2 - 100;
      local_50 = pbVar1;
      if ((5 < uVar17) || ((0x21U >> (ulonglong)(uVar17 & 0x1f) & 1) == 0))
      goto switchD_100862b0_caseD_65;
      bVar4 = true;
    }
    if (bVar2 == 100 || bVar2 == 0x75) {
      uVar11 = 10;
    }
    else {
      if (bVar2 != 0x78) {
        uVar19 = 0;
      }
      uVar11 = 8;
      if (bVar2 != 0x6f) {
        uVar11 = uVar19;
      }
    }
    local_50 = pbVar9 + 4;
    bVar2 = *pbVar1;
    if (bVar4) {
      lVar7 = FUN_100834c0();
    }
    else {
      lVar7 = FUN_100834e0(pcVar16,local_4c,uVar11);
    }
    if ((local_4c[0] == pcVar16) || ((!bVar4 && (lVar7 < 0)))) goto LAB_100863a8;
    *(longlong *)*puVar5 = lVar7;
    goto LAB_10086398;
  case 0x73:
    uVar17 = (uint)*pbVar1;
    while( true ) {
      uVar12 = (ulonglong)*pcVar16;
      uVar8 = FUN_100865d0(uVar12 & 0xffffffff);
      if ((uVar8 & 1) == 0) break;
      pcVar16 = pcVar16 + 1;
    }
    local_50 = (byte *)FUN_100865d0(uVar12 & 0xffffffff);
    puVar18 = puVar5 + 1;
    if (((uint)local_50 & 1) == 0) {
      uVar13 = (ulonglong)*pcVar16;
      uVar12 = (ulonglong)*puVar5;
      uVar8 = uVar12;
      do {
        local_50 = pbVar9 + 2;
        pcVar10 = (char *)uVar12;
        pcVar14 = (char *)uVar8;
        if ((int)uVar13 == 0) break;
        cVar3 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar10 = cVar3;
        uVar13 = (ulonglong)*pcVar16;
        auVar20 = FUN_100865d0(uVar13 & 0xffffffff,pcVar10 + 1);
        uVar12 = auVar20._8_8_;
        pcVar10 = auVar20._8_4_;
        pcVar14 = (char *)uVar8;
      } while ((auVar20._0_8_ & 1) == 0);
      if (pcVar10 != pcVar14) {
        *pcVar10 = '\0';
        goto LAB_10086454;
      }
    }
  }
  goto LAB_10086504;
LAB_100862b8:
  while( true ) {
    auVar21 = FUN_100865d0(*pcVar16);
    if ((auVar21._0_8_ & 1) == 0) break;
    pcVar16 = pcVar16 + 1;
  }
  uVar17 = (uint)*auVar21._8_4_;
  local_50 = auVar21._8_4_ + 1;
LAB_10086504:
  cVar3 = *pcVar16;
  puVar5 = puVar18;
  pbVar9 = local_50;
  goto joined_r0x10086258;
}

