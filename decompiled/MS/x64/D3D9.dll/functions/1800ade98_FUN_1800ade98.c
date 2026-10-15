/*
 * FUN_1800ade98 at 1800ade98
 * uint __fastcall FUN_1800ade98(longlong param_1, uint param_2, uint param_3, HWND param_4, uint param_5, longlong param_6, longlong param_7, undefined8 * param_8, byte param_9)
 * Address ranges: 1800ade98-1800ae49f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_1800ade98(longlong param_1,uint param_2,uint param_3,HWND param_4,uint param_5,
                  longlong param_6,longlong param_7,undefined8 *param_8,byte param_9)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  LPVOID pvVar10;
  uint uVar11;
  uint uVar12;
  BOOL BVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  HWND pHVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  uint uVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  undefined1 *puVar28;
  int *piVar29;
  undefined1 *puVar30;
  int iVar31;
  undefined1 *puVar32;
  char *pcVar33;
  ulonglong uVar34;
  uint local_114;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_107;
  uint local_100;
  uint local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  byte local_ed;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined1 local_e9;
  LPVOID local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  uint local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78 [16];
  
  uVar34 = 0;
  uVar20 = (ulonglong)param_2;
  if (param_8 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  if (*(uint *)(param_1 + 0x70) <= param_2) {
    return 0x8876086c;
  }
  puVar21 = param_8;
  uVar15 = FUN_1800028ec(param_1,param_3);
  if ((char)uVar15 == '\0') {
    return 0x8876086c;
  }
  if ((param_5 & (-(uint)(param_9 != 0) & 0xefff2000) - 0xff7) != 0) {
    return 0x8876086c;
  }
  uVar11 = param_5 & 0xe0;
  local_100 = 0x10;
  if (uVar11 != 0x20) {
    if (uVar11 == 0x40) goto LAB_1800adf4a;
    if (uVar11 != 0x80) {
      return 0x8876086c;
    }
  }
  if ((param_5 & 0x10) != 0) {
    return 0x8876086c;
  }
LAB_1800adf4a:
  if ((param_6 == 0) ||
     (((param_5 & 0x200) != 0 && (*(int *)(*(longlong *)(param_1 + 0x78) + 4 + uVar20 * 0x10) != 0))
     )) {
    return 0x8876086c;
  }
  *puVar21 = 0;
  if ((param_5 & 0x200) == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x78) + 8 + uVar20 * 0x10);
  }
  if ((param_5 & 0x200) == 0) {
    uVar12 = *(uint *)(*(longlong *)(param_1 + 0x68) + uVar20 * 4);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1 + 0x78) + uVar20 * 0x10);
  }
  uVar24 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0xc + uVar20 * 0x10);
  local_e8 = (LPVOID)0x0;
  local_e0 = 0;
  local_114 = uVar24;
  local_d8 = uVar20;
  while ((uint)uVar34 < uVar11) {
    local_80 = 0;
    local_c8[0] = *(uint *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar12 * 4);
    uVar20 = (ulonglong)local_c8[0];
    pHVar16 = GetDesktopWindow();
    piVar29 = (int *)(uVar34 * 0x40 + param_6);
    if (((*(longlong *)(piVar29 + 8) == 0) || (*(HWND *)(piVar29 + 8) == pHVar16)) &&
       ((param_4 == (HWND)0x0 || (param_4 == pHVar16)))) {
      uVar27 = 0x8876086c;
    }
    else {
      piVar29 = FUN_18000385c(uVar20,local_78,piVar29,param_4);
      local_c0 = *(undefined8 *)piVar29;
      uStack_b8 = *(undefined8 *)(piVar29 + 2);
      local_b0 = *(undefined8 *)(piVar29 + 4);
      uStack_a8 = *(undefined8 *)(piVar29 + 6);
      local_a0 = *(undefined8 *)(piVar29 + 8);
      uStack_98 = *(undefined8 *)(piVar29 + 10);
      local_90 = *(undefined8 *)(piVar29 + 0xc);
      uStack_88 = *(undefined8 *)(piVar29 + 0xe);
      uVar15 = FUN_180009158((longlong *)&local_e8,(undefined8 *)local_c8);
      uVar27 = ~-(uint)((char)uVar15 != '\0') & 0x80004005;
    }
    uVar12 = 0;
    if (uVar24 != 0) {
      for (; (uVar24 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
    if (uVar24 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      pbVar9 = (byte *)((longlong)&local_114 + ((longlong)(int)uVar12 >> 3));
      *pbVar9 = *pbVar9 & ~('\x01' << (uVar12 & 7));
      uVar12 = uVar12 & 0xff;
      uVar24 = local_114;
    }
    uVar34 = (ulonglong)((uint)uVar34 + 1);
    if ((int)uVar27 < 0) goto LAB_1800ae464;
  }
  BVar13 = TryEnterCriticalSection(DAT_1801123a8);
  if (BVar13 == 0) {
    FUN_1800044dc(0);
  }
  FUN_1800fa780(&local_114);
  if (param_3 == 2) {
    puVar25 = &DAT_18010e2c1;
    puVar28 = &DAT_18010e2c2;
    puVar26 = &DAT_18010e2c3;
    puVar22 = &DAT_18010e2c5;
    puVar30 = &DAT_18010e2c6;
    puVar32 = &DAT_18010e2c4;
    pcVar33 = &DAT_18010e2c0;
  }
  else {
    lVar18 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0;
    puVar25 = &DAT_18010e471 + lVar18;
    puVar28 = &DAT_18010e472 + lVar18;
    puVar26 = &DAT_18010e473 + lVar18;
    puVar22 = &DAT_18010e475 + lVar18;
    puVar30 = &DAT_18010e476 + lVar18;
    puVar32 = &DAT_18010e474 + lVar18;
    pcVar33 = (char *)(lVar18 + 0x18010e470);
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  if (param_3 == 2) {
    puVar17 = &DAT_18010e218;
  }
  else {
    puVar17 = (undefined4 *)(&DAT_18010e3c8 + (ulonglong)uVar11 * 0x1b0);
  }
  if (uVar11 < 2) {
    uVar14 = *(undefined4 *)(DAT_180111f20 + 0x9e7);
  }
  else {
    uVar14 = *puVar17;
  }
  uVar2 = *puVar25;
  uVar3 = *puVar28;
  uVar4 = *puVar26;
  cVar5 = *pcVar33;
  uVar6 = *(undefined4 *)((longlong)local_e8 + 0xc);
  uVar7 = *(undefined4 *)((longlong)local_e8 + 8);
  local_110._0_4_ = *(undefined4 *)(&DAT_18010e478 + (ulonglong)uVar11 * 0x1b0);
  local_110._4_1_ = param_9;
  local_110._5_1_ = *puVar22;
  local_110._6_1_ = *puVar30;
  local_110._7_1_ = *puVar32;
  lVar18 = FUN_1800fbccc(0xc528);
  puVar21 = (undefined8 *)(lVar18 + 0x17U & 0xfffffffffffffff0);
  local_ec = 0;
  puVar21[-1] = lVar18;
  local_f8 = param_5;
  local_ed = param_9 ^ 1;
  local_eb = local_e0._5_2_;
  local_e9 = local_e0._7_1_;
  local_f4 = uVar14;
  local_f0 = uVar2;
  local_ef = uVar3;
  local_ee = uVar4;
  plVar19 = FUN_1800afa90(puVar21,param_1,param_2,(ulonglong)param_3,param_4,uVar7,uVar6,cVar5,
                          (undefined8 *)&local_f8,&local_110);
  pvVar10 = local_e8;
  uVar27 = 0x8007000e;
  if (plVar19 == (longlong *)0x0) goto LAB_1800ae447;
  local_110._0_4_ = *(undefined4 *)((longlong)plVar19 + 0xe7c);
  uVar11 = (uint)local_e0;
  local_110._4_1_ = *(byte *)(plVar19 + 0x1d0);
  local_110._5_1_ = *(undefined1 *)((longlong)plVar19 + 0xe82);
  local_110._6_1_ = *(undefined1 *)((longlong)plVar19 + 0xe81);
  local_110._7_1_ = *(undefined1 *)(plVar19[3] + 0x9f5);
  local_108 = *(undefined1 *)((longlong)plVar19 + 0xe84);
  local_107 = *(undefined1 *)((longlong)plVar19 + 0x6897);
  uVar20 = FUN_180004d24(plVar19,*(uint *)(*(longlong *)(param_1 + 0x68) + local_d8 * 4),
                         (uint)local_e0,(longlong)local_e8,&local_110);
  uVar27 = (uint)uVar20;
  if ((int)uVar27 < 0) goto LAB_1800ae436;
  FUN_180001390((longlong)plVar19);
  plVar23 = (longlong *)&DAT_1800fd660;
  if (param_7 != 0) {
    plVar23 = (longlong *)&DAT_1800fd750;
  }
  iVar31 = 0;
  uVar15 = FUN_1800aed38((uint *)(plVar19 + 0xd08),plVar23,param_8,(int *)0x0);
  uVar27 = (uint)uVar15;
  if ((int)uVar27 < 0) {
LAB_1800ae422:
    FUN_1800b0388(plVar19);
  }
  else {
    iVar8 = *(int *)(param_1 + 0xfc);
    if (*(int *)(param_1 + 0xf8) == iVar8) {
      if (iVar8 == 0) {
        uVar12 = iVar31 + 0x10;
      }
      else {
        uVar12 = iVar8 * 2;
        local_100 = uVar12;
      }
      uVar15 = SUB168(ZEXT816(8) * ZEXT416(uVar12),0);
      if (SUB168(ZEXT816(8) * ZEXT416(uVar12),8) != 0) {
        uVar15 = 0xffffffffffffffff;
      }
      puVar21 = (undefined8 *)thunk_FUN_1800fbccc(uVar15);
      if (puVar21 == (undefined8 *)0x0) {
        uVar27 = 0x8007000e;
        goto LAB_1800ae422;
      }
      FUN_1800fbec0(puVar21,*(undefined8 **)(param_1 + 0xf0),
                    (ulonglong)*(uint *)(param_1 + 0xfc) << 3);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0xf0));
      *(uint *)(param_1 + 0xfc) = local_100;
      *(undefined8 **)(param_1 + 0xf0) = puVar21;
    }
    uVar20 = 0;
    *(longlong **)(*(longlong *)(param_1 + 0xf0) + (ulonglong)*(uint *)(param_1 + 0xf8) * 8) =
         plVar19;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    if (uVar11 != 0) {
      do {
        lVar18 = uVar20 * 0x40;
        uVar12 = (int)uVar20 + 1;
        puVar21 = (undefined8 *)((longlong)pvVar10 + uVar20 * 0x50 + 8);
        uVar15 = puVar21[1];
        *(undefined8 *)(param_6 + lVar18) = *puVar21;
        ((undefined8 *)(param_6 + lVar18))[1] = uVar15;
        puVar21 = (undefined8 *)((longlong)pvVar10 + uVar20 * 0x50 + 0x18);
        uVar15 = puVar21[1];
        puVar1 = (undefined8 *)(param_6 + 0x10 + lVar18);
        *puVar1 = *puVar21;
        puVar1[1] = uVar15;
        puVar21 = (undefined8 *)((longlong)pvVar10 + uVar20 * 0x50 + 0x28);
        uVar15 = puVar21[1];
        puVar1 = (undefined8 *)(param_6 + 0x20 + lVar18);
        *puVar1 = *puVar21;
        puVar1[1] = uVar15;
        puVar21 = (undefined8 *)((longlong)pvVar10 + uVar20 * 0x50 + 0x38);
        uVar15 = puVar21[1];
        puVar1 = (undefined8 *)(param_6 + 0x30 + lVar18);
        *puVar1 = *puVar21;
        puVar1[1] = uVar15;
        uVar20 = (ulonglong)uVar12;
      } while (uVar12 < uVar11);
    }
  }
  if ((int)uVar27 < 0) {
LAB_1800ae436:
    FUN_1800afed8(plVar19);
    FUN_1800fbdd4((LPVOID)plVar19[-1]);
  }
LAB_1800ae447:
  FUN_1800fa7bc();
  LeaveCriticalSection(DAT_1801123a8);
LAB_1800ae464:
  FUN_1800fbcf0(local_e8);
  if ((int)uVar27 < 0) {
    return uVar27;
  }
  if ((param_5 & 2) == 0) {
    FUN_1800fa7ce();
    return uVar27;
  }
  return uVar27;
}

