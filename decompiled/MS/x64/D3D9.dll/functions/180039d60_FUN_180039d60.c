/*
 * FUN_180039d60 at 180039d60
 * undefined __fastcall FUN_180039d60(longlong param_1, uint param_2, uint param_3, longlong * param_4, longlong * param_5)
 * Address ranges: 180039d60-18003a700
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039d60(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte *pbVar8;
  char cVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  byte bVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  uint local_c8;
  uint local_c4;
  longlong local_b8;
  int local_90 [6];
  longlong *local_78 [7];
  longlong *plVar16;
  
  FUN_180038960(param_1,0,0,0);
  if ((*param_4 == 0) && (*param_5 == 0)) {
    *(undefined1 *)(param_1 + 0x7665) = 1;
    *(undefined8 *)(param_1 + 0xf9c8) = 0;
    *(undefined8 *)(param_1 + 0xf9c0) = 0;
    *(undefined8 *)(param_1 + 0xf9b8) = 0;
    *(undefined8 *)(param_1 + 0xf9b0) = 0;
    *(undefined8 *)(param_1 + 0xfb18) = 0;
    *(undefined8 *)(param_1 + 0xfb10) = 0;
    *(undefined8 *)(param_1 + 0xfb08) = 0;
    *(undefined8 *)(param_1 + 0xfb00) = 0;
    *(undefined8 *)(param_1 + 0xf9d0) = 0;
    *(undefined8 *)(param_1 + 0xfcb0) = 0;
    *(undefined8 *)(param_1 + 0x7598) = 0;
    *(undefined4 *)(param_1 + 0xe5c) = 1;
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
  }
  else {
    plVar21 = (longlong *)0x0;
    local_78[0] = (longlong *)0x0;
    local_78[1] = (longlong *)0x0;
    local_78[2] = (longlong *)0x0;
    local_78[3] = (longlong *)0x0;
    plVar19 = plVar21;
    if (param_2 != 0) {
      do {
        plVar10 = (longlong *)(param_4[(longlong)plVar19 * 2] + -0xe0);
        if (param_4[(longlong)plVar19 * 2] == 0) {
          plVar10 = plVar21;
        }
        uVar17 = (int)plVar19 + 1;
        local_78[(longlong)plVar19] = plVar10;
        plVar19 = (longlong *)(ulonglong)uVar17;
      } while (uVar17 < param_2);
    }
    plVar19 = local_78[0];
    plVar10 = plVar21;
    plVar22 = (longlong *)(*param_5 + -0xe0);
    if (*param_5 == 0) {
      plVar22 = plVar21;
    }
    do {
      uVar17 = (uint)plVar10;
      plVar10 = *(longlong **)(param_1 + 64000 + (longlong)plVar10 * 8);
      if ((plVar10 != (longlong *)0x0) &&
         (((((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
               (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
             ((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
              (*(longlong **)(param_1 + 0xf9c0) == plVar10)))) ||
            (*(longlong **)(param_1 + 0xf9c8) == plVar10)) ||
           ((local_78[1] == plVar10 || (local_78[2] == plVar10)))) ||
          ((local_78[3] == plVar10 || (plVar22 == plVar10)))))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        pbVar8 = (byte *)(param_1 + 0xf680 + ((longlong)(int)uVar17 >> 3));
        *pbVar8 = *pbVar8 | '\x01' << (uVar17 & 7);
      }
      uVar18 = uVar17 + 1;
      plVar10 = *(longlong **)(param_1 + 64000 + (ulonglong)uVar18 * 8);
      if ((plVar10 != (longlong *)0x0) &&
         ((((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
              (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
            (((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
              (*(longlong **)(param_1 + 0xf9c0) == plVar10)) ||
             ((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
              ((local_78[1] == plVar10 || (local_78[2] == plVar10)))))))) ||
           (local_78[3] == plVar10)) || (plVar22 == plVar10)))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        pbVar8 = (byte *)(param_1 + 0xf680 + ((longlong)(int)uVar18 >> 3));
        *pbVar8 = *pbVar8 | '\x01' << (uVar18 & 7);
      }
      uVar18 = uVar17 + 2;
      plVar10 = *(longlong **)(param_1 + 64000 + (ulonglong)uVar18 * 8);
      if ((plVar10 != (longlong *)0x0) &&
         (((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
             (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
           (((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
             (*(longlong **)(param_1 + 0xf9c0) == plVar10)) ||
            ((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
             ((local_78[1] == plVar10 || (local_78[2] == plVar10)))))))) ||
          ((local_78[3] == plVar10 || (plVar22 == plVar10)))))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        pbVar8 = (byte *)(param_1 + 0xf680 + ((longlong)(int)uVar18 >> 3));
        *pbVar8 = *pbVar8 | '\x01' << (uVar18 & 7);
      }
      uVar18 = uVar17 + 3;
      plVar10 = *(longlong **)(param_1 + 64000 + (ulonglong)uVar18 * 8);
      if ((plVar10 != (longlong *)0x0) &&
         (((((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
               (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
             ((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
              (*(longlong **)(param_1 + 0xf9c0) == plVar10)))) ||
            ((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
             ((local_78[1] == plVar10 || (local_78[2] == plVar10)))))) || (local_78[3] == plVar10))
          || (plVar22 == plVar10)))) {
        *(undefined1 *)(param_1 + 0xf689) = 1;
        pbVar8 = (byte *)(param_1 + 0xf680 + ((longlong)(int)uVar18 >> 3));
        *pbVar8 = *pbVar8 | '\x01' << (uVar18 & 7);
      }
      plVar10 = (longlong *)(ulonglong)(uVar17 + 4);
    } while (uVar17 + 4 < 0x10);
    plVar10 = *(longlong **)(param_1 + 0xfc18);
    if ((plVar10 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
         (((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9c0) == plVar10)) ||
          ((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
           ((local_78[1] == plVar10 || (local_78[2] == plVar10)))))))) ||
        ((local_78[3] == plVar10 || (plVar22 == plVar10)))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(uint *)(param_1 + 0xf6b8) = *(uint *)(param_1 + 0xf6b8) | 1;
    }
    plVar10 = *(longlong **)(param_1 + 0xfc20);
    if ((plVar10 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
         (((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9c0) == plVar10)) ||
          (((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
            ((local_78[1] == plVar10 || (local_78[2] == plVar10)))) || (local_78[3] == plVar10))))))
        || (plVar22 == plVar10)))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(uint *)(param_1 + 0xf6b8) = *(uint *)(param_1 + 0xf6b8) | 2;
    }
    plVar10 = *(longlong **)(param_1 + 0xfc28);
    if ((plVar10 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
         ((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
          (*(longlong **)(param_1 + 0xf9c0) == plVar10)))) ||
        (((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
          ((local_78[1] == plVar10 || (local_78[2] == plVar10)))) ||
         ((local_78[3] == plVar10 || (plVar22 == plVar10)))))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(uint *)(param_1 + 0xf6b8) = *(uint *)(param_1 + 0xf6b8) | 4;
    }
    plVar10 = *(longlong **)(param_1 + 0xfc30);
    if ((plVar10 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
         (((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9c0) == plVar10)) ||
          ((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
           ((local_78[1] == plVar10 || (local_78[2] == plVar10)))))))) ||
        ((local_78[3] == plVar10 || (plVar22 == plVar10)))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(uint *)(param_1 + 0xf6b8) = *(uint *)(param_1 + 0xf6b8) | 8;
    }
    plVar10 = *(longlong **)(param_1 + 0xfc38);
    if ((plVar10 != (longlong *)0x0) &&
       (((((*(longlong **)(param_1 + 0xf9b0) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9d0) == plVar10)) || (local_78[0] == plVar10)) ||
         (((*(longlong **)(param_1 + 0xf9b8) == plVar10 ||
           (*(longlong **)(param_1 + 0xf9c0) == plVar10)) ||
          ((*(longlong **)(param_1 + 0xf9c8) == plVar10 ||
           ((local_78[1] == plVar10 || (local_78[2] == plVar10)))))))) ||
        ((local_78[3] == plVar10 || (plVar22 == plVar10)))))) {
      *(undefined1 *)(param_1 + 0xf6c0) = 1;
      *(uint *)(param_1 + 0xf6b8) = *(uint *)(param_1 + 0xf6b8) | 0x10;
    }
    local_c4 = 0;
    if (param_2 != 0) {
      local_b8 = 0;
      plVar10 = plVar21;
      do {
        uVar17 = (uint)plVar10;
        plVar10 = local_78[local_b8];
        if (plVar10 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0xf9b0 + local_b8 * 8) = 0;
          uVar13 = 0;
          *(undefined8 *)(param_1 + 0xfb00 + local_b8 * 8) = 0;
          *(undefined4 *)(param_1 + 0xf9d8 + local_b8 * 4) = 0;
          *(undefined4 *)(param_1 + 0xf9e8 + local_b8 * 4) = 0;
        }
        else {
          uVar12 = (ulonglong)
                   (uint)(*(int *)((longlong)plVar10 + 0x3c) *
                          *(int *)((longlong)param_4 + local_b8 * 0x10 + 0xc) +
                         (int)param_4[local_b8 * 2 + 1]);
          *(longlong **)(param_1 + 0xf9b0 + local_b8 * 8) = plVar10;
          *(undefined8 *)(param_1 + 0xfb00 + local_b8 * 8) =
               *(undefined8 *)(plVar10[0x12] + uVar12 * 0x28);
          *(int *)(param_1 + 0xf9d8 + local_b8 * 4) = (int)param_4[local_b8 * 2 + 1];
          *(undefined4 *)(param_1 + 0xf9e8 + local_b8 * 4) =
               *(undefined4 *)((longlong)param_4 + local_b8 * 0x10 + 0xc);
          if (uVar17 == 0) {
            if ((*(longlong *)plVar10[0x12] != 0) && (((longlong *)plVar10[0x12])[2] == 0)) {
              uVar18 = *(uint *)((longlong)plVar10 + 0x34);
              uVar3 = *(uint *)((longlong)plVar10 + 0x3c);
              local_c8 = 0;
              if (uVar18 != 0) {
                lVar6 = plVar10[0x10];
                plVar20 = plVar21;
                do {
                  uVar17 = (uint)plVar20;
                  if (uVar3 != 0) {
                    plVar16 = plVar21;
                    do {
                      uVar11 = (ulonglong)((uint)plVar20 * uVar3 + (int)plVar16);
                      plVar7 = *(longlong **)(plVar10[0x12] + uVar11 * 0x28);
                      if (plVar7 != (longlong *)0x0) {
                        (**(code **)(*plVar7 + 0x40))(plVar7,local_90);
                        if ((local_90[0] == 0xb) || (local_90[0] == 0x18)) {
LAB_18003a379:
                          lVar14 = 0x78;
                          if (lVar6 != 0) {
                            lVar14 = 0x80;
                          }
                          (**(code **)(**(longlong **)plVar10[0xe] + 0x48))
                                    (*(longlong **)plVar10[0xe],
                                     *(undefined8 *)(lVar14 + (longlong)plVar10),local_90,
                                     plVar10[0x12] + 0x10 + uVar11 * 0x28);
                        }
                        else {
                          if (local_90[0] == 0x1c) {
                            local_90[0] = 0x1d;
                            goto LAB_18003a379;
                          }
                          local_90[0] = 0;
                        }
                        lVar14 = plVar10[0x12];
                        if (*(longlong *)(lVar14 + 0x10 + uVar11 * 0x28) == 0) {
                          *(undefined8 *)(lVar14 + 0x10 + uVar11 * 0x28) =
                               *(undefined8 *)(lVar14 + uVar11 * 0x28);
                          (**(code **)(**(longlong **)(plVar10[0x12] + 0x10 + uVar11 * 0x28) + 8))()
                          ;
                        }
                      }
                      uVar15 = (int)plVar16 + 1;
                      plVar16 = (longlong *)(ulonglong)uVar15;
                      uVar17 = local_c8;
                    } while (uVar15 < uVar3);
                  }
                  local_c8 = uVar17 + 1;
                  plVar20 = (longlong *)(ulonglong)local_c8;
                  uVar17 = local_c4;
                } while (local_c8 < uVar18);
              }
            }
            uVar13 = *(undefined8 *)(plVar10[0x12] + 0x10 + uVar12 * 0x28);
          }
          else {
            uVar13 = *(undefined8 *)(param_1 + 0xfb00 + local_b8 * 8);
          }
        }
        local_c4 = uVar17 + 1;
        plVar10 = (longlong *)(ulonglong)local_c4;
        *(undefined8 *)(param_1 + 0xfc68 + local_b8 * 8) = uVar13;
        local_b8 = local_b8 + 1;
      } while (local_c4 < param_2);
    }
    if (*(longlong **)(param_1 + 0xf9b0) == (longlong *)0x0) {
      bVar23 = false;
      bVar24 = false;
    }
    else {
      cVar9 = (**(code **)(**(longlong **)(param_1 + 0xf9b0) + 0x80))();
      bVar23 = cVar9 != '\0';
      bVar24 = cVar9 != '\0';
    }
    if ((*(longlong **)(param_1 + 0xf9b8) != (longlong *)0x0) &&
       (cVar9 = (**(code **)(**(longlong **)(param_1 + 0xf9b8) + 0x80))(), cVar9 != '\0')) {
      bVar23 = bVar24 | 2;
    }
    if ((*(longlong **)(param_1 + 0xf9c0) != (longlong *)0x0) &&
       (cVar9 = (**(code **)(**(longlong **)(param_1 + 0xf9c0) + 0x80))(), cVar9 != '\0')) {
      bVar23 = bVar23 | 4;
    }
    if ((*(longlong **)(param_1 + 0xf9c8) != (longlong *)0x0) &&
       (cVar9 = (**(code **)(**(longlong **)(param_1 + 0xf9c8) + 0x80))(), cVar9 != '\0')) {
      bVar23 = bVar23 | 8;
    }
    bVar1 = *(byte *)(param_1 + 0x765c);
    *(byte *)(param_1 + 0x765c) = bVar23;
    *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar23 != bVar1;
    if (param_3 != *(uint *)(param_1 + 0xe5c)) {
      uVar17 = 0xffffffff;
      if (*(uint *)(param_1 + 0xe5c) < 2) {
        uVar18 = 0xffffffff;
      }
      else {
        uVar18 = *(uint *)(param_1 + 0xe58);
      }
      if (1 < param_3) {
        uVar17 = *(uint *)(param_1 + 0xe58);
      }
      *(uint *)(param_1 + 0xe5c) = param_3;
      uVar3 = (1 << ((byte)param_3 & 0x1f)) - 1;
      *(byte *)(param_1 + 0xf68c) =
           *(byte *)(param_1 + 0xf68c) | (uVar3 & uVar18) != (uVar3 & uVar17);
    }
    if (plVar22 == (longlong *)0x0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = (**(code **)(*plVar22 + 0x88))(plVar22);
    }
    cVar2 = *(char *)(param_1 + 0x75a2);
    *(char *)(param_1 + 0x75a2) = cVar9;
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | cVar9 != cVar2;
    if (plVar22 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf9d0) = 0;
      *(undefined8 *)(param_1 + 0xfcb0) = 0;
    }
    else {
      iVar4 = *(int *)((longlong)plVar22 + 0x3c);
      iVar5 = *(int *)((longlong)param_5 + 0xc);
      lVar6 = param_5[1];
      if ((*(longlong *)(param_1 + 0xf9d0) == 0) ||
         (*(int *)(&DAT_1800ff000 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c) * 4
                  ) != *(int *)(&DAT_1800ff000 + (ulonglong)*(uint *)((longlong)plVar22 + 0x2c) * 4)
         )) {
        bVar23 = 1;
      }
      else {
        bVar23 = 0;
      }
      *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar23;
      *(longlong **)(param_1 + 0xf9d0) = plVar22;
      *(undefined8 *)(param_1 + 0xfcb0) =
           *(undefined8 *)(plVar22[0x12] + 8 + (ulonglong)(uint)(iVar4 * iVar5 + (int)lVar6) * 0x28)
      ;
      *(int *)(param_1 + 0xf9f8) = (int)param_5[1];
      *(undefined4 *)(param_1 + 0xf9fc) = *(undefined4 *)((longlong)param_5 + 0xc);
    }
    if (plVar19 != (longlong *)0x0) {
      plVar22 = plVar19;
    }
    FUN_18005ea40(param_1,plVar22);
    FUN_18005eb80(param_1,plVar22);
    fVar25 = (float)(**(code **)(*plVar22 + 0x58))(plVar22);
    fVar26 = (float)(**(code **)(*plVar22 + 0x60))(plVar22);
    if ((fVar25 != *(float *)(param_1 + 0x6920)) || (fVar26 != *(float *)(param_1 + 0x6924))) {
      *(undefined4 *)(param_1 + 0x6928) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x692c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
      *(float *)(param_1 + 0x6920) = 1.0 / fVar25;
      *(float *)(param_1 + 0x6924) = 1.0 / fVar26;
    }
  }
  *(undefined1 *)(param_1 + 0xf68a) = 1;
  return;
}

