/*
 * FUN_1801c8c00 at 1801c8c00
 * undefined FUN_1801c8c00(void)
 * Address ranges: 1801c8c00-1801c913f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801c8c00(longlong param_1,uint param_2,int param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *pcVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
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
  uVar10 = (ulonglong)param_2;
  if (*(char *)(param_1 + -0x642c) == '\0') {
    local_d0[0] = param_2;
    lVar18 = FUN_18010d668(param_1 + -0x6520,local_d0);
    if (lVar18 == 0) {
      uVar6 = FUN_18011db00(param_1 + -0x6520,local_d0,param_1 + -0x64d0);
      uVar6 = FUN_18011e250(uVar6,&local_c0,param_1 + -0x64d0);
      FUN_18011d8b0(param_1 + -0x6508,local_d0,uVar6);
    }
    uVar12 = *(uint *)(param_1 + -0x64d8);
    if (uVar12 != 0) {
      uVar10 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar10 * 4) == param_2) {
          if ((int)uVar10 != -1) {
            if (param_3 != 0) {
              return 0;
            }
            lVar18 = *(longlong *)(param_1 + -0x64e0);
            uVar10 = 0;
            while (*(uint *)(lVar18 + uVar10 * 4) != param_2) {
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
              if (7 < uVar11) {
                if ((uVar11 == 8) && (uVar12 = *(uint *)(param_1 + -0x64d8), 8 < uVar12)) {
                  uVar10 = 8;
                  do {
                    uVar11 = (uint)uVar10;
                    if (*(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar10 * 4) == param_2) {
                      while (uVar9 = uVar11 + 1, uVar9 < uVar12) {
                        *(undefined4 *)(*(longlong *)(param_1 + -0x64e0) + (ulonglong)uVar11 * 4) =
                             *(undefined4 *)
                              (*(longlong *)(param_1 + -0x64e0) + (ulonglong)uVar9 * 4);
                        uVar11 = uVar9;
                        uVar12 = *(uint *)(param_1 + -0x64d8);
                      }
                      *(int *)(param_1 + -0x64d8) = *(int *)(param_1 + -0x64d8) + -1;
                      return 0;
                    }
                    uVar10 = (ulonglong)(uVar11 + 1);
                  } while (uVar11 + 1 < uVar12);
                }
                return 0;
              }
            }
            if (8 < uVar12) {
              *(uint *)(param_1 + -0x64d8) = uVar12 - 1;
              *(undefined4 *)(lVar18 + uVar10 * 4) =
                   *(undefined4 *)(lVar18 + (ulonglong)(uVar12 - 1) * 4);
              local_d0[0] = param_2;
              lVar18 = FUN_18010d668(param_1 + -0x6520,local_d0);
              if (lVar18 == 0) {
                return 0;
              }
              uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
              (*extraout_x11)(uVar6,uVar10 & 0xffffffff);
              return 0;
            }
            *(undefined4 *)(lVar18 + uVar10 * 4) = 0xffffffff;
            local_d0[0] = param_2;
            uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            uVar7 = 0;
            uVar10 = uVar10 & 0xffffffff;
            pcVar16 = extraout_x11_00;
            goto LAB_1801c9120;
          }
          break;
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 < uVar12);
    }
    if (param_3 == 0) {
      return 0;
    }
    uVar10 = 0;
    while (*(int *)(*(longlong *)(param_1 + -0x64e0) + uVar10 * 4) != -1) {
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar12;
      if (7 < uVar12) {
        if (uVar12 != 8) {
          return 0;
        }
        local_d0[0] = param_2;
        FUN_180108518(param_1 + -0x64e0,local_d0);
        return 0;
      }
    }
    *(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar10 * 4) = param_2;
    local_d0[0] = param_2;
    lVar18 = FUN_18010d668(param_1 + -0x6520,local_d0);
    puVar5 = __hybrid_os_arm64x_dispatch_icall;
    if (lVar18 != 0) {
      uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11_01)(uVar6,uVar10);
    }
    uVar6 = (*(code *)puVar5)(0x180224000);
    uVar7 = 1;
    pcVar16 = extraout_x11_02;
LAB_1801c9120:
    (*pcVar16)(uVar6,uVar10,uVar7);
    return 0;
  }
  lVar18 = *(longlong *)
            (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
  uVar12 = *(uint *)(lVar18 + 0x4ac8);
  if (uVar12 != 0) {
    uVar11 = 0;
    uVar9 = uVar12;
    do {
      uVar4 = uVar9 + uVar11 >> 1;
      uVar14 = (ulonglong)uVar4;
      uVar8 = *(ulonglong *)(*(longlong *)(lVar18 + 0x4ac0) + uVar14 * 0x80);
      if (uVar8 <= uVar10) {
        if (uVar10 <= uVar8) break;
        uVar11 = uVar4 + 1;
        uVar14 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar9;
      }
      uVar9 = uVar4;
    } while (uVar9 != uVar11);
    if ((uint)uVar14 != uVar12) {
      lVar13 = *(longlong *)(lVar18 + 0x4ac0);
      uVar14 = uVar14 * 0x80;
      if ((*(ulonglong *)(lVar13 + uVar14) == uVar10) && (lVar13 + (uVar14 | 0xc) != 0)) {
        *(undefined1 *)(lVar13 + (uVar14 | 0x78)) = uStack_54;
        return 0;
      }
    }
  }
  plVar17 = (longlong *)(lVar18 + 0x4ac0);
  uStack_b8 = *(undefined8 *)(param_1 + -0x64c8);
  local_c0 = *(undefined8 *)(param_1 + -0x64d0);
  uStack_a8 = *(undefined8 *)(param_1 + -0x64b8);
  uStack_b0 = *(undefined8 *)(param_1 + -0x64c0);
  uVar14 = 0;
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
  if (uVar12 != 0) {
    uVar11 = 0;
    uVar9 = uVar12;
    do {
      uVar4 = uVar9 + uVar11 >> 1;
      uVar14 = (ulonglong)uVar4;
      uVar8 = *(ulonglong *)(*(longlong *)(lVar18 + 0x4ac0) + uVar14 * 0x80);
      if (uVar8 <= uVar10) {
        if (uVar10 <= uVar8) break;
        uVar11 = uVar4 + 1;
        uVar14 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar9;
      }
      uVar9 = uVar4;
    } while (uVar9 != uVar11);
  }
  if (((uint)uVar14 != uVar12) &&
     (puVar1 = (ulonglong *)(*plVar17 + uVar14 * 0x80), *puVar1 == uVar10)) {
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
  uVar11 = *(uint *)(lVar18 + 0x4acc);
  if (uVar11 == uVar12) {
    local_d0[0] = 0x10;
    if (uVar11 != 0) {
      local_d0[0] = uVar11 << 1;
    }
    lVar13 = FUN_1802229a8((ulonglong)local_d0[0] << 7);
    if (lVar13 != 0) {
      uVar8 = 0;
      if (*(int *)(lVar18 + 0x4ac8) != 0) {
        do {
          uVar12 = (int)uVar8 + 1;
          puVar2 = (undefined8 *)(*plVar17 + uVar8 * 0x80);
          puVar3 = (undefined8 *)(lVar13 + uVar8 * 0x80);
          uVar6 = *puVar2;
          uVar19 = puVar2[3];
          uVar7 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar6;
          puVar3[3] = uVar19;
          puVar3[2] = uVar7;
          uVar6 = puVar2[4];
          uVar19 = puVar2[7];
          uVar7 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar6;
          puVar3[7] = uVar19;
          puVar3[6] = uVar7;
          uVar6 = puVar2[8];
          uVar19 = puVar2[0xb];
          uVar7 = puVar2[10];
          puVar3[9] = puVar2[9];
          puVar3[8] = uVar6;
          puVar3[0xb] = uVar19;
          puVar3[10] = uVar7;
          uVar6 = puVar2[0xc];
          uVar19 = puVar2[0xf];
          uVar7 = puVar2[0xe];
          puVar3[0xd] = puVar2[0xd];
          puVar3[0xc] = uVar6;
          puVar3[0xf] = uVar19;
          puVar3[0xe] = uVar7;
          uVar8 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(lVar18 + 0x4ac8));
      }
      FUN_1802229d8(*(undefined8 *)(lVar18 + 0x4ab8));
      *(longlong *)(lVar18 + 0x4ab8) = lVar13;
      *plVar17 = lVar13;
      *(uint *)(lVar18 + 0x4acc) = local_d0[0];
    }
  }
  uVar8 = (ulonglong)*(uint *)(lVar18 + 0x4ac8);
  if (*(uint *)(lVar18 + 0x4acc) == *(uint *)(lVar18 + 0x4ac8)) {
    return 0;
  }
  while ((uint)uVar14 < (uint)uVar8) {
    uVar15 = (ulonglong)((uint)uVar8 - 1);
    puVar2 = (undefined8 *)(*plVar17 + uVar8 * 0x80);
    puVar3 = (undefined8 *)(*plVar17 + uVar15 * 0x80);
    uVar6 = *puVar3;
    uVar19 = puVar3[3];
    uVar7 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar6;
    puVar2[3] = uVar19;
    puVar2[2] = uVar7;
    uVar6 = puVar3[4];
    uVar19 = puVar3[7];
    uVar7 = puVar3[6];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar6;
    puVar2[7] = uVar19;
    puVar2[6] = uVar7;
    uVar6 = puVar3[8];
    uVar19 = puVar3[0xb];
    uVar7 = puVar3[10];
    puVar2[9] = puVar3[9];
    puVar2[8] = uVar6;
    puVar2[0xb] = uVar19;
    puVar2[10] = uVar7;
    uVar6 = puVar3[0xc];
    uVar19 = puVar3[0xf];
    uVar7 = puVar3[0xe];
    puVar2[0xd] = puVar3[0xd];
    puVar2[0xc] = uVar6;
    puVar2[0xf] = uVar19;
    puVar2[0xe] = uVar7;
    uVar8 = uVar15;
  }
  lVar13 = uVar14 * 0x80;
  *(int *)(lVar18 + 0x4ac8) = *(int *)(lVar18 + 0x4ac8) + 1;
  *(uint *)(lVar13 + *plVar17 + 8) = param_2;
  lVar18 = lVar13 + *plVar17;
  *(undefined8 *)(lVar18 + 0x14) = uStack_b8;
  *(undefined8 *)(lVar18 + 0xc) = local_c0;
  *(undefined8 *)(lVar18 + 0x24) = uStack_a8;
  *(undefined8 *)(lVar18 + 0x1c) = uStack_b0;
  *(undefined8 *)(lVar18 + 0x34) = uStack_98;
  *(undefined8 *)(lVar18 + 0x2c) = local_a0;
  *(undefined8 *)(lVar18 + 0x44) = uStack_88;
  *(undefined8 *)(lVar18 + 0x3c) = uStack_90;
  *(undefined8 *)(lVar18 + 0x54) = uStack_78;
  *(undefined8 *)(lVar18 + 0x4c) = local_80;
  *(undefined8 *)(lVar18 + 100) = uStack_68;
  *(undefined8 *)(lVar18 + 0x5c) = uStack_70;
  *(ulonglong *)(lVar18 + 0x74) =
       CONCAT26(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,uStack_58)));
  *(undefined8 *)(lVar18 + 0x6c) = local_60;
  *(ulonglong *)(*plVar17 + lVar13) = uVar10;
  return 0;
}

