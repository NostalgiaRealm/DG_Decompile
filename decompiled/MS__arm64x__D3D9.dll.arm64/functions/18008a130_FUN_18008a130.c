/*
 * FUN_18008a130 at 18008a130
 * undefined FUN_18008a130(void)
 * Address ranges: 18008a130-18008a48f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008a130(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [16];
  uint local_70;
  uint local_68;
  undefined8 local_5c;
  
  *(undefined8 *)(param_1 + 0x1cf38) = param_3;
  *(undefined8 *)(param_1 + 0x1cf30) = *(undefined8 *)(param_1 + 0x1d118);
  *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
  plVar3 = *(longlong **)(param_2 + 0xe);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x1e);
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,auStack_80);
  *(undefined8 *)(param_1 + 0x1cfb8) = local_5c;
  uVar4 = FUN_1800ede18(*(longlong *)(param_1 + 0x1cf18) + 0x19d8,param_1 + 0x1cf28);
  FUN_1800e8910(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),uVar4);
  FUN_1800e9868(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),uVar4);
  FUN_1800e98b8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),5);
  local_98 = 0;
  local_88 = 0;
  local_84 = 0x3f800000;
  local_a8 = 0;
  local_a0 = local_70 >> (ulonglong)(param_2[8] & 0x1f);
  if (local_a0 == 0) {
    local_a0 = 1;
  }
  uVar1 = (ulonglong)local_a0;
  uStack_9c = local_68 >> (ulonglong)(param_2[8] & 0x1f);
  if (uStack_9c == 0) {
    uStack_9c = 1;
  }
  uVar2 = (ulonglong)uStack_9c;
  local_90 = (float)uVar1;
  fStack_8c = (float)uVar2;
  FUN_1800ea2b0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&local_98);
  FUN_1800ea1e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&local_a8);
  *(float *)(param_1 + 0x1ce40) = (float)uVar1;
  *(float *)(param_1 + 0x1ce44) = (float)uVar2;
  *(undefined4 *)(param_1 + 0x1cea0) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x1cea4) = param_2[0xc];
  *(float *)(param_1 + 0x1cef0) = (float)(uint)param_2[0xb];
  *(float *)(param_1 + 0x1cef4) = (float)(uint)param_2[0xc];
  fVar5 = (float)param_2[4];
  if (fVar5 < (float)param_2[6]) {
    fVar5 = (float)param_2[6] - 0.495;
  }
  *(float *)(param_1 + 0x1cea8) = fVar5;
  fVar5 = (float)param_2[5];
  if (fVar5 < (float)param_2[7]) {
    fVar5 = (float)param_2[7] - 0.495;
  }
  *(float *)(param_1 + 0x1ceac) = fVar5;
  FUN_1800eef60(*(longlong *)(param_1 + 0x1cfd0) + 0x40,&local_100,2,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1500) + 0x18),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb78));
  if (local_f8 != (undefined8 *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x1ce40);
    uVar6 = *(undefined8 *)(param_1 + 0x1ce58);
    uVar4 = *(undefined8 *)(param_1 + 0x1ce50);
    local_f8[1] = *(undefined8 *)(param_1 + 0x1ce48);
    *local_f8 = uVar7;
    local_f8[3] = uVar6;
    local_f8[2] = uVar4;
    uVar7 = *(undefined8 *)(param_1 + 0x1ce60);
    uVar6 = *(undefined8 *)(param_1 + 0x1ce78);
    uVar4 = *(undefined8 *)(param_1 + 0x1ce70);
    local_f8[5] = *(undefined8 *)(param_1 + 0x1ce68);
    local_f8[4] = uVar7;
    local_f8[7] = uVar6;
    local_f8[6] = uVar4;
    uVar7 = *(undefined8 *)(param_1 + 0x1ce80);
    uVar6 = *(undefined8 *)(param_1 + 0x1ce98);
    uVar4 = *(undefined8 *)(param_1 + 0x1ce90);
    local_f8[9] = *(undefined8 *)(param_1 + 0x1ce88);
    local_f8[8] = uVar7;
    local_f8[0xb] = uVar6;
    local_f8[10] = uVar4;
    uVar7 = *(undefined8 *)(param_1 + 0x1cea0);
    uVar6 = *(undefined8 *)(param_1 + 0x1ceb8);
    uVar4 = *(undefined8 *)(param_1 + 0x1ceb0);
    local_f8[0xd] = *(undefined8 *)(param_1 + 0x1cea8);
    local_f8[0xc] = uVar7;
    local_f8[0xf] = uVar6;
    local_f8[0xe] = uVar4;
    uVar7 = *(undefined8 *)(param_1 + 0x1cec0);
    uVar6 = *(undefined8 *)(param_1 + 0x1ced8);
    uVar4 = *(undefined8 *)(param_1 + 0x1ced0);
    local_f8[0x11] = *(undefined8 *)(param_1 + 0x1cec8);
    local_f8[0x10] = uVar7;
    local_f8[0x13] = uVar6;
    local_f8[0x12] = uVar4;
    uVar7 = *(undefined8 *)(param_1 + 0x1cee0);
    uVar6 = *(undefined8 *)(param_1 + 0x1cef8);
    uVar4 = *(undefined8 *)(param_1 + 0x1cef0);
    local_f8[0x15] = *(undefined8 *)(param_1 + 0x1cee8);
    local_f8[0x14] = uVar7;
    local_f8[0x17] = uVar6;
    local_f8[0x16] = uVar4;
    if (*(int *)(*(longlong *)(param_1 + 0x1cfd0) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1cfd0) + 0x34) = 0;
    }
    FUN_1800e9a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),0,local_100);
  }
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uVar4 = 1;
  local_d8 = param_2[2];
  uStack_c4 = param_2[3];
  local_e0 = param_2[4];
  uStack_dc = param_2[5];
  local_d0 = param_2[6];
  uStack_bc = param_2[7];
  if (*(int *)(param_1 + 0x1cf00) == 0x100) {
    *(undefined4 *)(param_1 + 0x1cf00) = 0;
    uVar4 = 2;
  }
  uStack_d4 = uStack_e4;
  uStack_cc = uStack_dc;
  local_c8 = local_e8;
  local_c0 = local_e0;
  local_b8 = local_d8;
  uStack_b4 = uStack_c4;
  local_b0 = local_d0;
  uStack_ac = uStack_bc;
  FUN_1800eef60(*(longlong *)(param_1 + 0x1cfc8) + 0x40,&local_100,uVar4,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1500) + 0x18),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb78));
  if (local_f8 != (undefined8 *)0x0) {
    local_f8 = local_f8 + (ulonglong)(uint)(*(int *)(param_1 + 0x1cf00) << 2) * 2;
    *local_f8 = CONCAT44(uStack_e4,local_e8);
    local_f8[1] = CONCAT44(uStack_dc,local_e0);
    local_f8[2] = CONCAT44(uStack_d4,local_d8);
    local_f8[3] = CONCAT44(uStack_cc,local_d0);
    local_f8[4] = CONCAT44(uStack_c4,local_c8);
    local_f8[5] = CONCAT44(uStack_bc,local_c0);
    local_f8[6] = CONCAT44(uStack_b4,local_b8);
    local_f8[7] = CONCAT44(uStack_ac,local_b0);
    if (*(int *)(*(longlong *)(param_1 + 0x1cfc8) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1cfc8) + 0x34) = 0;
    }
  }
  local_f8 = (undefined8 *)0x1000004000;
  FUN_1800e9d68(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),0,1,&local_100);
  FUN_1800ea670(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),4,1,
                *(int *)(param_1 + 0x1cf00) << 2,0);
  *(int *)(param_1 + 0x1cf00) = *(int *)(param_1 + 0x1cf00) + 1;
  return;
}

