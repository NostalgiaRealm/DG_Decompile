/*
 * FUN_180089dfc at 180089dfc
 * undefined __fastcall FUN_180089dfc(longlong param_1, undefined4 * param_2, longlong param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 180089dfc-18008a23a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180089dfc(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 local_res20 [2];
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float local_178 [3];
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  int local_160 [4];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  uint local_e4;
  undefined1 local_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_res20[0] = param_4;
  if ((*(longlong *)(param_2 + 0x14) != 0) || (*(longlong *)(param_2 + 0x16) != 0)) {
    FUN_1800dc4ec(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),4,
                  (longlong)&local_108,0);
  }
  if ((char)param_5 == '\0') {
    FUN_1800fbea0(local_b8,0,0x80);
    local_90 = *(undefined8 *)(param_2 + 0x14);
    local_88 = *(undefined8 *)(param_2 + 0x16);
    FUN_1800dc1e8(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),0,0x10,
                  (longlong)local_b8);
  }
  local_108 = *(undefined8 *)(param_2 + 0xe);
  uStack_100 = *(undefined8 *)(param_2 + 0x10);
  FUN_1800dc4ec(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),4,
                (longlong)&local_108,*(longlong *)(param_2 + 0x1a));
  FUN_1800dc3ec(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),5,
                *(longlong *)(param_1 + 0x1d068),*(longlong *)(param_1 + 0x1d060),param_3,0);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar5 + 0x80))(plVar5,0,1,param_1 + 120000);
  uVar6 = 1;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar5 + 0x38))(plVar5,0,1,param_1 + 120000);
  puVar10 = &param_5;
  puVar8 = local_res20;
  local_res20[0] = 0x10;
  param_5 = 0;
  FUN_1800dc288(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),uVar6,1,
                param_1 + 0x1d4b8,(longlong)puVar8,(longlong)puVar10);
  uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
  uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
  FUN_1800dc380(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),0,0);
  plVar5 = *(longlong **)(param_2 + 0xc);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x18);
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_e8);
  bVar1 = (byte)param_2[8] & 0x1f;
  uVar4 = local_e8 >> bVar1;
  bVar2 = (byte)param_2[8] & 0x1f;
  if (local_e8 >> bVar1 == 0) {
    uVar4 = 1;
  }
  uVar3 = local_e4 >> bVar2;
  if (local_e4 >> bVar2 == 0) {
    uVar3 = 1;
  }
  local_178[0] = 0.0;
  local_178[1] = 0.0;
  local_168 = 0;
  local_164 = 0x3f800000;
  local_178[2] = (float)(int)uVar4;
  local_16c = (float)(int)uVar3;
  FUN_1800dc004(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),local_178);
  *(float *)(param_1 + 0x1ce44) = (float)(int)uVar3;
  *(float *)(param_1 + 0x1ce40) = (float)(int)uVar4;
  *(undefined4 *)(param_1 + 0x1cea0) = param_2[10];
  *(undefined4 *)(param_1 + 0x1cea4) = param_2[0xb];
  *(float *)(param_1 + 0x1cef0) = (float)(uint)param_2[10];
  *(float *)(param_1 + 0x1cef4) = (float)(uint)param_2[0xb];
  fVar7 = (float)param_2[6];
  if (fVar7 < (float)param_2[4] || fVar7 == (float)param_2[4]) {
    fVar7 = (float)param_2[4];
  }
  else {
    fVar7 = fVar7 - 0.495;
  }
  *(float *)(param_1 + 0x1cea8) = fVar7;
  fVar7 = (float)param_2[7];
  if (fVar7 < (float)param_2[5] || fVar7 == (float)param_2[5]) {
    fVar7 = (float)param_2[5];
  }
  else {
    fVar7 = fVar7 - 0.495;
  }
  *(float *)(param_1 + 0x1ceac) = fVar7;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar5 + 0x180))
            (plVar5,*(undefined8 *)(param_1 + 120000),0,0,(float *)(param_1 + 0x1ce40),
             CONCAT44(uVar9,0xd0),CONCAT44(uVar11,0xd0));
  local_144 = param_2[1];
  local_13c = param_2[5];
  local_148 = *param_2;
  local_140 = param_2[4];
  local_138 = param_2[2];
  local_130 = param_2[6];
  local_160[0] = *(int *)(param_1 + 0x1cf00);
  local_124 = param_2[3];
  local_11c = param_2[7];
  if (local_160[0] == 0x100) {
    *(undefined4 *)(param_1 + 0x1cf00) = 0;
    local_160[0] = 0;
  }
  local_160[0] = local_160[0] * 0x40;
  local_160[3] = local_160[0] + 0x40;
  local_160[1] = 0;
  local_160[2] = 0;
  local_150 = 1;
  local_14c = 1;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  local_134 = local_144;
  local_12c = local_13c;
  local_128 = local_148;
  local_120 = local_140;
  local_118 = local_138;
  local_114 = local_124;
  local_110 = local_130;
  local_10c = local_11c;
  (**(code **)(*plVar5 + 0x180))
            (plVar5,*(undefined8 *)(param_1 + 0x1d4b8),0,local_160,&local_148,0x40,0x40);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  (**(code **)(*plVar5 + 0x68))(plVar5,4,*(int *)(param_1 + 0x1cf00) << 2);
  *(int *)(param_1 + 0x1cf00) = *(int *)(param_1 + 0x1cf00) + 1;
  return;
}

