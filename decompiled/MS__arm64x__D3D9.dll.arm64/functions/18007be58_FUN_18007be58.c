/*
 * FUN_18007be58 at 18007be58
 * undefined FUN_18007be58(void)
 * Address ranges: 18007be58-18007c1b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007be58(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  float fVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_110 [4];
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint local_70;
  uint uStack_6c;
  
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if ((*(longlong *)(param_2 + 0x14) != 0) || (*(longlong *)(param_2 + 0x16) != 0)) {
    FUN_1800e2bd8(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),4,&local_130,0)
    ;
  }
  if ((param_5 & 1) == 0) {
    uStack_c8 = *(undefined8 *)(param_2 + 0x14);
    uStack_c0 = *(undefined8 *)(param_2 + 0x16);
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_1800e2930(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),0,0x10,
                  &local_f0);
  }
  local_130 = *(undefined8 *)(param_2 + 0xe);
  uStack_128 = *(undefined8 *)(param_2 + 0x10);
  FUN_1800e2bd8(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),4,&local_130,
                *(undefined8 *)(param_2 + 0x1a));
  FUN_1800e2ac8(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),5,
                *(undefined8 *)(param_1 + 0x1d068),*(undefined8 *)(param_1 + 0x1d060),param_3,0);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar2 + 0x80))(plVar2,0,1,param_1 + 120000);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar2 + 0x38))(plVar2,0,1,param_1 + 120000);
  FUN_1800e29b0(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
  FUN_1800e2a70(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),0,0);
  plVar2 = *(longlong **)(param_2 + 0xc);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x18);
  }
  (**(code **)(*plVar2 + 0x50))(plVar2,&local_70);
  local_148 = 0;
  local_138 = 0;
  local_134 = 0x3f800000;
  local_70 = local_70 >> (ulonglong)(param_2[8] & 0x1f);
  uStack_6c = uStack_6c >> (ulonglong)(param_2[8] & 0x1f);
  if (local_70 == 0) {
    local_70 = 1;
  }
  if (uStack_6c == 0) {
    uStack_6c = 1;
  }
  local_140 = (float)(int)local_70;
  fStack_13c = (float)(int)uStack_6c;
  FUN_1800e2798(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),&local_148);
  *(float *)(param_1 + 0x1ce44) = (float)(int)uStack_6c;
  *(float *)(param_1 + 0x1ce40) = (float)(int)local_70;
  *(undefined4 *)(param_1 + 0x1cea0) = param_2[10];
  *(undefined4 *)(param_1 + 0x1cea4) = param_2[0xb];
  *(float *)(param_1 + 0x1cef0) = (float)(uint)param_2[10];
  *(float *)(param_1 + 0x1cef4) = (float)(uint)param_2[0xb];
  fVar1 = (float)param_2[4];
  uVar3 = SUB41(fVar1,0);
  uVar4 = (undefined1)((uint)fVar1 >> 8);
  uVar5 = (undefined1)((uint)fVar1 >> 0x10);
  uVar6 = (undefined1)((uint)fVar1 >> 0x18);
  if (fVar1 < (float)param_2[6]) {
    fVar1 = (float)param_2[6] - 0.495;
    uVar3 = SUB41(fVar1,0);
    uVar4 = (undefined1)((uint)fVar1 >> 8);
    uVar5 = (undefined1)((uint)fVar1 >> 0x10);
    uVar6 = (undefined1)((uint)fVar1 >> 0x18);
  }
  *(uint *)(param_1 + 0x1cea8) = CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3)));
  fVar1 = (float)param_2[5];
  uVar3 = SUB41(fVar1,0);
  uVar4 = (undefined1)((uint)fVar1 >> 8);
  uVar5 = (undefined1)((uint)fVar1 >> 0x10);
  uVar6 = (undefined1)((uint)fVar1 >> 0x18);
  if (fVar1 < (float)param_2[7]) {
    fVar1 = (float)param_2[7] - 0.495;
    uVar3 = SUB41(fVar1,0);
    uVar4 = (undefined1)((uint)fVar1 >> 8);
    uVar5 = (undefined1)((uint)fVar1 >> 0x10);
    uVar6 = (undefined1)((uint)fVar1 >> 0x18);
  }
  *(uint *)(param_1 + 0x1ceac) = CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3)));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar2 + 0x180))
            (plVar2,*(undefined8 *)(param_1 + 120000),0,0,param_1 + 0x1ce40,0xd0,0xd0);
  local_188 = *param_2;
  uStack_184 = param_2[1];
  local_178 = param_2[2];
  uStack_164 = param_2[3];
  local_180 = param_2[4];
  uStack_17c = param_2[5];
  local_170 = param_2[6];
  uStack_15c = param_2[7];
  local_110[0] = *(int *)(param_1 + 0x1cf00);
  if (local_110[0] == 0x100) {
    *(undefined4 *)(param_1 + 0x1cf00) = 0;
    local_110[0] = 0;
  }
  local_110[0] = local_110[0] * 0x40;
  local_110[1] = 0;
  local_110[2] = 0;
  local_110[3] = local_110[0] + 0x40;
  local_100 = 0x100000001;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  uStack_174 = uStack_184;
  uStack_16c = uStack_17c;
  local_168 = local_188;
  local_160 = local_180;
  local_158 = local_178;
  uStack_154 = uStack_164;
  local_150 = local_170;
  uStack_14c = uStack_15c;
  (**(code **)(*plVar2 + 0x180))
            (plVar2,*(undefined8 *)(param_1 + 0x1d4b8),0,local_110,&local_188,0x40,0x40);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar2 + 0x68))(plVar2,4,*(int *)(param_1 + 0x1cf00) << 2);
  *(int *)(param_1 + 0x1cf00) = *(int *)(param_1 + 0x1cf00) + 1;
  return;
}

