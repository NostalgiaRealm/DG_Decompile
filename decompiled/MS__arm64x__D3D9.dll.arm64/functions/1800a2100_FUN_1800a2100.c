/*
 * FUN_1800a2100 at 1800a2100
 * undefined FUN_1800a2100(void)
 * Address ranges: 1800a2100-1800a238f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800a2100(longlong param_1,longlong param_2,int param_3,undefined4 param_4,int param_5,
             undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_130;
  undefined4 local_128;
  longlong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d0;
  longlong lStack_c8;
  int local_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar5 = func_0x0001801b91a0();
  local_120 = param_2;
  if (lVar5 != 0) {
    local_128 = *(undefined4 *)(param_1 + 0x28);
    local_130 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_e8 = 0xffffffff00000000;
    local_e0 = 0xffffffff;
    local_f0 = 0;
    local_ec = 0;
    FUN_1800e54c0(*(undefined8 *)(param_1 + 0x20),&local_130);
    return 1;
  }
  local_b4 = param_6;
  lStack_c8 = FUN_1800e62a0(*(undefined8 *)(param_1 + 0x20));
  uStack_ac = 1;
  uStack_a8 = 1;
  local_128 = *(undefined4 *)(param_1 + 0x28);
  local_e8 = 0xffffffff00000000;
  local_e0 = 0xffffffff;
  uStack_a3 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_c0 = param_3;
  iStack_bc = param_5;
  local_b8 = param_4;
  local_b0 = param_7;
  uStack_a4 = param_8;
  local_d0 = FUN_1800e54c0(*(undefined8 *)(param_1 + 0x20),&local_130);
  if (local_d0 == 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    if (param_3 < 4) {
      local_68 = *(undefined4 *)(&DAT_180231450 + (longlong)param_3 * 4);
    }
    else {
      local_68 = 0;
    }
    local_50 = *(undefined4 *)(lVar5 + 0xde);
    uStack_54 = *(undefined4 *)(lVar5 + 0xda);
    local_5c = *(undefined1 *)(lVar5 + 0x26);
    uStack_64 = *(undefined4 *)(&DAT_180232f18 + (longlong)*(int *)(lVar5 + 0xce) * 4);
    uStack_80 = 0x100000001;
    local_88 = 0x100000001;
    local_70 = *(undefined4 *)(&DAT_180232ef0 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
    local_98 = *(undefined4 *)(param_1 + 0x28);
    local_58 = 0;
    uStack_6c = 0;
    local_78 = 0x100000000;
    local_60 = (uint)(param_5 == 1);
    local_5b = *(int *)(lVar5 + 0x18) == 1;
    local_a0 = param_1;
    local_90 = param_2;
    local_d0 = FUN_1800e54c0(*(undefined8 *)(param_1 + 0x20),&local_a0);
    if (local_d0 != 0) {
      FUN_1800e69c8(*(undefined8 *)(param_1 + 0x20),local_d0,param_1 + 0x1c240,param_1 + 0x18);
      goto LAB_1800a2278;
    }
LAB_1800a2330:
    uVar6 = 0;
  }
  else {
LAB_1800a2278:
    iVar2 = *(int *)(param_1 + 0x100bc);
    if (*(int *)(param_1 + 0x100b8) == iVar2) {
      uVar3 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar3 = 0x10;
      }
      lVar5 = CONCAT44(0,uVar3) * 0x30;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = CONCAT44(0,uVar3);
      if (SUB168(auVar4 * ZEXT816(0x30),8) != 0) {
        lVar5 = -1;
      }
      lVar5 = thunk_FUN_180102f80(lVar5);
      if (lVar5 == 0) {
        FUN_1800e6028(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
        goto LAB_1800a2330;
      }
      thunk_FUN_180001218(lVar5,*(undefined8 *)(param_1 + 0x100b0),
                          (ulonglong)*(uint *)(param_1 + 0x100bc) * 0x30);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x100b0));
      *(longlong *)(param_1 + 0x100b0) = lVar5;
      *(uint *)(param_1 + 0x100bc) = uVar3;
    }
    plVar1 = (longlong *)
             (*(longlong *)(param_1 + 0x100b0) + (ulonglong)*(uint *)(param_1 + 0x100b8) * 0x30);
    plVar1[1] = lStack_c8;
    *plVar1 = local_d0;
    plVar1[3] = CONCAT44(local_b4,local_b8);
    plVar1[2] = CONCAT44(iStack_bc,local_c0);
    plVar1[5] = CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT14(uStack_a4,uStack_a8)));
    plVar1[4] = CONCAT44(uStack_ac,local_b0);
    *(int *)(param_1 + 0x100b8) = *(int *)(param_1 + 0x100b8) + 1;
    uVar6 = 1;
  }
  return uVar6;
}

