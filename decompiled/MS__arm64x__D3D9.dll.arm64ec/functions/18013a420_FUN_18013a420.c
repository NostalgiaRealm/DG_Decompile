/*
 * FUN_18013a420 at 18013a420
 * undefined FUN_18013a420(void)
 * Address ranges: 18013a420-18013b2a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013a420(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong extraout_x8;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong *plVar29;
  code *pcVar30;
  float fVar31;
  float fVar32;
  undefined8 local_e8;
  int local_e0;
  int iStack_dc;
  uint local_d8;
  uint local_d4;
  longlong *local_d0;
  code *local_c8;
  longlong local_c0 [4];
  longlong *local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong *plStack_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  uint local_58 [6];
  
  local_e8 = param_1 + 0xc000;
  lVar14 = param_1 + 0xf000;
  local_d0 = param_5;
  FUN_180137af0(param_1,0,0,0);
  if ((*param_4 == 0) && (*param_5 == 0)) {
    *(undefined8 *)(param_1 + 0xf9d0) = 0;
    *(undefined8 *)(param_1 + 0xfcb0) = 0;
    *(undefined8 *)(param_1 + 0xf9c0) = 0;
    *(undefined8 *)(param_1 + 0xf9c8) = 0;
    *(undefined8 *)(param_1 + 0xf9b0) = 0;
    *(undefined8 *)(param_1 + 0xf9b8) = 0;
    *(undefined8 *)(param_1 + 0xfb10) = 0;
    *(undefined8 *)(param_1 + 0xfb18) = 0;
    *(undefined8 *)(param_1 + 0xfb00) = 0;
    *(undefined8 *)(param_1 + 0xfb08) = 0;
    *(undefined1 *)(param_1 + 0x7665) = 1;
    *(undefined4 *)(param_1 + 0xe5c) = 1;
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
    *(undefined8 *)(param_1 + 0x7598) = 0;
  }
  else {
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_c0[2] = 0;
    local_c0[3] = 0;
    uVar19 = 0;
    if (param_2 != 0) {
      do {
        lVar2 = 0;
        if (param_4[uVar19 * 2] != 0) {
          lVar2 = param_4[uVar19 * 2] + -0xe0;
        }
        local_c0[uVar19] = lVar2;
        uVar11 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar11;
      } while (uVar11 < param_2);
    }
    lVar3 = local_c0[0];
    lVar2 = 0;
    if (*local_d0 != 0) {
      lVar2 = *local_d0 + -0xe0;
    }
    lVar22 = param_1 + 0xf680;
    uVar19 = 0;
    lVar18 = param_1 + 64000;
    do {
      lVar16 = *(longlong *)(lVar18 + uVar19 * 8);
      uVar11 = (uint)uVar19;
      if ((lVar16 != 0) &&
         (((((*(longlong *)(param_1 + 0xf9b0) == lVar16 ||
             (*(longlong *)(param_1 + 0xf9d0) == lVar16)) || (local_c0[0] == lVar16)) ||
           ((*(longlong *)(param_1 + 0xf9b8) == lVar16 ||
            (*(longlong *)(param_1 + 0xf9c0) == lVar16)))) ||
          (((*(longlong *)(param_1 + 0xf9c8) == lVar16 ||
            ((local_c0[1] == lVar16 || (local_c0[2] == lVar16)))) ||
           (local_c0[3] == lVar16 || lVar2 == lVar16)))))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar22 + ((int)uVar11 >> 3)) =
             *(byte *)(lVar22 + ((int)uVar11 >> 3)) | (byte)(1 << (ulonglong)(uVar11 & 7));
      }
      uVar21 = uVar11 + 1;
      lVar16 = *(longlong *)(lVar18 + (ulonglong)uVar21 * 8);
      if ((lVar16 != 0) &&
         (((((*(longlong *)(param_1 + 0xf9b0) == lVar16 ||
             (*(longlong *)(param_1 + 0xf9d0) == lVar16)) || (local_c0[0] == lVar16)) ||
           (((*(longlong *)(param_1 + 0xf9b8) == lVar16 ||
             (*(longlong *)(param_1 + 0xf9c0) == lVar16)) ||
            ((*(longlong *)(param_1 + 0xf9c8) == lVar16 ||
             ((local_c0[1] == lVar16 || (local_c0[2] == lVar16)))))))) ||
          (local_c0[3] == lVar16 || lVar2 == lVar16)))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar22 + ((int)uVar21 >> 3)) =
             *(byte *)(lVar22 + ((int)uVar21 >> 3)) | (byte)(1 << (ulonglong)(uVar21 & 7));
      }
      uVar21 = uVar11 + 2;
      lVar16 = *(longlong *)(lVar18 + (ulonglong)uVar21 * 8);
      if ((lVar16 != 0) &&
         ((((*(longlong *)(param_1 + 0xf9b0) == lVar16 ||
            (*(longlong *)(param_1 + 0xf9d0) == lVar16)) || (local_c0[0] == lVar16)) ||
          (((*(longlong *)(param_1 + 0xf9b8) == lVar16 ||
            (*(longlong *)(param_1 + 0xf9c0) == lVar16)) ||
           (((*(longlong *)(param_1 + 0xf9c8) == lVar16 ||
             ((local_c0[1] == lVar16 || (local_c0[2] == lVar16)))) ||
            (local_c0[3] == lVar16 || lVar2 == lVar16)))))))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar22 + ((int)uVar21 >> 3)) =
             *(byte *)(lVar22 + ((int)uVar21 >> 3)) | (byte)(1 << (ulonglong)(uVar21 & 7));
      }
      uVar21 = uVar11 + 3;
      lVar16 = *(longlong *)(lVar18 + (ulonglong)uVar21 * 8);
      if ((lVar16 != 0) &&
         ((((((*(longlong *)(param_1 + 0xf9b0) == lVar16 ||
              (*(longlong *)(param_1 + 0xf9d0) == lVar16)) || (local_c0[0] == lVar16)) ||
            ((*(longlong *)(param_1 + 0xf9b8) == lVar16 ||
             (*(longlong *)(param_1 + 0xf9c0) == lVar16)))) ||
           ((*(longlong *)(param_1 + 0xf9c8) == lVar16 ||
            ((local_c0[1] == lVar16 || (local_c0[2] == lVar16)))))) ||
          (local_c0[3] == lVar16 || lVar2 == lVar16)))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar22 + ((int)uVar21 >> 3)) =
             *(byte *)(lVar22 + ((int)uVar21 >> 3)) | (byte)(1 << (ulonglong)(uVar21 & 7));
      }
      uVar19 = (ulonglong)(uVar11 + 4);
    } while (uVar11 + 4 < 0x10);
    lVar22 = *(longlong *)(param_1 + 0xfc18);
    if ((lVar22 != 0) &&
       (((((*(longlong *)(param_1 + 0xf9b0) == lVar22 || (*(longlong *)(param_1 + 0xf9d0) == lVar22)
           ) || (local_c0[0] == lVar22)) ||
         (((*(longlong *)(param_1 + 0xf9b8) == lVar22 || (*(longlong *)(param_1 + 0xf9c0) == lVar22)
           ) || ((*(longlong *)(param_1 + 0xf9c8) == lVar22 ||
                 ((local_c0[1] == lVar22 || (local_c0[2] == lVar22)))))))) ||
        (local_c0[3] == lVar22 || lVar2 == lVar22)))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 1;
    }
    lVar22 = *(longlong *)(param_1 + 0xfc20);
    if ((lVar22 != 0) &&
       (((((*(longlong *)(param_1 + 0xf9b0) == lVar22 || (*(longlong *)(param_1 + 0xf9d0) == lVar22)
           ) || (local_c0[0] == lVar22)) ||
         (((*(longlong *)(param_1 + 0xf9b8) == lVar22 || (*(longlong *)(param_1 + 0xf9c0) == lVar22)
           ) || ((*(longlong *)(param_1 + 0xf9c8) == lVar22 ||
                 ((local_c0[1] == lVar22 || (local_c0[2] == lVar22)))))))) ||
        (local_c0[3] == lVar22 || lVar2 == lVar22)))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 2;
    }
    lVar22 = *(longlong *)(param_1 + 0xfc28);
    if ((lVar22 != 0) &&
       ((((((*(longlong *)(param_1 + 0xf9b0) == lVar22 ||
            (*(longlong *)(param_1 + 0xf9d0) == lVar22)) || (local_c0[0] == lVar22)) ||
          ((*(longlong *)(param_1 + 0xf9b8) == lVar22 || (*(longlong *)(param_1 + 0xf9c0) == lVar22)
           ))) || (*(longlong *)(param_1 + 0xf9c8) == lVar22)) ||
        (((local_c0[1] == lVar22 || (local_c0[2] == lVar22)) ||
         (local_c0[3] == lVar22 || lVar2 == lVar22)))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 4;
    }
    lVar22 = *(longlong *)(param_1 + 0xfc30);
    if ((lVar22 != 0) &&
       (((((*(longlong *)(param_1 + 0xf9b0) == lVar22 || (*(longlong *)(param_1 + 0xf9d0) == lVar22)
           ) || (local_c0[0] == lVar22)) ||
         ((*(longlong *)(param_1 + 0xf9b8) == lVar22 || (*(longlong *)(param_1 + 0xf9c0) == lVar22))
         )) || (((*(longlong *)(param_1 + 0xf9c8) == lVar22 ||
                 ((local_c0[1] == lVar22 || (local_c0[2] == lVar22)))) ||
                (local_c0[3] == lVar22 || lVar2 == lVar22)))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 8;
    }
    lVar22 = *(longlong *)(param_1 + 0xfc38);
    if ((lVar22 != 0) &&
       ((((*(longlong *)(param_1 + 0xf9b0) == lVar22 || (*(longlong *)(param_1 + 0xf9d0) == lVar22))
         || (local_c0[0] == lVar22)) ||
        (((*(longlong *)(param_1 + 0xf9b8) == lVar22 || (*(longlong *)(param_1 + 0xf9c0) == lVar22))
         || (((*(longlong *)(param_1 + 0xf9c8) == lVar22 ||
              ((local_c0[1] == lVar22 || (local_c0[2] == lVar22)))) ||
             (local_c0[3] == lVar22 || lVar2 == lVar22)))))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 0x10;
    }
    uVar19 = 0;
    plVar28 = (longlong *)(param_1 + 0xf9b0);
    lVar22 = param_1;
    pcVar30 = (code *)__hybrid_os_arm64x_dispatch_icall;
    if (param_2 != 0) {
      local_68 = param_1;
      lStack_60 = lVar14;
      local_c8 = (code *)__hybrid_os_arm64x_dispatch_icall;
      lVar18 = param_1 + 0xf9d8;
      lVar16 = param_1 + 0xfc68;
      lVar20 = param_1 + 0xf9e8;
      lVar27 = param_1 + 0xfb00;
      plVar23 = plVar28;
      lVar17 = lVar20;
      lVar25 = lVar18;
      plVar29 = plVar28;
      do {
        pcVar30 = local_c8;
        lVar14 = local_c0[uVar19];
        plVar28 = plVar23;
        if (lVar14 == 0) {
          plVar23[uVar19] = 0;
          uVar15 = 0;
          *(undefined8 *)(lVar27 + uVar19 * 8) = 0;
          *(undefined4 *)(lVar25 + uVar19 * 4) = 0;
          *(undefined4 *)(lVar17 + uVar19 * 4) = 0;
          plVar24 = plVar23;
        }
        else {
          iVar12 = *(int *)(lVar14 + 0x3c);
          iVar4 = *(int *)((longlong)param_4 + uVar19 * 0x10 + 0xc);
          lVar22 = param_4[uVar19 * 2 + 1];
          plVar23[uVar19] = lVar14;
          lVar22 = (ulonglong)(uint)((int)lVar22 + iVar12 * iVar4) * 0x28;
          *(undefined8 *)(lVar27 + uVar19 * 8) =
               *(undefined8 *)(lVar22 + *(longlong *)(lVar14 + 0x90));
          *(int *)(lVar25 + uVar19 * 4) = (int)param_4[uVar19 * 2 + 1];
          *(undefined4 *)(lVar17 + uVar19 * 4) =
               *(undefined4 *)((longlong)param_4 + uVar19 * 0x10 + 0xc);
          if ((int)uVar19 == 0) {
            if ((**(longlong **)(lVar14 + 0x90) != 0) && ((*(longlong **)(lVar14 + 0x90))[2] == 0))
            {
              uVar11 = *(uint *)(lVar14 + 0x3c);
              lVar17 = *(longlong *)(lVar14 + 0x80);
              if (*(uint *)(lVar14 + 0x34) != 0) {
                local_80 = lVar27;
                plStack_78 = plVar23;
                local_90 = lVar20;
                lStack_88 = lVar16;
                uVar21 = 0;
                local_a0 = plVar29;
                lStack_98 = lVar18;
                local_70 = lVar22;
                local_d4 = 0;
                local_d8 = *(uint *)(lVar14 + 0x34);
                do {
                  uVar26 = 0;
                  if (uVar11 != 0) {
                    do {
                      lVar22 = (ulonglong)(uVar26 + uVar21 * uVar11) * 0x28;
                      if (*(longlong *)(*(longlong *)(lVar14 + 0x90) + lVar22) != 0) {
                        uVar15 = (*pcVar30)(0x180224000);
                        (*extraout_x11)(uVar15,local_58);
                        if ((local_58[0] < 0x19) &&
                           ((0x1000800U >> (ulonglong)(local_58[0] & 0x1f) & 1) != 0)) {
                          if (local_58[0] != 0) {
LAB_18013ac08:
                            uVar15 = 0x80;
                            if (lVar17 == 0) {
                              uVar15 = 0x78;
                            }
                            lVar18 = lVar22 + *(longlong *)(lVar14 + 0x90);
                            uVar15 = (*pcVar30)(uVar15);
                            (*extraout_x11_00)(uVar15,*(undefined8 *)(extraout_x8 + lVar14),local_58
                                               ,lVar18 + 0x10);
                          }
                        }
                        else {
                          if (local_58[0] == 0x1c) {
                            local_58[0] = 0x1d;
                            goto LAB_18013ac08;
                          }
                          local_58[0] = 0;
                        }
                        puVar1 = (undefined8 *)(lVar22 + *(longlong *)(lVar14 + 0x90));
                        if (puVar1[2] == 0) {
                          puVar1[2] = *puVar1;
                          (*pcVar30)(0x180224000);
                          (*extraout_x11_01)();
                        }
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < uVar11);
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < local_d8);
                uVar19 = (ulonglong)local_d4;
                lVar20 = local_90;
                lVar18 = lStack_98;
                lVar22 = local_70;
                lVar27 = local_80;
                plVar23 = plStack_78;
                lVar16 = lStack_88;
                plVar29 = local_a0;
              }
            }
            uVar15 = *(undefined8 *)(lVar22 + *(longlong *)(lVar14 + 0x90) + 0x10);
            plVar24 = plVar29;
            lVar17 = lVar20;
            lVar25 = lVar18;
            plVar28 = plVar23;
          }
          else {
            uVar15 = *(undefined8 *)(lVar27 + uVar19 * 8);
            plVar24 = plVar29;
            lVar17 = lVar20;
            lVar25 = lVar18;
          }
        }
        lVar14 = uVar19 * 8;
        uVar11 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar11;
        *(undefined8 *)(lVar16 + lVar14) = uVar15;
        plVar23 = plVar24;
        lVar22 = local_68;
        lVar14 = lStack_60;
        pcVar30 = local_c8;
      } while (uVar11 < param_2);
    }
    if (*plVar28 == 0) {
      bVar8 = false;
    }
    else {
      (*pcVar30)(0x180224000);
      cVar10 = (*extraout_x11_02)();
      bVar8 = cVar10 != '\0';
    }
    if (*(longlong *)(lVar22 + 0xf9b8) != 0) {
      (*pcVar30)(0x180224000);
      cVar10 = (*extraout_x11_03)();
      bVar8 = bVar8 | (cVar10 != '\0') << 1;
    }
    if (*(longlong *)(lVar22 + 0xf9c0) != 0) {
      (*pcVar30)(0x180224000);
      cVar10 = (*extraout_x11_04)();
      bVar8 = bVar8 | (cVar10 != '\0') << 2;
    }
    if (*(longlong *)(lVar22 + 0xf9c8) != 0) {
      (*pcVar30)(0x180224000);
      cVar10 = (*extraout_x11_05)();
      if (cVar10 != '\0') {
        bVar8 = bVar8 | 8;
      }
    }
    bVar5 = *(byte *)(lVar14 + 0x68c);
    bVar6 = *(byte *)(param_1 + 0x765c);
    *(byte *)(param_1 + 0x765c) = bVar8;
    bVar9 = bVar8 != bVar6;
    *(byte *)(lVar14 + 0x68c) = bVar9 | bVar5;
    if (param_3 != *(uint *)(lVar22 + 0xe5c)) {
      if (*(uint *)(lVar22 + 0xe5c) < 2) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(uint *)(lVar22 + 0xe58);
      }
      if (param_3 < 2) {
        uVar21 = 0xffffffff;
      }
      else {
        uVar21 = *(uint *)(lVar22 + 0xe58);
      }
      *(uint *)(lVar22 + 0xe5c) = param_3;
      uVar26 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(lVar14 + 0x68c) = bVar5 | ((uVar26 & uVar11) != (uVar26 & uVar21) || bVar9);
    }
    if (lVar2 == 0) {
      cVar10 = '\0';
    }
    else {
      (*pcVar30)(0x180224000);
      cVar10 = (*extraout_x11_06)();
    }
    cVar7 = *(char *)(param_1 + 0x75a2);
    *(char *)(param_1 + 0x75a2) = cVar10;
    *(byte *)(lVar14 + 0x68b) = cVar10 != cVar7 | *(byte *)(lVar14 + 0x68b);
    if (lVar2 == 0) {
      *(undefined8 *)(lVar22 + 0xf9d0) = 0;
      *(undefined8 *)(param_1 + 0xfcb0) = 0;
    }
    else {
      iVar4 = *(int *)(lVar2 + 0x3c);
      lVar18 = local_d0[1];
      iVar12 = *(int *)((longlong)local_d0 + 0xc);
      if ((*(longlong *)(lVar22 + 0xf9d0) == 0) ||
         (bVar8 = 0,
         *(int *)(&DAT_18022e050 + (ulonglong)*(uint *)(*(longlong *)(lVar22 + 0xf9d0) + 0x2c) * 4)
         != *(int *)(&DAT_18022e050 + (ulonglong)*(uint *)(lVar2 + 0x2c) * 4))) {
        bVar8 = 1;
      }
      *(byte *)(lVar14 + 0x68d) = *(byte *)(lVar14 + 0x68d) | bVar8;
      *(longlong *)(lVar22 + 0xf9d0) = lVar2;
      *(undefined8 *)(param_1 + 0xfcb0) =
           *(undefined8 *)
            (*(longlong *)(lVar2 + 0x90) + (ulonglong)(uint)((int)lVar18 + iVar4 * iVar12) * 0x28 +
            8);
      *(int *)(local_e8 + 0x39f8) = (int)local_d0[1];
      *(undefined4 *)(local_e8 + 0x39fc) = *(undefined4 *)((longlong)local_d0 + 0xc);
    }
    if (lVar3 == 0) {
      lVar3 = lVar2;
    }
    if ((*(float *)(param_1 + 0x6930) != (float)*(uint *)(lVar3 + 0x24)) ||
       (*(float *)(param_1 + 0x6934) != (float)*(uint *)(lVar3 + 0x28))) {
      *(float *)(param_1 + 0x6930) = (float)*(uint *)(lVar3 + 0x24);
      *(float *)(param_1 + 0x6934) = (float)*(uint *)(lVar3 + 0x28);
      *(float *)(lVar22 + 0xed0) = (float)*(uint *)(lVar3 + 0x24);
      *(float *)(lVar22 + 0xed4) = (float)*(uint *)(lVar3 + 0x28);
      (*pcVar30)(0x180224000);
      uVar11 = (*extraout_x11_07)(lVar3,0);
      *(float *)(lVar22 + 0xf00) = (float)uVar11;
      (*pcVar30)(0x180224000);
      uVar11 = (*extraout_x11_08)(lVar3,0);
      *(float *)(lVar22 + 0xf04) = (float)uVar11;
      FUN_180164290(lVar22);
      *(undefined1 *)(lVar14 + 0x68e) = 1;
      *(undefined1 *)(lVar22 + 0xf691) = 1;
    }
    (*pcVar30)(0x180224000);
    iVar12 = (*extraout_x11_09)(lVar3,0);
    (*pcVar30)(0x180224000);
    uVar13 = (*extraout_x11_10)(lVar3,0);
    if ((iVar12 != *(int *)(param_1 + 0x7598)) || (bVar8 = 0, iVar12 != *(int *)(param_1 + 0x759c)))
    {
      bVar8 = 1;
    }
    *(byte *)(param_1 + 0x7665) = *(byte *)(param_1 + 0x7665) | bVar8;
    *(byte *)(lVar14 + 0x6c1) = *(byte *)(lVar14 + 0x6c1) | bVar8;
    *(int *)(param_1 + 0x7598) = iVar12;
    *(undefined4 *)(param_1 + 0x759c) = uVar13;
    (*pcVar30)(0x180225000);
    (*extraout_x11_11)(lVar3,&local_e8,(longlong)&local_e8 + 4,&local_e0,&iStack_dc);
    if (((((int)local_e8 != *(int *)(param_1 + 0x69b0)) ||
         (local_e8._4_4_ != *(int *)(lVar22 + 0x69b4))) || (local_e0 != *(int *)(lVar22 + 0x69b8)))
       || (iStack_dc != *(int *)(lVar22 + 0x69bc))) {
      *(int *)(param_1 + 0x69b0) = (int)local_e8;
      *(int *)(lVar22 + 0x69b4) = local_e8._4_4_;
      *(int *)(lVar22 + 0x69b8) = local_e0;
      *(int *)(lVar22 + 0x69bc) = iStack_dc;
      *(undefined1 *)(lVar22 + 0xf691) = 1;
      *(int *)(param_1 + 0x6510) = (int)local_e8;
      *(int *)(param_1 + 0x6514) = local_e8._4_4_;
      *(int *)(param_1 + 0x6518) = local_e0;
      *(int *)(param_1 + 0x651c) = iStack_dc;
      *(undefined1 *)(lVar22 + 0xf6c3) = 1;
    }
    bVar8 = *(byte *)(lVar22 + 0xf691);
    if ((*(uint *)(lVar3 + 0x2c) < 0xe) &&
       ((((int)local_e8 != 0xff || (local_e8._4_4_ != 0xff)) ||
        ((local_e0 != 0xff || (iStack_dc != 0xff)))))) {
      cVar10 = '\x01';
    }
    else {
      cVar10 = '\0';
    }
    cVar7 = *(char *)(param_1 + 0x766e);
    *(char *)(param_1 + 0x766e) = cVar10;
    *(byte *)(lVar14 + 0x688) = cVar10 != cVar7 | *(byte *)(lVar14 + 0x688);
    uVar11 = *(uint *)(param_1 + 0x699c);
    uVar21 = (uint)(*(char *)(param_1 + 0x766d) == '\0' && cVar10 != '\0');
    *(uint *)(param_1 + 0x699c) = uVar21;
    *(byte *)(lVar22 + 0xf691) = uVar11 != uVar21 | bVar8;
    (*pcVar30)(0x180224000);
    fVar31 = (float)(*extraout_x11_12)(lVar3);
    (*pcVar30)(0x180224000);
    fVar32 = (float)(*extraout_x11_13)(lVar3);
    if ((fVar31 != *(float *)(param_1 + 0x6920)) || (fVar32 != *(float *)(param_1 + 0x6924))) {
      *(undefined4 *)(param_1 + 0x6928) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x692c) = 0x3f800000;
      *(float *)(param_1 + 0x6920) = 1.0 / fVar31;
      *(float *)(param_1 + 0x6924) = 1.0 / fVar32;
      *(undefined1 *)(lVar22 + 0xf6c3) = 1;
    }
  }
  *(undefined1 *)(lVar14 + 0x68a) = 1;
  return;
}

