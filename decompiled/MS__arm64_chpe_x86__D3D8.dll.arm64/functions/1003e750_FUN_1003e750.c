/*
 * FUN_1003e750 at 1003e750
 * undefined FUN_1003e750(void)
 * Address ranges: 1003e750-1003ed9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e750(int param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  code *pcVar12;
  bool bVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_58 [6];
  
  FUN_1003c678(param_1,0,0,0);
  if ((*param_4 == 0) && (*param_5 == 0)) {
    *(undefined4 *)(param_1 + 0xdadc) = 0;
    *(undefined4 *)(param_1 + 0xdb78) = 0;
    *(undefined8 *)(param_1 + 0xdad4) = 0;
    *(undefined8 *)(param_1 + 0xdacc) = 0;
    *(undefined1 *)(param_1 + 0x5958) = 1;
    *(undefined8 *)(param_1 + 0xdb48) = 0;
    *(undefined8 *)(param_1 + 0xdb50) = 0;
    *(undefined8 *)(param_1 + 0x5888) = 0;
    *(undefined4 *)(param_1 + 0x560) = 1;
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    uVar17 = 0;
    if (param_2 != 0) {
      do {
        iVar4 = 0;
        if (param_4[uVar17 * 3] != 0) {
          iVar4 = param_4[uVar17 * 3] + -0x88;
        }
        piVar1 = local_58 + uVar17;
        uVar17 = uVar17 + 1;
        *piVar1 = iVar4;
      } while (uVar17 < param_2);
    }
    iVar18 = *(int *)(param_1 + 0xdb08);
    iVar5 = local_58[0];
    iVar4 = 0;
    if (*param_5 != 0) {
      iVar4 = *param_5 + -0x88;
    }
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 1;
    }
    iVar18 = *(int *)(param_1 + 0xdb0c);
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 2;
    }
    iVar18 = *(int *)(param_1 + 0xdb10);
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 4;
    }
    iVar18 = *(int *)(param_1 + 0xdb14);
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 8;
    }
    iVar18 = *(int *)(param_1 + 0xdb18);
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 0x10;
    }
    iVar18 = *(int *)(param_1 + 0xdb1c);
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 0x20;
    }
    iVar18 = *(int *)(param_1 + 0xdb20);
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 0x40;
    }
    iVar18 = *(int *)(param_1 + 0xdb24);
    if ((iVar18 != 0) &&
       (((*(int *)(param_1 + 0xdacc) == iVar18 || (*(int *)(param_1 + 0xdadc) == iVar18)) ||
        (local_58[0] == iVar18 || iVar4 == iVar18)))) {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd970) = *(byte *)(param_1 + 0xd970) | 0x80;
    }
    uVar17 = 0;
    if (param_2 != 0) {
      iVar18 = 0;
      do {
        piVar1 = (int *)(param_1 + 0xdacc + iVar18);
        puVar2 = (undefined4 *)(param_1 + 0xdb48 + iVar18);
        iVar16 = local_58[uVar17];
        piVar3 = (int *)(param_1 + 0xdae0 + iVar18);
        if (iVar16 == 0) {
          *piVar1 = 0;
          iVar16 = 0;
          *puVar2 = 0;
          *piVar3 = 0;
        }
        else {
          iVar6 = param_4[uVar17 * 3 + 2];
          iVar7 = *(int *)(iVar16 + 0x2c);
          iVar8 = param_4[uVar17 * 3 + 1];
          *piVar1 = iVar16;
          *puVar2 = *(undefined4 *)(*(int *)(iVar16 + 0x60) + (iVar8 + iVar7 * iVar6) * 0x1c);
          *piVar3 = param_4[uVar17 * 3 + 1];
          iVar16 = param_4[uVar17 * 3 + 2];
        }
        uVar17 = uVar17 + 1;
        *(int *)(param_1 + 0xdaf0 + iVar18) = iVar16;
        iVar18 = iVar18 + 4;
      } while (uVar17 < param_2);
    }
    pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(int *)(param_1 + 0xdacc) == 0) {
      bVar13 = false;
    }
    else {
      uVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar14 = (*extraout_w11)(uVar15);
      bVar13 = cVar14 != '\0';
    }
    cVar14 = *(char *)(param_1 + 0x5950);
    *(bool *)(param_1 + 0x5950) = bVar13;
    uVar17 = *(uint *)(param_1 + 0x560);
    bVar10 = bVar13 != (bool)cVar14 | *(byte *)(param_1 + 0xd97c);
    *(byte *)(param_1 + 0xd97c) = bVar10;
    if (param_3 != uVar17) {
      if (uVar17 < 2) {
        uVar17 = 0xffffffff;
      }
      else {
        uVar17 = *(uint *)(param_1 + 0x55c);
      }
      if (param_3 < 2) {
        uVar19 = 0xffffffff;
      }
      else {
        uVar19 = *(uint *)(param_1 + 0x55c);
      }
      *(uint *)(param_1 + 0x560) = param_3;
      uVar11 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(param_1 + 0xd97c) = (uVar11 & uVar17) != (uVar11 & uVar19) | bVar10;
    }
    if (iVar4 == 0) {
      cVar14 = '\0';
    }
    else {
      (*pcVar12)();
      cVar14 = (*extraout_w11_00)(iVar4);
    }
    cVar9 = *(char *)(param_1 + 0x5892);
    *(char *)(param_1 + 0x5892) = cVar14;
    *(byte *)(param_1 + 0xd97b) = cVar14 != cVar9 | *(byte *)(param_1 + 0xd97b);
    if (iVar4 == 0) {
      *(int *)(param_1 + 0xdadc) = 0;
      *(undefined4 *)(param_1 + 0xdb78) = 0;
    }
    else {
      iVar18 = param_5[2];
      iVar16 = *(int *)(iVar4 + 0x2c);
      iVar6 = param_5[1];
      *(int *)(param_1 + 0xdadc) = iVar4;
      *(undefined4 *)(param_1 + 0xdb78) =
           *(undefined4 *)(*(int *)(iVar4 + 0x60) + (iVar6 + iVar16 * iVar18) * 0x1c + 4);
      *(int *)(param_1 + 0xdb00) = param_5[1];
      *(int *)(param_1 + 0xdb04) = param_5[2];
    }
    if (iVar5 == 0) {
      iVar5 = iVar4;
    }
    FUN_100627e0(param_1,iVar5);
    FUN_100629b0(param_1,iVar5);
  }
  *(undefined1 *)(param_1 + 0xd97a) = 1;
  return;
}

