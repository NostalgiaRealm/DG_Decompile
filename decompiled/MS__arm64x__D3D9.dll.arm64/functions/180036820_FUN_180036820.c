/*
 * FUN_180036820 at 180036820
 * undefined FUN_180036820(void)
 * Address ranges: 180036820-180036d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180036820(longlong *param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong local_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong local_210;
  longlong lStack_208;
  longlong local_1e8;
  longlong local_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong local_180;
  longlong lStack_178;
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  
  uVar12 = param_4 & 0xffffffff;
  if (((int)param_1[5] - 2U < 2) || ((char)param_1[6] != '\0')) {
    local_1e8 = 0;
    iVar6 = (**(code **)(*param_1 + 0x10))(param_1,1,0,&local_1e8);
    if (iVar6 == 0) {
      if ((char)param_1[6] != '\0') {
        uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
        param_3 = 0;
      }
      thunk_FUN_180001218(local_1e8 + (ulonglong)param_3,param_2 + (ulonglong)param_3,uVar12);
      (**(code **)(*param_1 + 0x18))(param_1);
      return true;
    }
    return iVar6 == 0;
  }
  if ((int)param_1[5] != 0) {
    return false;
  }
  lVar10 = param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0;
  param_2 = param_2 + (ulonglong)param_3;
  lVar15 = *(longlong *)(param_1[7] + (ulonglong)*(uint *)((longlong)param_1 + 0x4c) * 0x10);
  lVar1 = lVar10 + 0x1fd0;
  plVar7 = (longlong *)
           FUN_1800eb578(*(undefined8 *)(lVar10 + 0x1e08),auStack_170,lVar1,param_4,param_2);
  local_230 = *plVar7;
  lStack_198 = plVar7[1];
  local_1a0 = *plVar7;
  lStack_188 = plVar7[3];
  lStack_190 = plVar7[2];
  lStack_178 = plVar7[5];
  local_180 = plVar7[4];
  if (plVar7[1] == 0) {
    FUN_180101df0(lVar10 + 0x1bc0);
    FUN_1800eee40(*(undefined8 *)(lVar10 + 0x1e00),
                  *(undefined8 *)(*(longlong *)(lVar10 + 0x1e08) + 0xb80));
    plVar7 = (longlong *)
             FUN_1800eb578(*(undefined8 *)(lVar10 + 0x1e08),auStack_140,lVar1,uVar12,param_2);
    local_230 = *plVar7;
    if (plVar7[1] == 0) {
      uVar13 = *(undefined8 *)(*(longlong *)(lVar10 + 0x1e08) + 0xb78);
      FUN_1800e8548(*(longlong *)(lVar10 + 0x1e08) + 8,0);
      FUN_1800eee40(*(undefined8 *)(lVar10 + 0x1e00),uVar13);
      plVar7 = (longlong *)
               FUN_1800eb578(*(undefined8 *)(lVar10 + 0x1e08),auStack_110,lVar1,uVar12,param_2);
      local_230 = *plVar7;
    }
    lStack_1d8 = plVar7[1];
    local_1e0 = *plVar7;
    lStack_1c8 = plVar7[3];
    lStack_1d0 = plVar7[2];
    lStack_1b8 = plVar7[5];
    local_1c0 = plVar7[4];
    local_1a0 = local_1e0;
    lStack_198 = lStack_1d8;
    lStack_190 = lStack_1d0;
    lStack_188 = lStack_1c8;
    local_180 = local_1c0;
    lStack_178 = lStack_1b8;
  }
  if (local_230 == 0) {
    uVar14 = 0;
    iVar6 = (int)param_4;
    local_1a8 = lVar15;
    while (iVar6 != 0) {
      uVar11 = (uint)uVar12;
      uVar2 = 0x1000000;
      if (uVar11 < 0x1000001) {
        uVar2 = uVar11;
      }
      local_1b0 = param_2;
      plVar7 = (longlong *)
               FUN_1800eb578(*(undefined8 *)(lVar10 + 0x1e08),auStack_e0,lVar1,uVar2,
                             param_2 + uVar14);
      lStack_228 = plVar7[1];
      local_230 = *plVar7;
      lStack_218 = plVar7[3];
      lStack_220 = plVar7[2];
      lStack_208 = plVar7[5];
      local_210 = plVar7[4];
      if (lStack_228 == 0) {
        FUN_180101df0(lVar10 + 0x1bc0);
        FUN_1800eee40(*(undefined8 *)(lVar10 + 0x1e00),
                      *(undefined8 *)(*(longlong *)(lVar10 + 0x1e08) + 0xb80));
        plVar7 = (longlong *)
                 FUN_1800eb578(*(undefined8 *)(lVar10 + 0x1e08),auStack_b0,lVar1,uVar2,
                               param_2 + uVar14);
        lStack_228 = plVar7[1];
        local_230 = *plVar7;
        lStack_218 = plVar7[3];
        lStack_220 = plVar7[2];
        lStack_208 = plVar7[5];
        local_210 = plVar7[4];
        if (lStack_228 == 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar10 + 0x1e08) + 0xb78);
          FUN_1800e8548(*(longlong *)(lVar10 + 0x1e08) + 8,0);
          FUN_1800eee40(*(undefined8 *)(lVar10 + 0x1e00),uVar13);
          plVar7 = (longlong *)
                   FUN_1800eb578(*(undefined8 *)(lVar10 + 0x1e08),auStack_80,lVar1,uVar2,
                                 param_2 + uVar14);
          lStack_228 = plVar7[1];
          local_230 = *plVar7;
          lStack_218 = plVar7[3];
          lStack_220 = plVar7[2];
          lStack_208 = plVar7[5];
          local_210 = plVar7[4];
        }
      }
      if (local_230 == 0) {
        FUN_1800d17d8(s__dgVoodoo__D3D12_Core__FATAL_ERR_18023b930,s_an_upload_heap_buffer_180234268
                     );
        (*__imp_KERNEL32_dll_DebugBreak)();
      }
      else {
        uVar13 = *(undefined8 *)(lVar10 + 0x1e08);
        iVar6 = (int)uVar14 + param_3;
        lStack_1d8 = lStack_228;
        local_1e0 = local_230;
        lStack_1c8 = lStack_218;
        lStack_1d0 = lStack_220;
        uVar16 = *(undefined8 *)(local_1a8 + 0x48);
        lStack_1b8 = lStack_208;
        local_1c0 = local_210;
        FUN_180101630(lVar10 + 0x1bc0);
        bVar3 = true;
        bVar5 = *(char *)(lVar10 + 0x1dc4) == '\0';
        if (*(char *)(lVar10 + 0x1dc4) != '\0') {
          puVar8 = (undefined8 *)FUN_180101500(lVar10 + 0x1bc0,0x50);
          pcVar4 = __imp_KERNEL32_dll_Sleep;
          if (puVar8 == (undefined8 *)0x0) {
            *(undefined4 *)(lVar10 + 0x1bc0) = 0;
            (*pcVar4)(100);
            FUN_180101630(lVar10 + 0x1bc0);
            bVar5 = true;
          }
          else {
            FUN_1800015a0(lVar10 + 0x1dc0);
            puVar8[1] = 0x50;
            puVar8[2] = uVar13;
            puVar8[3] = lVar1;
            puVar8[4] = uVar16;
            *(int *)(puVar8 + 5) = iVar6;
            puVar9 = (undefined8 *)((longlong)puVar8 + 99U & 0xfffffffffffffff8);
            *(longlong *)((longlong)puVar8 + 0x34) = lStack_1d8;
            *(longlong *)((longlong)puVar8 + 0x2c) = local_1e0;
            *(longlong *)((longlong)puVar8 + 0x44) = lStack_1c8;
            *(longlong *)((longlong)puVar8 + 0x3c) = lStack_1d0;
            *(longlong *)((longlong)puVar8 + 0x54) = lStack_1b8;
            *(longlong *)((longlong)puVar8 + 0x4c) = local_1c0;
            *puVar9 = 0;
            *puVar8 = FUN_180036d70;
            *(undefined8 **)(lVar10 + 0x1c50 + (ulonglong)*(uint *)(lVar10 + 0x1dbc) * 0x28) =
                 puVar9;
            pcVar4 = __imp_KERNEL32_dll_SetEvent;
            if (*(char *)(lVar10 + 0x1dc5) != '\0') {
              *(undefined4 *)(lVar10 + 0x1bc0) = 0;
              (*pcVar4)(*(undefined8 *)(lVar10 + 0x1c40));
              bVar3 = false;
            }
          }
        }
        if (bVar5) {
          puVar8 = *(undefined8 **)(lVar10 + 0x1da0);
          *puVar8 = uVar13;
          puVar8[1] = lVar1;
          puVar8[2] = uVar16;
          *(int *)(puVar8 + 3) = iVar6;
          *(longlong *)((longlong)puVar8 + 0x24) = lStack_1d8;
          *(longlong *)((longlong)puVar8 + 0x1c) = local_1e0;
          *(longlong *)((longlong)puVar8 + 0x34) = lStack_1c8;
          *(longlong *)((longlong)puVar8 + 0x2c) = lStack_1d0;
          *(longlong *)((longlong)puVar8 + 0x44) = lStack_1b8;
          *(longlong *)((longlong)puVar8 + 0x3c) = local_1c0;
          FUN_180036d70();
        }
        if (bVar3) {
          *(undefined4 *)(lVar10 + 0x1bc0) = 0;
        }
        uVar14 = (ulonglong)(uVar2 + (int)uVar14);
        uVar12 = (ulonglong)(uVar11 - uVar2);
      }
      param_2 = local_1b0;
      iVar6 = (int)uVar12;
    }
    return true;
  }
  uVar13 = *(undefined8 *)(lVar15 + 0x48);
  uVar16 = *(undefined8 *)(lVar10 + 0x1e08);
  FUN_180101630(lVar10 + 0x1bc0);
  if (*(char *)(lVar10 + 0x1dc4) != '\0') {
    puVar8 = (undefined8 *)FUN_180101500(lVar10 + 0x1bc0,0x50);
    pcVar4 = __imp_KERNEL32_dll_Sleep;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar10 + 0x1dc0);
      puVar8[1] = 0x50;
      puVar8[2] = uVar16;
      puVar8[3] = lVar1;
      puVar8[4] = uVar13;
      *(uint *)(puVar8 + 5) = param_3;
      *(longlong *)((longlong)puVar8 + 0x34) = lStack_198;
      *(longlong *)((longlong)puVar8 + 0x2c) = local_1a0;
      *(longlong *)((longlong)puVar8 + 0x44) = lStack_188;
      *(longlong *)((longlong)puVar8 + 0x3c) = lStack_190;
      *(longlong *)((longlong)puVar8 + 0x54) = lStack_178;
      *(longlong *)((longlong)puVar8 + 0x4c) = local_180;
      puVar9 = (undefined8 *)((longlong)puVar8 + 99U & 0xfffffffffffffff8);
      *puVar9 = 0;
      *puVar8 = FUN_180036d70;
      *(undefined8 **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0x1dbc) * 0x28 + 0x1c50) = puVar9;
      pcVar4 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar10 + 0x1dc5) != '\0') {
        *(undefined4 *)(lVar10 + 0x1bc0) = 0;
        (*pcVar4)(*(undefined8 *)(lVar10 + 0x1c40));
        return true;
      }
      goto LAB_180036a7c;
    }
    *(undefined4 *)(lVar10 + 0x1bc0) = 0;
    (*pcVar4)(100);
    FUN_180101630(lVar10 + 0x1bc0);
  }
  puVar8 = *(undefined8 **)(lVar10 + 0x1da0);
  *puVar8 = uVar16;
  puVar8[1] = lVar1;
  puVar8[2] = uVar13;
  *(uint *)(puVar8 + 3) = param_3;
  *(longlong *)((longlong)puVar8 + 0x24) = lStack_198;
  *(longlong *)((longlong)puVar8 + 0x1c) = local_1a0;
  *(longlong *)((longlong)puVar8 + 0x34) = lStack_188;
  *(longlong *)((longlong)puVar8 + 0x2c) = lStack_190;
  *(longlong *)((longlong)puVar8 + 0x44) = lStack_178;
  *(longlong *)((longlong)puVar8 + 0x3c) = local_180;
  FUN_180036d70();
LAB_180036a7c:
  *(undefined4 *)(lVar10 + 0x1bc0) = 0;
  return true;
}

