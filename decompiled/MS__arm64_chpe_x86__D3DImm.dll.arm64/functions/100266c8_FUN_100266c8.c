/*
 * FUN_100266c8 at 100266c8
 * undefined FUN_100266c8(void)
 * Address ranges: 100266c8-1002728f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100266c8(int param_1,uint param_2,undefined8 param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
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
  ulonglong uVar23;
  int iVar24;
  int local_88;
  byte *local_84;
  int *local_80;
  int local_7c;
  undefined1 local_78;
  char local_77;
  undefined4 local_76;
  undefined1 local_72;
  int *local_70;
  int *local_6c;
  uint local_68;
  int local_64;
  int *local_60;
  int local_58 [6];
  
  iVar22 = param_1 + 0x1000;
  FUN_10026090(param_1,0,0,0);
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*param_4 == 0) && (*param_5 == 0)) {
    iVar24 = *(int *)(param_1 + 0x1f6c);
    if (iVar24 != 0) {
      iVar24 = *(int *)(iVar24 + 0x2c);
      iVar19 = *(int *)(param_1 + 0x1f90);
      iVar4 = *(int *)(param_1 + 0x1f80);
      uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar13 = (*extraout_w11)(uVar13);
      FUN_1001f7e8(param_1,uVar13,iVar4 + iVar24 * iVar19);
    }
    iVar24 = *(int *)(param_1 + 0x1f70);
    if (iVar24 != 0) {
      iVar24 = *(int *)(iVar24 + 0x2c);
      iVar19 = *(int *)(param_1 + 0x1f94);
      iVar4 = *(int *)(param_1 + 0x1f84);
      uVar13 = (*pcVar9)();
      uVar13 = (*extraout_w11_00)(uVar13);
      FUN_1001f7e8(param_1,uVar13,iVar4 + iVar24 * iVar19);
    }
    iVar24 = *(int *)(param_1 + 0x1f74);
    if (iVar24 != 0) {
      iVar24 = *(int *)(iVar24 + 0x2c);
      iVar19 = *(int *)(param_1 + 0x1f98);
      iVar4 = *(int *)(param_1 + 0x1f88);
      uVar13 = (*pcVar9)();
      uVar13 = (*extraout_w11_01)(uVar13);
      FUN_1001f7e8(param_1,uVar13,iVar4 + iVar24 * iVar19);
    }
    iVar24 = *(int *)(param_1 + 0x1f78);
    if (iVar24 != 0) {
      iVar24 = *(int *)(iVar24 + 0x2c);
      iVar19 = *(int *)(param_1 + 0x1f9c);
      iVar4 = *(int *)(param_1 + 0x1f8c);
      uVar13 = (*pcVar9)();
      uVar13 = (*extraout_w11_02)(uVar13);
      FUN_1001f7e8(param_1,uVar13,iVar4 + iVar24 * iVar19);
    }
    piVar3 = (int *)(param_1 + 0x1f7c);
    if (*piVar3 != 0) {
      local_84 = (byte *)(param_1 + 0x1fa4);
      local_88 = *(int *)(param_1 + 0x1fa0) + *(int *)(*piVar3 + 0x2c) * *(int *)local_84;
      uVar13 = (*pcVar9)();
      uVar13 = (*extraout_w11_03)(uVar13);
      FUN_1001fa50(param_1,uVar13,local_88);
      uVar13 = (*pcVar9)();
      cVar12 = (*extraout_w11_04)(uVar13);
      if (cVar12 != '\0') {
        iVar24 = *(int *)(*piVar3 + 0x24);
        iVar19 = *(int *)local_84;
        iVar4 = *(int *)(*piVar3 + 0x2c);
        iVar5 = *(int *)(param_1 + 0x1fa0);
        uVar13 = (*pcVar9)();
        uVar13 = (*extraout_w11_05)(uVar13);
        FUN_1001fa50(param_1,uVar13,iVar5 + (iVar24 + iVar19) * iVar4);
      }
    }
    *(int *)(param_1 + 0x1f78) = 0;
    *(int *)(param_1 + 0x1f74) = 0;
    *(int *)(param_1 + 0x1f70) = 0;
    *(int *)(param_1 + 0x1f6c) = 0;
    uVar13 = *(undefined4 *)(param_1 + 0x1dec);
    *(undefined4 *)(param_1 + 0x1f60) = uVar13;
    *(undefined4 *)(param_1 + 0x1f5c) = uVar13;
    *(undefined4 *)(param_1 + 0x1f58) = uVar13;
    *(undefined4 *)(param_1 + 0x1f54) = uVar13;
    *piVar3 = 0;
    *(undefined8 *)(param_1 + 0x1e3c) = 0;
    *(undefined8 *)(param_1 + 0x1e34) = 0;
    *(undefined4 *)(param_1 + 0x1f64) = uVar13;
    *(undefined4 *)(param_1 + 0x1e54) = 0;
    *(undefined8 *)(param_1 + 0x1838) = 0;
    *(undefined1 *)(param_1 + 0x1908) = 1;
    *(undefined1 *)(param_1 + 0x21cd) = 0;
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    uVar15 = 0;
    if (param_2 != 0) {
      do {
        iVar24 = 0;
        if (param_4[uVar15 * 3] != 0) {
          iVar24 = param_4[uVar15 * 3] + -0xc0;
        }
        piVar3 = local_58 + uVar15;
        uVar15 = uVar15 + 1;
        *piVar3 = iVar24;
      } while (uVar15 < param_2);
    }
    uVar15 = 0;
    iVar24 = 0;
    if (*param_5 != 0) {
      iVar24 = *param_5 + -0xc0;
    }
    if (param_2 != 0) {
      local_84 = (byte *)(param_1 + 0x21cd);
      local_7c = iVar24;
      local_70 = param_4;
      local_68 = param_2;
      local_64 = iVar22;
      local_60 = param_5;
      do {
        pbVar17 = (byte *)(param_1 + 0x21cd);
        iVar22 = param_1 + uVar15 * 4;
        piVar3 = (int *)(param_1 + 0x1f6c) + uVar15;
        if (*piVar3 == 0) {
          uVar16 = 0;
        }
        else {
          iVar24 = *(int *)(iVar22 + 0x1f90);
          iVar19 = *(int *)(*piVar3 + 0x2c);
          iVar4 = *(int *)(iVar22 + 0x1f80);
          uVar13 = (*pcVar9)();
          uVar13 = (*extraout_w11_06)(uVar13);
          uVar16 = FUN_1001f7e8(param_1,uVar13,iVar4 + iVar24 * iVar19);
          pbVar17 = local_84;
        }
        iVar24 = local_58[uVar15];
        if (iVar24 == 0) {
          *piVar3 = 0;
          *(undefined4 *)(iVar22 + 0x1e34) = 0;
          *(undefined4 *)(iVar22 + 0x1f80) = 0;
          *(undefined4 *)(iVar22 + 0x1f90) = 0;
          *(undefined4 *)(iVar22 + 0x1f54) = *(undefined4 *)(param_1 + 0x1dec);
          *pbVar17 = *pbVar17 & ((byte)(1 << (ulonglong)(uVar15 & 0x1f)) ^ 0xff);
        }
        else {
          local_80 = (int *)(iVar24 + 0x2c);
          iVar19 = *local_80;
          local_6c = local_70 + uVar15 * 3 + 2;
          piVar1 = local_70 + uVar15 * 3 + 1;
          iVar4 = *local_6c;
          iVar5 = *piVar1;
          *piVar3 = iVar24;
          (*pcVar9)(uVar16,iVar5 + iVar4 * iVar19);
          uVar14 = (*extraout_w11_07)(iVar24);
          iVar19 = *(int *)(*(int *)(param_1 + 0x1d54) + 0x15dc);
          uVar13 = (*pcVar9)();
          (*extraout_w11_08)(uVar13,&local_88);
          local_88 = local_88 + *(int *)(iVar19 + 0x18) * (uVar14 & 0xffff);
          *(int *)(iVar22 + 0x1f54) = local_88;
          *(undefined4 *)(iVar22 + 0x1e34) = *(undefined4 *)(iVar24 + 0x7c);
          *(int *)(iVar22 + 0x1f80) = *piVar1;
          *(int *)(iVar22 + 0x1f90) = *local_6c;
          cVar12 = (char)*piVar1 + (char)*local_6c * (char)*local_80;
          (*pcVar9)();
          local_80 = (int *)(*extraout_w11_09)(iVar24);
          uVar14 = *(uint *)(param_1 + 0x1ec8);
          if (uVar14 == 0) {
LAB_10026da8:
            local_77 = cVar12 + '\x01';
            local_78 = 0;
            local_72 = 1;
            local_76 = 0;
            FUN_100285e8(param_1 + 0x1ec0,&local_80,&local_78);
          }
          else {
            uVar20 = 0;
            uVar18 = uVar14;
            do {
              uVar21 = uVar18 + uVar20 >> 1;
              uVar23 = *(ulonglong *)(*(int *)(param_1 + 0x1ec4) + uVar21 * 0x18);
              uVar10 = uVar21;
              if (uVar23 <= (ulonglong)(longlong)(int)local_80) {
                if ((ulonglong)(longlong)(int)local_80 <= uVar23) break;
                uVar20 = uVar21 + 1;
                uVar21 = uVar20;
                uVar10 = uVar18;
              }
              uVar18 = uVar10;
            } while (uVar18 != uVar20);
            if (((uVar21 == uVar14) ||
                (plVar8 = (longlong *)(*(int *)(param_1 + 0x1ec4) + uVar21 * 0x18),
                *plVar8 != (longlong)(int)local_80)) || ((int)plVar8 + 0xc == 0)) goto LAB_10026da8;
            iVar22 = 0;
            if (((*(char *)((int)plVar8 + 0xd) == '\0') ||
                (iVar22 = 1, *(char *)((int)plVar8 + 0xe) == '\0')) ||
               ((iVar22 = 2, *(char *)((int)plVar8 + 0xf) == '\0' ||
                (iVar22 = 3, (char)plVar8[2] == '\0')))) {
              *(char *)((int)plVar8 + 0xc + iVar22 + 1) = cVar12 + '\x01';
            }
            *(undefined1 *)((int)plVar8 + 0x12) = 1;
          }
          *(byte *)(param_1 + 0x21cd) =
               (byte)(1 << (ulonglong)(uVar15 & 0x1f)) | *(byte *)(param_1 + 0x21cd);
          *(undefined1 *)(param_1 + 0x21d3) = 1;
        }
        uVar15 = uVar15 + 1;
        iVar24 = local_7c;
        param_5 = local_60;
        iVar22 = local_64;
      } while (uVar15 < local_68);
    }
    if (*(int *)(param_1 + 0x1f6c) == 0) {
      bVar11 = false;
    }
    else {
      uVar13 = (*pcVar9)();
      cVar12 = (*extraout_w11_10)(uVar13);
      bVar11 = cVar12 != '\0';
    }
    cVar12 = *(char *)(iVar22 + 0x900);
    *(bool *)(iVar22 + 0x900) = bVar11;
    *(byte *)(iVar22 + 0xd3c) = bVar11 != (bool)cVar12 | *(byte *)(iVar22 + 0xd3c);
    if (iVar24 == 0) {
      cVar12 = '\0';
    }
    else {
      (*pcVar9)();
      cVar12 = (*extraout_w11_11)(iVar24);
    }
    cVar7 = *(char *)(iVar22 + 0x842);
    *(char *)(iVar22 + 0x842) = cVar12;
    *(byte *)(iVar22 + 0xd3b) = cVar12 != cVar7 | *(byte *)(iVar22 + 0xd3b);
    piVar3 = (int *)(param_1 + 0x1f7c);
    if (*piVar3 != 0) {
      iVar19 = *(int *)(param_1 + 0x1fa4);
      iVar4 = *(int *)(*piVar3 + 0x2c);
      iVar5 = *(int *)(param_1 + 0x1fa0);
      uVar13 = (*pcVar9)();
      uVar13 = (*extraout_w11_12)(uVar13);
      FUN_1001fa50(param_1,uVar13,iVar5 + iVar4 * iVar19);
      uVar13 = (*pcVar9)();
      cVar12 = (*extraout_w11_13)(uVar13);
      if (cVar12 != '\0') {
        iVar19 = *(int *)(*piVar3 + 0x24);
        iVar4 = *(int *)(param_1 + 0x1fa4);
        iVar5 = *(int *)(*piVar3 + 0x2c);
        iVar6 = *(int *)(param_1 + 0x1fa0);
        uVar13 = (*pcVar9)();
        uVar13 = (*extraout_w11_14)(uVar13);
        FUN_1001fa50(param_1,uVar13,iVar6 + (iVar19 + iVar4) * iVar5);
      }
    }
    if (iVar24 == 0) {
      *(undefined4 *)(param_1 + 0x1f64) = *(undefined4 *)(param_1 + 0x1dec);
      *(undefined4 *)(param_1 + 0x1e54) = 0;
      *(byte *)(iVar22 + 0xd3b) = *piVar3 != 0 | *(byte *)(iVar22 + 0xd3b);
      iVar19 = 0;
    }
    else {
      piVar1 = param_5 + 2;
      param_5 = param_5 + 1;
      iVar19 = *piVar1;
      piVar2 = (int *)(iVar24 + 0x2c);
      iVar4 = *param_5;
      iVar5 = *piVar2;
      (*pcVar9)();
      uVar13 = (*extraout_w11_15)(iVar24);
      FUN_1001f950(param_1,uVar13,iVar4 + iVar19 * iVar5);
      (*pcVar9)();
      uVar23 = (*extraout_w11_16)(iVar24);
      if ((uVar23 & 0xff) != 0) {
        iVar19 = *(int *)(iVar24 + 0x24);
        iVar4 = *piVar1;
        iVar5 = *piVar2;
        iVar6 = *param_5;
        (*pcVar9)();
        uVar13 = (*extraout_w11_17)(iVar24);
        uVar23 = FUN_1001f950(param_1,uVar13,iVar6 + (iVar19 + iVar4) * iVar5);
      }
      (*pcVar9)(uVar23,*param_5 + *piVar1 * *piVar2);
      uVar15 = (*extraout_w11_18)(iVar24);
      iVar19 = *(int *)(*(int *)(param_1 + 0x1d54) + 0x15e0);
      uVar13 = (*pcVar9)();
      (*extraout_w11_19)(uVar13,&local_7c);
      *(uint *)(param_1 + 0x1f64) = local_7c + *(int *)(iVar19 + 0x18) * (uVar15 & 0xffff);
      *(undefined4 *)(param_1 + 0x1e54) = *(undefined4 *)(iVar24 + 0x7c);
      *(int *)(param_1 + 0x1fa0) = *param_5;
      *(int *)(param_1 + 0x1fa4) = *piVar1;
      *(undefined1 *)(param_1 + 0x21d3) = 1;
      *(byte *)(iVar22 + 0xd3b) = *piVar3 == 0 | *(byte *)(iVar22 + 0xd3b);
      iVar19 = iVar24;
    }
    *piVar3 = iVar19;
    iVar19 = local_58[0];
    if (local_58[0] == 0) {
      iVar19 = iVar24;
    }
    FUN_100351f0(param_1,iVar19);
    FUN_100353c0(param_1,iVar19);
  }
  *(undefined1 *)(iVar22 + 0xd3a) = 1;
  return;
}

