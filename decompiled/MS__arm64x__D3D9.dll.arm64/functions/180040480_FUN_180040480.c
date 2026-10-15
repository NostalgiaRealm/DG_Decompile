/*
 * FUN_180040480 at 180040480
 * undefined FUN_180040480(void)
 * Address ranges: 180040480-180040f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040480(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined4 uVar30;
  float fVar31;
  int7 local_138;
  undefined1 uStack_131;
  int local_130;
  uint local_12c;
  uint local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong *plStack_88;
  longlong *local_80;
  longlong *local_78 [5];
  
  local_c0 = param_1 + 0x4000;
  lVar22 = param_1 + 0xf000;
  lVar28 = param_1 + 0xc000;
  lVar26 = param_1 + 0x8000;
  lVar29 = param_1 + 0x7000;
  local_f8 = param_4;
  FUN_18003feb0(param_1,0,0,0);
  if ((*param_4 == 0) && (*param_5 == 0)) {
    plVar15 = *(longlong **)(param_1 + 0xfcc0);
    if (plVar15 != (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0xfce8);
      iVar3 = *(int *)((longlong)plVar15 + 0x3c);
      iVar4 = *(int *)(param_1 + 0xfcf8);
      uVar16 = (**(code **)(*plVar15 + 0x108))();
      FUN_180039220(param_1,uVar16,iVar2 + iVar3 * iVar4);
    }
    plVar15 = *(longlong **)(param_1 + 0xfcc8);
    if (plVar15 != (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0xfcec);
      iVar3 = *(int *)((longlong)plVar15 + 0x3c);
      iVar4 = *(int *)(param_1 + 0xfcfc);
      uVar16 = (**(code **)(*plVar15 + 0x108))();
      FUN_180039220(param_1,uVar16,iVar2 + iVar3 * iVar4);
    }
    plVar15 = *(longlong **)(param_1 + 0xfcd0);
    if (plVar15 != (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0xfcf0);
      iVar3 = *(int *)((longlong)plVar15 + 0x3c);
      iVar4 = *(int *)(param_1 + 0xfd00);
      uVar16 = (**(code **)(*plVar15 + 0x108))();
      FUN_180039220(param_1,uVar16,iVar2 + iVar3 * iVar4);
    }
    plVar15 = *(longlong **)(param_1 + 0xfcd8);
    if (plVar15 != (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0xfcf4);
      iVar3 = *(int *)((longlong)plVar15 + 0x3c);
      iVar4 = *(int *)(param_1 + 0xfd04);
      uVar16 = (**(code **)(*plVar15 + 0x108))();
      FUN_180039220(param_1,uVar16,iVar2 + iVar3 * iVar4);
    }
    plVar15 = *(longlong **)(param_1 + 0xfce0);
    if (plVar15 != (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0xfd08);
      iVar3 = *(int *)((longlong)plVar15 + 0x3c);
      iVar4 = *(int *)(param_1 + 0xfd0c);
      uVar16 = (**(code **)(*plVar15 + 0x108))();
      FUN_180039490(param_1,uVar16,iVar2 + iVar3 * iVar4);
      cVar12 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x88))();
      if (cVar12 != '\0') {
        plVar15 = *(longlong **)(param_1 + 0xfce0);
        iVar2 = *(int *)(param_1 + 0xfd0c);
        iVar3 = *(int *)(param_1 + 0xfd08);
        iVar4 = *(int *)((longlong)plVar15 + 0x34);
        iVar5 = *(int *)((longlong)plVar15 + 0x3c);
        uVar16 = (**(code **)(*plVar15 + 0x108))();
        FUN_180039490(param_1,uVar16,iVar3 + (iVar4 + iVar2) * iVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xfcd0) = 0;
    *(undefined8 *)(param_1 + 0xfcd8) = 0;
    *(undefined8 *)(param_1 + 0xfcc0) = 0;
    *(undefined8 *)(param_1 + 0xfcc8) = 0;
    uVar16 = *(undefined8 *)(param_1 + 0xf8d8);
    *(undefined8 *)(param_1 + 0xfbb0) = uVar16;
    *(undefined8 *)(param_1 + 0xfbb8) = uVar16;
    *(undefined8 *)(param_1 + 0xfba0) = uVar16;
    *(undefined8 *)(param_1 + 0xfba8) = uVar16;
    *(undefined8 *)(param_1 + 0xf95c) = 0;
    *(undefined8 *)(param_1 + 0xf954) = 0;
    *(undefined1 *)(param_1 + 0x7665) = 1;
    *(undefined4 *)(param_1 + 0xe5c) = 1;
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
    *(undefined8 *)(param_1 + 0xfce0) = 0;
    *(undefined1 *)(param_1 + 0x10185) = 0;
    *(undefined8 *)(param_1 + 0xfcb0) = uVar16;
    *(undefined4 *)(param_1 + 0xf974) = 0;
    *(undefined8 *)(param_1 + 0x7598) = 0;
    *(undefined8 *)(param_1 + 0xfca0) = 0;
  }
  else {
    uVar19 = 0;
    local_78[0] = (longlong *)0x0;
    local_78[1] = (longlong *)0x0;
    local_78[2] = (longlong *)0x0;
    local_78[3] = (longlong *)0x0;
    if (param_2 != 0) {
      do {
        plVar15 = (longlong *)0x0;
        if (local_f8[uVar19 * 2] != 0) {
          plVar15 = (longlong *)(local_f8[uVar19 * 2] + -0x100);
        }
        local_78[uVar19] = plVar15;
        uVar14 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar14;
      } while (uVar14 < param_2);
    }
    plVar15 = (longlong *)0x0;
    if (*param_5 != 0) {
      plVar15 = (longlong *)(*param_5 + -0x100);
    }
    local_c8 = local_78[0];
    if (param_2 == 0) {
      lVar24 = 0xfcc0;
      lVar27 = param_1;
    }
    else {
      local_118 = param_1 + 0x10000;
      lVar24 = param_1 + 0xfcf8;
      lVar1 = param_1 + 0xfce8;
      lVar25 = param_1 + 0xfba0;
      local_120 = param_1 + 0xfcc0;
      local_e0 = param_1 + 0xf954;
      lVar27 = 0;
      uVar14 = 0;
      local_12c = param_2;
      local_128 = param_3;
      local_110 = lVar28;
      local_100 = param_1;
      local_d8 = lVar25;
      local_a0 = lVar22;
      lStack_98 = lVar26;
      local_90 = lVar29;
      plStack_88 = param_5;
      local_80 = plVar15;
      do {
        plVar15 = *(longlong **)(local_120 + lVar27 * 8);
        if (plVar15 == (longlong *)0x0) {
          lVar29 = lVar27 << 2;
          lVar28 = lVar27 << 2;
          lVar22 = lVar24;
          lVar26 = lVar1;
        }
        else {
          iVar3 = *(int *)(lVar1 + lVar27 * 4);
          iVar2 = *(int *)((longlong)plVar15 + 0x3c);
          iVar4 = *(int *)(lVar24 + lVar27 * 4);
          uVar16 = (**(code **)(*plVar15 + 0x108))();
          FUN_180039220(param_1,uVar16,iVar3 + iVar2 * iVar4);
          lVar25 = local_d8;
          lVar22 = lVar27 << 2;
          lVar28 = lVar24;
          lVar26 = lVar27 << 2;
          lVar29 = lVar1;
        }
        plVar15 = local_78[lVar27];
        if (plVar15 == (longlong *)0x0) {
          *(undefined8 *)(local_120 + lVar27 * 8) = 0;
          *(undefined4 *)(lVar29 + lVar26) = 0;
          *(undefined4 *)(param_1 + 0xf954 + lVar27 * 4) = 0;
          *(undefined4 *)(lVar28 + lVar22) = 0;
          uVar13 = *(uint *)(local_110 + 0x38c8);
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
          plVar15 = *(longlong **)
                     (*(longlong *)(lVar22 + 0x50) + (ulonglong)(uVar13 >> 0x10) * 0x10);
          (**(code **)(*plVar15 + 0x48))(plVar15,&local_d0);
          local_d0 = local_d0 + (ulonglong)(*(int *)(lVar22 + 0x20) * (uVar13 & 0xffff));
          *(longlong *)(param_1 + 0xfc80 + lVar27 * 8) = local_d0;
          *(longlong *)(lVar25 + lVar27 * 8) = local_d0;
          if (uVar14 == 0) {
            *(undefined8 *)(param_1 + 0xfca0) = 0;
            lVar22 = local_118;
          }
          else {
            lVar22 = param_1 + 0x10000;
          }
          bVar10 = *(byte *)(lVar22 + 0x185) & ((byte)(1 << (ulonglong)(uVar14 & 0x1f)) ^ 0xff);
        }
        else {
          local_b0 = lVar27 * 0x10;
          local_108 = (longlong)local_f8 + 0xc;
          local_a8 = local_f8 + 1;
          local_130 = (int)local_a8[lVar27 * 2] +
                      *(int *)((longlong)plVar15 + 0x3c) * *(int *)(local_108 + local_b0);
          *(longlong **)(local_120 + lVar27 * 8) = plVar15;
          uVar19 = (**(code **)(*plVar15 + 0x128))(plVar15);
          _local_138 = CONCAT44(stack0xfffffffffffffecc,(int)uVar19);
          local_b8 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
          plVar17 = *(longlong **)
                     (*(longlong *)(local_b8 + 0x50) + (uVar19 >> 0x10 & 0xffff) * 0x10);
          (**(code **)(*plVar17 + 0x48))(plVar17,&local_f0);
          local_f0 = local_f0 + (ulonglong)(*(int *)(local_b8 + 0x20) * (uint)(ushort)local_138);
          *(longlong *)(lVar25 + lVar27 * 8) = local_f0;
          *(int *)(local_e0 + lVar27 * 4) = (int)plVar15[0x15];
          *(undefined4 *)(lVar29 + lVar26) = *(undefined4 *)((longlong)local_a8 + local_b0);
          *(undefined4 *)(lVar28 + lVar22) = *(undefined4 *)(local_108 + local_b0);
          cVar12 = (char)*(undefined4 *)((longlong)local_a8 + local_b0) +
                   (char)*(undefined4 *)((longlong)plVar15 + 0x3c) *
                   (char)*(undefined4 *)(local_108 + local_b0);
          local_108 = (**(code **)(*plVar15 + 0x108))(plVar15);
          uVar13 = *(uint *)(local_110 + 0x3a10);
          if (uVar13 == 0) {
LAB_18004097c:
            _local_138 = CONCAT17(1,(uint7)(byte)(cVar12 + 1) << 0x10);
            FUN_180041b90(param_1 + 64000,&local_108,&local_138);
          }
          else {
            uVar20 = 0;
            uVar18 = uVar13;
            do {
              uVar21 = uVar18 + uVar20 >> 1;
              uVar19 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar21 * 0x18);
              uVar9 = uVar21;
              if (uVar19 <= local_108) {
                if (local_108 <= uVar19) break;
                uVar20 = uVar21 + 1;
                uVar21 = uVar21 + 1;
                uVar9 = uVar18;
              }
              uVar18 = uVar9;
            } while (uVar18 != uVar20);
            if (((uVar21 == uVar13) ||
                (puVar23 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar21 * 0x18)
                , *puVar23 != local_108)) || (puVar23 == (ulonglong *)0xfffffffffffffff0))
            goto LAB_18004097c;
            lVar22 = 0;
            if (((*(char *)((longlong)puVar23 + 0x12) == '\0') ||
                (lVar22 = 1, *(char *)((longlong)puVar23 + 0x13) == '\0')) ||
               ((lVar22 = 2, *(char *)((longlong)puVar23 + 0x14) == '\0' ||
                (lVar22 = 3, *(char *)((longlong)puVar23 + 0x15) == '\0')))) {
              *(char *)((longlong)puVar23 + lVar22 + 0x12) = cVar12 + '\x01';
            }
            *(undefined1 *)((longlong)puVar23 + 0x17) = 1;
          }
          if (uVar14 == 0) {
            uVar13 = (**(code **)(*plVar15 + 0x138))(plVar15,local_130);
            lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
            plVar15 = *(longlong **)
                       (*(longlong *)(lVar22 + 0x50) + (ulonglong)(uVar13 >> 0x10) * 0x10);
            (**(code **)(*plVar15 + 0x48))(plVar15,&local_e8);
            local_e8 = local_e8 + (ulonglong)(*(int *)(lVar22 + 0x20) * (uVar13 & 0xffff));
            *(longlong *)(param_1 + 0xfc80 + lVar27 * 8) = local_e8;
            *(undefined4 *)(param_1 + 0xfca0) = *(undefined4 *)(local_e0 + lVar27 * 4);
            iVar2 = *(int *)(local_e0 + lVar27 * 4);
            if (iVar2 == 0x1c) {
              iVar2 = 0x1d;
            }
            *(int *)(param_1 + 0xfca4) = iVar2;
          }
          else {
            *(undefined8 *)(param_1 + 0xfc80 + lVar27 * 8) = *(undefined8 *)(lVar25 + lVar27 * 8);
          }
          *(undefined1 *)(param_1 + 0x1018b) = 1;
          bVar10 = *(byte *)(local_118 + 0x185) | (byte)(1 << (ulonglong)(uVar14 & 0x1f));
          lVar25 = local_d8;
        }
        uVar14 = uVar14 + 1;
        lVar27 = lVar27 + 1;
        *(byte *)(local_118 + 0x185) = bVar10;
      } while (uVar14 < local_12c);
      lVar27 = 0xfcc0;
      lVar24 = local_100;
      lVar26 = lStack_98;
      plVar15 = local_80;
      lVar22 = local_a0;
      lVar28 = local_110;
      lVar29 = local_90;
      param_5 = plStack_88;
      param_3 = local_128;
    }
    if (*(longlong **)(lVar27 + lVar24) == (longlong *)0x0) {
      bVar10 = false;
    }
    else {
      cVar12 = (**(code **)(**(longlong **)(lVar27 + lVar24) + 0x80))();
      bVar10 = cVar12 != '\0';
    }
    if (*(longlong **)(lVar26 + 0x7cc8) != (longlong *)0x0) {
      cVar12 = (**(code **)(**(longlong **)(lVar26 + 0x7cc8) + 0x80))();
      bVar10 = bVar10 | (cVar12 != '\0') << 1;
    }
    if (*(longlong **)(lVar26 + 0x7cd0) != (longlong *)0x0) {
      cVar12 = (**(code **)(**(longlong **)(lVar26 + 0x7cd0) + 0x80))();
      bVar10 = bVar10 | (cVar12 != '\0') << 2;
    }
    if ((*(longlong **)(lVar26 + 0x7cd8) != (longlong *)0x0) &&
       (cVar12 = (**(code **)(**(longlong **)(lVar26 + 0x7cd8) + 0x80))(), cVar12 != '\0')) {
      bVar10 = bVar10 | 8;
    }
    bVar6 = *(byte *)(lVar29 + 0x65c);
    *(byte *)(lVar29 + 0x65c) = bVar10;
    bVar7 = *(byte *)(lVar22 + 0x68c);
    bVar11 = bVar10 != bVar6;
    uVar14 = *(uint *)(param_1 + 0xe5c);
    *(byte *)(lVar22 + 0x68c) = bVar11 | bVar7;
    if (param_3 != uVar14) {
      if (uVar14 < 2) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = *(uint *)(param_1 + 0xe58);
      }
      if (param_3 < 2) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = *(uint *)(param_1 + 0xe58);
      }
      *(uint *)(param_1 + 0xe5c) = param_3;
      uVar20 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(lVar22 + 0x68c) = bVar7 | ((uVar20 & uVar14) != (uVar20 & uVar13) || bVar11);
    }
    if (plVar15 == (longlong *)0x0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = (**(code **)(*plVar15 + 0x88))(plVar15);
    }
    cVar8 = *(char *)(lVar29 + 0x5a2);
    *(char *)(lVar29 + 0x5a2) = cVar12;
    plVar17 = *(longlong **)(lVar26 + 0x7ce0);
    *(byte *)(lVar22 + 0x68b) = cVar12 != cVar8 | *(byte *)(lVar22 + 0x68b);
    if (plVar17 != (longlong *)0x0) {
      iVar3 = *(int *)(param_1 + 0xfd08);
      iVar2 = *(int *)((longlong)plVar17 + 0x3c);
      iVar4 = *(int *)(param_1 + 0xfd0c);
      uVar16 = (**(code **)(*plVar17 + 0x108))();
      FUN_180039490(param_1,uVar16,iVar3 + iVar2 * iVar4);
      cVar12 = (**(code **)(**(longlong **)(lVar26 + 0x7ce0) + 0x88))();
      if (cVar12 != '\0') {
        plVar17 = *(longlong **)(lVar26 + 0x7ce0);
        iVar4 = *(int *)(param_1 + 0xfd0c);
        iVar2 = *(int *)((longlong)plVar17 + 0x34);
        iVar5 = *(int *)(param_1 + 0xfd08);
        iVar3 = *(int *)((longlong)plVar17 + 0x3c);
        uVar16 = (**(code **)(*plVar17 + 0x108))();
        FUN_180039490(param_1,uVar16,iVar5 + (iVar2 + iVar4) * iVar3);
      }
    }
    if (plVar15 == (longlong *)0x0) {
      uVar16 = *(undefined8 *)(lVar26 + 0x78d8);
      *(undefined4 *)(lVar28 + 0x3974) = 0;
      *(undefined8 *)(lVar26 + 0x7cb0) = uVar16;
      *(byte *)(lVar22 + 0x68b) = *(longlong *)(lVar26 + 0x7ce0) != 0 | *(byte *)(lVar22 + 0x68b);
      plVar17 = (longlong *)0x0;
    }
    else {
      lVar29 = param_5[1];
      iVar2 = *(int *)((longlong)param_5 + 0xc);
      iVar3 = *(int *)((longlong)plVar15 + 0x3c);
      uVar16 = (**(code **)(*plVar15 + 0x108))(plVar15);
      FUN_1800393a0(param_1,uVar16,(int)lVar29 + iVar3 * iVar2);
      cVar12 = (**(code **)(*plVar15 + 0x88))(plVar15);
      if (cVar12 != '\0') {
        lVar29 = param_5[1];
        iVar2 = *(int *)((longlong)param_5 + 0xc);
        iVar3 = *(int *)((longlong)plVar15 + 0x34);
        iVar4 = *(int *)((longlong)plVar15 + 0x3c);
        uVar16 = (**(code **)(*plVar15 + 0x108))(plVar15);
        FUN_1800393a0(param_1,uVar16,(int)lVar29 + (iVar3 + iVar2) * iVar4);
      }
      if ((*(longlong *)(lVar26 + 0x7ce0) == 0) ||
         (bVar10 = 0,
         *(int *)(&DAT_180231470 + (ulonglong)*(uint *)(*(longlong *)(lVar26 + 0x7ce0) + 0x2c) * 4)
         != *(int *)(&DAT_180231470 + (ulonglong)*(uint *)((longlong)plVar15 + 0x2c) * 4))) {
        bVar10 = 1;
      }
      *(byte *)(lVar22 + 0x68d) = *(byte *)(lVar22 + 0x68d) | bVar10;
      uVar14 = (**(code **)(*plVar15 + 0x130))
                         (plVar15,(int)param_5[1] +
                                  *(int *)((longlong)plVar15 + 0x3c) *
                                  *(int *)((longlong)param_5 + 0xc));
      lVar29 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1940);
      plVar17 = *(longlong **)(*(longlong *)(lVar29 + 0x50) + (ulonglong)(uVar14 >> 0x10) * 0x10);
      (**(code **)(*plVar17 + 0x48))(plVar17,&local_100);
      *(ulonglong *)(lVar26 + 0x7cb0) =
           local_100 + (ulonglong)(*(int *)(lVar29 + 0x20) * (uVar14 & 0xffff));
      *(int *)(lVar28 + 0x3974) = (int)plVar15[0x15];
      *(int *)(param_1 + 0xfd08) = (int)param_5[1];
      *(undefined4 *)(param_1 + 0xfd0c) = *(undefined4 *)((longlong)param_5 + 0xc);
      *(undefined1 *)(param_1 + 0x1018b) = 1;
      *(byte *)(lVar22 + 0x68b) = *(longlong *)(lVar26 + 0x7ce0) == 0 | *(byte *)(lVar22 + 0x68b);
      plVar17 = plVar15;
    }
    *(longlong **)(lVar26 + 0x7ce0) = plVar17;
    plVar17 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar17 = plVar15;
    }
    FUN_1800573b0(param_1,plVar17);
    FUN_180057500(param_1,plVar17);
    uVar30 = (**(code **)(*plVar17 + 0x58))(plVar17);
    _local_138 = CONCAT44(stack0xfffffffffffffecc,uVar30);
    fVar31 = (float)(**(code **)(*plVar17 + 0x60))(plVar17);
    if (((float)local_138 != *(float *)(local_c0 + 0x2920)) ||
       (fVar31 != *(float *)(local_c0 + 0x2924))) {
      *(undefined4 *)(local_c0 + 0x2928) = 0x3f800000;
      *(undefined4 *)(local_c0 + 0x292c) = 0x3f800000;
      *(float *)(local_c0 + 0x2920) = 1.0 / (float)local_138;
      *(float *)(local_c0 + 0x2924) = 1.0 / fVar31;
      *(undefined1 *)(lVar22 + 0x6c3) = 1;
    }
  }
  *(undefined1 *)(lVar22 + 0x68a) = 1;
  return;
}

