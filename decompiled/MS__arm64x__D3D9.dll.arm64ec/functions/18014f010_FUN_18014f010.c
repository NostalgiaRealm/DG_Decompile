/*
 * FUN_18014f010 at 18014f010
 * undefined FUN_18014f010(void)
 * Address ranges: 18014f010-18014fceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014f010(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  longlong *plVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
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
  ulonglong *puVar24;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  code *extraout_x11_19;
  code *extraout_x11_20;
  code *extraout_x11_21;
  code *extraout_x11_22;
  code *extraout_x11_23;
  code *extraout_x11_24;
  code *extraout_x11_25;
  code *extraout_x11_26;
  code *extraout_x11_27;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  int7 local_138;
  undefined1 uStack_131;
  longlong local_130;
  longlong local_128;
  int local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong local_68 [5];
  
  local_100 = param_1 + 0x7000;
  local_a8 = param_1 + 0x4000;
  lVar23 = param_1 + 0xf000;
  lVar26 = param_1 + 0x8000;
  local_f8 = param_5;
  local_e0 = param_4;
  FUN_18014e9a0(param_1,0,0,0);
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  if ((*param_4 == 0) && (*param_5 == 0)) {
    if (*(longlong *)(param_1 + 0xfcc0) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xfcc0) + 0x3c);
      iVar2 = *(int *)(param_1 + 0xfcf8);
      iVar3 = *(int *)(param_1 + 0xfce8);
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar16 = (*extraout_x11)();
      FUN_1801476a0(param_1,uVar16,iVar3 + iVar1 * iVar2);
    }
    if (*(longlong *)(param_1 + 0xfcc8) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xfcc8) + 0x3c);
      iVar2 = *(int *)(param_1 + 0xfcfc);
      iVar3 = *(int *)(param_1 + 0xfcec);
      (*(code *)puVar7)(0x180224000);
      uVar16 = (*extraout_x11_00)();
      FUN_1801476a0(param_1,uVar16,iVar3 + iVar1 * iVar2);
    }
    if (*(longlong *)(param_1 + 0xfcd0) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xfcd0) + 0x3c);
      iVar2 = *(int *)(param_1 + 0xfd00);
      iVar3 = *(int *)(param_1 + 0xfcf0);
      (*(code *)puVar7)(0x180224000);
      uVar16 = (*extraout_x11_01)();
      FUN_1801476a0(param_1,uVar16,iVar3 + iVar1 * iVar2);
    }
    if (*(longlong *)(param_1 + 0xfcd8) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xfcd8) + 0x3c);
      iVar2 = *(int *)(param_1 + 0xfd04);
      iVar3 = *(int *)(param_1 + 0xfcf4);
      (*(code *)puVar7)(0x180224000);
      uVar16 = (*extraout_x11_02)();
      FUN_1801476a0(param_1,uVar16,iVar3 + iVar1 * iVar2);
    }
    if (*(longlong *)(param_1 + 0xfce0) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xfce0) + 0x3c);
      iVar2 = *(int *)(param_1 + 0xfd0c);
      iVar3 = *(int *)(param_1 + 0xfd08);
      (*(code *)puVar7)(0x180224000);
      uVar16 = (*extraout_x11_03)();
      FUN_180147910(param_1,uVar16,iVar3 + iVar1 * iVar2);
      (*(code *)puVar7)(0x180224000);
      cVar12 = (*extraout_x11_04)();
      if (cVar12 != '\0') {
        iVar1 = *(int *)(param_1 + 0xfd0c);
        iVar2 = *(int *)(param_1 + 0xfd08);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0xfce0) + 0x34);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0xfce0) + 0x3c);
        (*(code *)puVar7)(0x180224000);
        uVar16 = (*extraout_x11_05)();
        FUN_180147910(param_1,uVar16,iVar2 + (iVar3 + iVar1) * iVar4);
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
    *(undefined8 *)(param_1 + 0xfcb0) = uVar16;
    *(undefined8 *)(param_1 + 0xfce0) = 0;
    *(undefined8 *)(param_1 + 0x7598) = 0;
    *(undefined4 *)(param_1 + 0xf974) = 0;
    *(undefined4 *)(param_1 + 0xe5c) = 1;
    *(undefined8 *)(param_1 + 0xfca0) = 0;
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
    *(undefined1 *)(local_100 + 0x665) = 1;
    *(undefined1 *)(param_1 + 0x10185) = 0;
  }
  else {
    uVar19 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    if (param_2 != 0) {
      do {
        lVar17 = 0;
        if (local_e0[uVar19 * 2] != 0) {
          lVar17 = local_e0[uVar19 * 2] + -0x100;
        }
        local_68[uVar19] = lVar17;
        uVar15 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar15;
      } while (uVar15 < param_2);
    }
    lVar17 = 0;
    if (*local_f8 != 0) {
      lVar17 = *local_f8 + -0x100;
    }
    local_b0 = local_68[0];
    if (param_2 == 0) {
      lVar25 = 0xfcc0;
      lVar20 = param_1;
    }
    else {
      local_108 = param_1 + 0x10000;
      local_130 = param_1 + 0xfcf8;
      lVar20 = param_1 + 0xfba0;
      local_128 = param_1 + 0xfce8;
      local_118 = param_1 + 0xfcc0;
      local_c8 = param_1 + 0xf954;
      lVar25 = 0;
      uVar15 = 0;
      local_e8 = param_1;
      local_c0 = lVar20;
      local_80 = lVar23;
      lStack_78 = lVar26;
      local_70 = lVar17;
      do {
        lVar26 = local_128;
        lVar23 = local_130;
        lVar17 = *(longlong *)(local_118 + lVar25 * 8);
        if (lVar17 == 0) {
          local_110 = lVar25 << 2;
          lVar23 = lVar25 << 2;
          lVar26 = local_130;
          lVar17 = local_128;
        }
        else {
          iVar1 = *(int *)(lVar17 + 0x3c);
          iVar2 = *(int *)(local_130 + lVar25 * 4);
          iVar3 = *(int *)(local_128 + lVar25 * 4);
          (*(code *)puVar7)();
          uVar16 = (*extraout_x11_06)();
          FUN_1801476a0(param_1,uVar16,iVar3 + iVar1 * iVar2);
          local_110 = lVar26;
          lVar20 = local_c0;
          lVar26 = lVar25 << 2;
          lVar17 = lVar25 << 2;
        }
        lVar27 = local_68[lVar25];
        local_88 = lVar27;
        if (lVar27 == 0) {
          *(undefined8 *)(local_118 + lVar25 * 8) = 0;
          *(undefined4 *)(lVar23 + lVar26) = 0;
          *(undefined4 *)(param_1 + 0xf954 + lVar25 * 4) = 0;
          *(undefined4 *)(local_110 + lVar17) = 0;
          uVar14 = *(uint *)(param_1 + 0xf8c8);
          lVar23 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
          uVar16 = (*(code *)puVar7)();
          (*extraout_x11_12)(uVar16,&local_b8);
          local_b8 = local_b8 + (ulonglong)(*(int *)(lVar23 + 0x20) * (uVar14 & 0xffff));
          *(longlong *)(param_1 + 0xfc80 + lVar25 * 8) = local_b8;
          *(longlong *)(lVar20 + lVar25 * 8) = local_b8;
          if (uVar15 == 0) {
            *(undefined8 *)(param_1 + 0xfca0) = 0;
            lVar23 = local_108;
          }
          else {
            lVar23 = param_1 + 0x10000;
          }
          bVar10 = *(byte *)(lVar23 + 0x185) & ((byte)(1 << (ulonglong)(uVar15 & 0x1f)) ^ 0xff);
        }
        else {
          local_98 = lVar25 * 0x10;
          local_f0 = (longlong)local_e0 + 0xc;
          local_90 = local_e0 + 1;
          local_120 = (int)local_90[lVar25 * 2] +
                      *(int *)(lVar27 + 0x3c) * *(int *)(local_f0 + local_98);
          *(longlong *)(local_118 + lVar25 * 8) = lVar27;
          (*(code *)puVar7)();
          uVar13 = (*extraout_x11_07)(lVar27);
          _local_138 = CONCAT44(stack0xfffffffffffffecc,uVar13);
          local_a0 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
          uVar16 = (*(code *)puVar7)();
          (*extraout_x11_08)(uVar16,&local_d8);
          local_d8 = local_d8 + (ulonglong)(*(int *)(local_a0 + 0x20) * (uint)(ushort)local_138);
          *(longlong *)(lVar20 + lVar25 * 8) = local_d8;
          *(undefined4 *)(local_c8 + lVar25 * 4) = *(undefined4 *)(lVar27 + 0xa8);
          *(undefined4 *)(local_110 + lVar17) = *(undefined4 *)((longlong)local_90 + local_98);
          *(undefined4 *)(lVar23 + lVar26) = *(undefined4 *)(local_f0 + local_98);
          cVar12 = (char)*(undefined4 *)((longlong)local_90 + local_98) +
                   (char)*(undefined4 *)(lVar27 + 0x3c) * (char)*(undefined4 *)(local_f0 + local_98)
          ;
          (*(code *)puVar7)();
          local_f0 = (*extraout_x11_09)(lVar27);
          uVar14 = *(uint *)(param_1 + 0xfa10);
          if (uVar14 == 0) {
LAB_18014f5d8:
            _local_138 = CONCAT17(1,(uint7)(byte)(cVar12 + 1) << 0x10);
            FUN_180150a20(param_1 + 64000,&local_f0,&local_138);
          }
          else {
            uVar21 = 0;
            uVar18 = uVar14;
            do {
              uVar22 = uVar18 + uVar21 >> 1;
              uVar19 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar22 * 0x18);
              uVar9 = uVar22;
              if (uVar19 <= local_f0) {
                if (local_f0 <= uVar19) break;
                uVar21 = uVar22 + 1;
                uVar22 = uVar22 + 1;
                uVar9 = uVar18;
              }
              uVar18 = uVar9;
            } while (uVar18 != uVar21);
            if (((uVar22 == uVar14) ||
                (puVar24 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar22 * 0x18)
                , *puVar24 != local_f0)) || (puVar24 == (ulonglong *)0xfffffffffffffff0))
            goto LAB_18014f5d8;
            lVar23 = 0;
            if (((*(char *)((longlong)puVar24 + 0x12) == '\0') ||
                (lVar23 = 1, *(char *)((longlong)puVar24 + 0x13) == '\0')) ||
               ((lVar23 = 2, *(char *)((longlong)puVar24 + 0x14) == '\0' ||
                (lVar23 = 3, *(char *)((longlong)puVar24 + 0x15) == '\0')))) {
              *(char *)((longlong)puVar24 + lVar23 + 0x12) = cVar12 + '\x01';
            }
            *(undefined1 *)((longlong)puVar24 + 0x17) = 1;
          }
          if (uVar15 == 0) {
            uVar16 = (*(code *)puVar7)(0x180224000);
            uVar14 = (*extraout_x11_10)(uVar16,local_120);
            lVar23 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1938);
            uVar16 = (*(code *)puVar7)(0x180224000);
            (*extraout_x11_11)(uVar16,&local_d0);
            local_d0 = local_d0 + (ulonglong)(*(int *)(lVar23 + 0x20) * (uVar14 & 0xffff));
            *(longlong *)(param_1 + 0xfc80 + lVar25 * 8) = local_d0;
            *(undefined4 *)(param_1 + 0xfca0) = *(undefined4 *)(local_c8 + lVar25 * 4);
            iVar1 = *(int *)(local_c8 + lVar25 * 4);
            if (iVar1 == 0x1c) {
              iVar1 = 0x1d;
            }
            *(int *)(param_1 + 0xfca4) = iVar1;
          }
          else {
            *(undefined8 *)(param_1 + 0xfc80 + lVar25 * 8) = *(undefined8 *)(lVar20 + lVar25 * 8);
          }
          *(undefined1 *)(param_1 + 0x1018b) = 1;
          bVar10 = *(byte *)(local_108 + 0x185) | (byte)(1 << (ulonglong)(uVar15 & 0x1f));
          lVar20 = local_c0;
        }
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 1;
        *(byte *)(local_108 + 0x185) = bVar10;
      } while (uVar15 < param_2);
      lVar25 = local_e8;
      lVar20 = 0xfcc0;
      lVar26 = lStack_78;
      lVar17 = local_70;
      lVar23 = local_80;
    }
    if (*(longlong *)(lVar20 + lVar25) == 0) {
      bVar10 = false;
    }
    else {
      (*(code *)puVar7)(0x180224000);
      cVar12 = (*extraout_x11_13)();
      bVar10 = cVar12 != '\0';
    }
    if (*(longlong *)(lVar26 + 0x7cc8) != 0) {
      (*(code *)puVar7)(0x180224000);
      cVar12 = (*extraout_x11_14)();
      bVar10 = bVar10 | (cVar12 != '\0') << 1;
    }
    if (*(longlong *)(lVar26 + 0x7cd0) != 0) {
      (*(code *)puVar7)(0x180224000);
      cVar12 = (*extraout_x11_15)();
      bVar10 = bVar10 | (cVar12 != '\0') << 2;
    }
    if (*(longlong *)(lVar26 + 0x7cd8) != 0) {
      (*(code *)puVar7)(0x180224000);
      cVar12 = (*extraout_x11_16)();
      if (cVar12 != '\0') {
        bVar10 = bVar10 | 8;
      }
    }
    bVar5 = *(byte *)(local_100 + 0x65c);
    *(byte *)(local_100 + 0x65c) = bVar10;
    uVar15 = *(uint *)(param_1 + 0xe5c);
    bVar11 = bVar10 != bVar5;
    bVar10 = *(byte *)(lVar23 + 0x68c);
    *(byte *)(lVar23 + 0x68c) = bVar11 | bVar10;
    if (param_3 != uVar15) {
      if (uVar15 < 2) {
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = *(uint *)(param_1 + 0xe58);
      }
      if (param_3 < 2) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = *(uint *)(param_1 + 0xe58);
      }
      *(uint *)(param_1 + 0xe5c) = param_3;
      uVar21 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(lVar23 + 0x68c) = bVar10 | ((uVar21 & uVar15) != (uVar21 & uVar14) || bVar11);
    }
    if (lVar17 == 0) {
      cVar12 = '\0';
    }
    else {
      (*(code *)puVar7)(0x180224000);
      cVar12 = (*extraout_x11_17)(lVar17);
    }
    lVar25 = *(longlong *)(lVar26 + 0x7ce0);
    cVar6 = *(char *)(local_100 + 0x5a2);
    *(char *)(local_100 + 0x5a2) = cVar12;
    *(byte *)(lVar23 + 0x68b) = cVar12 != cVar6 | *(byte *)(lVar23 + 0x68b);
    if (lVar25 != 0) {
      iVar1 = *(int *)(lVar25 + 0x3c);
      iVar2 = *(int *)(param_1 + 0xfd08);
      iVar3 = *(int *)(param_1 + 0xfd0c);
      (*(code *)puVar7)(0x180224000);
      uVar16 = (*extraout_x11_18)();
      FUN_180147910(param_1,uVar16,iVar2 + iVar1 * iVar3);
      (*(code *)puVar7)(0x180224000);
      cVar12 = (*extraout_x11_19)();
      if (cVar12 != '\0') {
        iVar3 = *(int *)(param_1 + 0xfd0c);
        iVar1 = *(int *)(*(longlong *)(lVar26 + 0x7ce0) + 0x34);
        iVar4 = *(int *)(param_1 + 0xfd08);
        iVar2 = *(int *)(*(longlong *)(lVar26 + 0x7ce0) + 0x3c);
        (*(code *)puVar7)(0x180224000);
        uVar16 = (*extraout_x11_20)();
        FUN_180147910(param_1,uVar16,iVar4 + (iVar1 + iVar3) * iVar2);
      }
    }
    plVar8 = local_f8;
    if (lVar17 == 0) {
      *(undefined8 *)(lVar26 + 0x7cb0) = *(undefined8 *)(lVar26 + 0x78d8);
      *(undefined4 *)(param_1 + 0xf974) = 0;
      *(byte *)(lVar23 + 0x68b) = *(longlong *)(lVar26 + 0x7ce0) != 0 | *(byte *)(lVar23 + 0x68b);
      lVar25 = 0;
    }
    else {
      iVar2 = *(int *)(lVar17 + 0x3c);
      lVar25 = local_f8[1];
      iVar1 = *(int *)((longlong)local_f8 + 0xc);
      (*(code *)puVar7)(0x180224000);
      uVar16 = (*extraout_x11_21)(lVar17);
      FUN_180147820(param_1,uVar16,(int)lVar25 + iVar2 * iVar1);
      (*(code *)puVar7)(0x180224000);
      uVar19 = (*extraout_x11_22)(lVar17);
      if ((uVar19 & 0xff) != 0) {
        lVar25 = plVar8[1];
        iVar1 = *(int *)((longlong)plVar8 + 0xc);
        iVar2 = *(int *)(lVar17 + 0x34);
        iVar3 = *(int *)(lVar17 + 0x3c);
        (*(code *)puVar7)(0x180224000);
        uVar16 = (*extraout_x11_23)(lVar17);
        uVar19 = FUN_180147820(param_1,uVar16,(int)lVar25 + (iVar2 + iVar1) * iVar3);
      }
      plVar8 = local_f8;
      if ((*(longlong *)(lVar26 + 0x7ce0) == 0) ||
         (bVar10 = 0,
         *(int *)(&DAT_18022e050 + (ulonglong)*(uint *)(*(longlong *)(lVar26 + 0x7ce0) + 0x2c) * 4)
         != *(int *)(&DAT_18022e050 + (ulonglong)*(uint *)(lVar17 + 0x2c) * 4))) {
        bVar10 = 1;
      }
      *(byte *)(lVar23 + 0x68d) = *(byte *)(lVar23 + 0x68d) | bVar10;
      (*(code *)puVar7)(0x180224000,uVar19,
                        (int)local_f8[1] +
                        *(int *)(lVar17 + 0x3c) * *(int *)((longlong)local_f8 + 0xc));
      uVar15 = (*extraout_x11_24)(lVar17);
      lVar25 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1940);
      uVar16 = (*(code *)puVar7)(0x180224000);
      (*extraout_x11_25)(uVar16,&local_e8);
      *(ulonglong *)(lVar26 + 0x7cb0) =
           local_e8 + (ulonglong)(*(int *)(lVar25 + 0x20) * (uVar15 & 0xffff));
      *(undefined4 *)(param_1 + 0xf974) = *(undefined4 *)(lVar17 + 0xa8);
      *(int *)(param_1 + 0xfd08) = (int)plVar8[1];
      *(undefined4 *)(param_1 + 0xfd0c) = *(undefined4 *)((longlong)plVar8 + 0xc);
      *(undefined1 *)(param_1 + 0x1018b) = 1;
      *(byte *)(lVar23 + 0x68b) = *(longlong *)(lVar26 + 0x7ce0) == 0 | *(byte *)(lVar23 + 0x68b);
      lVar25 = lVar17;
    }
    *(longlong *)(lVar26 + 0x7ce0) = lVar25;
    lVar26 = local_b0;
    if (local_b0 == 0) {
      lVar26 = lVar17;
    }
    FUN_1801673b0(param_1,lVar26);
    FUN_180167540(param_1,lVar26);
    (*(code *)puVar7)(0x180224000);
    fVar28 = (float)(*extraout_x11_26)(lVar26);
    (*(code *)puVar7)(0x180224000);
    fVar29 = (float)(*extraout_x11_27)(lVar26);
    if ((fVar28 != *(float *)(local_a8 + 0x2920)) || (fVar29 != *(float *)(local_a8 + 0x2924))) {
      *(undefined4 *)(local_a8 + 0x2928) = 0x3f800000;
      *(undefined4 *)(local_a8 + 0x292c) = 0x3f800000;
      *(float *)(local_a8 + 0x2920) = 1.0 / fVar28;
      *(float *)(local_a8 + 0x2924) = 1.0 / fVar29;
      *(undefined1 *)(lVar23 + 0x6c3) = 1;
    }
  }
  *(undefined1 *)(lVar23 + 0x68a) = 1;
  return;
}

