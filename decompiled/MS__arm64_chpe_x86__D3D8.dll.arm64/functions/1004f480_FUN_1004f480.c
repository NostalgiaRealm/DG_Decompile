/*
 * FUN_1004f480 at 1004f480
 * undefined FUN_1004f480(void)
 * Address ranges: 1004f480-1004ff03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f480(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  float fVar21;
  float fVar22;
  int *local_190;
  int *local_17c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  int aiStack_148 [66];
  
  uVar13 = param_3 * 6;
  if (uVar13 < 0x1001) {
    FUN_1004c8a0(param_2);
    iVar11 = 0;
    if (param_8 != 0) {
      iVar11 = param_8 + -0xc0;
    }
    piVar2 = (int *)(param_2 + 0xdbe4);
    iVar8 = *piVar2;
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_2 + 0xdbf4);
    }
    if ((param_8 == 0) && (iVar8 != 0)) {
      FUN_1004e440(param_2,0,0,0);
      piVar3 = (int *)(param_2 + 0xd9b8);
      piVar1 = (int *)(*(int *)(*piVar3 + 0x1304) + 0x634);
      *piVar1 = *piVar1 + 1;
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (((param_5 & 1) != 0) && (*piVar2 != 0)) {
        FUN_10047a30(param_2,0);
        iVar11 = *piVar2;
        uVar9 = (*pcVar7)();
        iVar10 = (*extraout_w11)(uVar9);
        iVar17 = *(int *)(param_2 + 0xdc08);
        iVar16 = *(int *)(param_2 + 0xdbf8);
        iVar11 = *(int *)(iVar11 + 0x2c);
        FUN_100480a8(param_2,iVar10);
        *(undefined1 *)(param_2 + 0xde5b) = 1;
        iVar4 = *(int *)(*piVar3 + 0x1304);
        iVar5 = *(int *)(iVar4 + 0x8e0);
        if ((iVar5 != 0) && (iVar10 != 0)) {
          iVar16 = iVar16 + iVar11 * iVar17;
          iVar11 = FUN_100ec718(*(undefined4 *)(iVar4 + 0x8e4),iVar10,iVar16,0,iVar5,iVar4,4,
                                *(undefined8 *)(iVar4 + 0x938));
          if (*(int *)(*(int *)(iVar4 + 0x8e0) + 0x20) != 3 && iVar11 != 4) {
            FUN_100e0710(iVar4,iVar10,iVar16,iVar11,4);
          }
        }
      }
      if (((param_5 & 6) != 0) && (*(int *)(param_2 + 0xdbf4) != 0)) {
        FUN_10047ac0(param_2);
        iVar11 = *(int *)(param_2 + 0xdbf4);
        uVar9 = (*pcVar7)();
        uVar9 = (*extraout_w11_00)(uVar9);
        piVar2 = (int *)(iVar11 + 0x2c);
        if ((param_5 >> 1 & 1) != 0) {
          FUN_100480a8(param_2,uVar9,
                       *(int *)(param_2 + 0xdc18) + *(int *)(param_2 + 0xdc1c) * *piVar2);
          *(undefined1 *)(param_2 + 0xde5b) = 1;
          FUN_100e1588(*(undefined4 *)(*piVar3 + 0x1304),extraout_x1 & 0xffffffff);
        }
        local_17c = (int *)(param_2 + 0xdc1c);
        local_190 = (int *)(param_2 + 0xdc18);
        puVar18 = (undefined1 *)(param_2 + 0xde5b);
        if ((param_5 >> 2 & 1) != 0) {
          FUN_100480a8(param_2,uVar9,*local_190 + (*(int *)(iVar11 + 0x24) + *local_17c) * *piVar2);
          *puVar18 = 1;
          FUN_100e1588(*(undefined4 *)(*(int *)(param_2 + 0xd9b8) + 0x1304),
                       extraout_x1_00 & 0xffffffff);
        }
      }
      uVar13 = *(uint *)(iVar8 + 0x14);
      uVar9 = (*pcVar7)();
      uVar12 = (*extraout_w11_01)(uVar9,0);
      uVar19 = *(uint *)(iVar8 + 0x18);
      fVar21 = (float)uVar12 / (float)uVar13;
      uVar9 = (*pcVar7)();
      uVar13 = (*extraout_w11_02)(uVar9,0);
      fVar22 = (float)uVar13 / (float)uVar19;
      if (param_3 != 0) {
        uVar13 = 0;
        do {
          iVar11 = *(int *)(param_4 + 4 + uVar13 * 0x10);
          iVar8 = *(int *)(param_4 + 8 + uVar13 * 0x10);
          iVar17 = *(int *)(param_4 + 0xc + uVar13 * 0x10);
          uVar19 = uVar13 + 1;
          aiStack_148[uVar13 * 4] = (int)((float)*(int *)(param_4 + uVar13 * 0x10) * fVar21);
          aiStack_148[uVar13 * 4 + 1] = (int)((float)iVar11 * fVar22);
          aiStack_148[uVar13 * 4 + 2] = (int)((float)iVar8 * fVar21);
          aiStack_148[uVar13 * 4 + 3] = (int)((float)iVar17 * fVar22);
          uVar13 = uVar19;
        } while (uVar19 < param_3);
      }
      if ((param_5 & 1) != 0) {
        if (*(int *)(param_2 + 0x4d0c) == 0) {
          uVar19 = param_6 >> 0x10 & 0xff;
          uVar12 = param_6 >> 8 & 0xff;
          uVar20 = 0xff;
          uVar13 = param_6 & 0xff;
        }
        else {
          uVar19 = *(uint *)(param_2 + 0x4d20) & param_6 >> 0x10;
          uVar12 = *(uint *)(param_2 + 0x4d24) & param_6 >> 8;
          uVar20 = *(uint *)(param_2 + 0x4d2c);
          uVar13 = *(uint *)(param_2 + 0x4d28) & param_6;
        }
        local_158 = (float)uVar19 / 255.0;
        fStack_154 = (float)uVar12 / 255.0;
        local_150 = (float)uVar13 / 255.0;
        local_14c = (float)(uVar20 & param_6 >> 0x18) / 255.0;
        if (*(int *)(param_2 + 0xdbe4) != 0) {
          uVar9 = *(undefined4 *)(param_2 + 0xdbcc);
          iVar11 = *(int *)(*(int *)(param_2 + 0xd9b8) + 0x1304);
          iVar8 = *(int *)(iVar11 + 0x8ec);
          if (iVar8 != 0) {
            uVar15 = *(undefined4 *)(iVar11 + 0x8e8);
            FUN_100e09c8(iVar11);
            uVar14 = (*pcVar7)();
            (*extraout_w11_03)(uVar14,iVar8,uVar15);
            *(undefined4 *)(iVar11 + 0x8ec) = 0;
          }
          FUN_100e09c8(iVar11);
          uVar15 = (*pcVar7)();
          (*extraout_w11_04)(uVar15,uVar9,&local_158,param_3,aiStack_148);
          cVar6 = *(char *)(iVar11 + 0x620);
          *(char *)(iVar11 + 0x620) = '\0';
          iVar8 = 8;
          if (cVar6 == '\0') {
            iVar8 = 1;
          }
          iVar8 = iVar8 + *(int *)(iVar11 + 0x624);
          *(int *)(iVar11 + 0x624) = iVar8;
          if (((*(int *)(iVar11 + 0x630) <= iVar8) && (*(int *)(iVar11 + 0x8e0) != 0)) &&
             (*(int *)(iVar11 + 0x634) == 0)) {
            FUN_100e1060(iVar11 + 4,0);
          }
        }
      }
      if (((param_5 & 6) != 0) && (*(int *)(param_2 + 0xdbf4) != 0)) {
        uVar9 = *(undefined4 *)(param_2 + 0xdbdc);
        iVar11 = *(int *)(*(int *)(param_2 + 0xd9b8) + 0x1304);
        iVar8 = *(int *)(iVar11 + 0x8ec);
        if (iVar8 != 0) {
          uVar15 = *(undefined4 *)(iVar11 + 0x8e8);
          FUN_100e09c8(iVar11);
          uVar14 = (*pcVar7)();
          (*extraout_w11_05)(uVar14,iVar8,uVar15);
          *(int *)(iVar11 + 0x8ec) = 0;
        }
        FUN_100e09c8(iVar11);
        uVar15 = (*pcVar7)();
        (*extraout_w11_06)(param_1,uVar15,uVar9,param_5 >> 1 & 3);
        cVar6 = *(char *)(iVar11 + 0x620);
        *(char *)(iVar11 + 0x620) = '\0';
        iVar8 = 8;
        if (cVar6 == '\0') {
          iVar8 = 1;
        }
        iVar8 = iVar8 + *(int *)(iVar11 + 0x624);
        *(int *)(iVar11 + 0x624) = iVar8;
        if (((*(int *)(iVar11 + 0x630) <= iVar8) && (*(int *)(iVar11 + 0x8e0) != 0)) &&
           (*(int *)(iVar11 + 0x634) == 0)) {
          FUN_100e1060(iVar11 + 4,0);
        }
      }
      iVar11 = *(int *)(*(int *)(param_2 + 0xd9b8) + 0x1304);
      iVar8 = *(int *)(iVar11 + 0x634) + -1;
      *(int *)(iVar11 + 0x634) = iVar8;
      if ((iVar8 == 0) && (*(int *)(iVar11 + 0x630) <= *(int *)(iVar11 + 0x624))) {
        FUN_100e1060(iVar11 + 4,0);
      }
    }
    else {
      if ((*(char *)(param_2 + 0x5955) == '\0') ||
         ((((param_5 != *(uint *)(param_2 + 0x5934) || (param_6 != *(uint *)(param_2 + 0x5938))) ||
           (param_7 != *(int *)(param_2 + 0x593c))) ||
          ((iVar11 != *(int *)(param_2 + 0xdbe0) ||
           ((uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) < uVar13)))))) {
        FUN_1004e440(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50))
                             < uVar13,0,0x14);
        cVar6 = *(char *)(param_2 + 0x5955);
        if ((cVar6 == '\0') ||
           (((param_5 != *(uint *)(param_2 + 0x5934) || (iVar11 != *(int *)(param_2 + 0xdbe0))) ||
            ((*(int *)(param_2 + 0x6a8) != 0x14 ||
             (*(int *)(param_2 + 0x6ec) != *(int *)(param_2 + 0x5c))))))) {
          *(uint *)(param_2 + 0x5934) = param_5;
          if (cVar6 == '\0') {
            *(undefined1 *)(param_2 + 0xd97e) = 1;
          }
          if (*(int *)(param_2 + 0xdc98) != *(int *)(param_2 + 0xd9d4)) {
            *(int *)(param_2 + 0xdc98) = *(int *)(param_2 + 0xd9d4);
            *(undefined1 *)(param_2 + 0xd97f) = 1;
          }
          if (*(int *)(param_2 + 0x6a8) != 0x14) {
            *(undefined1 *)(param_2 + 0xd97f) = 1;
            *(int *)(param_2 + 0x6a8) = 0x14;
          }
          if (*(int *)(param_2 + 0x6ec) != *(int *)(param_2 + 0x5c)) {
            *(int *)(param_2 + 0x6ec) = *(int *)(param_2 + 0x5c);
            *(undefined1 *)(param_2 + 0xd97f) = 1;
          }
          if ((iVar11 != 0) && (iVar11 != *(int *)(param_2 + 0xdbe0))) {
            FUN_10047c28(param_2,*(undefined4 *)(param_2 + 0xdc80));
            *(undefined1 *)(param_2 + 0xd979) = 1;
          }
          *(int *)(param_2 + 0xdbe0) = iVar11;
          *(undefined4 *)(param_2 + 0xda9c) = *(undefined4 *)(*(int *)(param_2 + 0xd9c4) + 0xac);
          uVar9 = *(undefined4 *)(*(int *)(param_2 + 0xd9c4) + 0xb0);
          *(undefined4 *)(param_2 + 0xda84) = 0;
          *(undefined1 *)(param_2 + 0xd978) = 1;
          *(undefined4 *)(param_2 + 0xda74) = uVar9;
          *(undefined4 *)(param_2 + 0xdaa4) = 3;
          *(undefined4 *)(param_2 + 0xdce0) = 4;
          *(undefined1 *)(param_2 + 0x595b) = 0;
          if (*(char *)(param_2 + 0x5955) == '\0') {
            *(undefined1 *)(param_2 + 0x5955) = 1;
            FUN_1005f298(param_2);
          }
          *(undefined1 *)(param_2 + 0xde5a) = 1;
          *(undefined2 *)(param_2 + 0xde58) = 0x101;
        }
      }
      *(undefined4 *)(param_2 + 0xde50) = 1;
      *(undefined1 *)(param_2 + 0xde54) = 0;
      FUN_10064088(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    (*(code *)PTR_FUN_10134064)();
  }
  return;
}

