/*
 * FUN_180033040 at 180033040
 * undefined __cdecl FUN_180033040(longlong param_1, uint param_2, uint param_3, longlong * param_4)
 * Address ranges: 180033040-18003381b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033040(longlong param_1,uint param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  SIZE_T SVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong local_c0 [6];
  uint local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  
  local_c0[1] = 0x10000000100;
  local_c0[0] = 0x10000000100;
  uVar20 = 0;
  lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0);
  uVar4 = *(uint *)(lVar19 + 0x5d4);
  if (uVar4 == 0) {
LAB_1800330e0:
    if (uVar4 == *(uint *)(lVar19 + 0x5d0)) {
      uVar18 = (ulonglong)*(uint *)(lVar19 + 0x5d0) & 0x7fffffff;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar18 << 1;
      SVar15 = uVar18 << 6;
      if (SUB168(auVar6 * ZEXT816(0x20),8) != 0) {
        SVar15 = 0xffffffffffffffff;
      }
      lVar10 = thunk_FUN_18005fb88(SVar15);
      if (lVar10 != 0) {
        uVar18 = 0;
        if (*(int *)(lVar19 + 0x5d0) != 0) {
          do {
            uVar4 = (int)uVar18 + 1;
            puVar1 = (undefined8 *)(*(longlong *)(lVar19 + 0x5c8) + uVar18 * 0x20);
            puVar2 = (undefined8 *)(lVar10 + uVar18 * 0x20);
            uVar23 = *puVar1;
            uVar22 = puVar1[3];
            uVar21 = puVar1[2];
            puVar2[1] = puVar1[1];
            *puVar2 = uVar23;
            puVar2[3] = uVar22;
            puVar2[2] = uVar21;
            uVar18 = (ulonglong)uVar4;
          } while (uVar4 < *(uint *)(lVar19 + 0x5d0));
        }
        thunk_FUN_18005fbc8(*(LPVOID *)(lVar19 + 0x5c8));
        *(longlong *)(lVar19 + 0x5c8) = lVar10;
        *(int *)(lVar19 + 0x5d0) = *(int *)(lVar19 + 0x5d0) << 1;
      }
    }
    uVar18 = (ulonglong)*(uint *)(lVar19 + 0x5d4);
    while ((uint)uVar20 < (uint)uVar18) {
      uVar17 = (ulonglong)((uint)uVar18 - 1);
      puVar1 = (undefined8 *)(*(longlong *)(lVar19 + 0x5c8) + uVar18 * 0x20);
      puVar2 = (undefined8 *)(*(longlong *)(lVar19 + 0x5c8) + uVar17 * 0x20);
      uVar23 = *puVar2;
      uVar22 = puVar2[3];
      uVar21 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar23;
      puVar1[3] = uVar22;
      puVar1[2] = uVar21;
      uVar18 = uVar17;
    }
    param_4 = local_c0;
    FUN_180033c78((longlong *)(lVar19 + 0x5c8),uVar20,0x10000000100,param_4);
    *(int *)(lVar19 + 0x5d4) = *(int *)(lVar19 + 0x5d4) + 1;
  }
  else {
    uVar14 = 0;
    uVar13 = uVar4;
    do {
      uVar5 = uVar13 + uVar14 >> 1;
      uVar20 = (ulonglong)uVar5;
      uVar18 = *(ulonglong *)(*(longlong *)(lVar19 + 0x5c8) + uVar20 * 0x20);
      if (uVar18 < 0x10000000101) {
        if (0x100000000ff < uVar18) break;
        uVar14 = uVar5 + 1;
        uVar20 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar14);
    if (((uint)uVar20 == uVar4) ||
       (*(longlong *)(*(longlong *)(lVar19 + 0x5c8) + uVar20 * 0x20) != 0x10000000100))
    goto LAB_1800330e0;
  }
  uVar20 = *(ulonglong *)(*(longlong *)(lVar19 + 0x5c8) + uVar20 * 0x20 + 0x18);
  if (uVar20 == 0) {
    return;
  }
  uVar18 = 0;
  lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0);
  uVar4 = *(uint *)(lVar19 + 0x5f4);
  if (uVar4 == 0) {
LAB_18003323c:
    if (uVar4 == *(uint *)(lVar19 + 0x5f0)) {
      uVar17 = CONCAT44(0,*(uint *)(lVar19 + 0x5f0) << 1);
      SVar15 = uVar17 * 0x18;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
        SVar15 = 0xffffffffffffffff;
      }
      lVar10 = thunk_FUN_18005fb88(SVar15);
      if (lVar10 != 0) {
        uVar17 = 0;
        if (*(int *)(lVar19 + 0x5f0) != 0) {
          do {
            uVar4 = (int)uVar17 + 1;
            puVar1 = (undefined8 *)(*(longlong *)(lVar19 + 0x5e8) + uVar17 * 0x18);
            puVar2 = (undefined8 *)(lVar10 + uVar17 * 0x18);
            uVar21 = *puVar1;
            puVar2[1] = puVar1[1];
            *puVar2 = uVar21;
            puVar2[2] = puVar1[2];
            uVar17 = (ulonglong)uVar4;
          } while (uVar4 < *(uint *)(lVar19 + 0x5f0));
        }
        thunk_FUN_18005fbc8(*(LPVOID *)(lVar19 + 0x5e8));
        *(longlong *)(lVar19 + 0x5e8) = lVar10;
        *(int *)(lVar19 + 0x5f0) = *(int *)(lVar19 + 0x5f0) << 1;
      }
    }
    uVar17 = (ulonglong)*(uint *)(lVar19 + 0x5f4);
    while ((uint)uVar18 < (uint)uVar17) {
      uVar16 = (ulonglong)((uint)uVar17 - 1);
      puVar1 = (undefined8 *)(*(longlong *)(lVar19 + 0x5e8) + uVar17 * 0x18);
      puVar2 = (undefined8 *)(*(longlong *)(lVar19 + 0x5e8) + uVar16 * 0x18);
      uVar21 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar21;
      puVar1[2] = puVar2[2];
      uVar17 = uVar16;
    }
    local_c0[4] = 0;
    local_c0[0] = 0;
    param_4 = local_c0;
    *(ulonglong *)(*(longlong *)(lVar19 + 0x5e8) + uVar18 * 0x18) = uVar20;
    *(ulonglong *)(*(longlong *)(lVar19 + 0x5e8) + uVar18 * 0x18 + 8) = uVar20;
    local_c0[2] = 0x40000003d;
    local_c0[3] = 0xffffffff00000000;
    plVar11 = *(longlong **)
               (*(longlong *)(lVar19 + 0x5f8) + (ulonglong)*(uint *)(lVar19 + 0x600) * 0x18c0 +
               0x6b0);
    (**(code **)(*plVar11 + 0x38))(plVar11,uVar20,local_c0 + 2);
    *(longlong *)(*(longlong *)(lVar19 + 0x5e8) + uVar18 * 0x18 + 0x10) = local_c0[0];
    *(int *)(lVar19 + 0x5f4) = *(int *)(lVar19 + 0x5f4) + 1;
  }
  else {
    uVar14 = 0;
    uVar13 = uVar4;
    do {
      uVar5 = uVar13 + uVar14 >> 1;
      uVar18 = (ulonglong)uVar5;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar19 + 0x5e8) + uVar18 * 0x18);
      if (uVar17 <= uVar20) {
        if (uVar20 <= uVar17) break;
        uVar14 = uVar5 + 1;
        uVar18 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar14);
    if (((uint)uVar18 == uVar4) ||
       (*(ulonglong *)(*(longlong *)(lVar19 + 0x5e8) + uVar18 * 0x18) != uVar20))
    goto LAB_18003323c;
  }
  lVar19 = *(longlong *)(uVar18 * 0x18 + *(longlong *)(lVar19 + 0x5e8) + 0x10);
  local_c0[0] = lVar19;
  if (*(longlong *)(param_1 + 0x3120) != lVar19) {
    param_4 = (longlong *)0x1;
    FUN_1800506c8(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  *(int *)(param_1 + 0x18) + 0x10,1,(longlong)local_c0);
    *(longlong *)(param_1 + 0x3120) = lVar19;
  }
  lVar19 = *(longlong *)(param_1 + 0x10);
  uVar18 = 0;
  uVar20 = 8;
  if (*(int *)(lVar19 + 0x40) != 1) {
    uVar20 = 0;
  }
  local_90 = *(uint *)((longlong)&DAT_180063c30 +
                      (uVar20 | (ulonglong)(*(int *)(lVar19 + 0x3c) == 1) << 2));
  iStack_88 = 3;
  iStack_8c = iStack_88;
  if (*(int *)(lVar19 + 0x34) == 0) {
    iStack_8c = 1;
  }
  uStack_84 = 3;
  uStack_80 = 0;
  local_60 = 0x7f7fffff;
  local_74 = 0;
  uStack_70 = 0;
  bVar9 = *(int *)(lVar19 + 0x38) == 0;
  if (bVar9) {
    iStack_88 = 1;
  }
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_7c = 1;
  uStack_78 = 8;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0);
  uVar20 = 0xe0d800;
  if (bVar9) {
    uVar20 = 0xe0c800;
  }
  uVar17 = 0x300;
  if (*(int *)(lVar19 + 0x34) == 0) {
    uVar17 = 0x100;
  }
  uVar4 = *(uint *)(lVar10 + 0x614);
  uVar20 = (uVar20 | uVar17 | (ulonglong)local_90) + 0x3f3ffffe8000000;
  if (uVar4 != 0) {
    uVar14 = 0;
    uVar13 = uVar4;
    do {
      uVar5 = uVar13 + uVar14 >> 1;
      uVar18 = (ulonglong)uVar5;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar10 + 0x608) + uVar18 * 0x48);
      if (uVar17 <= uVar20) {
        if (uVar20 <= uVar17) break;
        uVar14 = uVar5 + 1;
        uVar18 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar14);
    if (((uint)uVar18 != uVar4) &&
       (puVar3 = (ulonglong *)(*(longlong *)(lVar10 + 0x608) + uVar18 * 0x48), *puVar3 == uVar20)) {
      if (((((local_90 == (uint)puVar3[1]) && (iStack_8c == *(int *)((longlong)puVar3 + 0xc))) &&
           (iStack_88 == (int)puVar3[2])) &&
          (((*(int *)((longlong)puVar3 + 0x14) == 3 && (*(int *)((longlong)puVar3 + 0x1c) == 1)) &&
           (((int)puVar3[4] == 8 &&
            (((int)puVar3[3] == 0 && (*(int *)((longlong)puVar3 + 0x24) == 0)))))))) &&
         (((int)puVar3[5] == 0 &&
          ((((*(int *)((longlong)puVar3 + 0x2c) == 0 && ((int)puVar3[6] == 0)) &&
            ((int)puVar3[7] == 0x7f7fffff)) && (*(int *)((longlong)puVar3 + 0x34) == 0)))))) {
        lVar19 = uVar18 * 0x48;
      }
      else {
        FUN_18004f908(*(longlong *)(lVar10 + 0x618),*(uint *)(lVar10 + 0x620),(longlong *)puVar3[8])
        ;
        local_c0[0] = 0;
        *(ulonglong *)(*(longlong *)(lVar10 + 0x608) + uVar18 * 0x48) = uVar20;
        lVar19 = *(longlong *)(lVar10 + 0x608) + uVar18 * 0x48;
        *(ulonglong *)(lVar19 + 0x10) = CONCAT44(uStack_84,iStack_88);
        *(ulonglong *)(lVar19 + 8) = CONCAT44(iStack_8c,local_90);
        *(ulonglong *)(lVar19 + 0x20) = CONCAT44(local_74,uStack_78);
        *(ulonglong *)(lVar19 + 0x18) = CONCAT44(local_7c,uStack_80);
        *(ulonglong *)(lVar19 + 0x30) = CONCAT44(uStack_64,uStack_68);
        *(ulonglong *)(lVar19 + 0x28) = CONCAT44(uStack_6c,uStack_70);
        *(undefined4 *)(lVar19 + 0x38) = local_60;
        plVar11 = *(longlong **)
                   (*(longlong *)(lVar10 + 0x618) + (ulonglong)*(uint *)(lVar10 + 0x620) * 0x18c0 +
                   0x6b0);
        (**(code **)(*plVar11 + 0xb8))(plVar11,&local_90,local_c0);
        *(longlong *)(*(longlong *)(lVar10 + 0x608) + uVar18 * 0x48 + 0x40) = local_c0[0];
        lVar19 = uVar18 * 0x48;
      }
      goto LAB_180033750;
    }
  }
  plVar11 = (longlong *)(lVar10 + 0x608);
  if (uVar4 == *(uint *)(lVar10 + 0x610)) {
    uVar17 = CONCAT44(0,*(uint *)(lVar10 + 0x610) << 1);
    SVar15 = uVar17 * 0x48;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    if (SUB168(auVar8 * ZEXT816(0x48),8) != 0) {
      SVar15 = 0xffffffffffffffff;
    }
    lVar19 = thunk_FUN_18005fb88(SVar15);
    if (lVar19 != 0) {
      uVar17 = 0;
      if (*(int *)(lVar10 + 0x610) != 0) {
        do {
          uVar4 = (int)uVar17 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(lVar10 + 0x608) + uVar17 * 0x48);
          puVar2 = (undefined8 *)(lVar19 + uVar17 * 0x48);
          uVar23 = *puVar1;
          uVar22 = puVar1[3];
          uVar21 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar23;
          puVar2[3] = uVar22;
          puVar2[2] = uVar21;
          uVar23 = puVar1[4];
          uVar22 = puVar1[7];
          uVar21 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar23;
          puVar2[7] = uVar22;
          puVar2[6] = uVar21;
          puVar2[8] = puVar1[8];
          uVar17 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar10 + 0x610));
      }
      thunk_FUN_18005fbc8((LPVOID)*plVar11);
      *plVar11 = lVar19;
      *(int *)(lVar10 + 0x610) = *(int *)(lVar10 + 0x610) << 1;
    }
  }
  uVar17 = (ulonglong)*(uint *)(lVar10 + 0x614);
  while ((uint)uVar18 < (uint)uVar17) {
    uVar16 = (ulonglong)((uint)uVar17 - 1);
    puVar1 = (undefined8 *)(*plVar11 + uVar17 * 0x48);
    puVar2 = (undefined8 *)(*plVar11 + uVar16 * 0x48);
    uVar23 = *puVar2;
    uVar22 = puVar2[3];
    uVar21 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar23;
    puVar1[3] = uVar22;
    puVar1[2] = uVar21;
    uVar23 = puVar2[4];
    uVar22 = puVar2[7];
    uVar21 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar23;
    puVar1[7] = uVar22;
    puVar1[6] = uVar21;
    puVar1[8] = puVar2[8];
    uVar17 = uVar16;
  }
  local_c0[0] = 0;
  *(ulonglong *)(*plVar11 + uVar18 * 0x48) = uVar20;
  lVar19 = *plVar11 + uVar18 * 0x48;
  *(ulonglong *)(lVar19 + 0x10) = CONCAT44(uStack_84,iStack_88);
  *(ulonglong *)(lVar19 + 8) = CONCAT44(iStack_8c,local_90);
  *(ulonglong *)(lVar19 + 0x20) = CONCAT44(local_74,uStack_78);
  *(ulonglong *)(lVar19 + 0x18) = CONCAT44(local_7c,uStack_80);
  *(ulonglong *)(lVar19 + 0x30) = CONCAT44(uStack_64,uStack_68);
  *(ulonglong *)(lVar19 + 0x28) = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)(lVar19 + 0x38) = local_60;
  plVar12 = *(longlong **)
             (*(longlong *)(lVar10 + 0x618) + (ulonglong)*(uint *)(lVar10 + 0x620) * 0x18c0 + 0x6b0)
  ;
  (**(code **)(*plVar12 + 0xb8))(plVar12,&local_90,local_c0);
  *(longlong *)(*plVar11 + uVar18 * 0x48 + 0x40) = local_c0[0];
  lVar19 = uVar18 * 0x48;
  *(int *)(lVar10 + 0x614) = *(int *)(lVar10 + 0x614) + 1;
LAB_180033750:
  lVar19 = *(longlong *)(lVar19 + *(longlong *)(lVar10 + 0x608) + 0x40);
  local_c0[0] = lVar19;
  if (*(longlong *)(param_1 + 0x3128) != lVar19) {
    FUN_180050680(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  *(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  (ulonglong)*(uint *)(param_1 + 0x18),param_4,local_c0);
    *(longlong *)(param_1 + 0x3128) = lVar19;
  }
  lVar19 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + 0x30a8);
  if (*(longlong *)(param_1 + 0x3130) != lVar19) {
    *(longlong *)(param_1 + 0x3130) = lVar19;
    FUN_1800506c8(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  *(int *)(param_1 + 0x18) + 0x14,1,param_1 + 0x3130);
  }
  lVar19 = *(longlong *)(param_1 + (ulonglong)param_3 * 8 + 0x30a8);
  if (*(longlong *)(param_1 + 0x3138) != lVar19) {
    *(longlong *)(param_1 + 0x3138) = lVar19;
    FUN_1800506c8(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  *(int *)(param_1 + 0x18) + 0x18,1,param_1 + 0x3138);
  }
  return;
}

