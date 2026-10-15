/*
 * FUN_180092c08 at 180092c08
 * undefined FUN_180092c08(void)
 * Address ranges: 180092c08-18009315b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180092c08(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5,int *param_6,longlong param_7,int param_8,undefined8 param_9,
             undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int extraout_w10;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  uint extraout_w13;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 local_1a0;
  longlong lStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined8 local_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined4 local_d0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [56];
  
  lVar13 = *(longlong *)(param_1 + 0x58);
  FUN_1800eb8a0(param_2,&local_1a0,param_3,param_5,param_6,param_7,param_8,0,param_10,0);
  if (lStack_198 == 0) {
    FUN_180101df0(lVar13 + 0x12c0);
    uVar14 = *(undefined8 *)(param_2 + 0xb78);
    FUN_1800e8548(param_2 + 8,0);
    FUN_1800eee40(*(undefined8 *)(param_2 + 0xb10),uVar14);
    puVar8 = (undefined8 *)
             FUN_1800eb8a0(param_2,auStack_b8,param_3,param_5,param_6,param_7,param_8,0,param_10,0);
    lStack_198 = puVar8[1];
    local_1a0 = *puVar8;
    uStack_188 = puVar8[3];
    local_190 = puVar8[2];
    uStack_178 = puVar8[5];
    local_180 = puVar8[4];
  }
  if (lStack_198 == 0) {
    (**(code **)(*param_3 + 0x50))(param_3,auStack_f0);
    func_0x00018020d2b0(local_d0);
    func_0x00018020d308(extraout_x11 & 0xffffffff);
    iVar7 = func_0x00018020d208(extraout_x11_00 & 0xffffffff);
    uVar10 = param_6[1];
    uVar11 = param_6[4];
    iVar1 = extraout_w10;
    if (extraout_w10 == 0) {
      iVar1 = iVar7;
    }
    if (uVar11 <= uVar10) {
      return 1;
    }
    if (extraout_w13 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180092e8c);
      (*pcVar5)();
    }
    uVar2 = 0;
    if (extraout_w13 != 0) {
      uVar2 = (uint)(iVar1 * (param_6[3] - *param_6)) / extraout_w13;
    }
    uVar2 = uVar2 + 0xff & 0xffffff00;
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = 0x1000000 / uVar2;
      }
      local_170 = param_1;
      do {
        local_1a0 = CONCAT44(uVar10,*param_6);
        lStack_198 = *(longlong *)(param_6 + 2);
        uVar10 = uVar10 + uVar3;
        uVar2 = uVar10;
        if (uVar11 <= uVar10) {
          uVar2 = uVar11;
        }
        local_190 = CONCAT44(param_6[5],uVar2);
        lVar13 = *(longlong *)(local_170 + 0x58);
        FUN_1800eb8a0(param_2,&local_160,param_3,param_5,&local_1a0,param_7,param_8,0,param_10,0);
        if (lStack_158 == 0) {
          FUN_180101df0(lVar13 + 0x12c0);
          uVar14 = *(undefined8 *)(param_2 + 0xb78);
          FUN_1800e8548(param_2 + 8,0);
          FUN_1800eee40(*(undefined8 *)(param_2 + 0xb10),uVar14);
          puVar8 = (undefined8 *)
                   FUN_1800eb8a0(param_2,auStack_88,param_3,param_5,&local_1a0,param_7,param_8,0,
                                 param_10,0);
          lStack_158 = puVar8[1];
          local_160 = *puVar8;
          uStack_148 = puVar8[3];
          uStack_150 = puVar8[2];
          uStack_138 = puVar8[5];
          local_140 = puVar8[4];
          if (lStack_158 == 0) {
            FUN_1800d17d8(s__dgVoodoo__D3D12_Core__FATAL_ERR_18023b930,
                          s_an_upload_heap_buffer_180234268);
            (*__imp_KERNEL32_dll_DebugBreak)();
            return 0;
          }
        }
        lStack_198 = *(longlong *)(param_6 + 2);
        local_1a0 = *(undefined8 *)param_6;
        uVar14 = *(undefined8 *)(param_6 + 4);
        lVar13 = *(longlong *)(local_170 + 0x58);
        lStack_118 = lStack_158;
        local_120 = local_160;
        uStack_108 = uStack_148;
        uStack_110 = uStack_150;
        local_130 = lVar13 + 0x1000;
        uStack_f8 = uStack_138;
        local_100 = local_140;
        FUN_180101630(lVar13 + 0x12c0);
        bVar4 = true;
        bVar6 = *(char *)(lVar13 + 0x14c4) == '\0';
        if (*(char *)(lVar13 + 0x14c4) != '\0') {
          puVar8 = (undefined8 *)FUN_180101500(lVar13 + 0x12c0,0x68);
          pcVar5 = __imp_KERNEL32_dll_Sleep;
          if (puVar8 == (undefined8 *)0x0) {
            *(undefined4 *)(lVar13 + 0x12c0) = 0;
            (*pcVar5)(100);
            FUN_180101630(lVar13 + 0x12c0);
            bVar6 = true;
          }
          else {
            FUN_1800015a0(lVar13 + 0x14c0);
            puVar8[1] = 0x68;
            puVar8[2] = param_2;
            puVar8[3] = param_3;
            *(undefined4 *)(puVar8 + 4) = param_4;
            *(undefined8 *)((longlong)puVar8 + 0x24) = param_5;
            *(longlong *)((longlong)puVar8 + 0x34) = lStack_118;
            *(undefined8 *)((longlong)puVar8 + 0x2c) = local_120;
            *(undefined8 *)((longlong)puVar8 + 0x44) = uStack_108;
            *(undefined8 *)((longlong)puVar8 + 0x3c) = uStack_110;
            *(undefined8 *)((longlong)puVar8 + 0x54) = uStack_f8;
            *(undefined8 *)((longlong)puVar8 + 0x4c) = local_100;
            puVar12 = (undefined8 *)((longlong)puVar8 + 0x7bU & 0xfffffffffffffff8);
            *(longlong *)((longlong)puVar8 + 100) = lStack_198;
            *(undefined8 *)((longlong)puVar8 + 0x5c) = local_1a0;
            *(undefined8 *)((longlong)puVar8 + 0x6c) = uVar14;
            *puVar12 = 0;
            *puVar8 = FUN_180093160;
            *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) =
                 puVar12;
            pcVar5 = __imp_KERNEL32_dll_SetEvent;
            if (*(char *)(local_130 + 0x4c5) != '\0') {
              *(undefined4 *)(lVar13 + 0x12c0) = 0;
              (*pcVar5)(*(undefined8 *)(lVar13 + 0x1340));
              bVar4 = false;
            }
          }
        }
        if (bVar6) {
          plVar9 = *(longlong **)(lVar13 + 0x14a0);
          *plVar9 = param_2;
          plVar9[1] = (longlong)param_3;
          *(undefined4 *)(plVar9 + 2) = param_4;
          *(undefined8 *)((longlong)plVar9 + 0x14) = param_5;
          *(longlong *)((longlong)plVar9 + 0x24) = lStack_118;
          *(undefined8 *)((longlong)plVar9 + 0x1c) = local_120;
          *(undefined8 *)((longlong)plVar9 + 0x34) = uStack_108;
          *(undefined8 *)((longlong)plVar9 + 0x2c) = uStack_110;
          *(undefined8 *)((longlong)plVar9 + 0x44) = uStack_f8;
          *(undefined8 *)((longlong)plVar9 + 0x3c) = local_100;
          *(longlong *)((longlong)plVar9 + 0x54) = lStack_198;
          *(undefined8 *)((longlong)plVar9 + 0x4c) = local_1a0;
          *(undefined8 *)((longlong)plVar9 + 0x5c) = uVar14;
          FUN_180093160();
        }
        if (bVar4) {
          *(undefined4 *)(lVar13 + 0x12c0) = 0;
        }
        uVar11 = param_6[4];
        param_7 = param_7 + (ulonglong)(uVar3 * param_8);
      } while (uVar10 < uVar11);
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180092ea4);
    (*pcVar5)();
  }
  uStack_128 = *(undefined8 *)(param_6 + 2);
  local_130 = *(longlong *)param_6;
  lVar13 = *(longlong *)(param_1 + 0x58);
  uVar14 = *(undefined8 *)(param_6 + 4);
  lStack_158 = lStack_198;
  local_160 = local_1a0;
  uStack_148 = uStack_188;
  uStack_150 = local_190;
  uStack_138 = uStack_178;
  local_140 = local_180;
  FUN_180101630(lVar13 + 0x12c0);
  if (*(char *)(lVar13 + 0x14c4) != '\0') {
    puVar8 = (undefined8 *)FUN_180101500(lVar13 + 0x12c0,0x68);
    pcVar5 = __imp_KERNEL32_dll_Sleep;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar13 + 0x14c0);
      puVar8[1] = 0x68;
      puVar8[2] = param_2;
      puVar8[3] = param_3;
      *(undefined4 *)(puVar8 + 4) = param_4;
      *(undefined8 *)((longlong)puVar8 + 0x24) = param_5;
      *(longlong *)((longlong)puVar8 + 0x34) = lStack_158;
      *(undefined8 *)((longlong)puVar8 + 0x2c) = local_160;
      *(undefined8 *)((longlong)puVar8 + 0x44) = uStack_148;
      *(undefined8 *)((longlong)puVar8 + 0x3c) = uStack_150;
      *(undefined8 *)((longlong)puVar8 + 0x54) = uStack_138;
      *(undefined8 *)((longlong)puVar8 + 0x4c) = local_140;
      puVar12 = (undefined8 *)((longlong)puVar8 + 0x7bU & 0xfffffffffffffff8);
      *(undefined8 *)((longlong)puVar8 + 100) = uStack_128;
      *(longlong *)((longlong)puVar8 + 0x5c) = local_130;
      *(undefined8 *)((longlong)puVar8 + 0x6c) = uVar14;
      *puVar12 = 0;
      *puVar8 = FUN_180093160;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar12;
      pcVar5 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar13 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar13 + 0x12c0) = 0;
        (*pcVar5)(*(undefined8 *)(lVar13 + 0x1340));
        return 1;
      }
      goto LAB_180092e1c;
    }
    *(undefined4 *)(lVar13 + 0x12c0) = 0;
    (*pcVar5)(100);
    FUN_180101630(lVar13 + 0x12c0);
  }
  plVar9 = *(longlong **)(lVar13 + 0x14a0);
  *plVar9 = param_2;
  plVar9[1] = (longlong)param_3;
  *(undefined4 *)(plVar9 + 2) = param_4;
  *(undefined8 *)((longlong)plVar9 + 0x14) = param_5;
  *(longlong *)((longlong)plVar9 + 0x24) = lStack_158;
  *(undefined8 *)((longlong)plVar9 + 0x1c) = local_160;
  *(undefined8 *)((longlong)plVar9 + 0x34) = uStack_148;
  *(undefined8 *)((longlong)plVar9 + 0x2c) = uStack_150;
  *(undefined8 *)((longlong)plVar9 + 0x44) = uStack_138;
  *(undefined8 *)((longlong)plVar9 + 0x3c) = local_140;
  *(undefined8 *)((longlong)plVar9 + 0x54) = uStack_128;
  *(longlong *)((longlong)plVar9 + 0x4c) = local_130;
  *(undefined8 *)((longlong)plVar9 + 0x5c) = uVar14;
  FUN_180093160();
LAB_180092e1c:
  *(undefined4 *)(lVar13 + 0x12c0) = 0;
  return 1;
}

