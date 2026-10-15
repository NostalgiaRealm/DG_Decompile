/*
 * FUN_1801ba408 at 1801ba408
 * undefined FUN_1801ba408(void)
 * Address ranges: 1801ba408-1801ba5e7;1801ba5f8-1801ba69b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801ba408(longlong param_1,longlong param_2,int param_3,undefined4 param_4,int param_5,
             undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
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
  local_b4 = param_6;
  lVar5 = FUN_1801b91a0();
  local_118 = param_2;
  if (lVar5 != 0) {
    local_120 = *(undefined4 *)(param_1 + 0x28);
    local_128 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e0 = 0xffffffff00000000;
    local_d8 = 0xffffffff;
    local_e8 = 0;
    local_e4 = 0;
    FUN_180202770(*(undefined8 *)(param_1 + 0x20),&local_128);
    return 1;
  }
  lStack_c8 = FUN_1802036a0(*(undefined8 *)(param_1 + 0x20));
  uStack_ac = 1;
  uStack_a8 = 1;
  local_120 = *(undefined4 *)(param_1 + 0x28);
  local_e0 = 0xffffffff00000000;
  local_d8 = 0xffffffff;
  uStack_a3 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_c0 = param_3;
  iStack_bc = param_5;
  local_b8 = param_4;
  local_b0 = param_7;
  uStack_a4 = param_8;
  local_d0 = FUN_180202770(*(undefined8 *)(param_1 + 0x20),&local_128);
  if (local_d0 == 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    if (param_3 < 4) {
      local_68 = *(undefined4 *)(&DAT_18022da28 + (longlong)param_3 * 4);
    }
    else {
      local_68 = 0;
    }
    local_50 = *(undefined4 *)(lVar5 + 0xde);
    uStack_54 = *(undefined4 *)(lVar5 + 0xda);
    local_5c = *(undefined1 *)(lVar5 + 0x26);
    uStack_64 = *(undefined4 *)(&DAT_1802389e0 + (longlong)*(int *)(lVar5 + 0xce) * 4);
    uStack_80 = 0x100000001;
    local_88 = 0x100000001;
    local_70 = *(undefined4 *)(&DAT_1802389f8 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
    local_98 = *(undefined4 *)(param_1 + 0x28);
    local_58 = 0;
    uStack_6c = 0;
    local_78 = 0x100000000;
    local_5b = *(int *)(lVar5 + 0x18) == 1;
    local_60 = (uint)(param_5 == 1);
    local_a0 = param_1;
    local_90 = param_2;
    local_d0 = FUN_180202770(*(undefined8 *)(param_1 + 0x20),&local_a0);
    if (local_d0 == 0) {
      return 0;
    }
    FUN_180203e38(*(undefined8 *)(param_1 + 0x20),local_d0,param_1 + 0x1c240,param_1 + 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x100bc);
  if (*(int *)(param_1 + 0x100b8) != iVar2) {
    plVar1 = (longlong *)
             (*(longlong *)(param_1 + 0x100b0) + (ulonglong)*(uint *)(param_1 + 0x100b8) * 0x30);
    plVar1[1] = lStack_c8;
    *plVar1 = local_d0;
    plVar1[3] = CONCAT44(local_b4,local_b8);
    plVar1[2] = CONCAT44(iStack_bc,local_c0);
    plVar1[5] = CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT14(uStack_a4,uStack_a8)));
    plVar1[4] = CONCAT44(uStack_ac,local_b0);
    *(int *)(param_1 + 0x100b8) = *(int *)(param_1 + 0x100b8) + 1;
    return 1;
  }
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
  lVar5 = FUN_1802229a8(lVar5);
  if (lVar5 == 0) {
    FUN_180203408(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(lVar5,*(undefined8 *)(param_1 + 0x100b0),
                      (ulonglong)*(uint *)(param_1 + 0x100bc) * 0x30);
}

