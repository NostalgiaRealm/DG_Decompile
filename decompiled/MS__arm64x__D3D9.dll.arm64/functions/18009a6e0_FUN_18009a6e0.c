/*
 * FUN_18009a6e0 at 18009a6e0
 * undefined FUN_18009a6e0(void)
 * Address ranges: 18009a6e0-18009aedf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18009a6e0(longlong param_1,uint param_2,longlong param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint extraout_w10;
  int extraout_w11;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  longlong extraout_x15;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint local_240 [2];
  undefined8 local_238;
  undefined8 local_230;
  longlong lStack_228;
  uint local_220;
  uint uStack_21c;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  longlong local_200;
  longlong local_1f8;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  int local_1e4;
  int local_1e0;
  uint local_1dc;
  longlong local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  longlong lStack_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong local_170;
  longlong lStack_168;
  longlong local_160;
  longlong local_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong local_130;
  longlong lStack_128;
  int local_120 [6];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [32];
  undefined4 local_d0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [56];
  
  lVar13 = *(longlong *)(param_1 + 0x18);
  uStack_1c8 = 0;
  local_1d0 = 0;
  uVar8 = *(uint *)(lVar13 + 0x28);
  lVar18 = *(longlong *)(lVar13 + 0x1cf10);
  if (*(char *)(param_1 + -3) == '\0') {
    local_198 = 0;
  }
  else {
    plVar10 = (longlong *)
              FUN_1800a2c70(param_1 + -0x20,auStack_108,lVar13,param_2,param_3,param_4,param_5);
    param_3 = *plVar10;
    iVar7 = (int)plVar10[1];
    param_4 = iVar7 << 2;
    param_5 = (int)((ulonglong)plVar10[1] >> 0x20) * iVar7 * 4;
    local_198 = param_3;
  }
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                    (*(longlong **)(param_1 + 0x20),local_120,0);
  uVar21 = 0;
  if (iVar7 < 0) goto LAB_18009ae7c;
  lVar13 = lVar18 + (ulonglong)uVar8 * 0x1ac0;
  local_1a0 = lVar13 + 0x1000;
  if ((*(int *)(lVar13 + 0x1dc0) == 0) && (local_120[0] == 4)) {
    local_238 = *(undefined8 *)(param_1 + 0x20);
    lVar19 = *(longlong *)(lVar18 + 0x1b500);
    local_240[0] = param_2;
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar19 + 0x28);
    bVar6 = true;
    lVar18 = FUN_1800f2540(lVar19,&local_238);
    if (lVar18 != 0) {
      plVar10 = (longlong *)FUN_1800f2718(lVar18 + 8,local_240);
      if (plVar10 == (longlong *)0x0) {
        local_240[0] = 0xffffffff;
        plVar10 = (longlong *)FUN_1800f2718(extraout_x15 + 8,local_240);
        if (plVar10 == (longlong *)0x0) goto LAB_18009a870;
      }
      if ((*(int *)((longlong)plVar10 + 0x14) == 0) || (*(int *)(*plVar10 + 0x30) == 3)) {
        uVar11 = (**(code **)(**(longlong **)(*plVar10 + 0x18) + 0x40))();
        bVar6 = true;
        if ((ulonglong)plVar10[3] <= uVar11) goto LAB_18009a870;
      }
      bVar6 = false;
    }
LAB_18009a870:
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar19 + 0x28);
    if (bVar6) {
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                        (*(longlong **)(param_1 + 0x20),param_2,0,0);
      if (-1 < iVar7) {
        uVar8 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                          (*(longlong **)(param_1 + 0x20),param_2,0,param_3,param_4,param_5);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                  (*(longlong **)(param_1 + 0x20),param_2,0);
        uVar21 = ~uVar8 >> 0x1f;
      }
      goto LAB_18009ae7c;
    }
  }
  uVar8 = *(uint *)(param_1 + -0x18) >> (ulonglong)(param_2 & 0x1f);
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  uVar17 = *(uint *)(param_1 + -0x14) >> (ulonglong)(param_2 & 0x1f);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  uVar16 = *(uint *)(param_1 + -0x10) >> (ulonglong)(param_2 & 0x1f);
  if (uVar16 == 0) {
    uVar16 = 1;
  }
  bVar1 = (&DAT_1802316d8)[*(uint *)(param_1 + -0xc)];
  if (bVar1 != 0) {
    uVar8 = (bVar1 + uVar8) - 1 & -(uint)bVar1;
  }
  bVar1 = (&DAT_180231708)[*(uint *)(param_1 + -0xc)];
  if (bVar1 != 0) {
    uVar17 = (bVar1 + uVar17) - 1 & -(uint)bVar1;
  }
  local_200 = *(longlong *)(param_1 + 0x20);
  local_1f8 = param_1 + -0x20;
  local_230 = 0;
  lVar18 = *(longlong *)(lVar13 + 0x1e08);
  lStack_228 = (ulonglong)uVar8 << 0x20;
  local_220 = uVar17;
  uStack_21c = uVar16;
  FUN_1800eb8a0(lVar18,&local_1d0,local_200,lVar13 + 0x1fd0,&local_230,param_3,param_4,param_5,0,0);
  if (uStack_1c8 == 0) {
    FUN_180101df0(lVar13 + 0x1bc0);
    local_238 = *(undefined8 *)(lVar18 + 0xb78);
    FUN_1800e8548(lVar18 + 8,0);
    FUN_1800eee40(*(undefined8 *)(lVar18 + 0xb10),local_238);
    plVar10 = (longlong *)
              FUN_1800eb8a0(lVar18,auStack_b8,local_200,lVar13 + 0x1fd0,&local_230,param_3,param_4,
                            param_5,0,0);
    uStack_1c8 = plVar10[1];
    local_1d0 = *plVar10;
    lStack_1b8 = plVar10[3];
    local_1c0 = plVar10[2];
    lStack_1a8 = plVar10[5];
    local_1b0 = plVar10[4];
  }
  uVar21 = 1;
  if (uStack_1c8 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))(*(longlong **)(param_1 + 0x20),auStack_f0)
    ;
    func_0x00018020d2b0(local_d0);
    func_0x00018020d308(extraout_x12 & 0xffffffff);
    iVar9 = func_0x00018020d208(extraout_x12_00 & 0xffffffff);
    iVar7 = extraout_w11;
    if (extraout_w11 == 0) {
      iVar7 = iVar9;
    }
    if (extraout_w10 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18009ab94);
      (*pcVar5)();
    }
    uVar2 = 0;
    if (extraout_w10 != 0) {
      uVar2 = (iVar7 * uVar8) / extraout_w10;
    }
    uVar2 = uVar2 + 0xff & 0xffffff00;
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18009abac);
      (*pcVar5)();
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = 0x1000000 / uVar2;
    }
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18009abb8);
      (*pcVar5)();
    }
    uVar2 = 0;
    if (uVar17 != 0) {
      uVar2 = uVar3 / uVar17;
    }
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    if (uVar16 != 0) {
      local_238 = CONCAT44(uStack_21c,local_220);
      local_1dc = uVar2 * param_5;
      uVar15 = 0;
      local_240[0] = 1;
      local_210 = param_2;
      local_204 = uVar2;
      local_200 = param_3;
      local_1f0 = uVar8;
      local_1ec = uVar3;
      local_1e4 = param_5;
      local_1e0 = param_4;
      local_160 = param_1;
      do {
        if (uVar17 != 0) {
          local_1e8 = uVar15 + local_204;
          if (uVar16 <= uVar15 + local_204) {
            local_1e8 = uVar16;
          }
          uVar8 = 0;
          local_20c = uVar16;
          local_208 = uVar15;
          do {
            iVar9 = local_1e0;
            iVar7 = local_1e4;
            lVar18 = local_200;
            local_1d0 = (ulonglong)uVar8 << 0x20;
            lVar19 = *(longlong *)(lVar13 + 0x1e08);
            uStack_1c8 = CONCAT44(local_1f0,local_208);
            uVar8 = uVar8 + local_1ec;
            uVar21 = uVar8;
            if (uVar17 <= uVar8) {
              uVar21 = uVar17;
            }
            local_1c0 = CONCAT44(local_1e8,uVar21);
            uVar20 = *(undefined8 *)(local_160 + 0x20);
            FUN_1800eb8a0(lVar19,&local_190,uVar20,lVar13 + 0x1fd0,&local_1d0,local_200,local_1e0,
                          local_1e4,0,0);
            if (lStack_188 == 0) {
              FUN_180101df0(lVar13 + 0x1bc0);
              uVar22 = *(undefined8 *)(lVar19 + 0xb78);
              FUN_1800e8548(lVar19 + 8,0);
              FUN_1800eee40(*(undefined8 *)(lVar19 + 0xb10),uVar22);
              plVar10 = (longlong *)
                        FUN_1800eb8a0(lVar19,auStack_88,uVar20,lVar13 + 0x1fd0,&local_1d0,lVar18,
                                      iVar9,iVar7,0,0);
              uVar16 = local_20c;
              lStack_188 = plVar10[1];
              local_190 = *plVar10;
              lStack_178 = plVar10[3];
              lStack_180 = plVar10[2];
              lStack_168 = plVar10[5];
              local_170 = plVar10[4];
              if (lStack_188 == 0) {
                FUN_1800d17d8(s__dgVoodoo__D3D12_Core__FATAL_ERR_18023b930,
                              s_an_upload_heap_buffer_180234268);
                (*__imp_KERNEL32_dll_DebugBreak)();
                local_240[0] = 0;
                uVar15 = uVar16;
                break;
              }
            }
            lStack_148 = lStack_188;
            local_150 = local_190;
            lStack_138 = lStack_178;
            lStack_140 = lStack_180;
            lStack_128 = lStack_168;
            local_130 = local_170;
            FUN_180101630(lVar13 + 0x1bc0);
            lVar18 = local_1a0;
            bVar4 = true;
            bVar6 = *(char *)(local_1a0 + 0xdc4) == '\0';
            if (*(char *)(local_1a0 + 0xdc4) != '\0') {
              puVar12 = (undefined8 *)FUN_180101500(lVar13 + 0x1bc0,0x58);
              pcVar5 = __imp_KERNEL32_dll_Sleep;
              if (puVar12 == (undefined8 *)0x0) {
                *(undefined4 *)(lVar13 + 0x1bc0) = 0;
                (*pcVar5)(100);
                FUN_180101630(lVar13 + 0x1bc0);
                bVar6 = true;
              }
              else {
                FUN_1800015a0(lVar13 + 0x1dc0);
                puVar12[1] = 0x58;
                puVar12[2] = local_1f8;
                *(uint *)(puVar12 + 3) = local_210;
                *(longlong *)((longlong)puVar12 + 0x24) = lStack_148;
                *(longlong *)((longlong)puVar12 + 0x1c) = local_150;
                *(longlong *)((longlong)puVar12 + 0x34) = lStack_138;
                *(longlong *)((longlong)puVar12 + 0x2c) = lStack_140;
                *(longlong *)((longlong)puVar12 + 0x44) = lStack_128;
                *(longlong *)((longlong)puVar12 + 0x3c) = local_130;
                *(longlong *)((longlong)puVar12 + 0x54) = lStack_228;
                *(undefined8 *)((longlong)puVar12 + 0x4c) = local_230;
                *(undefined8 *)((longlong)puVar12 + 0x5c) = local_238;
                puVar14 = (undefined8 *)((longlong)puVar12 + 0x6bU & 0xfffffffffffffff8);
                *puVar14 = 0;
                *puVar12 = FUN_18009aee0;
                *(undefined8 **)(lVar13 + 0x1c50 + (ulonglong)*(uint *)(lVar13 + 0x1dbc) * 0x28) =
                     puVar14;
                pcVar5 = __imp_KERNEL32_dll_SetEvent;
                if (*(char *)(lVar18 + 0xdc5) != '\0') {
                  *(undefined4 *)(lVar13 + 0x1bc0) = 0;
                  (*pcVar5)(*(undefined8 *)(lVar13 + 0x1c40));
                  bVar4 = false;
                }
              }
            }
            if (bVar6) {
              plVar10 = *(longlong **)(lVar13 + 0x1da0);
              *plVar10 = local_1f8;
              *(uint *)(plVar10 + 1) = local_210;
              *(longlong *)((longlong)plVar10 + 0x14) = lStack_148;
              *(longlong *)((longlong)plVar10 + 0xc) = local_150;
              *(longlong *)((longlong)plVar10 + 0x24) = lStack_138;
              *(longlong *)((longlong)plVar10 + 0x1c) = lStack_140;
              *(longlong *)((longlong)plVar10 + 0x34) = lStack_128;
              *(longlong *)((longlong)plVar10 + 0x2c) = local_130;
              *(longlong *)((longlong)plVar10 + 0x44) = lStack_228;
              *(undefined8 *)((longlong)plVar10 + 0x3c) = local_230;
              *(undefined8 *)((longlong)plVar10 + 0x4c) = local_238;
              FUN_18009aee0();
            }
            if (bVar4) {
              *(undefined4 *)(lVar13 + 0x1bc0) = 0;
            }
            uVar16 = local_20c;
            uVar15 = local_208;
          } while (uVar8 < uVar17);
        }
        local_200 = local_200 + (ulonglong)local_1dc;
        uVar15 = uVar15 + local_204;
        uVar21 = local_240[0];
      } while (uVar15 < uVar16);
    }
    goto LAB_18009ae7c;
  }
  lStack_188 = uStack_1c8;
  local_190 = local_1d0;
  lStack_178 = lStack_1b8;
  lStack_180 = local_1c0;
  lStack_168 = lStack_1a8;
  local_170 = local_1b0;
  FUN_180101630(lVar13 + 0x1bc0);
  lVar18 = local_1a0;
  local_230 = 0;
  lStack_228 = (ulonglong)uVar8 << 0x20;
  local_220 = uVar17;
  uStack_21c = uVar16;
  if (*(char *)(local_1a0 + 0xdc4) == '\0') {
LAB_18009ab08:
    plVar10 = *(longlong **)(lVar13 + 0x1da0);
    *plVar10 = local_1f8;
    *(uint *)(plVar10 + 1) = param_2;
    *(longlong *)((longlong)plVar10 + 0x14) = lStack_188;
    *(longlong *)((longlong)plVar10 + 0xc) = local_190;
    *(longlong *)((longlong)plVar10 + 0x24) = lStack_178;
    *(longlong *)((longlong)plVar10 + 0x1c) = lStack_180;
    *(longlong *)((longlong)plVar10 + 0x34) = lStack_168;
    *(longlong *)((longlong)plVar10 + 0x2c) = local_170;
    *(longlong *)((longlong)plVar10 + 0x44) = lStack_228;
    *(undefined8 *)((longlong)plVar10 + 0x3c) = local_230;
    *(ulonglong *)((longlong)plVar10 + 0x4c) = CONCAT44(uStack_21c,local_220);
    FUN_18009aee0();
  }
  else {
    puVar12 = (undefined8 *)FUN_180101500(lVar13 + 0x1bc0,0x58);
    pcVar5 = __imp_KERNEL32_dll_Sleep;
    if (puVar12 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar13 + 0x1bc0) = 0;
      (*pcVar5)(100);
      FUN_180101630(lVar13 + 0x1bc0);
      goto LAB_18009ab08;
    }
    FUN_1800015a0(lVar13 + 0x1dc0);
    puVar12[1] = 0x58;
    puVar12[2] = local_1f8;
    *(uint *)(puVar12 + 3) = param_2;
    *(longlong *)((longlong)puVar12 + 0x24) = lStack_188;
    *(longlong *)((longlong)puVar12 + 0x1c) = local_190;
    *(longlong *)((longlong)puVar12 + 0x34) = lStack_178;
    *(longlong *)((longlong)puVar12 + 0x2c) = lStack_180;
    *(longlong *)((longlong)puVar12 + 0x44) = lStack_168;
    *(longlong *)((longlong)puVar12 + 0x3c) = local_170;
    puVar14 = (undefined8 *)((longlong)puVar12 + 0x6bU & 0xfffffffffffffff8);
    *(longlong *)((longlong)puVar12 + 0x54) = lStack_228;
    *(undefined8 *)((longlong)puVar12 + 0x4c) = local_230;
    *(ulonglong *)((longlong)puVar12 + 0x5c) = CONCAT44(uStack_21c,local_220);
    *puVar14 = 0;
    *puVar12 = FUN_18009aee0;
    *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x1dbc) * 0x28 + 0x1c50) = puVar14;
    pcVar5 = __imp_KERNEL32_dll_SetEvent;
    if (*(char *)(lVar18 + 0xdc5) != '\0') {
      *(undefined4 *)(lVar13 + 0x1bc0) = 0;
      (*pcVar5)(*(undefined8 *)(lVar13 + 0x1c40));
      goto LAB_18009ae7c;
    }
  }
  *(undefined4 *)(lVar13 + 0x1bc0) = 0;
LAB_18009ae7c:
  if (local_198 != 0) {
    thunk_FUN_180102fc0();
  }
  return uVar21;
}

