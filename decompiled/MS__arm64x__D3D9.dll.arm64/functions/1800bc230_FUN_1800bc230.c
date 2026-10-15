/*
 * FUN_1800bc230 at 1800bc230
 * undefined FUN_1800bc230(void)
 * Address ranges: 1800bc230-1800bcccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bc230(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  int *piVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  undefined **ppuVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  longlong local_f0;
  undefined **local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  
  local_d8 = param_3;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar11 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar11 == 0) {
      FUN_180003398();
      bVar7 = true;
    }
  }
  if ((2 < param_2 - 1U) || (*(char *)(param_1 + -0x642c) != '\0')) {
    iVar11 = -0x7789f794;
    goto LAB_1800bcc8c;
  }
  local_e0 = param_1 + -0x6838;
  uVar10 = FUN_180010df0();
  if (uVar10 == 0xffffffff) {
    iVar11 = -0x7ff8fff2;
    goto LAB_1800bcc8c;
  }
  lVar26 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar10 * 8);
  bVar9 = param_2 != 3;
  puVar2 = (undefined4 *)0x180236670;
  if (bVar9) {
    puVar2 = &DAT_180236560;
  }
  uVar15 = 0x2a;
  if (bVar9) {
    uVar15 = 0x43;
  }
  puVar3 = (undefined4 *)0x180236768;
  if (bVar9) {
    puVar3 = &DAT_180236720;
  }
  uVar16 = 2;
  if (bVar9) {
    uVar16 = 0x11;
  }
  uVar17 = 1;
  if (param_2 == 1) {
    uVar18 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + -0x6830) + uVar18 * 8) != '\0') {
        uVar13 = uVar18 >> 3 & 7;
        *(undefined4 *)(lVar26 + 0x10 + uVar18 * 4) =
             *(undefined4 *)(param_1 + uVar18 * 4 + -0x63c0);
        lVar27 = lVar26 + 0xac68 + (uVar18 >> 6) * 8;
        *(byte *)(lVar27 + uVar13) = *(byte *)(lVar27 + uVar13) | (byte)(1 << (uVar18 & 7));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0xd2);
    uVar18 = 0;
    do {
      uVar13 = 0;
      do {
        iVar25 = (int)uVar13;
        iVar11 = (int)uVar18;
        if (*(char *)(*(longlong *)(param_1 + -0x6828) + uVar18 * 0xc) != '\0') {
          *(undefined4 *)(lVar26 + uVar18 * 4 + uVar13 * 0x84 + 0x358) =
               *(undefined4 *)(param_1 + uVar18 * 4 + uVar13 * 0x84 + -0x6078);
          uVar15 = iVar11 + iVar25 * -0x1f;
          uVar13 = (ulonglong)(uVar15 >> 3) & 7;
          lVar27 = lVar26 + 0xac88 + (ulonglong)((uint)(iVar25 * 0x21 + iVar11) >> 6) * 8;
          *(byte *)(lVar27 + uVar13) =
               *(byte *)(lVar27 + uVar13) | (byte)(1 << ((ulonglong)uVar15 & 7));
        }
        uVar13 = (ulonglong)(iVar25 + 1U);
      } while (iVar25 + 1U < 8);
      uVar18 = (ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < 0x21);
    uVar30 = *(undefined8 *)(param_1 + -0x6564);
    uVar29 = *(undefined8 *)(param_1 + -0x654c);
    uVar19 = *(undefined8 *)(param_1 + -0x6554);
    *(undefined8 *)(lVar26 + 0x4a00) = *(undefined8 *)(param_1 + -0x655c);
    *(undefined8 *)(lVar26 + 0x49f8) = uVar30;
    *(undefined8 *)(lVar26 + 0x4a10) = uVar29;
    *(undefined8 *)(lVar26 + 0x4a08) = uVar19;
    uVar30 = *(undefined8 *)(param_1 + -0x6544);
    uVar29 = *(undefined8 *)(param_1 + -0x652c);
    uVar19 = *(undefined8 *)(param_1 + -0x6534);
    *(undefined8 *)(lVar26 + 0x4a20) = *(undefined8 *)(param_1 + -0x653c);
    *(undefined8 *)(lVar26 + 0x4a18) = uVar30;
    *(undefined8 *)(lVar26 + 0x4a30) = uVar29;
    *(undefined8 *)(lVar26 + 0x4a28) = uVar19;
    *(undefined4 *)(lVar26 + 19000) = *(undefined4 *)(param_1 + -0x6524);
    *(undefined1 *)(lVar26 + 0xace9) = 1;
LAB_1800bc540:
    if (*(int *)(param_1 + -0x6510) != 0) {
      uVar18 = 0;
      if (*(int *)(param_1 + -0x6510) == 0) {
        piVar20 = (int *)0x0;
        puVar22 = (undefined8 *)&DAT_00000004;
        goto LAB_1800bc594;
      }
      do {
        lVar27 = *(longlong *)(param_1 + -0x6518) + uVar18 * 0x78;
        piVar20 = (int *)(lVar27 + 8);
        puVar22 = (undefined8 *)(lVar27 + 0xc);
LAB_1800bc594:
        if (piVar20 != (int *)0x0) {
          uStack_b8 = puVar22[1];
          local_c0 = *puVar22;
          uStack_a8 = puVar22[3];
          uStack_b0 = puVar22[2];
          local_53 = 1;
          local_60 = puVar22[0xc];
          uStack_98 = puVar22[5];
          local_a0 = puVar22[4];
          uStack_88 = puVar22[7];
          uStack_90 = puVar22[6];
          local_58 = *(undefined4 *)(puVar22 + 0xd);
          local_f0 = CONCAT44(local_f0._4_4_,*piVar20);
          uStack_78 = puVar22[9];
          local_80 = puVar22[8];
          uStack_68 = puVar22[0xb];
          uStack_70 = puVar22[10];
          if (*(uint *)(param_1 + -0x64d8) != 0) {
            uVar13 = 0;
            do {
              iVar11 = (int)uVar13;
              if (*(int *)(*(longlong *)(param_1 + -0x64e0) + uVar13 * 4) == *piVar20)
              goto LAB_1800bc5f8;
              uVar13 = (ulonglong)(iVar11 + 1U);
            } while (iVar11 + 1U < *(uint *)(param_1 + -0x64d8));
          }
          iVar11 = -1;
LAB_1800bc5f8:
          local_54 = iVar11 != -1;
          FUN_180011f68(lVar26 + 0x4ab8,&local_f0,&local_c0);
        }
        uVar15 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar15;
      } while (uVar15 < *(uint *)(param_1 + -0x6510));
    }
    uVar18 = 0;
    do {
      uVar13 = uVar18 >> 3 & 7;
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + -0x5a28) + uVar18 * 0x40);
      puVar23 = (undefined8 *)(lVar26 + 0x778 + uVar18 * 0x40);
      uVar30 = *puVar22;
      uVar29 = puVar22[3];
      uVar19 = puVar22[2];
      puVar23[1] = puVar22[1];
      *puVar23 = uVar30;
      puVar23[3] = uVar29;
      puVar23[2] = uVar19;
      uVar30 = puVar22[4];
      uVar29 = puVar22[7];
      uVar19 = puVar22[6];
      puVar23[5] = puVar22[5];
      puVar23[4] = uVar30;
      puVar23[7] = uVar29;
      puVar23[6] = uVar19;
      lVar27 = lVar26 + ((uVar18 >> 6) + 0x1596) * 8;
      uVar24 = uVar18 & 7;
      uVar18 = uVar18 + 1;
      *(byte *)(lVar27 + uVar13) = *(byte *)(lVar27 + uVar13) | (byte)(1 << uVar24);
    } while (uVar18 != 0x10a);
    uVar18 = 0;
    do {
      lVar14 = uVar18 * 0x10;
      lVar27 = lVar14 + param_1;
      uVar24 = uVar18 >> 3 & 7;
      *(undefined4 *)(lVar26 + 0x4a54 + lVar14) = *(undefined4 *)(lVar27 + -0x6420);
      *(undefined4 *)(lVar26 + 0x4a58 + lVar14) = *(undefined4 *)(lVar27 + -0x641c);
      *(undefined4 *)(lVar26 + 0x4a5c + lVar14) = *(undefined4 *)(lVar14 + param_1 + -0x6418);
      lVar21 = lVar26 + ((uVar18 >> 6) + 0x159c) * 8;
      uVar13 = uVar18 & 7;
      uVar18 = uVar18 + 1;
      *(undefined4 *)(lVar26 + 0x4a60 + lVar14) = *(undefined4 *)(lVar27 + -0x6414);
      *(byte *)(lVar21 + uVar24) = *(byte *)(lVar21 + uVar24) | (byte)(1 << uVar13);
    } while (uVar18 != 6);
  }
  else {
    uVar18 = 0;
    do {
      *(undefined4 *)(lVar26 + 0x10 + (ulonglong)(uint)puVar2[uVar18] * 4) =
           *(undefined4 *)(param_1 + (ulonglong)(uint)puVar2[uVar18] * 4 + -0x63c0);
      uVar4 = puVar2[uVar18];
      uVar1 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar1;
      uVar13 = (ulonglong)(uVar4 >> 3) & 7;
      lVar27 = lVar26 + ((ulonglong)(uVar4 >> 6) + 0x158d) * 8;
      *(byte *)(lVar27 + uVar13) = *(byte *)(lVar27 + uVar13) | (byte)(1 << ((ulonglong)uVar4 & 7));
    } while (uVar1 < uVar15);
    uVar18 = 0;
    do {
      uVar13 = 0;
      do {
        *(undefined4 *)(lVar26 + uVar18 * 0x84 + 0x358 + (ulonglong)(uint)puVar3[uVar13] * 4) =
             *(undefined4 *)
              (param_1 + uVar18 * 0x84 + (ulonglong)(uint)puVar3[uVar13] * 4 + -0x6078);
        piVar20 = puVar3 + uVar13;
        uVar15 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar15;
        uVar1 = *piVar20 + (int)uVar18 * 0x21;
        uVar24 = (ulonglong)(uVar1 >> 3) & 7;
        lVar27 = lVar26 + ((ulonglong)(uVar1 >> 6) + 0x1591) * 8;
        *(byte *)(lVar27 + uVar24) =
             *(byte *)(lVar27 + uVar24) | (byte)(1 << ((ulonglong)uVar1 & 7));
      } while (uVar15 < uVar16);
      uVar15 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
    } while (uVar15 < 8);
    if (param_2 == 3) goto LAB_1800bc540;
  }
  *(undefined8 *)(lVar26 + 8) = 0;
  (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xf0))
            (*(longlong **)(param_1 + -0x6810),lVar26,0);
  lVar27 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar10 * 8);
  lVar26 = lVar27 + 0xa000;
  *(undefined2 *)(lVar27 + 0xa190) = 0xffff;
  ppuVar28 = (undefined **)(lVar27 + 0x4000);
  *(undefined2 *)(lVar27 + 0xa994) = 0xffff;
  if ((param_2 - 1U & 0xfffffffd) == 0) {
    uVar16 = *(uint *)(param_1 + -0x59bc) & 0x3fffffff;
    uVar15 = uVar16 << 1;
    puVar22 = (undefined8 *)(param_1 + -0x5458);
    puVar23 = (undefined8 *)(lVar27 + 0x6190);
    while (uVar16 != 0) {
      *puVar23 = *puVar22;
      uVar15 = uVar15 - 1;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
      uVar16 = uVar15;
    }
    *(undefined2 *)(lVar27 + 0xa190) = 0;
    uVar5 = *(undefined2 *)(param_1 + -0x59bc);
    *(undefined2 *)(lVar27 + 0xa194) = 0xffff;
    *(undefined1 *)(lVar27 + 0xacf9) = 1;
    *(undefined2 *)(lVar27 + 0xa192) = uVar5;
  }
  if (param_2 - 1U < 2) {
    iVar11 = 0x1c0;
    puVar22 = (undefined8 *)(lVar27 + 0x5390);
    puVar23 = (undefined8 *)(param_1 + -0x1458);
    do {
      iVar11 = iVar11 + -1;
      *puVar22 = *puVar23;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar11 != 0);
    *(undefined2 *)(lVar27 + 0xa994) = 0;
    *(undefined1 *)(lVar27 + 0xacf8) = 1;
    *(undefined4 *)(lVar27 + 0xa996) = 0xffff0008;
    if (param_2 == 1) {
      uVar18 = 0;
      local_f0 = lVar26;
      local_e8 = ppuVar28;
      local_d0 = lVar27 + 0x8000;
      do {
        lVar21 = param_1 + uVar18 * 8;
        plVar12 = *(longlong **)(lVar21 + -0x170);
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        lVar8 = local_d0;
        ppuVar28 = local_e8;
        lVar26 = local_f0;
        lVar14 = param_1 + uVar18 * 4;
        uVar24 = uVar18 >> 3 & 7;
        *(undefined8 *)(lVar27 + 0xab60 + uVar18 * 8) = *(undefined8 *)(lVar21 + -0x170);
        *(undefined4 *)(lVar27 + 0xac20 + uVar18 * 4) = *(undefined4 *)(lVar14 + -0xf0);
        *(undefined4 *)(lVar27 + 44000 + uVar18 * 4) = *(undefined4 *)(lVar14 + -0xb0);
        lVar21 = lVar27 + ((uVar18 >> 6) + 0x159e) * 8;
        uVar13 = uVar18 & 7;
        uVar18 = uVar18 + 1;
        *(byte *)(lVar21 + uVar24) = *(byte *)(lVar21 + uVar24) | (byte)(1 << uVar13);
      } while (uVar18 != 0x10);
      *(undefined4 *)(local_d0 + 0x2c60) = *(undefined4 *)(param_1 + -0x48);
      *(undefined1 *)(local_f0 + 0xcfb) = 1;
      if (*(longlong **)(param_1 + -0x178) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + -0x178) + 8))();
      }
      uVar19 = *(undefined8 *)(param_1 + -0x178);
      *(undefined1 *)(lVar26 + 0xcfa) = 1;
      *(undefined8 *)(lVar8 + 0x2b58) = uVar19;
    }
  }
  plVar12 = (longlong *)FUN_180102f80(0x30);
  if (plVar12 == (longlong *)0x0) {
    iVar11 = 0;
    goto LAB_1800bcc8c;
  }
  local_e8 = &PTR_FUN_180236890;
  *plVar12 = (longlong)&PTR_FUN_180236890;
  plVar12[1] = 0;
  plVar12[5] = lVar27;
  plVar12[2] = (longlong)plVar12;
  plVar12[3] = local_e0;
  *(uint *)(plVar12 + 4) = uVar10 + 1;
  iVar11 = FUN_1800c3188(plVar12,&DAT_180229558,local_d8);
  if (iVar11 < 0) {
LAB_1800bcc60:
    *plVar12 = (longlong)local_e8;
    FUN_180102fc0(plVar12,0x30);
    goto LAB_1800bcc8c;
  }
  iVar25 = *(int *)(param_1 + 0x144);
  if (*(int *)(param_1 + 0x140) == iVar25) {
    uVar10 = iVar25 << 1;
    if (iVar25 == 0) {
      uVar10 = 0x10;
    }
    local_e0 = CONCAT44(local_e0._4_4_,uVar10);
    lVar21 = CONCAT44(0,uVar10) << 3;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,uVar10);
    if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
      lVar21 = -1;
    }
    local_d8 = thunk_FUN_180102f80(lVar21);
    if (local_d8 == 0) goto LAB_1800bcc60;
    thunk_FUN_180001218(local_d8,*(undefined8 *)(param_1 + 0x138),
                        (ulonglong)*(uint *)(param_1 + 0x144) << 3);
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x138));
    *(longlong *)(param_1 + 0x138) = local_d8;
    *(undefined4 *)(param_1 + 0x144) = (undefined4)local_e0;
  }
  *(longlong **)(*(longlong *)(param_1 + 0x138) + (ulonglong)*(uint *)(param_1 + 0x140) * 8) =
       plVar12;
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  if (param_2 == 1) {
    uVar18 = 0;
    do {
      if ((&DAT_18024c350)[uVar18 * 8] != '\0') {
        uVar13 = 0;
        do {
          *(undefined4 *)(lVar27 + uVar18 * 4 + 0x4ad0 + uVar13 * 0x38) =
               *(undefined4 *)(param_1 + uVar18 * 4 + 0x298 + uVar13 * 0x38);
          uVar15 = (int)uVar18 + (int)uVar13 * 0xe;
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
          uVar24 = (ulonglong)(uVar15 >> 3) & 7;
          lVar21 = lVar27 + ((ulonglong)(uVar15 >> 6) + 0x15a0) * 8;
          *(byte *)(lVar21 + uVar24) =
               *(byte *)(lVar21 + uVar24) | (byte)(1 << ((ulonglong)uVar15 & 7));
        } while (uVar10 < 0x10);
      }
      uVar10 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar10;
    } while (uVar10 < 0xe);
    uVar29 = *(undefined8 *)(param_1 + 0x738);
    uVar19 = *(undefined8 *)(param_1 + 0x730);
    *(undefined1 *)(lVar26 + 0xcfe) = 1;
    *(undefined8 *)(lVar27 + 0x4ff4) = uVar29;
    *(undefined8 *)(lVar27 + 0x4fec) = uVar19;
LAB_1800bcb20:
    iVar25 = 0x20;
    puVar22 = (undefined8 *)(lVar27 + 0x4ffc);
    puVar23 = (undefined8 *)(param_1 + 0x158);
    do {
      iVar25 = iVar25 + -1;
      *puVar22 = *puVar23;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar25 != 0);
    *(undefined4 *)((longlong)ppuVar28 + 0x127c) = 0x100000;
    *(undefined2 *)(ppuVar28 + 0x250) = 0xffff;
    iVar25 = 0x20;
    puVar22 = (undefined8 *)(lVar27 + 0x503c);
    puVar23 = (undefined8 *)(param_1 + 0x198);
    do {
      iVar25 = iVar25 + -1;
      *puVar22 = *puVar23;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar25 != 0);
    *(undefined4 *)(ppuVar28 + 0x254) = 0x100000;
    *(undefined2 *)((longlong)ppuVar28 + 0x12a4) = 0xffff;
    *(undefined8 *)(lVar27 + 0x4fb0) = *(undefined8 *)(param_1 + 0x5c58);
    if (*(longlong *)(param_1 + 0x5c58) != 0) {
      FUN_1800c21d8();
    }
    uVar19 = *(undefined8 *)(param_1 + 0x5c60);
    *(undefined1 *)(lVar26 + 0xcfc) = 1;
    *(undefined8 *)(lVar27 + 0x4fb8) = uVar19;
    if (*(longlong *)(param_1 + 0x5c60) != 0) {
      FUN_1800015a0(*(longlong *)(param_1 + 0x5c60) + 0xc);
    }
    uVar18 = 0;
    do {
      uVar24 = uVar18 >> 3 & 7;
      *(undefined4 *)(lVar27 + 0x4f68 + uVar18 * 4) = *(undefined4 *)(param_1 + 0x5c68 + uVar18 * 4)
      ;
      lVar26 = lVar27 + ((uVar18 >> 6) + 0x15a6) * 8;
      uVar13 = uVar18 & 7;
      uVar18 = uVar18 + 1;
      *(byte *)(lVar26 + uVar24) = *(byte *)(lVar26 + uVar24) | (byte)(1 << uVar13);
    } while (uVar18 != 0x10);
  }
  else {
    puVar2 = &DAT_180236528;
    if (param_2 != 3) {
      uVar17 = 0xc;
      puVar2 = &DAT_180236530;
    }
    uVar18 = 0;
    do {
      if ((&DAT_18024c350)[(ulonglong)(uint)puVar2[uVar18] * 8] != '\0') {
        uVar13 = 0;
        do {
          *(undefined4 *)(lVar27 + ((ulonglong)(uint)puVar2[uVar18] + uVar13 * 0xe + 0x12b4) * 4) =
               *(undefined4 *)
                (param_1 + 0x298 + (ulonglong)(uint)puVar2[uVar18] * 4 + uVar13 * 0x38);
          iVar25 = (int)uVar13;
          uVar10 = iVar25 + 1;
          uVar13 = (ulonglong)uVar10;
          uVar15 = puVar2[uVar18] + iVar25 * 0xe;
          uVar24 = (ulonglong)(uVar15 >> 3) & 7;
          lVar21 = lVar27 + ((ulonglong)(uVar15 >> 6) + 0x15a0) * 8;
          *(byte *)(lVar21 + uVar24) =
               *(byte *)(lVar21 + uVar24) | (byte)(1 << ((ulonglong)uVar15 & 7));
        } while (uVar10 < 0x10);
      }
      uVar10 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar10;
    } while (uVar10 < uVar17);
    if (param_2 == 3) goto LAB_1800bcb20;
  }
  if (param_2 - 1U < 2) {
    iVar25 = 0x20;
    puVar22 = (undefined8 *)(lVar27 + 0x513c);
    puVar23 = (undefined8 *)(param_1 + 0x1d8);
    do {
      iVar25 = iVar25 + -1;
      *puVar22 = *puVar23;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar25 != 0);
    *(undefined4 *)((longlong)ppuVar28 + 0x12c4) = 0x100000;
    *(undefined2 *)(ppuVar28 + 0x259) = 0xffff;
    iVar25 = 0x20;
    puVar22 = (undefined8 *)(lVar27 + 0x517c);
    puVar23 = (undefined8 *)(param_1 + 0x218);
    do {
      iVar25 = iVar25 + -1;
      *puVar22 = *puVar23;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar25 != 0);
    *(undefined4 *)(ppuVar28 + 0x25d) = 0x100000;
    *(undefined2 *)((longlong)ppuVar28 + 0x12ec) = 0xffff;
    *(undefined8 *)(lVar27 + 0x4fa8) = *(undefined8 *)(param_1 + 0x5c50);
    if (*(longlong *)(param_1 + 0x5c50) != 0) {
      FUN_1800c21d8();
    }
  }
LAB_1800bcc8c:
  if (bVar7) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar11;
}

