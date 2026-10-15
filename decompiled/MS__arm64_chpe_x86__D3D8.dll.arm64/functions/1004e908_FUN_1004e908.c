/*
 * FUN_1004e908 at 1004e908
 * undefined FUN_1004e908(void)
 * Address ranges: 1004e908-1004f47b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e908(int param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  byte bVar9;
  byte *pbVar10;
  code *pcVar11;
  uint uVar12;
  bool bVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  int *local_84;
  int local_80;
  int *local_7c;
  int local_78;
  int *local_74;
  undefined1 local_70;
  char local_6f;
  undefined4 local_6e;
  undefined1 local_6a;
  int *local_68;
  byte *local_64;
  int *local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50 [4];
  
  iVar23 = param_1 + 0xd000;
  local_7c = param_4;
  local_74 = param_5;
  FUN_1004e440(param_1,0,0,0);
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*param_4 == 0) && (*param_5 == 0)) {
    if (*(int *)(param_1 + 0xdbe4) != 0) {
      iVar26 = *(int *)(param_1 + 0xdc08);
      iVar25 = *(int *)(*(int *)(param_1 + 0xdbe4) + 0x2c);
      iVar20 = *(int *)(param_1 + 0xdbf8);
      uVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar15 = (*extraout_w11)(uVar15);
      FUN_10047d00(param_1,uVar15,iVar20 + iVar26 * iVar25);
    }
    if (*(int *)(param_1 + 0xdbe8) != 0) {
      iVar26 = *(int *)(param_1 + 0xdc0c);
      iVar25 = *(int *)(*(int *)(param_1 + 0xdbe8) + 0x2c);
      iVar20 = *(int *)(param_1 + 0xdbfc);
      uVar15 = (*pcVar11)();
      uVar15 = (*extraout_w11_00)(uVar15);
      FUN_10047d00(param_1,uVar15,iVar20 + iVar26 * iVar25);
    }
    if (*(int *)(param_1 + 0xdbec) != 0) {
      iVar26 = *(int *)(param_1 + 0xdc10);
      iVar25 = *(int *)(*(int *)(param_1 + 0xdbec) + 0x2c);
      iVar20 = *(int *)(param_1 + 0xdc00);
      uVar15 = (*pcVar11)();
      uVar15 = (*extraout_w11_01)(uVar15);
      FUN_10047d00(param_1,uVar15,iVar20 + iVar26 * iVar25);
    }
    if (*(int *)(param_1 + 0xdbf0) != 0) {
      iVar26 = *(int *)(param_1 + 0xdc14);
      iVar25 = *(int *)(*(int *)(param_1 + 0xdbf0) + 0x2c);
      iVar20 = *(int *)(param_1 + 0xdc04);
      uVar15 = (*pcVar11)();
      uVar15 = (*extraout_w11_02)(uVar15);
      FUN_10047d00(param_1,uVar15,iVar20 + iVar26 * iVar25);
    }
    if (*(int *)(param_1 + 0xdbf4) != 0) {
      iVar20 = *(int *)(*(int *)(param_1 + 0xdbf4) + 0x2c);
      iVar26 = *(int *)(param_1 + 0xdc18);
      iVar25 = *(int *)(param_1 + 0xdc1c);
      uVar15 = (*pcVar11)();
      uVar15 = (*extraout_w11_03)(uVar15);
      FUN_10047f68(param_1,uVar15,iVar26 + iVar20 * iVar25);
      uVar15 = (*pcVar11)();
      cVar14 = (*extraout_w11_04)(uVar15);
      if (cVar14 != '\0') {
        iVar20 = *(int *)(*(int *)(param_1 + 0xdbf4) + 0x24);
        iVar26 = *(int *)(param_1 + 0xdc18);
        iVar25 = *(int *)(param_1 + 0xdc1c);
        iVar4 = *(int *)(*(int *)(param_1 + 0xdbf4) + 0x2c);
        uVar15 = (*pcVar11)();
        uVar15 = (*extraout_w11_05)(uVar15);
        FUN_10047f68(param_1,uVar15,iVar26 + (iVar20 + iVar25) * iVar4);
      }
    }
    *(undefined4 *)(param_1 + 0xdbec) = 0;
    *(undefined4 *)(param_1 + 0xdbf0) = 0;
    *(undefined4 *)(param_1 + 0xdbe4) = 0;
    *(undefined4 *)(param_1 + 0xdbe8) = 0;
    uVar15 = *(undefined4 *)(param_1 + 0xda64);
    *(undefined4 *)(param_1 + 0xdbd4) = uVar15;
    *(undefined4 *)(param_1 + 0xdbd8) = uVar15;
    *(undefined4 *)(param_1 + 0xdbcc) = uVar15;
    *(undefined4 *)(param_1 + 0xdbd0) = uVar15;
    *(undefined4 *)(param_1 + 0xdbf4) = 0;
    *(undefined8 *)(param_1 + 0xdab4) = 0;
    *(undefined8 *)(param_1 + 0xdaac) = 0;
    *(undefined4 *)(param_1 + 0xdbdc) = uVar15;
    *(undefined8 *)(param_1 + 0x5888) = 0;
    *(undefined4 *)(param_1 + 0xdacc) = 0;
    *(undefined1 *)(param_1 + 0xde55) = 0;
    *(undefined1 *)(param_1 + 0x5958) = 1;
    *(undefined4 *)(param_1 + 0x560) = 1;
  }
  else {
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    uVar17 = 0;
    if (param_2 != 0) {
      do {
        iVar26 = 0;
        if (local_7c[uVar17 * 3] != 0) {
          iVar26 = local_7c[uVar17 * 3] + -0xc0;
        }
        piVar2 = local_50 + uVar17;
        uVar17 = uVar17 + 1;
        *piVar2 = iVar26;
      } while (uVar17 < param_2);
    }
    uVar17 = 0;
    iVar26 = 0;
    if (*local_74 != 0) {
      iVar26 = *local_74 + -0xc0;
    }
    iVar25 = param_1 + 0xc000;
    if (param_2 != 0) {
      local_64 = (byte *)(param_1 + 0xde55);
      local_80 = iVar26;
      local_68 = (int *)(param_1 + 0xdbe4);
      local_5c = param_2;
      local_58 = iVar23;
      local_54 = param_1 + 0xc000;
      do {
        pbVar10 = (byte *)(param_1 + 0xde55);
        iVar23 = param_1 + uVar17 * 4;
        piVar2 = local_68 + uVar17;
        if (*piVar2 == 0) {
          uVar18 = 0;
        }
        else {
          iVar26 = *(int *)(iVar23 + 0xdc08);
          iVar25 = *(int *)(*piVar2 + 0x2c);
          iVar20 = *(int *)(iVar23 + 0xdbf8);
          uVar15 = (*pcVar11)();
          uVar15 = (*extraout_w11_06)(uVar15);
          uVar18 = FUN_10047d00(param_1,uVar15,iVar20 + iVar26 * iVar25);
          pbVar10 = local_64;
        }
        iVar26 = local_50[uVar17];
        if (iVar26 == 0) {
          *piVar2 = 0;
          *(undefined4 *)(iVar23 + 0xdaac) = 0;
          *(undefined4 *)(iVar23 + 0xdbf8) = 0;
          *(undefined4 *)(iVar23 + 0xdc08) = 0;
          *(undefined4 *)(iVar23 + 0xdbcc) = *(undefined4 *)(param_1 + 0xda64);
          *pbVar10 = *pbVar10 & ((byte)(1 << (ulonglong)(uVar17 & 0x1f)) ^ 0xff);
        }
        else {
          local_84 = (int *)(iVar26 + 0x2c);
          iVar25 = *local_84;
          local_60 = local_7c + uVar17 * 3 + 2;
          piVar1 = local_7c + uVar17 * 3 + 1;
          iVar20 = *local_60;
          iVar4 = *piVar1;
          *piVar2 = iVar26;
          (*pcVar11)(uVar18,iVar4 + iVar25 * iVar20);
          uVar16 = (*extraout_w11_07)(iVar26);
          iVar25 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15dc);
          uVar15 = (*pcVar11)();
          (*extraout_w11_08)(uVar15,&local_78);
          local_78 = local_78 + *(int *)(iVar25 + 0x18) * (uVar16 & 0xffff);
          *(int *)(iVar23 + 0xdbcc) = local_78;
          *(undefined4 *)(iVar23 + 0xdaac) = *(undefined4 *)(iVar26 + 0x7c);
          *(int *)(iVar23 + 0xdbf8) = *piVar1;
          *(int *)(iVar23 + 0xdc08) = *local_60;
          cVar14 = (char)*piVar1 + (char)*local_84 * (char)*local_60;
          (*pcVar11)();
          local_84 = (int *)(*extraout_w11_09)(iVar26);
          uVar16 = *(uint *)(param_1 + 0xdb40);
          if (uVar16 == 0) {
LAB_1004ef44:
            local_6f = cVar14 + '\x01';
            local_70 = 0;
            local_6a = 1;
            local_6e = 0;
            FUN_10050660(param_1 + 0xdb38,&local_84,&local_70);
          }
          else {
            uVar21 = 0;
            uVar19 = uVar16;
            do {
              uVar22 = uVar19 + uVar21 >> 1;
              uVar24 = *(ulonglong *)(*(int *)(param_1 + 0xdb3c) + uVar22 * 0x18);
              uVar12 = uVar22;
              if (uVar24 <= (ulonglong)(longlong)(int)local_84) {
                if ((ulonglong)(longlong)(int)local_84 <= uVar24) break;
                uVar21 = uVar22 + 1;
                uVar22 = uVar21;
                uVar12 = uVar19;
              }
              uVar19 = uVar12;
            } while (uVar19 != uVar21);
            if (((uVar22 == uVar16) ||
                (plVar8 = (longlong *)(*(int *)(param_1 + 0xdb3c) + uVar22 * 0x18),
                *plVar8 != (longlong)(int)local_84)) || ((int)plVar8 + 0xc == 0)) goto LAB_1004ef44;
            iVar23 = 0;
            if (((*(char *)((int)plVar8 + 0xd) == '\0') ||
                (iVar23 = 1, *(char *)((int)plVar8 + 0xe) == '\0')) ||
               ((iVar23 = 2, *(char *)((int)plVar8 + 0xf) == '\0' ||
                (iVar23 = 3, (char)plVar8[2] == '\0')))) {
              *(char *)((int)plVar8 + 0xc + iVar23 + 1) = cVar14 + '\x01';
            }
            *(undefined1 *)((int)plVar8 + 0x12) = 1;
          }
          *(byte *)(param_1 + 0xde55) =
               (byte)(1 << (ulonglong)(uVar17 & 0x1f)) | *(byte *)(param_1 + 0xde55);
          *(undefined1 *)(param_1 + 0xde5b) = 1;
        }
        uVar17 = uVar17 + 1;
        iVar26 = local_80;
        iVar25 = local_54;
        iVar23 = local_58;
      } while (uVar17 < local_5c);
    }
    if (*(int *)(param_1 + 0xdbe4) == 0) {
      bVar13 = false;
    }
    else {
      uVar15 = (*pcVar11)();
      cVar14 = (*extraout_w11_10)(uVar15);
      bVar13 = cVar14 != '\0';
    }
    cVar14 = *(char *)(param_1 + 0x5950);
    *(bool *)(param_1 + 0x5950) = bVar13;
    bVar9 = bVar13 != (bool)cVar14 | *(byte *)(iVar23 + 0x97c);
    uVar17 = *(uint *)(param_1 + 0x560);
    *(byte *)(iVar23 + 0x97c) = bVar9;
    if (param_3 != uVar17) {
      if (uVar17 < 2) {
        uVar17 = 0xffffffff;
      }
      else {
        uVar17 = *(uint *)(param_1 + 0x55c);
      }
      if (param_3 < 2) {
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x55c);
      }
      *(uint *)(param_1 + 0x560) = param_3;
      uVar21 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(iVar23 + 0x97c) = (uVar21 & uVar17) != (uVar21 & uVar16) | bVar9;
    }
    if (iVar26 == 0) {
      cVar14 = '\0';
    }
    else {
      (*pcVar11)();
      cVar14 = (*extraout_w11_11)(iVar26);
    }
    iVar20 = *(int *)(iVar25 + 0x1bf4);
    cVar7 = *(char *)(param_1 + 0x5892);
    *(char *)(param_1 + 0x5892) = cVar14;
    *(byte *)(iVar23 + 0x97b) = cVar14 != cVar7 | *(byte *)(iVar23 + 0x97b);
    if (iVar20 != 0) {
      iVar4 = *(int *)(param_1 + 0xdc1c);
      iVar20 = *(int *)(iVar20 + 0x2c);
      iVar5 = *(int *)(param_1 + 0xdc18);
      uVar15 = (*pcVar11)();
      uVar15 = (*extraout_w11_12)(uVar15);
      FUN_10047f68(param_1,uVar15,iVar5 + iVar20 * iVar4);
      uVar15 = (*pcVar11)();
      cVar14 = (*extraout_w11_13)(uVar15);
      if (cVar14 != '\0') {
        iVar20 = *(int *)(*(int *)(iVar25 + 0x1bf4) + 0x24);
        iVar4 = *(int *)(param_1 + 0xdc1c);
        iVar5 = *(int *)(*(int *)(iVar25 + 0x1bf4) + 0x2c);
        iVar6 = *(int *)(param_1 + 0xdc18);
        uVar15 = (*pcVar11)();
        uVar15 = (*extraout_w11_14)(uVar15);
        FUN_10047f68(param_1,uVar15,iVar6 + (iVar20 + iVar4) * iVar5);
      }
    }
    if (iVar26 == 0) {
      *(undefined4 *)(iVar25 + 0x1acc) = 0;
      *(undefined4 *)(iVar25 + 0x1bdc) = *(undefined4 *)(param_1 + 0xda64);
      *(byte *)(iVar23 + 0x97b) = *(int *)(iVar25 + 0x1bf4) != 0 | *(byte *)(iVar23 + 0x97b);
      iVar20 = 0;
    }
    else {
      piVar2 = (int *)(iVar26 + 0x2c);
      iVar20 = *piVar2;
      piVar1 = local_74 + 2;
      piVar3 = local_74 + 1;
      iVar4 = *piVar1;
      iVar5 = *piVar3;
      (*pcVar11)();
      uVar15 = (*extraout_w11_15)(iVar26);
      FUN_10047e68(param_1,uVar15,iVar5 + iVar20 * iVar4);
      (*pcVar11)();
      uVar24 = (*extraout_w11_16)(iVar26);
      if ((uVar24 & 0xff) != 0) {
        iVar20 = *(int *)(iVar26 + 0x24);
        iVar4 = *piVar1;
        iVar5 = *piVar2;
        iVar6 = *piVar3;
        (*pcVar11)();
        uVar15 = (*extraout_w11_17)(iVar26);
        uVar24 = FUN_10047e68(param_1,uVar15,iVar6 + (iVar20 + iVar4) * iVar5);
      }
      (*pcVar11)(uVar24,*piVar3 + *piVar2 * *piVar1);
      uVar17 = (*extraout_w11_18)(iVar26);
      iVar20 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x15e0);
      uVar15 = (*pcVar11)();
      (*extraout_w11_19)(uVar15,&local_80);
      *(uint *)(iVar25 + 0x1bdc) = local_80 + *(int *)(iVar20 + 0x18) * (uVar17 & 0xffff);
      *(undefined4 *)(iVar25 + 0x1acc) = *(undefined4 *)(iVar26 + 0x7c);
      *(int *)(param_1 + 0xdc18) = *piVar3;
      *(int *)(param_1 + 0xdc1c) = *piVar1;
      *(undefined1 *)(param_1 + 0xde5b) = 1;
      *(byte *)(iVar23 + 0x97b) = *(int *)(iVar25 + 0x1bf4) == 0 | *(byte *)(iVar23 + 0x97b);
      iVar20 = iVar26;
    }
    *(int *)(iVar25 + 0x1bf4) = iVar20;
    iVar25 = local_50[0];
    if (local_50[0] == 0) {
      iVar25 = iVar26;
    }
    FUN_100627e0(param_1,iVar25);
    FUN_100629b0(param_1,iVar25);
  }
  *(undefined1 *)(iVar23 + 0x97a) = 1;
  return;
}

