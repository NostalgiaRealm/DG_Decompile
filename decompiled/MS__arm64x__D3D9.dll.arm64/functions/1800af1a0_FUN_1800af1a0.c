/*
 * FUN_1800af1a0 at 1800af1a0
 * undefined FUN_1800af1a0(void)
 * Address ranges: 1800af1a0-1800af5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800af1a0(longlong param_1,uint param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint local_150 [4];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined1 auStack_d0 [128];
  
  uVar11 = (ulonglong)param_2;
  if (param_3 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar6 = true;
    iVar9 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar9 == 0) {
      FUN_180003398();
    }
  }
  local_140 = *(undefined4 *)param_3;
  uVar10 = *param_3;
  uStack_124 = (undefined4)*(undefined8 *)((longlong)param_3 + 0x1c);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x1c) >> 0x20);
  local_12c = (undefined4)*(undefined8 *)((longlong)param_3 + 0x14);
  uStack_128 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x14) >> 0x20);
  uStack_134 = (undefined4)*(undefined8 *)((longlong)param_3 + 0xc);
  uStack_130 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0xc) >> 0x20);
  uStack_13c = (undefined4)*(undefined8 *)((longlong)param_3 + 4);
  uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 4) >> 0x20);
  uStack_114 = (undefined4)*(undefined8 *)((longlong)param_3 + 0x2c);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x2c) >> 0x20);
  local_11c = (undefined4)*(undefined8 *)((longlong)param_3 + 0x24);
  uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x24) >> 0x20);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uStack_f0 = *(undefined4 *)(param_3 + 10);
  local_10c = (undefined4)*(undefined8 *)((longlong)param_3 + 0x34);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x34) >> 0x20);
  local_104 = *(undefined4 *)((longlong)param_3 + 0x3c);
  local_ec = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar21 = param_3[10];
  uStack_e8 = *(undefined4 *)(param_3 + 0xb);
  local_100 = param_3[8];
  local_e4 = *(undefined4 *)((longlong)param_3 + 0x5c);
  uVar7 = param_3[0xb];
  local_e0 = *(undefined4 *)(param_3 + 0xc);
  uStack_f8 = *(undefined4 *)(param_3 + 9);
  uVar20 = param_3[9];
  uStack_dc = *(undefined4 *)((longlong)param_3 + 100);
  uVar8 = param_3[0xc];
  local_150[0] = param_2;
  if (*(char *)(param_1 + -0x642c) == '\0') {
    uVar10 = FUN_180011d10(param_1 + -0x6520,local_150,&local_140);
    uVar10 = FUN_180012460(uVar10,auStack_d0,&local_140);
    FUN_180011ac8(param_1 + -0x6508,local_150,uVar10);
    if (*(uint *)(param_1 + -0x64d8) != 0) {
      uVar11 = 0;
      do {
        iVar9 = (int)uVar11;
        if (*(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar11 * 4) == param_2) {
          if (iVar9 != -1 && iVar9 < 8) {
            (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xc0))
                      (*(longlong **)(param_1 + -0x6810),uVar11,&local_140);
          }
          break;
        }
        uVar11 = (ulonglong)(iVar9 + 1U);
      } while (iVar9 + 1U < *(uint *)(param_1 + -0x64d8));
    }
    goto LAB_1800af588;
  }
  lVar19 = *(longlong *)
            (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
  uStack_d3 = 1;
  uVar4 = *(uint *)(lVar19 + 0x4ac8);
  if (uVar4 == 0) {
LAB_1800af334:
    uStack_d4 = 0;
  }
  else {
    uVar13 = 0;
    uVar12 = uVar4;
    do {
      uVar5 = uVar12 + uVar13 >> 1;
      uVar15 = (ulonglong)uVar5;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar19 + 0x4ac0) + uVar15 * 0x80);
      if (uVar17 <= uVar11) {
        if (uVar11 <= uVar17) break;
        uVar13 = uVar5 + 1;
        uVar15 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar12;
      }
      uVar12 = uVar5;
    } while (uVar12 != uVar13);
    if ((uint)uVar15 == uVar4) goto LAB_1800af334;
    lVar14 = *(longlong *)(lVar19 + 0x4ac0);
    uVar15 = uVar15 * 0x80;
    if ((*(ulonglong *)(lVar14 + uVar15) != uVar11) || (lVar14 + (uVar15 | 0xc) == 0))
    goto LAB_1800af334;
    uStack_d4 = *(undefined1 *)(lVar14 + (uVar15 | 0x78));
  }
  plVar18 = (longlong *)(lVar19 + 0x4ac0);
  uVar4 = *(uint *)(lVar19 + 0x4ac8);
  uVar15 = 0;
  if (uVar4 != 0) {
    uVar13 = 0;
    uVar12 = uVar4;
    do {
      uVar5 = uVar12 + uVar13 >> 1;
      uVar15 = (ulonglong)uVar5;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar19 + 0x4ac0) + uVar15 * 0x80);
      if (uVar17 <= uVar11) {
        if (uVar11 <= uVar17) break;
        uVar13 = uVar5 + 1;
        uVar15 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar12;
      }
      uVar12 = uVar5;
    } while (uVar12 != uVar13);
  }
  if (((uint)uVar15 == uVar4) ||
     (puVar1 = (ulonglong *)(*plVar18 + uVar15 * 0x80), *puVar1 != uVar11)) {
    uVar13 = *(uint *)(lVar19 + 0x4acc);
    if (uVar13 == uVar4) {
      uVar4 = 0x10;
      if (uVar13 != 0) {
        uVar4 = uVar13 << 1;
      }
      lVar14 = thunk_FUN_180102f80((ulonglong)uVar4 << 7);
      if (lVar14 != 0) {
        uVar17 = 0;
        if (*(int *)(lVar19 + 0x4ac8) != 0) {
          do {
            uVar13 = (int)uVar17 + 1;
            puVar2 = (undefined8 *)(*plVar18 + uVar17 * 0x80);
            puVar3 = (undefined8 *)(lVar14 + uVar17 * 0x80);
            uVar21 = *puVar2;
            uVar20 = puVar2[3];
            uVar10 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar21;
            puVar3[3] = uVar20;
            puVar3[2] = uVar10;
            uVar21 = puVar2[4];
            uVar20 = puVar2[7];
            uVar10 = puVar2[6];
            puVar3[5] = puVar2[5];
            puVar3[4] = uVar21;
            puVar3[7] = uVar20;
            puVar3[6] = uVar10;
            uVar21 = puVar2[8];
            uVar20 = puVar2[0xb];
            uVar10 = puVar2[10];
            puVar3[9] = puVar2[9];
            puVar3[8] = uVar21;
            puVar3[0xb] = uVar20;
            puVar3[10] = uVar10;
            uVar21 = puVar2[0xc];
            uVar20 = puVar2[0xf];
            uVar10 = puVar2[0xe];
            puVar3[0xd] = puVar2[0xd];
            puVar3[0xc] = uVar21;
            puVar3[0xf] = uVar20;
            puVar3[0xe] = uVar10;
            uVar17 = (ulonglong)uVar13;
          } while (uVar13 < *(uint *)(lVar19 + 0x4ac8));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(lVar19 + 0x4ab8));
        *(longlong *)(lVar19 + 0x4ab8) = lVar14;
        *plVar18 = lVar14;
        *(uint *)(lVar19 + 0x4acc) = uVar4;
      }
    }
    uVar17 = (ulonglong)*(uint *)(lVar19 + 0x4ac8);
    if (*(uint *)(lVar19 + 0x4acc) != *(uint *)(lVar19 + 0x4ac8)) {
      while ((uint)uVar15 < (uint)uVar17) {
        uVar16 = (ulonglong)((uint)uVar17 - 1);
        puVar2 = (undefined8 *)(*plVar18 + uVar17 * 0x80);
        puVar3 = (undefined8 *)(*plVar18 + uVar16 * 0x80);
        uVar21 = *puVar3;
        uVar20 = puVar3[3];
        uVar10 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar21;
        puVar2[3] = uVar20;
        puVar2[2] = uVar10;
        uVar21 = puVar3[4];
        uVar20 = puVar3[7];
        uVar10 = puVar3[6];
        puVar2[5] = puVar3[5];
        puVar2[4] = uVar21;
        puVar2[7] = uVar20;
        puVar2[6] = uVar10;
        uVar21 = puVar3[8];
        uVar20 = puVar3[0xb];
        uVar10 = puVar3[10];
        puVar2[9] = puVar3[9];
        puVar2[8] = uVar21;
        puVar2[0xb] = uVar20;
        puVar2[10] = uVar10;
        uVar21 = puVar3[0xc];
        uVar20 = puVar3[0xf];
        uVar10 = puVar3[0xe];
        puVar2[0xd] = puVar3[0xd];
        puVar2[0xc] = uVar21;
        puVar2[0xf] = uVar20;
        puVar2[0xe] = uVar10;
        uVar17 = uVar16;
      }
      lVar14 = uVar15 * 0x80;
      *(int *)(lVar19 + 0x4ac8) = *(int *)(lVar19 + 0x4ac8) + 1;
      *(uint *)(lVar14 + *plVar18 + 8) = param_2;
      lVar19 = lVar14 + *plVar18;
      *(ulonglong *)(lVar19 + 0x14) = CONCAT44(uStack_134,uStack_138);
      *(ulonglong *)(lVar19 + 0xc) = CONCAT44(uStack_13c,local_140);
      *(ulonglong *)(lVar19 + 0x24) = CONCAT44(uStack_124,uStack_128);
      *(ulonglong *)(lVar19 + 0x1c) = CONCAT44(local_12c,uStack_130);
      *(ulonglong *)(lVar19 + 0x34) = CONCAT44(uStack_114,uStack_118);
      *(ulonglong *)(lVar19 + 0x2c) = CONCAT44(local_11c,uStack_120);
      *(ulonglong *)(lVar19 + 0x44) = CONCAT44(local_104,uStack_108);
      *(ulonglong *)(lVar19 + 0x3c) = CONCAT44(local_10c,uStack_110);
      *(ulonglong *)(lVar19 + 0x54) = CONCAT44(uStack_f4,uStack_f8);
      *(undefined8 *)(lVar19 + 0x4c) = local_100;
      *(ulonglong *)(lVar19 + 100) = CONCAT44(local_e4,uStack_e8);
      *(ulonglong *)(lVar19 + 0x5c) = CONCAT44(local_ec,uStack_f0);
      *(ulonglong *)(lVar19 + 0x74) =
           CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT14(uStack_d4,uStack_d8)));
      *(ulonglong *)(lVar19 + 0x6c) = CONCAT44(uStack_dc,local_e0);
      *(ulonglong *)(*plVar18 + lVar14) = uVar11;
    }
  }
  else {
    *(ulonglong *)((longlong)puVar1 + 0x14) = CONCAT44(uStack_134,uStack_138);
    *(undefined8 *)((longlong)puVar1 + 0xc) = uVar10;
    *(ulonglong *)((longlong)puVar1 + 0x24) = CONCAT44(uStack_124,uStack_128);
    *(ulonglong *)((longlong)puVar1 + 0x1c) = CONCAT44(local_12c,uStack_130);
    *(ulonglong *)((longlong)puVar1 + 0x34) = CONCAT44(uStack_114,uStack_118);
    *(ulonglong *)((longlong)puVar1 + 0x2c) = CONCAT44(local_11c,uStack_120);
    *(ulonglong *)((longlong)puVar1 + 0x44) = CONCAT44(local_104,uStack_108);
    *(ulonglong *)((longlong)puVar1 + 0x3c) = CONCAT44(local_10c,uStack_110);
    *(undefined8 *)((longlong)puVar1 + 0x54) = uVar20;
    *(undefined8 *)((longlong)puVar1 + 0x4c) = local_100;
    *(undefined8 *)((longlong)puVar1 + 100) = uVar7;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = uVar21;
    *(ulonglong *)((longlong)puVar1 + 0x74) =
         CONCAT26(uStack_d2,CONCAT15(1,CONCAT14(uStack_d4,uStack_d8)));
    *(undefined8 *)((longlong)puVar1 + 0x6c) = uVar8;
  }
LAB_1800af588:
  if (bVar6) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

