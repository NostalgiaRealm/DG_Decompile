/*
 * FUN_180144a68 at 180144a68
 * undefined FUN_180144a68(void)
 * Address ranges: 180144a68-18014502b;180145048-180145067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180144a68(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *extraout_x11;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong local_260;
  longlong local_230;
  uint local_228;
  longlong local_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong local_200;
  longlong lStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  longlong local_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong local_170;
  longlong lStack_168;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  
  uVar18 = param_4 & 0xffffffff;
  if ((*(int *)(param_1 + 0x28) - 2U < 2) || (*(char *)(param_1 + 0x30) != '\0')) {
    local_230 = 0;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar9 = (*extraout_x11)(param_1,1,0,&local_230);
    if (iVar9 == 0) {
      if (*(char *)(param_1 + 0x30) != '\0') {
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x24);
        param_3 = 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_230 + (ulonglong)param_3,param_2 + (ulonglong)param_3,uVar18);
    }
    return iVar9 == 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    return false;
  }
  param_2 = param_2 + (ulonglong)param_3;
  lVar13 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
  lVar15 = *(longlong *)
            (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
  lVar1 = lVar13 + 0x1fd0;
  plVar10 = (longlong *)
            FUN_18020af80(*(undefined8 *)(lVar13 + 0x1e08),auStack_160,lVar1,param_4,param_2);
  local_260 = *plVar10;
  lStack_218 = plVar10[1];
  local_220 = *plVar10;
  lStack_208 = plVar10[3];
  lStack_210 = plVar10[2];
  lStack_1f8 = plVar10[5];
  local_200 = plVar10[4];
  if (plVar10[1] == 0) {
    FUN_180221ec0(lVar13 + 0x1bc0);
    FUN_18020c3b0(*(undefined8 *)(lVar13 + 0x1e00),
                  *(undefined8 *)(*(longlong *)(lVar13 + 0x1e08) + 0xb80));
    plVar10 = (longlong *)
              FUN_18020af80(*(undefined8 *)(lVar13 + 0x1e08),auStack_130,lVar1,uVar18,param_2);
    local_260 = *plVar10;
    if (plVar10[1] == 0) {
      local_230 = *(longlong *)(*(longlong *)(lVar13 + 0x1e08) + 0xb78);
      FUN_180207560(*(longlong *)(lVar13 + 0x1e08) + 8,0);
      FUN_18020c3b0(*(undefined8 *)(lVar13 + 0x1e00),local_230);
      plVar10 = (longlong *)
                FUN_18020af80(*(undefined8 *)(lVar13 + 0x1e08),auStack_100,lVar1,uVar18,param_2);
      local_260 = *plVar10;
    }
    lStack_218 = plVar10[1];
    local_220 = *plVar10;
    lStack_208 = plVar10[3];
    lStack_210 = plVar10[2];
    lStack_1f8 = plVar10[5];
    local_200 = plVar10[4];
    local_1e0 = local_220;
    lStack_1d8 = lStack_218;
    lStack_1d0 = lStack_210;
    lStack_1c8 = lStack_208;
    local_1c0 = local_200;
    lStack_1b8 = lStack_1f8;
  }
  if (local_260 == 0) {
    if ((int)param_4 == 0) {
      return true;
    }
    uVar14 = 0;
    local_228 = param_3;
    local_1b0 = param_2;
    local_1a8 = lVar15;
    do {
      lVar15 = local_1b0;
      uVar17 = (uint)uVar18;
      uVar2 = 0x1000000;
      if (uVar17 < 0x1000001) {
        uVar2 = uVar17;
      }
      plVar10 = (longlong *)
                FUN_18020af80(*(undefined8 *)(lVar13 + 0x1e08),auStack_d0,lVar1,uVar2,
                              local_1b0 + uVar14);
      lVar21 = plVar10[5];
      lVar20 = plVar10[4];
      lVar4 = *plVar10;
      lVar5 = plVar10[1];
      lVar6 = plVar10[2];
      lVar7 = plVar10[3];
      if (plVar10[1] == 0) {
        FUN_180221ec0(lVar13 + 0x1bc0);
        FUN_18020c3b0(*(undefined8 *)(lVar13 + 0x1e00),
                      *(undefined8 *)(*(longlong *)(lVar13 + 0x1e08) + 0xb80));
        plVar10 = (longlong *)
                  FUN_18020af80(*(undefined8 *)(lVar13 + 0x1e08),auStack_a0,lVar1,uVar2,
                                lVar15 + uVar14);
        lStack_1d8 = plVar10[1];
        local_1e0 = *plVar10;
        lStack_1c8 = plVar10[3];
        lStack_1d0 = plVar10[2];
        lStack_1b8 = plVar10[5];
        local_1c0 = plVar10[4];
        if (lStack_1d8 == 0) {
          uVar16 = *(undefined8 *)(*(longlong *)(lVar13 + 0x1e08) + 0xb78);
          FUN_180207560(*(longlong *)(lVar13 + 0x1e08) + 8,0);
          FUN_18020c3b0(*(undefined8 *)(lVar13 + 0x1e00),uVar16);
          plVar10 = (longlong *)
                    FUN_18020af80(*(undefined8 *)(lVar13 + 0x1e08),auStack_70,lVar1,uVar2,
                                  lVar15 + uVar14);
          lStack_1d8 = plVar10[1];
          local_1e0 = *plVar10;
          lStack_1c8 = plVar10[3];
          lStack_1d0 = plVar10[2];
          lStack_1b8 = plVar10[5];
          local_1c0 = plVar10[4];
        }
        lStack_218 = lStack_1d8;
        local_220 = local_1e0;
        lStack_208 = lStack_1c8;
        lStack_210 = lStack_1d0;
        lVar20 = local_1c0;
        lVar21 = lStack_1b8;
        lVar4 = local_220;
        lVar5 = lStack_218;
        lVar6 = lStack_210;
        lVar7 = lStack_208;
      }
      lStack_208 = lVar7;
      lStack_210 = lVar6;
      lStack_218 = lVar5;
      local_220 = lVar4;
      local_200 = lVar20;
      lStack_1f8 = lVar21;
      if (local_220 == 0) {
        FUN_1801ed3b8(s__dgVoodoo__D3D12_Core__FATAL_ERR_180238ff0,s_an_upload_heap_buffer_18022b8d0
                     );
        thunk_FUN_180223720();
      }
      else {
        local_1f0 = *(undefined8 *)(lVar13 + 0x1e08);
        iVar9 = (int)uVar14 + local_228;
        lStack_188 = lStack_218;
        local_190 = local_220;
        lStack_178 = lStack_208;
        lStack_180 = lStack_210;
        local_1e8 = *(undefined8 *)(local_1a8 + 0x48);
        local_170 = lVar20;
        lStack_168 = lVar21;
        FUN_180221850(lVar13 + 0x1bc0);
        bVar3 = true;
        bVar8 = *(char *)(lVar13 + 0x1dc4) == '\0';
        if (*(char *)(lVar13 + 0x1dc4) != '\0') {
          puVar11 = (undefined8 *)FUN_1802218b0(lVar13 + 0x1bc0,0x50);
          local_1a0 = puVar11;
          if (puVar11 == (undefined8 *)0x0) {
            FUN_180221bb0(lVar13 + 0x1bc0);
            thunk_FUN_1802237c0(100);
            FUN_180221850(lVar13 + 0x1bc0);
            bVar8 = true;
          }
          else {
            FUN_1801042e0(lVar13 + 0x1dc0);
            puVar11[1] = 0x50;
            puVar11[2] = local_1f0;
            puVar11[3] = lVar1;
            puVar11[4] = local_1e8;
            *(int *)(puVar11 + 5) = iVar9;
            *(longlong *)((longlong)puVar11 + 0x34) = lStack_188;
            *(longlong *)((longlong)puVar11 + 0x2c) = local_190;
            *(longlong *)((longlong)puVar11 + 0x44) = lStack_178;
            *(longlong *)((longlong)puVar11 + 0x3c) = lStack_180;
            puVar12 = (undefined8 *)((longlong)puVar11 + 99U & 0xfffffffffffffff8);
            *(longlong *)((longlong)puVar11 + 0x54) = lStack_168;
            *(longlong *)((longlong)puVar11 + 0x4c) = local_170;
            DataMemoryBarrier(2,3);
            *puVar12 = 0;
            *puVar11 = FUN_180145070;
            *(undefined8 **)(lVar13 + 0x1c50 + (ulonglong)*(uint *)(lVar13 + 0x1dbc) * 0x28) =
                 puVar12;
            if (*(char *)(lVar13 + 0x1dc5) != '\0') {
              FUN_180221bb0(lVar13 + 0x1bc0);
              bVar3 = false;
              thunk_FUN_180223874(*(undefined8 *)(lVar13 + 0x1c40));
            }
          }
        }
        if (bVar8) {
          puVar11 = *(undefined8 **)(lVar13 + 0x1da0);
          *puVar11 = local_1f0;
          puVar11[1] = lVar1;
          puVar11[2] = local_1e8;
          *(int *)(puVar11 + 3) = iVar9;
          *(longlong *)((longlong)puVar11 + 0x24) = lStack_188;
          *(longlong *)((longlong)puVar11 + 0x1c) = local_190;
          *(longlong *)((longlong)puVar11 + 0x34) = lStack_178;
          *(longlong *)((longlong)puVar11 + 0x2c) = lStack_180;
          *(longlong *)((longlong)puVar11 + 0x44) = lStack_168;
          *(longlong *)((longlong)puVar11 + 0x3c) = local_170;
          FUN_180145070();
        }
        if (bVar3) {
          FUN_180221bb0(lVar13 + 0x1bc0);
        }
        uVar14 = (ulonglong)(uVar2 + (int)uVar14);
        uVar18 = (ulonglong)(uVar17 - uVar2);
      }
    } while ((int)uVar18 != 0);
    return true;
  }
  uVar19 = *(undefined8 *)(lVar15 + 0x48);
  uVar16 = *(undefined8 *)(lVar13 + 0x1e08);
  FUN_180221850(lVar13 + 0x1bc0);
  if (*(char *)(lVar13 + 0x1dc4) != '\0') {
    puVar11 = (undefined8 *)FUN_1802218b0(lVar13 + 0x1bc0,0x50);
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar13 + 0x1dc0);
      puVar11[1] = 0x50;
      puVar11[2] = uVar16;
      puVar11[3] = lVar1;
      puVar11[4] = uVar19;
      *(uint *)(puVar11 + 5) = param_3;
      *(longlong *)((longlong)puVar11 + 0x34) = lStack_218;
      *(longlong *)((longlong)puVar11 + 0x2c) = local_220;
      *(longlong *)((longlong)puVar11 + 0x44) = lStack_208;
      *(longlong *)((longlong)puVar11 + 0x3c) = lStack_210;
      *(longlong *)((longlong)puVar11 + 0x54) = lStack_1f8;
      *(longlong *)((longlong)puVar11 + 0x4c) = local_200;
      puVar12 = (undefined8 *)((longlong)puVar11 + 99U & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar12 = 0;
      *puVar11 = FUN_180145070;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x1dbc) * 0x28 + 0x1c50) = puVar12;
      if (*(char *)(lVar13 + 0x1dc5) != '\0') {
        FUN_180221bb0(lVar13 + 0x1bc0);
        thunk_FUN_180223874(*(undefined8 *)(lVar13 + 0x1c40));
        return true;
      }
      goto LAB_180144cd8;
    }
    FUN_180221bb0(lVar13 + 0x1bc0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar13 + 0x1bc0);
  }
  puVar11 = *(undefined8 **)(lVar13 + 0x1da0);
  *puVar11 = uVar16;
  puVar11[1] = lVar1;
  puVar11[2] = uVar19;
  *(uint *)(puVar11 + 3) = param_3;
  *(longlong *)((longlong)puVar11 + 0x24) = lStack_218;
  *(longlong *)((longlong)puVar11 + 0x1c) = local_220;
  *(longlong *)((longlong)puVar11 + 0x34) = lStack_208;
  *(longlong *)((longlong)puVar11 + 0x2c) = lStack_210;
  *(longlong *)((longlong)puVar11 + 0x44) = lStack_1f8;
  *(longlong *)((longlong)puVar11 + 0x3c) = local_200;
  FUN_180145070();
LAB_180144cd8:
  FUN_180221bb0(lVar13 + 0x1bc0);
  return true;
}

