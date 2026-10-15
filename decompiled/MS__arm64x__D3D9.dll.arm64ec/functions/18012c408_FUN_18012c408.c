/*
 * FUN_18012c408 at 18012c408
 * undefined FUN_18012c408(void)
 * Address ranges: 18012c408-18012c7d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18012c408(uint param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  longlong lVar15;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 local_b8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [48];
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar13 = (ulonglong)param_1;
  lVar15 = uVar13 * 600;
  if ((&DAT_18024ea4e)[lVar15] == '\0') {
    return 0;
  }
  uVar12 = param_3;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar9 = (*extraout_x11)(uVar12);
  if (param_2 == 0 || param_2 == lVar9) {
    bVar6 = true;
    if (param_2 != 0) goto LAB_18012c490;
  }
  else {
    bVar6 = false;
LAB_18012c490:
    if (!bVar6) {
      iVar8 = thunk_FUN_180223e00(param_2,auStack_b0,0x40);
      if (iVar8 == 0) {
        return 0;
      }
      FUN_180222b58(auStack_b0);
      iVar8 = FUN_180222cb8(auStack_b0,s_aviwnd32_18022a768);
      bVar6 = iVar8 == 0;
      if ((iVar8 != 0) && (lVar10 = thunk_FUN_180223db0(param_2), lVar9 == lVar10)) {
        iVar8 = FUN_180222cb8(auStack_b0,s_mciwndclass_18022a778);
        bVar6 = iVar8 == 0;
      }
      if (!bVar6) {
        return 0;
      }
    }
  }
  (*(code *)puVar5)(0x180224000);
  cVar7 = (*extraout_x11_00)();
  if (cVar7 != '\0') {
    return 0;
  }
  iVar8 = FUN_1801042e0(DAT_180258900 + 0x30);
  if (iVar8 == 1) {
    while (*(int *)(DAT_180258900 + 0x2c) != 0) {
      thunk_FUN_180223c0c(auStack_70,0,0,0,0x400000);
    }
  }
  iVar8 = thunk_FUN_1802236e4(DAT_180258900);
  if (iVar8 == 0) {
    FUN_1801085c8();
  }
  if (*(longlong *)(&DAT_18024ea38 + lVar15) != 0) goto LAB_18012c780;
  lVar9 = *(longlong *)(&DAT_18024ea30 + lVar15);
  if (lVar9 == 0) {
LAB_18012c5bc:
    puVar11 = (undefined8 *)FUN_1802229a8(0xb8);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_18024e9ec + lVar15);
      uVar3 = *(undefined4 *)(&DAT_18024e9f0 + lVar15);
      uVar2 = *(undefined4 *)(&DAT_18024e9d0 + uVar13 * 0x4b);
      uVar4 = *(undefined4 *)((longlong)&DAT_18024e9d0 + lVar15 + 4);
      uVar12 = (&DAT_18024e9d0)[uVar13 * 0x4b];
      uVar14 = (&DAT_18024e840)[(ulonglong)param_1 * 0x4b];
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[1] = uVar14;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 5) = 0xffffffff;
      puVar11[10] = 0;
      puVar11[9] = 0;
      puVar11[0xc] = 0;
      puVar11[0xb] = 0;
      puVar11[0xe] = 0;
      puVar11[0xd] = 0;
      puVar11[0x10] = 0;
      puVar11[0xf] = 0;
      puVar11[0x11] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x34) = 0;
      *puVar11 = &PTR_D3DPERF_SetMarker_native_180229ed8;
      puVar11[0x12] = param_3;
      (*(code *)puVar5)(0x180224000);
      uVar14 = (*extraout_x11_01)();
      uStack_c8 = 0;
      puVar11[0x13] = uVar14;
      local_b8 = (uint)local_b8._3_1_ << 0x18;
      *(undefined4 *)(puVar11 + 0x14) = uVar1;
      *(undefined4 *)((longlong)puVar11 + 0xa4) = uVar3;
      uVar14 = *(undefined8 *)(&DAT_18024ea04 + (ulonglong)param_1 * 600);
      puVar11[0x16] = *(undefined8 *)((ulonglong)param_1 * 600 + 0x18024ea0c);
      puVar11[0x15] = uVar14;
      *(undefined8 *)((longlong)puVar11 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x2c) = uVar12;
      *(undefined8 *)((longlong)puVar11 + 0x3c) = 1;
      *(int *)((longlong)puVar11 + 0x44) = local_b8;
      local_d0 = uVar2;
      uStack_cc = uVar4;
    }
    *(undefined8 **)(&DAT_18024ea30 + lVar15) = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      uVar12 = (*(code *)puVar5)(0x180224000);
      lVar9 = (*extraout_x11_02)(uVar12,*(undefined4 *)((longlong)puVar11 + 0x2c),
                                 *(undefined4 *)(puVar11 + 6),5,1,0,0);
      puVar11[2] = lVar9;
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(&DAT_18024ea30 + lVar15);
        if (lVar9 != 0) {
          FUN_18012d388(lVar9);
          FUN_1802229d8(lVar9,0xb8);
        }
        *(undefined8 *)(&DAT_18024ea30 + lVar15) = 0;
      }
      else {
        uVar12 = (*(code *)puVar5)(0x180224000);
        (*extraout_x11_03)(uVar12,&local_e8,5);
        *(undefined4 *)(puVar11 + 9) = 0x20;
        *(undefined4 *)((longlong)puVar11 + 0x4c) = local_e8;
        *(undefined4 *)(puVar11 + 10) = uStack_e4;
        *(undefined4 *)((longlong)puVar11 + 0x54) = local_e0;
      }
    }
  }
  else if (((int)*(undefined8 *)(lVar9 + 0x2c) != *(int *)(&DAT_18024e9d0 + uVar13 * 0x4b)) ||
          ((int)((ulonglong)*(undefined8 *)(lVar9 + 0x2c) >> 0x20) !=
           *(int *)((longlong)&DAT_18024e9d0 + lVar15 + 4))) {
    FUN_18012d388(lVar9);
    FUN_1802229d8(lVar9,0xb8);
    goto LAB_18012c5bc;
  }
  lVar9 = *(longlong *)(&DAT_18024ea30 + lVar15);
  if (lVar9 != 0) {
    lVar10 = 0;
    uVar13 = FUN_180130838(lVar9 + 8,0,0);
    if (((uVar13 & 1) != 0) && (lVar10 = thunk_FUN_180224238(0), lVar10 != 0)) {
      uVar12 = thunk_FUN_180224260(lVar10,*(undefined8 *)(lVar9 + 0x58));
      *(undefined8 *)(lVar9 + 0x68) = uVar12;
    }
    *(longlong *)(&DAT_18024ea38 + lVar15) = lVar10;
    *(undefined4 *)(&DAT_18024ea40 + lVar15) = 0;
  }
LAB_18012c780:
  if (*(longlong *)(&DAT_18024ea38 + lVar15) != 0) {
    *(int *)(&DAT_18024ea40 + lVar15) = *(int *)(&DAT_18024ea40 + lVar15) + 1;
  }
  lVar9 = DAT_180258900;
  *param_4 = 1;
  uVar12 = *(undefined8 *)(&DAT_18024ea38 + lVar15);
  thunk_FUN_18022370c(lVar9);
  FUN_1801042d0(DAT_180258900 + 0x30);
  return uVar12;
}

