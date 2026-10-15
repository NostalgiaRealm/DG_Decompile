/*
 * FUN_1800af5d8 at 1800af5d8
 * undefined FUN_1800af5d8(void)
 * Address ranges: 1800af5d8-1800afabf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800af5d8(longlong param_1,uint param_2,int param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_d0 [4];
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
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined2 uStack_52;
  
  uStack_54 = param_3 != 0;
  uVar8 = (ulonglong)param_2;
  local_d0[0] = param_2;
  if (*(char *)(param_1 + -0x642c) == '\0') {
    lVar15 = FUN_180007c48(param_1 + -0x6520,local_d0);
    if (lVar15 == 0) {
      uVar5 = FUN_180011d10(param_1 + -0x6520,local_d0,param_1 + -0x64d0);
      uVar5 = FUN_180012460(uVar5,&local_c0,param_1 + -0x64d0);
      FUN_180011ac8(param_1 + -0x6508,local_d0,uVar5);
    }
    uVar10 = *(uint *)(param_1 + -0x64d8);
    if (uVar10 != 0) {
      uVar8 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar8 * 4) == param_2) {
          if ((int)uVar8 != -1) {
            if (param_3 != 0) {
              return 0;
            }
            lVar15 = *(longlong *)(param_1 + -0x64e0);
            uVar8 = 0;
            while (*(uint *)(lVar15 + uVar8 * 4) != param_2) {
              uVar9 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar9;
              if (7 < uVar9) {
                if ((uVar9 == 8) && (uVar10 = *(uint *)(param_1 + -0x64d8), 8 < uVar10)) {
                  uVar8 = 8;
                  do {
                    uVar9 = (uint)uVar8;
                    if (*(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar8 * 4) == param_2) {
                      while (uVar7 = uVar9 + 1, uVar7 < uVar10) {
                        *(undefined4 *)(*(longlong *)(param_1 + -0x64e0) + (ulonglong)uVar9 * 4) =
                             *(undefined4 *)
                              (*(longlong *)(param_1 + -0x64e0) + (ulonglong)uVar7 * 4);
                        uVar9 = uVar7;
                        uVar10 = *(uint *)(param_1 + -0x64d8);
                      }
                      *(int *)(param_1 + -0x64d8) = *(int *)(param_1 + -0x64d8) + -1;
                      return 0;
                    }
                    uVar8 = (ulonglong)(uVar9 + 1);
                  } while (uVar9 + 1 < uVar10);
                }
                return 0;
              }
            }
            if (8 < uVar10) {
              *(uint *)(param_1 + -0x64d8) = uVar10 - 1;
              *(undefined4 *)(lVar15 + uVar8 * 4) =
                   *(undefined4 *)(lVar15 + (ulonglong)(uVar10 - 1) * 4);
              local_d0[0] = param_2;
              lVar15 = FUN_180007c48(param_1 + -0x6520,local_d0);
              if (lVar15 == 0) {
                return 0;
              }
              (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xc0))
                        (*(longlong **)(param_1 + -0x6810),uVar8 & 0xffffffff);
              return 0;
            }
            *(undefined4 *)(lVar15 + uVar8 * 4) = 0xffffffff;
            plVar6 = *(longlong **)(param_1 + -0x6810);
            uVar5 = 0;
            local_d0[0] = param_2;
            goto LAB_1800afa98;
          }
          break;
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
      } while (uVar9 < uVar10);
    }
    if (param_3 == 0) {
      return 0;
    }
    uVar8 = 0;
    while (*(int *)(*(longlong *)(param_1 + -0x64e0) + uVar8 * 4) != -1) {
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      if (7 < uVar10) {
        if (uVar10 != 8) {
          return 0;
        }
        local_d0[0] = param_2;
        FUN_1800032e8(param_1 + -0x64e0,local_d0);
        return 0;
      }
    }
    *(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar8 * 4) = param_2;
    local_d0[0] = param_2;
    lVar15 = FUN_180007c48(param_1 + -0x6520,local_d0);
    if (lVar15 != 0) {
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xc0))
                (*(longlong **)(param_1 + -0x6810),uVar8);
    }
    plVar6 = *(longlong **)(param_1 + -0x6810);
    uVar5 = 1;
LAB_1800afa98:
    (**(code **)(*plVar6 + 200))(plVar6,uVar8,uVar5);
    return 0;
  }
  lVar15 = *(longlong *)
            (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
  uVar10 = *(uint *)(lVar15 + 0x4ac8);
  if (uVar10 != 0) {
    uVar9 = 0;
    uVar7 = uVar10;
    do {
      uVar4 = uVar7 + uVar9 >> 1;
      uVar12 = (ulonglong)uVar4;
      uVar14 = *(ulonglong *)(*(longlong *)(lVar15 + 0x4ac0) + uVar12 * 0x80);
      if (uVar14 <= uVar8) {
        if (uVar8 <= uVar14) break;
        uVar9 = uVar4 + 1;
        uVar12 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar9);
    if ((uint)uVar12 != uVar10) {
      lVar11 = *(longlong *)(lVar15 + 0x4ac0);
      uVar12 = uVar12 * 0x80;
      if ((*(ulonglong *)(lVar11 + uVar12) == uVar8) && (lVar11 + (uVar12 | 0xc) != 0)) {
        *(undefined1 *)(lVar11 + (uVar12 | 0x78)) = uStack_54;
        return 0;
      }
    }
  }
  plVar6 = (longlong *)(lVar15 + 0x4ac0);
  uStack_b8 = *(undefined8 *)(param_1 + -0x64c8);
  local_c0 = *(undefined8 *)(param_1 + -0x64d0);
  uStack_a8 = *(undefined8 *)(param_1 + -0x64b8);
  uStack_b0 = *(undefined8 *)(param_1 + -0x64c0);
  uVar12 = 0;
  local_60 = *(undefined8 *)(param_1 + -0x6470);
  uStack_98 = *(undefined8 *)(param_1 + -0x64a8);
  local_a0 = *(undefined8 *)(param_1 + -0x64b0);
  uStack_88 = *(undefined8 *)(param_1 + -0x6498);
  uStack_90 = *(undefined8 *)(param_1 + -0x64a0);
  uStack_58 = *(undefined4 *)(param_1 + -0x6468);
  uStack_78 = *(undefined8 *)(param_1 + -0x6488);
  local_80 = *(undefined8 *)(param_1 + -0x6490);
  uStack_68 = *(undefined8 *)(param_1 + -0x6478);
  uStack_70 = *(undefined8 *)(param_1 + -0x6480);
  uStack_53 = 1;
  if (uVar10 != 0) {
    uVar9 = 0;
    uVar7 = uVar10;
    do {
      uVar4 = uVar7 + uVar9 >> 1;
      uVar12 = (ulonglong)uVar4;
      uVar14 = *(ulonglong *)(*(longlong *)(lVar15 + 0x4ac0) + uVar12 * 0x80);
      if (uVar14 <= uVar8) {
        if (uVar8 <= uVar14) break;
        uVar9 = uVar4 + 1;
        uVar12 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar9);
  }
  if (((uint)uVar12 != uVar10) &&
     (puVar1 = (ulonglong *)(*plVar6 + uVar12 * 0x80), *puVar1 == uVar8)) {
    *(undefined8 *)((longlong)puVar1 + 0x14) = uStack_b8;
    *(undefined8 *)((longlong)puVar1 + 0xc) = local_c0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = uStack_a8;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = uStack_b0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = uStack_98;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = local_a0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = uStack_88;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = uStack_90;
    *(undefined8 *)((longlong)puVar1 + 0x54) = uStack_78;
    *(undefined8 *)((longlong)puVar1 + 0x4c) = local_80;
    *(undefined8 *)((longlong)puVar1 + 100) = uStack_68;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = uStack_70;
    *(ulonglong *)((longlong)puVar1 + 0x74) =
         CONCAT26(uStack_52,CONCAT15(1,CONCAT14(uStack_54,uStack_58)));
    *(undefined8 *)((longlong)puVar1 + 0x6c) = local_60;
    return 0;
  }
  uVar9 = *(uint *)(lVar15 + 0x4acc);
  if (uVar9 == uVar10) {
    uVar10 = 0x10;
    if (uVar9 != 0) {
      uVar10 = uVar9 << 1;
    }
    lVar11 = thunk_FUN_180102f80((ulonglong)uVar10 << 7);
    if (lVar11 != 0) {
      uVar14 = 0;
      if (*(int *)(lVar15 + 0x4ac8) != 0) {
        do {
          uVar9 = (int)uVar14 + 1;
          puVar2 = (undefined8 *)(*plVar6 + uVar14 * 0x80);
          puVar3 = (undefined8 *)(lVar11 + uVar14 * 0x80);
          uVar17 = *puVar2;
          uVar16 = puVar2[3];
          uVar5 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar17;
          puVar3[3] = uVar16;
          puVar3[2] = uVar5;
          uVar17 = puVar2[4];
          uVar16 = puVar2[7];
          uVar5 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar17;
          puVar3[7] = uVar16;
          puVar3[6] = uVar5;
          uVar17 = puVar2[8];
          uVar16 = puVar2[0xb];
          uVar5 = puVar2[10];
          puVar3[9] = puVar2[9];
          puVar3[8] = uVar17;
          puVar3[0xb] = uVar16;
          puVar3[10] = uVar5;
          uVar17 = puVar2[0xc];
          uVar16 = puVar2[0xf];
          uVar5 = puVar2[0xe];
          puVar3[0xd] = puVar2[0xd];
          puVar3[0xc] = uVar17;
          puVar3[0xf] = uVar16;
          puVar3[0xe] = uVar5;
          uVar14 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(lVar15 + 0x4ac8));
      }
      thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + 0x4ab8));
      *(longlong *)(lVar15 + 0x4ab8) = lVar11;
      *plVar6 = lVar11;
      *(uint *)(lVar15 + 0x4acc) = uVar10;
    }
  }
  uVar14 = (ulonglong)*(uint *)(lVar15 + 0x4ac8);
  if (*(uint *)(lVar15 + 0x4acc) == *(uint *)(lVar15 + 0x4ac8)) {
    return 0;
  }
  while ((uint)uVar12 < (uint)uVar14) {
    uVar13 = (ulonglong)((uint)uVar14 - 1);
    puVar2 = (undefined8 *)(*plVar6 + uVar14 * 0x80);
    puVar3 = (undefined8 *)(*plVar6 + uVar13 * 0x80);
    uVar17 = *puVar3;
    uVar16 = puVar3[3];
    uVar5 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar17;
    puVar2[3] = uVar16;
    puVar2[2] = uVar5;
    uVar17 = puVar3[4];
    uVar16 = puVar3[7];
    uVar5 = puVar3[6];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar17;
    puVar2[7] = uVar16;
    puVar2[6] = uVar5;
    uVar17 = puVar3[8];
    uVar16 = puVar3[0xb];
    uVar5 = puVar3[10];
    puVar2[9] = puVar3[9];
    puVar2[8] = uVar17;
    puVar2[0xb] = uVar16;
    puVar2[10] = uVar5;
    uVar17 = puVar3[0xc];
    uVar16 = puVar3[0xf];
    uVar5 = puVar3[0xe];
    puVar2[0xd] = puVar3[0xd];
    puVar2[0xc] = uVar17;
    puVar2[0xf] = uVar16;
    puVar2[0xe] = uVar5;
    uVar14 = uVar13;
  }
  lVar11 = uVar12 * 0x80;
  *(int *)(lVar15 + 0x4ac8) = *(int *)(lVar15 + 0x4ac8) + 1;
  *(uint *)(lVar11 + *plVar6 + 8) = param_2;
  lVar15 = lVar11 + *plVar6;
  *(undefined8 *)(lVar15 + 0x14) = uStack_b8;
  *(undefined8 *)(lVar15 + 0xc) = local_c0;
  *(undefined8 *)(lVar15 + 0x24) = uStack_a8;
  *(undefined8 *)(lVar15 + 0x1c) = uStack_b0;
  *(undefined8 *)(lVar15 + 0x34) = uStack_98;
  *(undefined8 *)(lVar15 + 0x2c) = local_a0;
  *(undefined8 *)(lVar15 + 0x44) = uStack_88;
  *(undefined8 *)(lVar15 + 0x3c) = uStack_90;
  *(undefined8 *)(lVar15 + 0x54) = uStack_78;
  *(undefined8 *)(lVar15 + 0x4c) = local_80;
  *(undefined8 *)(lVar15 + 100) = uStack_68;
  *(undefined8 *)(lVar15 + 0x5c) = uStack_70;
  *(ulonglong *)(lVar15 + 0x74) =
       CONCAT26(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,uStack_58)));
  *(undefined8 *)(lVar15 + 0x6c) = local_60;
  *(ulonglong *)(*plVar6 + lVar11) = uVar8;
  return 0;
}

