/*
 * FUN_180034af8 at 180034af8
 * undefined FUN_180034af8(void)
 * Address ranges: 180034af8-1800350af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180034af8(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined *local_2f0;
  undefined4 local_2e8;
  uint uStack_2e4;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  ulonglong local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined4 local_2b0 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined2 local_294;
  undefined2 local_292;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined1 auStack_278 [8];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  longlong lStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  longlong lStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  longlong lStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  longlong lStack_1f8;
  longlong local_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  longlong lStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  longlong local_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  longlong lStack_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  
  lVar3 = FUN_1800eceb0(DAT_18024e2d0,0);
  *(longlong *)(param_1 + 0x188) = lVar3;
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = lVar3 + (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
  *(longlong *)(param_1 + 0x198) = lVar3 + 0x900;
  FUN_180101df0(lVar3 + 0x1bc0);
  uVar9 = 0;
  iVar2 = FUN_1800e7220(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x1930),3);
  *(int *)(param_1 + 0x180) = iVar2;
  if (iVar2 != -1) {
    lVar3 = param_1 + 0x168;
    do {
      local_2e0 = 0x40000001c;
      local_2d8 = (undefined8 *)CONCAT44(local_2d8._4_4_,0x1688);
      local_2b0[0] = 3;
      local_2d0 = 0xffffffff00000000;
      uVar11 = 1;
      local_2c0 = 0;
      uVar1 = 3;
      if (uVar9 == 0) {
LAB_180034bd4:
        local_2b0[0] = uVar1;
        local_294 = 1;
      }
      else {
        if (uVar9 != 1) {
          if (uVar9 == 2) {
            local_2e0 = 0x80000001c;
            uVar1 = 4;
          }
          goto LAB_180034bd4;
        }
        local_2e0 = 0x90000001c;
        uVar11 = 6;
        local_294 = 6;
      }
      uStack_2c8 = 0;
      local_290 = 0x10000001c;
      uStack_288 = 0;
      local_2a8 = 0;
      uStack_2a0 = 1;
      local_298 = 1;
      local_292 = 1;
      local_280 = 0;
      lVar4 = FUN_1800e7ca8(*(longlong *)(param_1 + 0x188) + 0x6d0,*(undefined4 *)(param_1 + 400),
                            local_2b0);
      *(longlong *)(lVar3 + (ulonglong)uVar9 * 8) = lVar4;
      if (lVar4 == 0) goto joined_r0x000180034cd0;
      local_300 = 0;
      uStack_2f8 = 0x100000000;
      local_2f0 = (undefined *)0x100000001;
      uVar10 = 0;
      do {
        FUN_1800ebbb8(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x1518),
                      *(undefined8 *)(param_1 + (ulonglong)uVar9 * 8 + 0x168),uVar10,
                      *(longlong *)(param_1 + 0x198) + 0x16d0,&local_300,&DAT_180249e44,0,0);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
      puVar5 = (undefined8 *)
               FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x1930),auStack_278,
                             *(undefined4 *)(param_1 + 0x180),uVar9);
      plVar6 = *(longlong **)
                (*(longlong *)(param_1 + 0x188) + (ulonglong)*(uint *)(param_1 + 400) * 0x20 + 0x6d0
                );
      (**(code **)(*plVar6 + 0x90))
                (plVar6,*(undefined8 *)(lVar3 + (ulonglong)uVar9 * 8),&local_2e0,*puVar5);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
    uVar9 = 1;
  }
LAB_180034d3c:
  uVar7 = FUN_1800e8548(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1518) + 8,0);
  if (uVar9 != 0) {
    uVar8 = FUN_1800ed058(uVar7,DAT_18024e2d0,0x12,&DAT_180249da0,param_1 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_1800ed058(uVar8,DAT_18024e2d0,6,&DAT_180249d88,param_1 + 0x120);
      if ((((uVar8 & 1) != 0) &&
          (uVar8 = FUN_1800ed058(uVar8,DAT_18024e2d0,0x11,&DAT_180249d60,param_1 + 0x98),
          (uVar8 & 1) != 0)) &&
         (uVar8 = FUN_1800ed058(uVar8,DAT_18024e2d0,1,&DAT_180249d54,param_1 + 0x160),
         (uVar8 & 1) != 0)) {
        puVar5 = (undefined8 *)FUN_180102f80(0x10);
        *(undefined8 **)(param_1 + 0x158) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          local_300 = CONCAT44(local_300._4_4_,2);
          local_270 = local_300;
          lStack_258 = (ulonglong)uStack_2e4 << 0x20;
          local_300 = CONCAT44(local_300._4_4_,2);
          local_250 = local_300;
          uStack_268 = 0;
          puStack_260 = local_2f0;
          lStack_238 = (ulonglong)uStack_2e4 << 0x20;
          *puVar5 = &PTR_s_POSITION_18024c420;
          local_300 = CONCAT44(local_300._4_4_,2);
          uStack_248 = 1;
          puStack_240 = local_2f0;
          lStack_218 = (ulonglong)uStack_2e4 << 0x20;
          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 8) = 2;
          uStack_228 = 2;
          local_230 = local_300;
          puStack_220 = local_2f0;
          local_300 = CONCAT44(local_300._4_4_,2);
          lStack_1f8 = (ulonglong)uStack_2e4 << 0x20;
          uStack_208 = 0x200000003;
          local_210 = local_300;
          puStack_200 = local_2f0;
          if (*(char *)(param_1 + 0x1c8) == '\0') {
            local_300 = CONCAT44(local_300._4_4_,2);
            uStack_2f8 = 0x200000004;
          }
          else {
            local_2f0 = &DAT_180234218;
            local_300 = (ulonglong)local_300._4_4_ << 0x20;
            uStack_2f8 = 0x200000001;
          }
          local_1f0 = local_300;
          lStack_1d8 = (ulonglong)uStack_2e4 << 0x20;
          uVar9 = local_300._4_4_;
          local_300 = CONCAT44(local_300._4_4_,2);
          local_1d0 = local_300;
          uStack_1e8 = uStack_2f8;
          puStack_1e0 = local_2f0;
          uStack_1b8 = CONCAT44(uStack_2e4,5);
          local_300 = CONCAT44(local_300._4_4_,2);
          local_1b0 = local_300;
          uStack_1c8 = 0x100000003;
          puStack_1c0 = local_2f0;
          uStack_198 = CONCAT44(uStack_2e4,5);
          local_300 = CONCAT44(local_300._4_4_,2);
          local_190 = local_300;
          uStack_1a8 = 0x100000004;
          puStack_1a0 = local_2f0;
          uStack_178 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)local_300._4_4_ << 0x20;
          local_170 = local_300;
          uStack_188 = 0x100000005;
          puStack_180 = local_2f0;
          uStack_158 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar9 << 0x20;
          local_150 = local_300;
          uStack_168 = 0x100000001;
          puStack_160 = &DAT_1802341e8;
          uStack_138 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar9 << 0x20;
          local_130 = local_300;
          uStack_148 = 0x100000001;
          puStack_140 = &DAT_180234200;
          uStack_118 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar9 << 0x20;
          local_110 = local_300;
          uStack_128 = 0x100000001;
          puStack_120 = &DAT_1802341b8;
          uStack_f8 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar9 << 0x20;
          local_f0 = local_300;
          uStack_108 = 0x100000001;
          puStack_100 = &DAT_1802341d0;
          uStack_d8 = CONCAT44(uStack_2e4,5);
          local_300 = (ulonglong)uVar9 << 0x20;
          local_d0 = local_300;
          uStack_e8 = 0x100000001;
          puStack_e0 = &DAT_180234188;
          lStack_b8 = (ulonglong)uStack_2e4 << 0x20;
          local_300 = (ulonglong)uVar9 << 0x20;
          local_b0 = local_300;
          uStack_c8 = 0x100000001;
          puStack_c0 = &DAT_1802341a0;
          lStack_98 = (ulonglong)uStack_2e4 << 0x20;
          local_300 = (ulonglong)uVar9 << 0x20;
          local_90 = local_300;
          uStack_a8 = 0x100000001;
          puStack_a0 = &DAT_180234158;
          lStack_78 = (ulonglong)uStack_2e4 << 0x20;
          local_2f0 = &DAT_180234140;
          local_300 = (ulonglong)uVar9 << 0x20;
          local_2e0 = CONCAT44(local_2e0._4_4_,0x11);
          local_2d8 = &local_270;
          uStack_88 = 0x100000001;
          puStack_80 = &DAT_180234170;
          uStack_2f8 = 0x100000001;
          local_2e8 = 0;
          lStack_58 = (ulonglong)uStack_2e4 << 0x20;
          local_2c0 = CONCAT44(local_2c0._4_4_,0xd);
          local_2d0 = local_2d0 & 0xffffffff00000000;
          uStack_68 = 0x100000001;
          local_70 = local_300;
          puStack_60 = &DAT_180234140;
          uStack_2c8 = 0;
          lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x6b0) + 8))
                            (*(longlong *)(param_1 + 0x188) + 0x6b0,*(undefined4 *)(param_1 + 400),1
                             ,&local_2e0,0);
          *(longlong *)(param_1 + 0x1a0) = lVar3;
          if (lVar3 != 0) {
            return 1;
          }
          lVar3 = *(longlong *)(param_1 + 0x188) + (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
          *(longlong *)(param_1 + 0x198) = lVar3 + 0x900;
          FUN_1800ee848(lVar3 + 0x22d8,*(undefined8 *)(param_1 + 0x158));
          FUN_180102fc0(*(undefined8 *)(param_1 + 0x158),0x10);
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
      }
      FUN_180034aa8(param_1);
    }
    FUN_180034a18(param_1);
  }
  FUN_1800e12c8(*(undefined8 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  return 0;
joined_r0x000180034cd0:
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    (**(code **)(**(longlong **)(lVar3 + (ulonglong)uVar9 * 8) + 0x10))();
  }
  iVar2 = *(int *)(param_1 + 0x180);
  if (iVar2 != -1) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x28);
    FUN_1800e70e0(lVar3,iVar2,3);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  uVar9 = 0;
  goto LAB_180034d3c;
}

