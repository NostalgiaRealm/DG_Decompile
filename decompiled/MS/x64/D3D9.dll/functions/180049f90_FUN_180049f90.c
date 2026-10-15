/*
 * FUN_180049f90 at 180049f90
 * undefined __fastcall FUN_180049f90(longlong param_1, uint param_2, uint param_3, longlong * param_4, longlong * param_5)
 * Address ranges: 180049f90-18004a97a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049f90(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  char cVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong *plVar24;
  longlong *plVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  uint local_res8;
  longlong *local_res20;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80 [8];
  
  local_res20 = param_4;
  FUN_180049b30(param_1,0,0,0);
  if ((*param_4 == 0) && (*param_5 == 0)) {
    plVar20 = *(longlong **)(param_1 + 0xfcc0);
    if (plVar20 != (longlong *)0x0) {
      uVar5 = *(undefined4 *)(param_1 + 0xfcf8);
      uVar6 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar7 = *(undefined4 *)(param_1 + 0xfce8);
      uVar15 = (**(code **)(*plVar20 + 0x108))();
      FUN_180043da0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)uVar7);
    }
    plVar20 = *(longlong **)(param_1 + 0xfcc8);
    if (plVar20 != (longlong *)0x0) {
      uVar5 = *(undefined4 *)(param_1 + 0xfcfc);
      uVar6 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar7 = *(undefined4 *)(param_1 + 0xfcec);
      uVar15 = (**(code **)(*plVar20 + 0x108))();
      FUN_180043da0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)uVar7);
    }
    plVar20 = *(longlong **)(param_1 + 0xfcd0);
    if (plVar20 != (longlong *)0x0) {
      uVar5 = *(undefined4 *)(param_1 + 0xfd00);
      uVar6 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar7 = *(undefined4 *)(param_1 + 0xfcf0);
      uVar15 = (**(code **)(*plVar20 + 0x108))();
      FUN_180043da0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)uVar7);
    }
    plVar20 = *(longlong **)(param_1 + 0xfcd8);
    if (plVar20 != (longlong *)0x0) {
      uVar5 = *(undefined4 *)(param_1 + 0xfd04);
      uVar6 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar7 = *(undefined4 *)(param_1 + 0xfcf4);
      uVar15 = (**(code **)(*plVar20 + 0x108))();
      FUN_180043da0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)uVar7);
    }
    plVar20 = *(longlong **)(param_1 + 0xfce0);
    if (plVar20 != (longlong *)0x0) {
      uVar5 = *(undefined4 *)(param_1 + 0xfd0c);
      uVar6 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar7 = *(undefined4 *)(param_1 + 0xfd08);
      uVar15 = (**(code **)(*plVar20 + 0x108))();
      FUN_1800440b0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)uVar7);
      cVar12 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x88))();
      if (cVar12 != '\0') {
        plVar20 = *(longlong **)(param_1 + 0xfce0);
        uVar5 = *(undefined4 *)(param_1 + 0xfd0c);
        uVar6 = *(undefined4 *)((longlong)plVar20 + 0x34);
        uVar7 = *(undefined4 *)((longlong)plVar20 + 0x3c);
        uVar8 = *(undefined4 *)(param_1 + 0xfd08);
        uVar15 = (**(code **)(*plVar20 + 0x108))();
        FUN_1800440b0(param_1,uVar15,((char)uVar5 + (char)uVar6) * (char)uVar7 + (char)uVar8);
      }
    }
    *(undefined8 *)(param_1 + 0xfcd8) = 0;
    *(undefined8 *)(param_1 + 0xfcd0) = 0;
    *(undefined8 *)(param_1 + 0xfcc8) = 0;
    *(undefined8 *)(param_1 + 0xfcc0) = 0;
    uVar9 = *(undefined8 *)(param_1 + 0xf8d8);
    *(undefined8 *)(param_1 + 0xfbb8) = uVar9;
    *(undefined8 *)(param_1 + 0xfbb0) = uVar9;
    *(undefined8 *)(param_1 + 0xfba8) = uVar9;
    *(undefined8 *)(param_1 + 0xfba0) = uVar9;
    *(undefined8 *)(param_1 + 0xf95c) = 0;
    *(undefined8 *)(param_1 + 0xf954) = 0;
    *(undefined8 *)(param_1 + 0xfce0) = 0;
    *(undefined8 *)(param_1 + 0xfcb0) = uVar9;
    *(undefined4 *)(param_1 + 0xf974) = 0;
    *(undefined8 *)(param_1 + 0x7598) = 0;
    *(undefined1 *)(param_1 + 0x7665) = 1;
    *(undefined4 *)(param_1 + 0xe5c) = 1;
    *(undefined8 *)(param_1 + 0xfca0) = 0;
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
    *(undefined1 *)(param_1 + 0x10185) = 0;
  }
  else {
    plVar24 = (longlong *)0x0;
    uVar14 = 0;
    local_80[0] = (longlong *)0x0;
    local_80[1] = (longlong *)0x0;
    local_80[2] = (longlong *)0x0;
    local_80[3] = (longlong *)0x0;
    plVar20 = plVar24;
    if (param_2 == 0) {
      plVar20 = (longlong *)(*param_5 + -0x100);
      if (*param_5 == 0) {
        plVar20 = (longlong *)0x0;
      }
    }
    else {
      do {
        plVar16 = (longlong *)(param_4[(longlong)plVar20 * 2] + -0x100);
        if (param_4[(longlong)plVar20 * 2] == 0) {
          plVar16 = plVar24;
        }
        uVar21 = (int)plVar20 + 1;
        local_80[(longlong)plVar20] = plVar16;
        plVar20 = (longlong *)(ulonglong)uVar21;
      } while (uVar21 < param_2);
      local_res8 = 0;
      plVar16 = plVar24;
      plVar25 = plVar24;
      local_88 = (longlong *)(*param_5 + -0x100);
      if (*param_5 == 0) {
        local_88 = plVar24;
      }
      do {
        uVar21 = (uint)plVar16;
        plVar20 = *(longlong **)(param_1 + 0xfcc0 + (longlong)plVar25 * 8);
        puVar2 = (undefined4 *)(param_1 + 0xfcf8 + (longlong)plVar25 * 4);
        puVar1 = (undefined4 *)(param_1 + 0xfce8 + (longlong)plVar25 * 4);
        if (plVar20 != (longlong *)0x0) {
          uVar5 = *puVar2;
          uVar6 = *(undefined4 *)((longlong)plVar20 + 0x3c);
          uVar7 = *puVar1;
          uVar15 = (**(code **)(*plVar20 + 0x108))();
          FUN_180043da0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)uVar7);
        }
        plVar20 = local_80[(longlong)plVar25];
        if (plVar20 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0xfcc0 + (longlong)plVar25 * 8) = 0;
          *(undefined4 *)(param_1 + 0xf954 + (longlong)plVar25 * 4) = 0;
          *puVar1 = 0;
          *puVar2 = 0;
          uVar23 = *(uint *)(param_1 + 0xf8c8);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
          plVar20 = *(longlong **)
                     (*(longlong *)(lVar10 + 0x50) + (ulonglong)(uVar23 >> 0x10) * 0x10);
          (**(code **)(*plVar20 + 0x48))(plVar20,&local_98);
          local_98 = local_98 + (ulonglong)((uVar23 & 0xffff) * *(int *)(lVar10 + 0x20));
          *(longlong *)(param_1 + 0xfba0 + (longlong)plVar25 * 8) = local_98;
          *(longlong *)(param_1 + 0xfc80 + (longlong)plVar25 * 8) = local_98;
          if (uVar21 == 0) {
            *(undefined8 *)(param_1 + 0xfca0) = 0;
          }
          bVar13 = *(byte *)(param_1 + 0x10185) & ~(byte)(1 << (uVar21 & 0x1f));
        }
        else {
          lVar19 = (longlong)plVar25 * 0x10;
          iVar17 = *(int *)((longlong)param_4 + lVar19 + 0xc) * *(int *)((longlong)plVar20 + 0x3c) +
                   (int)param_4[(longlong)plVar25 * 2 + 1];
          *(longlong **)(param_1 + 0xfcc0 + (longlong)plVar25 * 8) = plVar20;
          uVar21 = (**(code **)(*plVar20 + 0x128))(plVar20,iVar17);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
          plVar20 = *(longlong **)
                     (*(longlong *)(lVar10 + 0x50) + (ulonglong)(uVar21 >> 0x10) * 0x10);
          (**(code **)(*plVar20 + 0x48))(plVar20,&local_a8);
          plVar20 = local_80[(longlong)plVar25];
          local_a8 = local_a8 + (ulonglong)((uVar21 & 0xffff) * *(int *)(lVar10 + 0x20));
          *(longlong *)(param_1 + 0xfba0 + (longlong)plVar25 * 8) = local_a8;
          *(int *)(param_1 + 0xf954 + (longlong)plVar25 * 4) = (int)plVar20[0x15];
          *puVar1 = (int)local_res20[(longlong)plVar25 * 2 + 1];
          *puVar2 = *(undefined4 *)((longlong)local_res20 + lVar19 + 0xc);
          cVar12 = (char)*(undefined4 *)((longlong)local_res20 + lVar19 + 0xc) *
                   (char)*(undefined4 *)((longlong)plVar20 + 0x3c) +
                   (char)(int)local_res20[(longlong)plVar25 * 2 + 1];
          local_90 = (**(code **)(*plVar20 + 0x108))(plVar20);
          uVar21 = *(uint *)(param_1 + 0xfa10);
          if (uVar21 == 0) {
LAB_18004a40f:
            local_b0 = (ulonglong)CONCAT51(0x100000000,cVar12 + '\x01') << 0x10;
            FUN_18004bb50((longlong *)(param_1 + 64000),&local_90,&local_b0);
          }
          else {
            uVar23 = uVar21;
            uVar22 = uVar14;
            do {
              uVar18 = uVar23 + uVar22 >> 1;
              uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar18 * 0x18);
              uVar11 = uVar18;
              if (uVar15 <= local_90) {
                if (local_90 <= uVar15) break;
                uVar22 = uVar18 + 1;
                uVar11 = uVar23;
                uVar18 = uVar22;
              }
              uVar23 = uVar11;
            } while (uVar23 != uVar22);
            if (((uVar18 == uVar21) ||
                (lVar10 = *(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar18 * 0x18,
                *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar18 * 0x18) !=
                local_90)) || (lVar10 == -0x10)) goto LAB_18004a40f;
            plVar16 = plVar24;
            if (((*(char *)(lVar10 + 0x12) == '\0') ||
                (plVar16 = (longlong *)0x1, *(char *)(lVar10 + 0x13) == '\0')) ||
               ((plVar16 = (longlong *)0x2, *(char *)(lVar10 + 0x14) == '\0' ||
                (plVar16 = (longlong *)0x3, *(char *)(lVar10 + 0x15) == '\0')))) {
              *(char *)(lVar10 + 0x12 + (longlong)plVar16) = cVar12 + '\x01';
            }
            *(undefined1 *)(lVar10 + 0x17) = 1;
          }
          if (local_res8 == 0) {
            uVar21 = (**(code **)(*plVar20 + 0x138))(plVar20,iVar17);
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
            plVar20 = *(longlong **)
                       (*(longlong *)(lVar10 + 0x50) + (ulonglong)(uVar21 >> 0x10) * 0x10);
            (**(code **)(*plVar20 + 0x48))(plVar20,&local_a0);
            local_a0 = local_a0 + (ulonglong)((uVar21 & 0xffff) * *(int *)(lVar10 + 0x20));
            *(longlong *)(param_1 + 0xfc80 + (longlong)plVar25 * 8) = local_a0;
            *(undefined4 *)(param_1 + 0xfca0) =
                 *(undefined4 *)(param_1 + 0xf954 + (longlong)plVar25 * 4);
            iVar17 = *(int *)(param_1 + 0xf954 + (longlong)plVar25 * 4);
            if (iVar17 == 0x1c) {
              iVar17 = 0x1d;
            }
            *(int *)(param_1 + 0xfca4) = iVar17;
          }
          else {
            *(undefined8 *)(param_1 + 0xfc80 + (longlong)plVar25 * 8) =
                 *(undefined8 *)(param_1 + 0xfba0 + (longlong)plVar25 * 8);
          }
          bVar13 = *(byte *)(param_1 + 0x10185) | (byte)(1 << (local_res8 & 0x1f));
          *(undefined1 *)(param_1 + 0x1018b) = 1;
          uVar21 = local_res8;
        }
        local_res8 = uVar21 + 1;
        *(byte *)(param_1 + 0x10185) = bVar13;
        plVar16 = (longlong *)(ulonglong)local_res8;
        param_4 = local_res20;
        plVar20 = local_88;
        plVar25 = (longlong *)((longlong)plVar25 + 1);
      } while (local_res8 < param_2);
    }
    if (*(longlong **)(param_1 + 0xfcc0) == (longlong *)0x0) {
      bVar13 = false;
    }
    else {
      cVar12 = (**(code **)(**(longlong **)(param_1 + 0xfcc0) + 0x80))();
      bVar13 = cVar12 != '\0';
      uVar14 = (uint)(cVar12 != '\0');
    }
    if ((*(longlong **)(param_1 + 0xfcc8) != (longlong *)0x0) &&
       (cVar12 = (**(code **)(**(longlong **)(param_1 + 0xfcc8) + 0x80))(), cVar12 != '\0')) {
      bVar13 = (byte)uVar14 | 2;
    }
    if ((*(longlong **)(param_1 + 0xfcd0) != (longlong *)0x0) &&
       (cVar12 = (**(code **)(**(longlong **)(param_1 + 0xfcd0) + 0x80))(), cVar12 != '\0')) {
      bVar13 = bVar13 | 4;
    }
    if ((*(longlong **)(param_1 + 0xfcd8) != (longlong *)0x0) &&
       (cVar12 = (**(code **)(**(longlong **)(param_1 + 0xfcd8) + 0x80))(), cVar12 != '\0')) {
      bVar13 = bVar13 | 8;
    }
    bVar3 = *(byte *)(param_1 + 0x765c);
    *(byte *)(param_1 + 0x765c) = bVar13;
    *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar13 != bVar3;
    if (param_3 != *(uint *)(param_1 + 0xe5c)) {
      uVar14 = 0xffffffff;
      if (*(uint *)(param_1 + 0xe5c) < 2) {
        uVar21 = 0xffffffff;
      }
      else {
        uVar21 = *(uint *)(param_1 + 0xe58);
      }
      if (1 < param_3) {
        uVar14 = *(uint *)(param_1 + 0xe58);
      }
      *(uint *)(param_1 + 0xe5c) = param_3;
      uVar23 = (1 << ((byte)param_3 & 0x1f)) - 1;
      *(byte *)(param_1 + 0xf68c) =
           *(byte *)(param_1 + 0xf68c) | (uVar23 & uVar21) != (uVar23 & uVar14);
    }
    if (plVar20 == (longlong *)0x0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = (**(code **)(*plVar20 + 0x88))(plVar20);
    }
    cVar4 = *(char *)(param_1 + 0x75a2);
    *(char *)(param_1 + 0x75a2) = cVar12;
    plVar16 = *(longlong **)(param_1 + 0xfce0);
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | cVar12 != cVar4;
    if (plVar16 != (longlong *)0x0) {
      uVar5 = *(undefined4 *)(param_1 + 0xfd0c);
      uVar6 = *(undefined4 *)((longlong)plVar16 + 0x3c);
      uVar7 = *(undefined4 *)(param_1 + 0xfd08);
      uVar15 = (**(code **)(*plVar16 + 0x108))();
      FUN_1800440b0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)uVar7);
      cVar12 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x88))();
      if (cVar12 != '\0') {
        plVar16 = *(longlong **)(param_1 + 0xfce0);
        uVar5 = *(undefined4 *)(param_1 + 0xfd0c);
        uVar6 = *(undefined4 *)((longlong)plVar16 + 0x34);
        uVar7 = *(undefined4 *)((longlong)plVar16 + 0x3c);
        uVar8 = *(undefined4 *)(param_1 + 0xfd08);
        uVar15 = (**(code **)(*plVar16 + 0x108))();
        FUN_1800440b0(param_1,uVar15,((char)uVar5 + (char)uVar6) * (char)uVar7 + (char)uVar8);
      }
    }
    if (plVar20 == (longlong *)0x0) {
      bVar26 = *(longlong *)(param_1 + 0xfce0) != 0;
      *(undefined8 *)(param_1 + 0xfcb0) = *(undefined8 *)(param_1 + 0xf8d8);
      *(undefined4 *)(param_1 + 0xf974) = 0;
    }
    else {
      uVar5 = *(undefined4 *)((longlong)plVar20 + 0x3c);
      uVar6 = *(undefined4 *)((longlong)param_5 + 0xc);
      lVar10 = param_5[1];
      uVar15 = (**(code **)(*plVar20 + 0x108))(plVar20);
      FUN_180043fc0(param_1,uVar15,(char)uVar5 * (char)uVar6 + (char)(int)lVar10);
      cVar12 = (**(code **)(*plVar20 + 0x88))(plVar20);
      if (cVar12 != '\0') {
        uVar5 = *(undefined4 *)((longlong)plVar20 + 0x34);
        uVar6 = *(undefined4 *)((longlong)param_5 + 0xc);
        uVar7 = *(undefined4 *)((longlong)plVar20 + 0x3c);
        lVar10 = param_5[1];
        uVar15 = (**(code **)(*plVar20 + 0x108))(plVar20);
        FUN_180043fc0(param_1,uVar15,((char)uVar5 + (char)uVar6) * (char)uVar7 + (char)(int)lVar10);
      }
      if ((*(longlong *)(param_1 + 0xfce0) == 0) ||
         (*(int *)(&DAT_1800ff000 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xfce0) + 0x2c) * 4
                  ) != *(int *)(&DAT_1800ff000 + (ulonglong)*(uint *)((longlong)plVar20 + 0x2c) * 4)
         )) {
        bVar13 = 1;
      }
      else {
        bVar13 = 0;
      }
      *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar13;
      uVar14 = (**(code **)(*plVar20 + 0x130))
                         (plVar20,*(int *)((longlong)plVar20 + 0x3c) *
                                  *(int *)((longlong)param_5 + 0xc) + (int)param_5[1]);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1940);
      plVar24 = *(longlong **)(*(longlong *)(lVar10 + 0x50) + (ulonglong)(uVar14 >> 0x10) * 0x10);
      (**(code **)(*plVar24 + 0x48))(plVar24,&local_res20);
      bVar26 = *(longlong *)(param_1 + 0xfce0) == 0;
      *(ulonglong *)(param_1 + 0xfcb0) =
           (longlong)local_res20 + (ulonglong)((uVar14 & 0xffff) * *(int *)(lVar10 + 0x20));
      *(int *)(param_1 + 0xf974) = (int)plVar20[0x15];
      *(int *)(param_1 + 0xfd08) = (int)param_5[1];
      *(undefined4 *)(param_1 + 0xfd0c) = *(undefined4 *)((longlong)param_5 + 0xc);
      *(undefined1 *)(param_1 + 0x1018b) = 1;
      plVar24 = plVar20;
    }
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar26;
    *(longlong **)(param_1 + 0xfce0) = plVar24;
    if (local_80[0] != (longlong *)0x0) {
      plVar20 = local_80[0];
    }
    FUN_18005ea40(param_1,plVar20);
    FUN_18005eb80(param_1,plVar20);
    fVar27 = (float)(**(code **)(*plVar20 + 0x58))(plVar20);
    fVar28 = (float)(**(code **)(*plVar20 + 0x60))(plVar20);
    if ((fVar27 != *(float *)(param_1 + 0x6920)) || (fVar28 != *(float *)(param_1 + 0x6924))) {
      *(undefined4 *)(param_1 + 0x6928) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x692c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
      *(float *)(param_1 + 0x6920) = 1.0 / fVar27;
      *(float *)(param_1 + 0x6924) = 1.0 / fVar28;
    }
  }
  *(undefined1 *)(param_1 + 0xf68a) = 1;
  return;
}

