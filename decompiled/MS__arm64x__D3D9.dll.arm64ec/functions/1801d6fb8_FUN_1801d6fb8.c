/*
 * FUN_1801d6fb8 at 1801d6fb8
 * undefined FUN_1801d6fb8(void)
 * Address ranges: 1801d6fb8-1801d7743;1801d775c-1801d7ab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801d6fb8(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *local_f8;
  uint local_f0;
  int local_ec;
  undefined **local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  
  local_d8 = param_3;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    local_ec = 0;
  }
  else {
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    local_ec = 1;
    if (iVar9 == 0) {
      FUN_1801085c8();
      local_ec = 1;
    }
  }
  if ((2 < param_2 - 1U) || (*(char *)(param_1 + -0x642c) != '\0')) {
    iVar9 = -0x7789f794;
    goto LAB_1801d7a74;
  }
  local_e0 = param_1 + -0x6838;
  local_f0 = FUN_18011cc78();
  if (local_f0 == 0xffffffff) {
    iVar9 = -0x7ff8fff2;
    goto LAB_1801d7a74;
  }
  lVar22 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)local_f0 * 8);
  bVar8 = param_2 != 3;
  puVar2 = (undefined4 *)0x18022e950;
  if (bVar8) {
    puVar2 = &DAT_18022ea00;
  }
  uVar14 = 0x2a;
  if (bVar8) {
    uVar14 = 0x43;
  }
  puVar3 = (undefined4 *)0x18022eb10;
  if (bVar8) {
    puVar3 = &DAT_18022eb20;
  }
  uVar15 = 2;
  if (bVar8) {
    uVar15 = 0x11;
  }
  if (param_2 == 1) {
    uVar16 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + -0x6830) + uVar16 * 8) != '\0') {
        uVar10 = uVar16 >> 3 & 7;
        *(undefined4 *)(lVar22 + 0x10 + uVar16 * 4) =
             *(undefined4 *)(param_1 + uVar16 * 4 + -0x63c0);
        lVar23 = lVar22 + 0xac68 + (uVar16 >> 6) * 8;
        *(byte *)(lVar23 + uVar10) = *(byte *)(lVar23 + uVar10) | (byte)(1 << (uVar16 & 7));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0xd2);
    uVar16 = 0;
    do {
      uVar10 = 0;
      do {
        iVar13 = (int)uVar10;
        iVar9 = (int)uVar16;
        if (*(char *)(*(longlong *)(param_1 + -0x6828) + uVar16 * 0xc) != '\0') {
          *(undefined4 *)(lVar22 + uVar16 * 4 + uVar10 * 0x84 + 0x358) =
               *(undefined4 *)(param_1 + uVar16 * 4 + uVar10 * 0x84 + -0x6078);
          uVar14 = iVar9 + iVar13 * -0x1f;
          lVar23 = lVar22 + 0xac88 + (ulonglong)((uint)(iVar13 * 0x21 + iVar9) >> 6) * 8;
          uVar10 = (ulonglong)(uVar14 >> 3) & 7;
          *(byte *)(lVar23 + uVar10) =
               *(byte *)(lVar23 + uVar10) | (byte)(1 << ((ulonglong)uVar14 & 7));
        }
        uVar10 = (ulonglong)(iVar13 + 1U);
      } while (iVar13 + 1U < 8);
      uVar16 = (ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < 0x21);
    uVar11 = *(undefined8 *)(param_1 + -0x6564);
    uVar26 = *(undefined8 *)(param_1 + -0x654c);
    uVar25 = *(undefined8 *)(param_1 + -0x6554);
    *(undefined8 *)(lVar22 + 0x4a00) = *(undefined8 *)(param_1 + -0x655c);
    *(undefined8 *)(lVar22 + 0x49f8) = uVar11;
    *(undefined8 *)(lVar22 + 0x4a10) = uVar26;
    *(undefined8 *)(lVar22 + 0x4a08) = uVar25;
    uVar11 = *(undefined8 *)(param_1 + -0x6544);
    uVar26 = *(undefined8 *)(param_1 + -0x652c);
    uVar25 = *(undefined8 *)(param_1 + -0x6534);
    *(undefined8 *)(lVar22 + 0x4a20) = *(undefined8 *)(param_1 + -0x653c);
    *(undefined8 *)(lVar22 + 0x4a18) = uVar11;
    *(undefined8 *)(lVar22 + 0x4a30) = uVar26;
    *(undefined8 *)(lVar22 + 0x4a28) = uVar25;
    *(undefined4 *)(lVar22 + 19000) = *(undefined4 *)(param_1 + -0x6524);
    *(undefined1 *)(lVar22 + 0xace9) = 1;
LAB_1801d72c8:
    if (*(int *)(param_1 + -0x6510) != 0) {
      uVar16 = 0;
      if (*(int *)(param_1 + -0x6510) == 0) {
        piVar17 = (int *)0x0;
        puVar18 = (undefined8 *)&DAT_00000004;
        goto LAB_1801d7314;
      }
      do {
        lVar23 = *(longlong *)(param_1 + -0x6518) + uVar16 * 0x78;
        piVar17 = (int *)(lVar23 + 8);
        puVar18 = (undefined8 *)(lVar23 + 0xc);
LAB_1801d7314:
        if (piVar17 != (int *)0x0) {
          uStack_a8 = puVar18[1];
          local_b0 = *puVar18;
          uStack_98 = puVar18[3];
          uStack_a0 = puVar18[2];
          local_43 = 1;
          local_50 = puVar18[0xc];
          uStack_88 = puVar18[5];
          local_90 = puVar18[4];
          uStack_78 = puVar18[7];
          uStack_80 = puVar18[6];
          local_48 = *(undefined4 *)(puVar18 + 0xd);
          local_f8 = (code *)CONCAT44(local_f8._4_4_,*piVar17);
          uStack_68 = puVar18[9];
          local_70 = puVar18[8];
          uStack_58 = puVar18[0xb];
          uStack_60 = puVar18[10];
          if (*(uint *)(param_1 + -0x64d8) != 0) {
            uVar10 = 0;
            do {
              iVar9 = (int)uVar10;
              if (*(int *)(*(longlong *)(param_1 + -0x64e0) + uVar10 * 4) == *piVar17)
              goto LAB_1801d737c;
              uVar10 = (ulonglong)(iVar9 + 1U);
            } while (iVar9 + 1U < *(uint *)(param_1 + -0x64d8));
          }
          iVar9 = -1;
LAB_1801d737c:
          local_44 = iVar9 != -1;
          FUN_18011dd58(lVar22 + 0x4ab8,&local_f8,&local_b0);
        }
        uVar14 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(param_1 + -0x6510));
    }
    uVar16 = 0;
    do {
      uVar10 = uVar16 >> 3 & 7;
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + -0x5a28) + uVar16 * 0x40);
      puVar20 = (undefined8 *)(lVar22 + 0x778 + uVar16 * 0x40);
      uVar11 = *puVar18;
      uVar26 = puVar18[3];
      uVar25 = puVar18[2];
      puVar20[1] = puVar18[1];
      *puVar20 = uVar11;
      puVar20[3] = uVar26;
      puVar20[2] = uVar25;
      uVar11 = puVar18[4];
      uVar26 = puVar18[7];
      uVar25 = puVar18[6];
      puVar20[5] = puVar18[5];
      puVar20[4] = uVar11;
      puVar20[7] = uVar26;
      puVar20[6] = uVar25;
      lVar23 = lVar22 + ((uVar16 >> 6) + 0x1596) * 8;
      uVar21 = uVar16 & 7;
      uVar16 = uVar16 + 1;
      *(byte *)(lVar23 + uVar10) = *(byte *)(lVar23 + uVar10) | (byte)(1 << uVar21);
    } while (uVar16 != 0x10a);
    uVar16 = 0;
    do {
      lVar12 = uVar16 * 0x10;
      lVar23 = lVar12 + param_1;
      uVar10 = uVar16 & 7;
      *(undefined4 *)(lVar22 + 0x4a54 + lVar12) = *(undefined4 *)(lVar23 + -0x6420);
      *(undefined4 *)(lVar22 + 0x4a58 + lVar12) = *(undefined4 *)(lVar23 + -0x641c);
      *(undefined4 *)(lVar22 + 0x4a5c + lVar12) = *(undefined4 *)(lVar12 + param_1 + -0x6418);
      *(undefined4 *)(lVar22 + 0x4a60 + lVar12) = *(undefined4 *)(lVar23 + -0x6414);
      lVar23 = lVar22 + ((uVar16 >> 6) + 0x159c) * 8;
      uVar21 = uVar16 >> 3 & 7;
      uVar16 = uVar16 + 1;
      *(byte *)(lVar23 + uVar21) = *(byte *)(lVar23 + uVar21) | (byte)(1 << uVar10);
    } while (uVar16 != 6);
  }
  else {
    uVar16 = 0;
    do {
      *(undefined4 *)(lVar22 + 0x10 + (ulonglong)(uint)puVar2[uVar16] * 4) =
           *(undefined4 *)(param_1 + (ulonglong)(uint)puVar2[uVar16] * 4 + -0x63c0);
      uVar4 = puVar2[uVar16];
      uVar1 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar1;
      lVar23 = lVar22 + ((ulonglong)(uVar4 >> 6) + 0x158d) * 8;
      uVar10 = (ulonglong)(uVar4 >> 3) & 7;
      *(byte *)(lVar23 + uVar10) = *(byte *)(lVar23 + uVar10) | (byte)(1 << ((ulonglong)uVar4 & 7));
    } while (uVar1 < uVar14);
    uVar16 = 0;
    do {
      uVar10 = 0;
      do {
        *(undefined4 *)(lVar22 + uVar16 * 0x84 + 0x358 + (ulonglong)(uint)puVar3[uVar10] * 4) =
             *(undefined4 *)
              (param_1 + uVar16 * 0x84 + (ulonglong)(uint)puVar3[uVar10] * 4 + -0x6078);
        piVar17 = puVar3 + uVar10;
        uVar14 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar14;
        uVar1 = *piVar17 + (int)uVar16 * 0x21;
        lVar23 = lVar22 + ((ulonglong)(uVar1 >> 6) + 0x1591) * 8;
        uVar21 = (ulonglong)(uVar1 >> 3) & 7;
        *(byte *)(lVar23 + uVar21) =
             *(byte *)(lVar23 + uVar21) | (byte)(1 << ((ulonglong)uVar1 & 7));
      } while (uVar14 < uVar15);
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar14;
    } while (uVar14 < 8);
    if (param_2 == 3) goto LAB_1801d72c8;
  }
  *(undefined8 *)(lVar22 + 8) = 0;
  local_f8 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar11 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar11,lVar22,0);
  lVar23 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)local_f0 * 8);
  lVar22 = lVar23 + 0xa000;
  *(undefined2 *)(lVar23 + 0xa190) = 0xffff;
  ppuVar24 = (undefined **)(lVar23 + 0x4000);
  *(undefined2 *)(lVar23 + 0xa994) = 0xffff;
  if ((param_2 - 1U & 0xfffffffd) == 0) {
    uVar15 = *(uint *)(param_1 + -0x59bc) & 0x3fffffff;
    uVar14 = uVar15 << 1;
    puVar18 = (undefined8 *)(param_1 + -0x5458);
    puVar20 = (undefined8 *)(lVar23 + 0x6190);
    while (uVar15 != 0) {
      *puVar20 = *puVar18;
      uVar14 = uVar14 - 1;
      puVar18 = puVar18 + 1;
      puVar20 = puVar20 + 1;
      uVar15 = uVar14;
    }
    *(undefined2 *)(lVar23 + 0xa190) = 0;
    uVar5 = *(undefined2 *)(param_1 + -0x59bc);
    *(undefined1 *)(lVar23 + 0xacf9) = 1;
    *(undefined2 *)(lVar23 + 0xa192) = uVar5;
    *(undefined2 *)(lVar23 + 0xa194) = 0xffff;
  }
  if (param_2 - 1U < 2) {
    iVar9 = 0x1c0;
    puVar18 = (undefined8 *)(lVar23 + 0x5390);
    puVar20 = (undefined8 *)(param_1 + -0x1458);
    do {
      iVar9 = iVar9 + -1;
      *puVar18 = *puVar20;
      puVar18 = puVar18 + 1;
      puVar20 = puVar20 + 1;
    } while (iVar9 != 0);
    *(undefined2 *)(lVar23 + 0xa994) = 0;
    *(undefined1 *)(lVar23 + 0xacf8) = 1;
    *(undefined4 *)(lVar23 + 0xa996) = 0xffff0008;
    if (param_2 == 1) {
      local_d0 = lVar23 + 0xab60;
      uVar16 = 0;
      local_e8 = ppuVar24;
      local_c8 = lVar22;
      local_c0 = lVar23 + 0x8000;
      do {
        lVar12 = param_1 + uVar16 * 8;
        if (*(longlong *)(lVar12 + -0x170) != 0) {
          (*local_f8)();
          (*extraout_x11_00)();
        }
        lVar7 = local_c0;
        lVar22 = local_c8;
        ppuVar24 = local_e8;
        uVar19 = uVar16 >> 3 & 7;
        *(undefined8 *)(local_d0 + uVar16 * 8) = *(undefined8 *)(lVar12 + -0x170);
        lVar12 = param_1 + uVar16 * 4;
        *(undefined4 *)(lVar23 + 0xac20 + uVar16 * 4) = *(undefined4 *)(lVar12 + -0xf0);
        uVar21 = uVar16 & 7;
        *(undefined4 *)(lVar23 + 44000 + uVar16 * 4) = *(undefined4 *)(lVar12 + -0xb0);
        uVar10 = uVar16 >> 6;
        uVar16 = uVar16 + 1;
        lVar12 = lVar23 + (uVar10 + 0x159e) * 8;
        *(byte *)(lVar12 + uVar19) = *(byte *)(lVar12 + uVar19) | (byte)(1 << uVar21);
      } while (uVar16 != 0x10);
      *(undefined4 *)(local_c0 + 0x2c60) = *(undefined4 *)(param_1 + -0x48);
      *(undefined1 *)(local_c8 + 0xcfb) = 1;
      if (*(longlong *)(param_1 + -0x178) != 0) {
        (*local_f8)();
        (*extraout_x11_01)();
      }
      uVar11 = *(undefined8 *)(param_1 + -0x178);
      *(undefined1 *)(lVar22 + 0xcfa) = 1;
      *(undefined8 *)(lVar7 + 0x2b58) = uVar11;
    }
  }
  local_f8 = (code *)FUN_1802229a8(0x30);
  if (local_f8 == (code *)0x0) {
    iVar9 = 0;
    goto LAB_1801d7a74;
  }
  local_e8 = &PTR_FUN_18022edd8;
  *(undefined ***)local_f8 = &PTR_FUN_18022edd8;
  *(longlong *)(local_f8 + 8) = 0;
  *(longlong *)(local_f8 + 0x28) = lVar23;
  *(code **)(local_f8 + 0x10) = local_f8;
  *(longlong *)(local_f8 + 0x18) = local_e0;
  *(uint *)(local_f8 + 0x20) = local_f0 + 1;
  iVar9 = FUN_1801de450(local_f8,&DAT_1802292d8,local_d8);
  if (-1 < iVar9) {
    iVar13 = *(int *)(param_1 + 0x144);
    if (*(int *)(param_1 + 0x140) != iVar13) {
      *(code **)(*(longlong *)(param_1 + 0x138) + (ulonglong)*(uint *)(param_1 + 0x140) * 8) =
           local_f8;
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      uVar14 = 1;
      if (param_2 == 1) {
        uVar16 = 0;
        do {
          if ((&DAT_18024d810)[uVar16 * 8] != '\0') {
            uVar10 = 0;
            do {
              *(undefined4 *)(lVar23 + uVar16 * 4 + 0x4ad0 + uVar10 * 0x38) =
                   *(undefined4 *)(param_1 + uVar16 * 4 + 0x298 + uVar10 * 0x38);
              uVar15 = (int)uVar16 + (int)uVar10 * 0xe;
              uVar14 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar14;
              lVar12 = lVar23 + ((ulonglong)(uVar15 >> 6) + 0x15a0) * 8;
              uVar21 = (ulonglong)(uVar15 >> 3) & 7;
              *(byte *)(lVar12 + uVar21) =
                   *(byte *)(lVar12 + uVar21) | (byte)(1 << ((ulonglong)uVar15 & 7));
            } while (uVar14 < 0x10);
          }
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
        } while (uVar14 < 0xe);
        uVar25 = *(undefined8 *)(param_1 + 0x738);
        uVar11 = *(undefined8 *)(param_1 + 0x730);
        *(undefined1 *)(lVar22 + 0xcfe) = 1;
        *(undefined8 *)(lVar23 + 0x4ff4) = uVar25;
        *(undefined8 *)(lVar23 + 0x4fec) = uVar11;
LAB_1801d78e8:
        iVar13 = 0x20;
        puVar18 = (undefined8 *)(lVar23 + 0x4ffc);
        puVar20 = (undefined8 *)(param_1 + 0x158);
        do {
          iVar13 = iVar13 + -1;
          *puVar18 = *puVar20;
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
        } while (iVar13 != 0);
        *(undefined4 *)((longlong)ppuVar24 + 0x127c) = 0x100000;
        *(undefined2 *)(ppuVar24 + 0x250) = 0xffff;
        iVar13 = 0x20;
        puVar18 = (undefined8 *)(lVar23 + 0x503c);
        puVar20 = (undefined8 *)(param_1 + 0x198);
        do {
          iVar13 = iVar13 + -1;
          *puVar18 = *puVar20;
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
        } while (iVar13 != 0);
        *(undefined4 *)(ppuVar24 + 0x254) = 0x100000;
        *(undefined2 *)((longlong)ppuVar24 + 0x12a4) = 0xffff;
        *(undefined8 *)(lVar23 + 0x4fb0) = *(undefined8 *)(param_1 + 0x5c58);
        if (*(longlong *)(param_1 + 0x5c58) != 0) {
          FUN_1801dd398();
        }
        uVar11 = *(undefined8 *)(param_1 + 0x5c60);
        *(undefined1 *)(lVar22 + 0xcfc) = 1;
        *(undefined8 *)(lVar23 + 0x4fb8) = uVar11;
        if (*(longlong *)(param_1 + 0x5c60) != 0) {
          FUN_1801042e0(*(longlong *)(param_1 + 0x5c60) + 0xc);
        }
        uVar16 = 0;
        do {
          uVar10 = uVar16 >> 3 & 7;
          *(undefined4 *)(lVar23 + 0x4f68 + uVar16 * 4) =
               *(undefined4 *)(param_1 + 0x5c68 + uVar16 * 4);
          lVar22 = lVar23 + ((uVar16 >> 6) + 0x15a6) * 8;
          uVar21 = uVar16 & 7;
          uVar16 = uVar16 + 1;
          *(byte *)(lVar22 + uVar10) = *(byte *)(lVar22 + uVar10) | (byte)(1 << uVar21);
        } while (uVar16 != 0x10);
      }
      else {
        puVar2 = &DAT_18022e940;
        if (param_2 != 3) {
          uVar14 = 0xc;
          puVar2 = &DAT_18022e910;
        }
        uVar16 = 0;
        do {
          if ((&DAT_18024d810)[(ulonglong)(uint)puVar2[uVar16] * 8] != '\0') {
            uVar10 = 0;
            do {
              *(undefined4 *)
               (lVar23 + ((ulonglong)(uint)puVar2[uVar16] + uVar10 * 0xe + 0x12b4) * 4) =
                   *(undefined4 *)
                    (param_1 + 0x298 + (ulonglong)(uint)puVar2[uVar16] * 4 + uVar10 * 0x38);
              iVar13 = (int)uVar10;
              uVar15 = iVar13 + 1;
              uVar10 = (ulonglong)uVar15;
              uVar1 = puVar2[uVar16] + iVar13 * 0xe;
              lVar12 = lVar23 + ((ulonglong)(uVar1 >> 6) + 0x15a0) * 8;
              uVar21 = (ulonglong)(uVar1 >> 3) & 7;
              *(byte *)(lVar12 + uVar21) =
                   *(byte *)(lVar12 + uVar21) | (byte)(1 << ((ulonglong)uVar1 & 7));
            } while (uVar15 < 0x10);
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 < uVar14);
        if (param_2 == 3) goto LAB_1801d78e8;
      }
      if (param_2 - 1U < 2) {
        iVar13 = 0x20;
        puVar18 = (undefined8 *)(lVar23 + 0x513c);
        puVar20 = (undefined8 *)(param_1 + 0x1d8);
        do {
          iVar13 = iVar13 + -1;
          *puVar18 = *puVar20;
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
        } while (iVar13 != 0);
        *(undefined4 *)((longlong)ppuVar24 + 0x12c4) = 0x100000;
        *(undefined2 *)(ppuVar24 + 0x259) = 0xffff;
        iVar13 = 0x20;
        puVar18 = (undefined8 *)(lVar23 + 0x517c);
        puVar20 = (undefined8 *)(param_1 + 0x218);
        do {
          iVar13 = iVar13 + -1;
          *puVar18 = *puVar20;
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
        } while (iVar13 != 0);
        *(undefined4 *)(ppuVar24 + 0x25d) = 0x100000;
        *(undefined2 *)((longlong)ppuVar24 + 0x12ec) = 0xffff;
        *(undefined8 *)(lVar23 + 0x4fa8) = *(undefined8 *)(param_1 + 0x5c50);
        if (*(longlong *)(param_1 + 0x5c50) != 0) {
          FUN_1801dd398();
        }
      }
      goto LAB_1801d7a74;
    }
    uVar14 = iVar13 << 1;
    if (iVar13 == 0) {
      uVar14 = 0x10;
    }
    local_e0 = CONCAT44(local_e0._4_4_,uVar14);
    lVar22 = CONCAT44(0,uVar14) << 3;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,uVar14);
    if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
      lVar22 = -1;
    }
    local_d8 = FUN_1802229a8(lVar22);
    if (local_d8 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_d8,*(undefined8 *)(param_1 + 0x138),
                          (ulonglong)*(uint *)(param_1 + 0x144) << 3);
    }
  }
  *(undefined ***)local_f8 = local_e8;
  FUN_1802229d8(local_f8,0x30);
LAB_1801d7a74:
  if (local_ec == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
  return iVar9;
}

