/*
 * FUN_1004a6f0 at 1004a6f0
 * undefined FUN_1004a6f0(void)
 * Address ranges: 1004a6f0-1004b8e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a6f0(int param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  char cVar12;
  byte *pbVar13;
  code *pcVar14;
  byte bVar15;
  char cVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *extraout_w8;
  uint uVar20;
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
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  int local_70 [12];
  
  FUN_10047f98(param_1,0,0,0);
  if ((*param_4 == 0) && (*param_5 == 0)) {
    *(undefined4 *)(param_1 + 0xf840) = 0;
    *(undefined4 *)(param_1 + 0xf9c4) = 0;
    *(undefined8 *)(param_1 + 0xf830) = 0;
    *(undefined8 *)(param_1 + 0xf838) = 0;
    *(undefined8 *)(param_1 + 0xf8f4) = 0;
    *(undefined8 *)(param_1 + 0xf8ec) = 0;
    *(undefined8 *)(param_1 + 0x7578) = 0;
    *(undefined1 *)(param_1 + 0x7645) = 1;
    *(undefined4 *)(param_1 + 0xe3c) = 1;
    *(undefined1 *)(param_1 + 0xf6a1) = 1;
  }
  else {
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    uVar18 = 0;
    if (param_2 != 0) {
      do {
        iVar5 = 0;
        if (param_4[uVar18 * 3] != 0) {
          iVar5 = param_4[uVar18 * 3] + -0x88;
        }
        piVar1 = local_70 + uVar18;
        uVar18 = uVar18 + 1;
        *piVar1 = iVar5;
      } while (uVar18 < param_2);
    }
    iVar6 = local_70[0];
    iVar5 = 0;
    if (*param_5 != 0) {
      iVar5 = *param_5 + -0x88;
    }
    iVar19 = 0;
    uVar18 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0xf86c + uVar18 * 4);
      if ((iVar7 != 0) &&
         ((((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
             (local_70[0] == iVar7)) ||
            ((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)))) ||
           ((*(int *)(param_1 + 0xf83c) == iVar7 ||
            ((local_70[1] == iVar7 || (local_70[2] == iVar7)))))) ||
          (local_70[3] == iVar7 || iVar5 == iVar7)))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)uVar18 >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | 1;
      }
      iVar7 = *(int *)(iVar19 + param_1 + 0xf870);
      if ((iVar7 != 0) &&
         (((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
            (local_70[0] == iVar7)) ||
           (((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)) ||
            ((*(int *)(param_1 + 0xf83c) == iVar7 ||
             ((local_70[1] == iVar7 || (local_70[2] == iVar7)))))))) ||
          (local_70[3] == iVar7 || iVar5 == iVar7)))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)(uVar18 + 1) >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)(uVar18 + 1 & 7));
      }
      iVar7 = *(int *)(iVar19 + param_1 + 0xf874);
      if ((iVar7 != 0) &&
         (((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
            (local_70[0] == iVar7)) ||
           (((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)) ||
            ((*(int *)(param_1 + 0xf83c) == iVar7 ||
             ((local_70[1] == iVar7 || (local_70[2] == iVar7)))))))) ||
          (local_70[3] == iVar7 || iVar5 == iVar7)))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)(uVar18 + 2) >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)(uVar18 + 2 & 7));
      }
      iVar7 = *(int *)(iVar19 + param_1 + 0xf878);
      if ((iVar7 != 0) &&
         ((((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
             (local_70[0] == iVar7)) ||
            ((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)))) ||
           ((*(int *)(param_1 + 0xf83c) == iVar7 ||
            ((local_70[1] == iVar7 || (local_70[2] == iVar7)))))) ||
          (local_70[3] == iVar7 || iVar5 == iVar7)))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)(uVar18 + 3) >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)(uVar18 + 3 & 7));
      }
      iVar7 = *(int *)(iVar19 + param_1 + 0xf87c);
      if ((iVar7 != 0) &&
         (((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
            (local_70[0] == iVar7)) ||
           (((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)) ||
            ((*(int *)(param_1 + 0xf83c) == iVar7 ||
             ((local_70[1] == iVar7 || (local_70[2] == iVar7)))))))) ||
          (local_70[3] == iVar7 || iVar5 == iVar7)))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)(uVar18 + 4) >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)(uVar18 + 4 & 7));
      }
      iVar7 = *(int *)(iVar19 + param_1 + 0xf880);
      if ((iVar7 != 0) &&
         ((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
           (local_70[0] == iVar7)) ||
          (((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)) ||
           (((*(int *)(param_1 + 0xf83c) == iVar7 ||
             ((local_70[1] == iVar7 || (local_70[2] == iVar7)))) ||
            (local_70[3] == iVar7 || iVar5 == iVar7)))))))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)(uVar18 + 5) >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)(uVar18 + 5 & 7));
      }
      iVar7 = *(int *)(iVar19 + param_1 + 0xf884);
      if ((iVar7 != 0) &&
         (((((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
              (local_70[0] == iVar7)) ||
             ((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)))) ||
            (*(int *)(param_1 + 0xf83c) == iVar7)) ||
           ((local_70[1] == iVar7 || (local_70[2] == iVar7)))) ||
          (local_70[3] == iVar7 || iVar5 == iVar7)))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)(uVar18 + 6) >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)(uVar18 + 6 & 7));
      }
      iVar7 = *(int *)(iVar19 + param_1 + 0xf888);
      if ((iVar7 != 0) &&
         (((((*(int *)(param_1 + 0xf830) == iVar7 || (*(int *)(param_1 + 0xf840) == iVar7)) ||
            (local_70[0] == iVar7)) ||
           (((*(int *)(param_1 + 0xf834) == iVar7 || (*(int *)(param_1 + 0xf838) == iVar7)) ||
            ((*(int *)(param_1 + 0xf83c) == iVar7 ||
             ((local_70[1] == iVar7 || (local_70[2] == iVar7)))))))) ||
          (local_70[3] == iVar7 || iVar5 == iVar7)))) {
        *(undefined1 *)(param_1 + 0xf669) = 1;
        pbVar13 = (byte *)(((int)(uVar18 + 7) >> 3) + param_1 + 0xf660);
        *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)(uVar18 + 7 & 7));
      }
      uVar18 = uVar18 + 8;
      iVar19 = iVar19 + 0x20;
    } while (uVar18 < 0x10);
    iVar19 = *(int *)(param_1 + 0xf978);
    if ((iVar19 != 0) &&
       (((((*(int *)(param_1 + 0xf830) == iVar19 || (*(int *)(param_1 + 0xf840) == iVar19)) ||
          (local_70[0] == iVar19)) ||
         (((*(int *)(param_1 + 0xf834) == iVar19 || (*(int *)(param_1 + 0xf838) == iVar19)) ||
          ((*(int *)(param_1 + 0xf83c) == iVar19 ||
           ((local_70[1] == iVar19 || (local_70[2] == iVar19)))))))) ||
        (local_70[3] == iVar19 || iVar5 == iVar19)))) {
      *(undefined1 *)(param_1 + 0xf6a0) = 1;
      *(byte *)(param_1 + 0xf698) = *(byte *)(param_1 + 0xf698) | 1;
    }
    iVar19 = *(int *)(param_1 + 0xf97c);
    if ((iVar19 != 0) &&
       ((((((*(int *)(param_1 + 0xf830) == iVar19 || (*(int *)(param_1 + 0xf840) == iVar19)) ||
           (local_70[0] == iVar19)) ||
          ((*(int *)(param_1 + 0xf834) == iVar19 || (*(int *)(param_1 + 0xf838) == iVar19)))) ||
         ((*(int *)(param_1 + 0xf83c) == iVar19 ||
          ((local_70[1] == iVar19 || (local_70[2] == iVar19)))))) ||
        (local_70[3] == iVar19 || iVar5 == iVar19)))) {
      *(undefined1 *)(param_1 + 0xf6a0) = 1;
      *(byte *)(param_1 + 0xf698) = *(byte *)(param_1 + 0xf698) | 2;
    }
    iVar19 = *(int *)(param_1 + 0xf980);
    if ((iVar19 != 0) &&
       (((((*(int *)(param_1 + 0xf830) == iVar19 || (*(int *)(param_1 + 0xf840) == iVar19)) ||
          (local_70[0] == iVar19)) ||
         (((*(int *)(param_1 + 0xf834) == iVar19 || (*(int *)(param_1 + 0xf838) == iVar19)) ||
          ((*(int *)(param_1 + 0xf83c) == iVar19 ||
           ((local_70[1] == iVar19 || (local_70[2] == iVar19)))))))) ||
        (local_70[3] == iVar19 || iVar5 == iVar19)))) {
      *(undefined1 *)(param_1 + 0xf6a0) = 1;
      *(byte *)(param_1 + 0xf698) = *(byte *)(param_1 + 0xf698) | 4;
    }
    iVar19 = *(int *)(param_1 + 0xf984);
    if ((iVar19 != 0) &&
       ((((*(int *)(param_1 + 0xf830) == iVar19 || (*(int *)(param_1 + 0xf840) == iVar19)) ||
         (local_70[0] == iVar19)) ||
        (((*(int *)(param_1 + 0xf834) == iVar19 || (*(int *)(param_1 + 0xf838) == iVar19)) ||
         (((*(int *)(param_1 + 0xf83c) == iVar19 ||
           ((local_70[1] == iVar19 || (local_70[2] == iVar19)))) ||
          (local_70[3] == iVar19 || iVar5 == iVar19)))))))) {
      *(undefined1 *)(param_1 + 0xf6a0) = 1;
      *(byte *)(param_1 + 0xf698) = *(byte *)(param_1 + 0xf698) | 8;
    }
    iVar19 = *(int *)(param_1 + 0xf988);
    if ((iVar19 != 0) &&
       (((((*(int *)(param_1 + 0xf830) == iVar19 || (*(int *)(param_1 + 0xf840) == iVar19)) ||
          (local_70[0] == iVar19)) ||
         ((*(int *)(param_1 + 0xf834) == iVar19 || (*(int *)(param_1 + 0xf838) == iVar19)))) ||
        (((*(int *)(param_1 + 0xf83c) == iVar19 ||
          ((local_70[1] == iVar19 || (local_70[2] == iVar19)))) ||
         (local_70[3] == iVar19 || iVar5 == iVar19)))))) {
      *(undefined1 *)(param_1 + 0xf6a0) = 1;
      *(byte *)(param_1 + 0xf698) = *(byte *)(param_1 + 0xf698) | 0x10;
    }
    pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar18 = 0;
    if (param_2 != 0) {
      iVar19 = 0;
      do {
        piVar1 = (int *)(param_1 + 0xf830 + iVar19);
        puVar2 = (undefined4 *)(param_1 + 0xf8ec + iVar19);
        iVar7 = local_70[uVar18];
        piVar3 = (int *)(param_1 + 0xf844 + iVar19);
        piVar4 = (int *)(param_1 + 0xf854 + iVar19);
        if (iVar7 == 0) {
          *piVar1 = 0;
          *puVar2 = 0;
          *piVar3 = 0;
          *(undefined4 *)(param_1 + uVar18 * 4 + 0xf9a0) = 0;
          *piVar4 = 0;
        }
        else {
          uVar20 = *(uint *)(iVar7 + 0x2c);
          iVar8 = param_4[uVar18 * 3 + 2];
          iVar9 = param_4[uVar18 * 3 + 1];
          *piVar1 = iVar7;
          iVar9 = iVar9 + uVar20 * iVar8;
          piVar1 = (int *)(iVar7 + 0x60);
          uVar17 = *(undefined4 *)(*piVar1 + iVar9 * 0x1c);
          *puVar2 = uVar17;
          *piVar3 = param_4[uVar18 * 3 + 1];
          *piVar4 = param_4[uVar18 * 3 + 2];
          if (uVar18 == 0) {
            if ((*(int *)*piVar1 != 0) && (((int *)*piVar1)[2] == 0)) {
              uVar20 = *(uint *)(iVar7 + 0x2c);
              uVar10 = *(uint *)(iVar7 + 0x24);
              if (uVar10 != 0) {
                uVar22 = 0;
                do {
                  uVar21 = 0;
                  if (uVar20 != 0) {
                    do {
                      iVar7 = uVar21 + uVar22 * uVar20;
                      if (*(int *)(*piVar1 + iVar7 * 0x1c) != 0) {
                        uVar17 = (*pcVar14)();
                        (*extraout_w11)(uVar17,local_70 + 4);
                        if (((uint)local_70[4] < 0x19) &&
                           ((0x1000800U >> (ulonglong)(local_70[4] & 0x1f) & 1) != 0)) {
                          if (local_70[4] != 0) {
LAB_1004b3d8:
                            uVar17 = (*pcVar14)();
                            (*extraout_w11_00)(uVar17,*extraout_w8,local_70 + 4);
                          }
                        }
                        else {
                          if (local_70[4] == 0x1c) {
                            local_70[4] = 0x1d;
                            goto LAB_1004b3d8;
                          }
                          local_70[4] = 0;
                        }
                        piVar4 = (int *)(*piVar1 + iVar7 * 0x1c);
                        piVar3 = piVar4 + 2;
                        if (*piVar3 == 0) {
                          *piVar3 = *piVar4;
                          uVar17 = (*pcVar14)();
                          (*extraout_w11_01)(uVar17);
                        }
                      }
                      uVar21 = uVar21 + 1;
                    } while (uVar21 < uVar20);
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar10);
              }
            }
            *(undefined4 *)(iVar19 + param_1 + 0xf9a0) = *(undefined4 *)(*piVar1 + iVar9 * 0x1c + 8)
            ;
          }
          else {
            *(undefined4 *)(iVar19 + param_1 + 0xf9a0) = uVar17;
          }
        }
        uVar18 = uVar18 + 1;
        iVar19 = iVar19 + 4;
      } while (uVar18 < param_2);
    }
    if (*(int *)(param_1 + 0xf830) == 0) {
      bVar15 = false;
    }
    else {
      uVar17 = (*pcVar14)();
      cVar16 = (*extraout_w11_02)(uVar17);
      bVar15 = cVar16 != '\0';
    }
    if (*(int *)(param_1 + 0xf834) != 0) {
      uVar17 = (*pcVar14)();
      cVar16 = (*extraout_w11_03)(uVar17);
      if (cVar16 != '\0') {
        bVar15 = bVar15 | 2;
      }
    }
    if (*(int *)(param_1 + 0xf838) != 0) {
      uVar17 = (*pcVar14)();
      cVar16 = (*extraout_w11_04)(uVar17);
      if (cVar16 != '\0') {
        bVar15 = bVar15 | 4;
      }
    }
    if (*(int *)(param_1 + 0xf83c) != 0) {
      uVar17 = (*pcVar14)();
      cVar16 = (*extraout_w11_05)(uVar17);
      if (cVar16 != '\0') {
        bVar15 = bVar15 | 8;
      }
    }
    bVar11 = *(byte *)(param_1 + 0x763c);
    *(byte *)(param_1 + 0x763c) = bVar15;
    bVar15 = bVar15 != bVar11 | *(byte *)(param_1 + 0xf66c);
    *(byte *)(param_1 + 0xf66c) = bVar15;
    uVar18 = *(uint *)(param_1 + 0xe3c);
    if (param_3 != uVar18) {
      if (uVar18 < 2) {
        uVar18 = 0xffffffff;
      }
      else {
        uVar18 = *(uint *)(param_1 + 0xe38);
      }
      if (param_3 < 2) {
        uVar20 = 0xffffffff;
      }
      else {
        uVar20 = *(uint *)(param_1 + 0xe38);
      }
      *(uint *)(param_1 + 0xe3c) = param_3;
      uVar10 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(param_1 + 0xf66c) = (uVar18 & uVar10) != (uVar20 & uVar10) | bVar15;
    }
    if (iVar5 == 0) {
      cVar16 = '\0';
    }
    else {
      uVar17 = (*pcVar14)();
      cVar16 = (*extraout_w11_06)(uVar17);
    }
    cVar12 = *(char *)(param_1 + 0x7582);
    *(char *)(param_1 + 0x7582) = cVar16;
    *(byte *)(param_1 + 0xf66b) = cVar16 != cVar12 | *(byte *)(param_1 + 0xf66b);
    piVar1 = (int *)(param_1 + 0xf840);
    if (iVar5 == 0) {
      *piVar1 = 0;
      *(undefined4 *)(param_1 + 0xf9c4) = 0;
    }
    else {
      iVar19 = param_5[2];
      iVar7 = *(int *)(iVar5 + 0x2c);
      iVar8 = param_5[1];
      if ((*piVar1 == 0) ||
         (bVar15 = 0,
         *(int *)(&DAT_10162c20 + *(int *)(*piVar1 + 0x1c) * 4) !=
         *(int *)(&DAT_10162c20 + *(int *)(iVar5 + 0x1c) * 4))) {
        bVar15 = 1;
      }
      *(byte *)(param_1 + 0xf66d) = bVar15 | *(byte *)(param_1 + 0xf66d);
      *piVar1 = iVar5;
      *(undefined4 *)(param_1 + 0xf9c4) =
           *(undefined4 *)(*(int *)(iVar5 + 0x60) + (iVar8 + iVar7 * iVar19) * 0x1c + 4);
      *(int *)(param_1 + 0xf864) = param_5[1];
      *(int *)(param_1 + 0xf868) = param_5[2];
    }
    if (iVar6 == 0) {
      iVar6 = iVar5;
    }
    FUN_10078d10(param_1,iVar6);
    FUN_10078ef0(param_1,iVar6);
    (*pcVar14)();
    fVar23 = (float)(*extraout_w11_07)(iVar6);
    (*pcVar14)();
    fVar24 = (float)(*extraout_w11_08)(iVar6);
    if ((fVar23 != *(float *)(param_1 + 0x6900)) || (fVar24 != *(float *)(param_1 + 0x6904))) {
      *(float *)(param_1 + 0x6900) = 1.0 / fVar23;
      *(undefined4 *)(param_1 + 0x6908) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x690c) = 0x3f800000;
      *(float *)(param_1 + 0x6904) = 1.0 / fVar24;
      *(undefined1 *)(param_1 + 0xf6a3) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0xf66a) = 1;
  return;
}

