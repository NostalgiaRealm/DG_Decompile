/*
 * FUN_18002ce50 at 18002ce50
 * undefined FUN_18002ce50(void)
 * Address ranges: 18002ce50-18002db83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ce50(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong *plVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  undefined8 local_120;
  int local_118;
  int iStack_114;
  uint local_110;
  uint uStack_10c;
  longlong *local_108;
  longlong *local_100 [5];
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong *plStack_b8;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  uint local_70 [8];
  
  local_120 = param_1 + 0xc000;
  lVar27 = param_1 + 0xf000;
  local_108 = param_5;
  FUN_18002a810(param_1,0,0,0);
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
    local_100[0] = (longlong *)0x0;
    local_100[1] = (longlong *)0x0;
    local_100[2] = (longlong *)0x0;
    local_100[3] = (longlong *)0x0;
    uVar15 = 0;
    if (param_2 != 0) {
      do {
        plVar25 = (longlong *)0x0;
        if (param_4[uVar15 * 2] != 0) {
          plVar25 = (longlong *)(param_4[uVar15 * 2] + -0xe0);
        }
        local_100[uVar15] = plVar25;
        uVar10 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar10;
      } while (uVar10 < param_2);
    }
    plVar25 = (longlong *)0x0;
    if (*local_108 != 0) {
      plVar25 = (longlong *)(*local_108 + -0xe0);
    }
    lVar13 = param_1 + 0xf680;
    uVar15 = 0;
    lVar28 = param_1 + 64000;
    do {
      plVar14 = *(longlong **)(lVar28 + uVar15 * 8);
      uVar10 = (uint)uVar15;
      if ((plVar14 != (longlong *)0x0) &&
         (((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
             (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
           ((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
            (*(longlong **)(param_1 + 0xf9c0) == plVar14)))) ||
          (((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
            ((local_100[1] == plVar14 || (local_100[2] == plVar14)))) ||
           (local_100[3] == plVar14 || plVar25 == plVar14)))))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar13 + ((int)uVar10 >> 3)) =
             *(byte *)(lVar13 + ((int)uVar10 >> 3)) | (byte)(1 << (ulonglong)(uVar10 & 7));
      }
      uVar17 = uVar10 + 1;
      plVar14 = *(longlong **)(lVar28 + (ulonglong)uVar17 * 8);
      if ((plVar14 != (longlong *)0x0) &&
         (((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
             (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
           (((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
             (*(longlong **)(param_1 + 0xf9c0) == plVar14)) ||
            ((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
             ((local_100[1] == plVar14 || (local_100[2] == plVar14)))))))) ||
          (local_100[3] == plVar14 || plVar25 == plVar14)))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar13 + ((int)uVar17 >> 3)) =
             *(byte *)(lVar13 + ((int)uVar17 >> 3)) | (byte)(1 << (ulonglong)(uVar17 & 7));
      }
      uVar17 = uVar10 + 2;
      plVar14 = *(longlong **)(lVar28 + (ulonglong)uVar17 * 8);
      if ((plVar14 != (longlong *)0x0) &&
         ((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
            (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
          (((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
            (*(longlong **)(param_1 + 0xf9c0) == plVar14)) ||
           (((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
             ((local_100[1] == plVar14 || (local_100[2] == plVar14)))) ||
            (local_100[3] == plVar14 || plVar25 == plVar14)))))))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar13 + ((int)uVar17 >> 3)) =
             *(byte *)(lVar13 + ((int)uVar17 >> 3)) | (byte)(1 << (ulonglong)(uVar17 & 7));
      }
      uVar17 = uVar10 + 3;
      plVar14 = *(longlong **)(lVar28 + (ulonglong)uVar17 * 8);
      if ((plVar14 != (longlong *)0x0) &&
         ((((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
              (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
            ((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
             (*(longlong **)(param_1 + 0xf9c0) == plVar14)))) ||
           ((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
            ((local_100[1] == plVar14 || (local_100[2] == plVar14)))))) ||
          (local_100[3] == plVar14 || plVar25 == plVar14)))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        *(byte *)(lVar13 + ((int)uVar17 >> 3)) =
             *(byte *)(lVar13 + ((int)uVar17 >> 3)) | (byte)(1 << (ulonglong)(uVar17 & 7));
      }
      uVar15 = (ulonglong)(uVar10 + 4);
    } while (uVar10 + 4 < 0x10);
    plVar14 = *(longlong **)(param_1 + 0xfc18);
    if ((plVar14 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
         (((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
           (*(longlong **)(param_1 + 0xf9c0) == plVar14)) ||
          ((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
           ((local_100[1] == plVar14 || (local_100[2] == plVar14)))))))) ||
        (local_100[3] == plVar14 || plVar25 == plVar14)))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 1;
    }
    plVar14 = *(longlong **)(param_1 + 0xfc20);
    if ((plVar14 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
         (((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
           (*(longlong **)(param_1 + 0xf9c0) == plVar14)) ||
          ((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
           ((local_100[1] == plVar14 || (local_100[2] == plVar14)))))))) ||
        (local_100[3] == plVar14 || plVar25 == plVar14)))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 2;
    }
    plVar14 = *(longlong **)(param_1 + 0xfc28);
    if ((plVar14 != (longlong *)0x0) &&
       ((((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
            (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
          ((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
           (*(longlong **)(param_1 + 0xf9c0) == plVar14)))) ||
         (*(longlong **)(param_1 + 0xf9c8) == plVar14)) ||
        (((local_100[1] == plVar14 || (local_100[2] == plVar14)) ||
         (local_100[3] == plVar14 || plVar25 == plVar14)))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 4;
    }
    plVar14 = *(longlong **)(param_1 + 0xfc30);
    if ((plVar14 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
         ((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
          (*(longlong **)(param_1 + 0xf9c0) == plVar14)))) ||
        (((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
          ((local_100[1] == plVar14 || (local_100[2] == plVar14)))) ||
         (local_100[3] == plVar14 || plVar25 == plVar14)))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 8;
    }
    plVar14 = *(longlong **)(param_1 + 0xfc38);
    if ((plVar14 != (longlong *)0x0) &&
       ((((*(longlong **)(param_1 + 0xf9b0) == plVar14 ||
          (*(longlong **)(param_1 + 0xf9d0) == plVar14)) || (local_100[0] == plVar14)) ||
        (((*(longlong **)(param_1 + 0xf9b8) == plVar14 ||
          (*(longlong **)(param_1 + 0xf9c0) == plVar14)) ||
         (((*(longlong **)(param_1 + 0xf9c8) == plVar14 ||
           ((local_100[1] == plVar14 || (local_100[2] == plVar14)))) ||
          (local_100[3] == plVar14 || plVar25 == plVar14)))))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(byte *)(param_1 + 0xf6b8) = *(byte *)(param_1 + 0xf6b8) | 0x10;
    }
    uVar15 = 0;
    plVar14 = (longlong *)(param_1 + 0xf9b0);
    lVar13 = param_1 + 0x8000;
    lVar28 = param_1 + 0x4000;
    plVar29 = local_100[0];
    lVar30 = param_1 + 0x7000;
    if (param_2 != 0) {
      local_88 = param_1 + 0x4000;
      plStack_80 = local_100[0];
      lVar19 = param_1 + 0xf9d8;
      local_98 = param_1 + 0x8000;
      lStack_90 = param_1 + 0x7000;
      local_78 = plVar25;
      lVar18 = param_1 + 0xf9e8;
      local_a8 = param_1;
      lStack_a0 = lVar27;
      lVar20 = param_1 + 0xfc68;
      lVar31 = param_1 + 0xfb00;
      plVar16 = plVar14;
      plVar21 = plVar14;
      lVar22 = lVar18;
      lVar23 = lVar19;
      do {
        plVar25 = local_100[uVar15];
        plVar14 = plVar16;
        if (plVar25 == (longlong *)0x0) {
          plVar16[uVar15] = 0;
          uVar24 = 0;
          *(undefined8 *)(lVar31 + uVar15 * 8) = 0;
          *(undefined4 *)(lVar19 + uVar15 * 4) = 0;
          *(undefined4 *)(lVar18 + uVar15 * 4) = 0;
          plVar25 = plVar16;
        }
        else {
          iVar11 = *(int *)((longlong)plVar25 + 0x3c);
          iVar3 = *(int *)((longlong)param_4 + uVar15 * 0x10 + 0xc);
          lVar27 = param_4[uVar15 * 2 + 1];
          plVar16[uVar15] = (longlong)plVar25;
          lVar27 = (ulonglong)(uint)((int)lVar27 + iVar11 * iVar3) * 0x28;
          *(undefined8 *)(lVar31 + uVar15 * 8) = *(undefined8 *)(lVar27 + plVar25[0x12]);
          *(int *)(lVar19 + uVar15 * 4) = (int)param_4[uVar15 * 2 + 1];
          *(undefined4 *)(lVar18 + uVar15 * 4) =
               *(undefined4 *)((longlong)param_4 + uVar15 * 0x10 + 0xc);
          if ((int)uVar15 == 0) {
            if ((*(longlong *)plVar25[0x12] != 0) && (((longlong *)plVar25[0x12])[2] == 0)) {
              uVar17 = *(uint *)((longlong)plVar25 + 0x34);
              uVar10 = 0;
              uVar2 = *(uint *)((longlong)plVar25 + 0x3c);
              lVar13 = plVar25[0x10];
              if (uVar17 != 0) {
                local_c0 = lVar31;
                plStack_b8 = plVar16;
                local_b0 = lVar27;
                local_d0 = lVar22;
                lStack_c8 = lVar20;
                local_100[4] = plVar21;
                lStack_d8 = lVar23;
                uStack_10c = 0;
                local_110 = param_2;
                do {
                  uVar26 = 0;
                  if (uVar2 != 0) {
                    do {
                      lVar27 = (ulonglong)(uVar26 + uVar10 * uVar2) * 0x28;
                      plVar14 = *(longlong **)(plVar25[0x12] + lVar27);
                      if (plVar14 != (longlong *)0x0) {
                        (**(code **)(*plVar14 + 0x40))(plVar14,local_70);
                        if ((local_70[0] < 0x19) &&
                           ((0x1000800U >> (ulonglong)(local_70[0] & 0x1f) & 1) != 0)) {
                          if (local_70[0] != 0) {
LAB_18002d5c4:
                            lVar28 = 0x80;
                            if (lVar13 == 0) {
                              lVar28 = 0x78;
                            }
                            (**(code **)(**(longlong **)plVar25[0xe] + 0x48))
                                      (*(longlong **)plVar25[0xe],
                                       *(undefined8 *)(lVar28 + (longlong)plVar25),local_70,
                                       lVar27 + plVar25[0x12] + 0x10);
                          }
                        }
                        else {
                          if (local_70[0] == 0x1c) {
                            local_70[0] = 0x1d;
                            goto LAB_18002d5c4;
                          }
                          local_70[0] = 0;
                        }
                        puVar1 = (undefined8 *)(lVar27 + plVar25[0x12]);
                        if (puVar1[2] == 0) {
                          puVar1[2] = *puVar1;
                          (**(code **)(**(longlong **)(lVar27 + plVar25[0x12] + 0x10) + 8))();
                        }
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < uVar2);
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar17);
                uVar15 = (ulonglong)uStack_10c;
                lVar20 = lStack_c8;
                plVar21 = local_100[4];
                lVar22 = local_d0;
                lVar23 = lStack_d8;
                lVar27 = local_b0;
                plVar16 = plStack_b8;
                lVar31 = local_c0;
                param_2 = local_110;
              }
            }
            uVar24 = *(undefined8 *)(lVar27 + plVar25[0x12] + 0x10);
            plVar25 = plVar21;
            lVar18 = lVar22;
            lVar19 = lVar23;
            plVar14 = plVar16;
          }
          else {
            uVar24 = *(undefined8 *)(lVar31 + uVar15 * 8);
            plVar25 = plVar21;
            lVar18 = lVar22;
            lVar19 = lVar23;
          }
        }
        lVar27 = uVar15 * 8;
        uVar10 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar10;
        *(undefined8 *)(lVar20 + lVar27) = uVar24;
        plVar16 = plVar25;
        param_1 = local_a8;
        lVar27 = lStack_a0;
        lVar13 = local_98;
        lVar28 = local_88;
        plVar29 = plStack_80;
        plVar25 = local_78;
        lVar30 = lStack_90;
      } while (uVar10 < param_2);
    }
    if ((longlong *)*plVar14 == (longlong *)0x0) {
      bVar7 = false;
    }
    else {
      cVar9 = (**(code **)(*(longlong *)*plVar14 + 0x80))();
      bVar7 = cVar9 != '\0';
    }
    if (*(longlong **)(param_1 + 0xf9b8) != (longlong *)0x0) {
      cVar9 = (**(code **)(**(longlong **)(param_1 + 0xf9b8) + 0x80))();
      bVar7 = bVar7 | (cVar9 != '\0') << 1;
    }
    if (*(longlong **)(param_1 + 0xf9c0) != (longlong *)0x0) {
      cVar9 = (**(code **)(**(longlong **)(param_1 + 0xf9c0) + 0x80))();
      bVar7 = bVar7 | (cVar9 != '\0') << 2;
    }
    if ((*(longlong **)(param_1 + 0xf9c8) != (longlong *)0x0) &&
       (cVar9 = (**(code **)(**(longlong **)(param_1 + 0xf9c8) + 0x80))(), cVar9 != '\0')) {
      bVar7 = bVar7 | 8;
    }
    bVar4 = *(byte *)(lVar30 + 0x65c);
    *(byte *)(lVar30 + 0x65c) = bVar7;
    bVar5 = *(byte *)(lVar27 + 0x68c);
    bVar8 = bVar7 != bVar4;
    *(byte *)(lVar27 + 0x68c) = bVar8 | bVar5;
    if (param_3 != *(uint *)(param_1 + 0xe5c)) {
      if (*(uint *)(param_1 + 0xe5c) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(uint *)(param_1 + 0xe58);
      }
      if (param_3 < 2) {
        uVar17 = 0xffffffff;
      }
      else {
        uVar17 = *(uint *)(param_1 + 0xe58);
      }
      *(uint *)(param_1 + 0xe5c) = param_3;
      uVar2 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(lVar27 + 0x68c) = bVar5 | ((uVar2 & uVar10) != (uVar2 & uVar17) || bVar8);
    }
    if (plVar25 == (longlong *)0x0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = (**(code **)(*plVar25 + 0x88))(plVar25);
    }
    cVar6 = *(char *)(lVar30 + 0x5a2);
    *(char *)(lVar30 + 0x5a2) = cVar9;
    *(byte *)(lVar27 + 0x68b) = cVar9 != cVar6 | *(byte *)(lVar27 + 0x68b);
    if (plVar25 == (longlong *)0x0) {
      *(undefined8 *)(lVar13 + 0x7cb0) = 0;
      *(undefined8 *)(param_1 + 0xf9d0) = 0;
    }
    else {
      iVar3 = *(int *)((longlong)plVar25 + 0x3c);
      lVar19 = local_108[1];
      iVar11 = *(int *)((longlong)local_108 + 0xc);
      if ((*(longlong *)(param_1 + 0xf9d0) == 0) ||
         (bVar7 = 0,
         *(int *)(&DAT_180231470 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c) * 4)
         != *(int *)(&DAT_180231470 + (ulonglong)*(uint *)((longlong)plVar25 + 0x2c) * 4))) {
        bVar7 = 1;
      }
      *(byte *)(lVar27 + 0x68d) = *(byte *)(lVar27 + 0x68d) | bVar7;
      *(longlong **)(param_1 + 0xf9d0) = plVar25;
      *(undefined8 *)(lVar13 + 0x7cb0) =
           *(undefined8 *)
            (plVar25[0x12] + (ulonglong)(uint)((int)lVar19 + iVar3 * iVar11) * 0x28 + 8);
      *(int *)(local_120 + 0x39f8) = (int)local_108[1];
      *(undefined4 *)(local_120 + 0x39fc) = *(undefined4 *)((longlong)local_108 + 0xc);
    }
    if (plVar29 == (longlong *)0x0) {
      plVar29 = plVar25;
    }
    if ((*(float *)(lVar28 + 0x2930) != (float)*(uint *)((longlong)plVar29 + 0x24)) ||
       (*(float *)(lVar28 + 0x2934) != (float)*(uint *)(plVar29 + 5))) {
      *(float *)(lVar28 + 0x2930) = (float)*(uint *)((longlong)plVar29 + 0x24);
      *(float *)(lVar28 + 0x2934) = (float)*(uint *)(plVar29 + 5);
      *(float *)(param_1 + 0xed0) = (float)*(uint *)((longlong)plVar29 + 0x24);
      *(float *)(param_1 + 0xed4) = (float)*(uint *)(plVar29 + 5);
      uVar10 = (**(code **)(*plVar29 + 0x40))(plVar29,0);
      *(float *)(param_1 + 0xf00) = (float)uVar10;
      uVar10 = (**(code **)(*plVar29 + 0x48))(plVar29,0);
      *(float *)(param_1 + 0xf04) = (float)uVar10;
      FUN_180054430(param_1);
      *(undefined1 *)(lVar27 + 0x68e) = 1;
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    iVar11 = (**(code **)(*plVar29 + 0x40))(plVar29,0);
    uVar12 = (**(code **)(*plVar29 + 0x48))(plVar29,0);
    if ((iVar11 != *(int *)(lVar28 + 0x3598)) || (bVar7 = 0, iVar11 != *(int *)(lVar28 + 0x359c))) {
      bVar7 = 1;
    }
    *(byte *)(lVar30 + 0x665) = *(byte *)(lVar30 + 0x665) | bVar7;
    *(byte *)(lVar27 + 0x6c1) = *(byte *)(lVar27 + 0x6c1) | bVar7;
    *(int *)(lVar28 + 0x3598) = iVar11;
    *(undefined4 *)(lVar28 + 0x359c) = uVar12;
    (**(code **)(*plVar29 + 0x28))
              (plVar29,&local_120,(longlong)&local_120 + 4,&local_118,&iStack_114);
    if (((((int)local_120 != *(int *)(lVar28 + 0x29b0)) ||
         (local_120._4_4_ != *(int *)(param_1 + 0x69b4))) ||
        (local_118 != *(int *)(param_1 + 0x69b8))) || (iStack_114 != *(int *)(param_1 + 0x69bc))) {
      *(int *)(lVar28 + 0x29b0) = (int)local_120;
      *(int *)(param_1 + 0x69b4) = local_120._4_4_;
      *(int *)(param_1 + 0x69b8) = local_118;
      *(int *)(param_1 + 0x69bc) = iStack_114;
      *(undefined1 *)(param_1 + 0xf691) = 1;
      *(int *)(lVar28 + 0x2510) = (int)local_120;
      *(int *)(lVar28 + 0x2514) = local_120._4_4_;
      *(int *)(lVar28 + 0x2518) = local_118;
      *(int *)(lVar28 + 0x251c) = iStack_114;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
    }
    bVar7 = *(byte *)(param_1 + 0xf691);
    if ((*(uint *)((longlong)plVar29 + 0x2c) < 0xe) &&
       ((((int)local_120 != 0xff || (local_120._4_4_ != 0xff)) ||
        ((local_118 != 0xff || (iStack_114 != 0xff)))))) {
      cVar9 = '\x01';
    }
    else {
      cVar9 = '\0';
    }
    cVar6 = *(char *)(lVar30 + 0x66e);
    *(char *)(lVar30 + 0x66e) = cVar9;
    *(byte *)(lVar27 + 0x688) = cVar9 != cVar6 | *(byte *)(lVar27 + 0x688);
    uVar10 = *(uint *)(lVar28 + 0x299c);
    uVar17 = (uint)(*(char *)(lVar30 + 0x66d) == '\0' && cVar9 != '\0');
    *(uint *)(lVar28 + 0x299c) = uVar17;
    *(byte *)(param_1 + 0xf691) = uVar10 != uVar17 | bVar7;
    fVar32 = (float)(**(code **)(*plVar29 + 0x58))(plVar29);
    fVar33 = (float)(**(code **)(*plVar29 + 0x60))(plVar29);
    if ((fVar32 != *(float *)(lVar28 + 0x2920)) || (fVar33 != *(float *)(lVar28 + 0x2924))) {
      *(undefined4 *)(lVar28 + 0x2928) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x292c) = 0x3f800000;
      *(float *)(lVar28 + 0x2920) = 1.0 / fVar32;
      *(float *)(lVar28 + 0x2924) = 1.0 / fVar33;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
    }
  }
  *(undefined1 *)(lVar27 + 0x68a) = 1;
  return;
}

