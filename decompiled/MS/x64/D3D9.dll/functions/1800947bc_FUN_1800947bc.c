/*
 * FUN_1800947bc at 1800947bc
 * undefined __fastcall FUN_1800947bc(longlong param_1, undefined4 * param_2, undefined8 param_3)
 * Address ranges: 1800947bc-180094c4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800947bc(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  float fVar12;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  uint local_e8;
  uint local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  uint local_78;
  uint local_70;
  undefined8 local_64;
  
  *(undefined8 *)(param_1 + 0x1cf38) = param_3;
  *(undefined8 *)(param_1 + 0x1cf30) = *(undefined8 *)(param_1 + 0x1d118);
  *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
  plVar7 = *(longlong **)(param_2 + 0xe);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x1e);
  }
  (**(code **)(*plVar7 + 0x50))(plVar7,local_88);
  *(undefined8 *)(param_1 + 0x1cfb8) = local_64;
  uVar5 = FUN_1800e7278(*(longlong *)(param_1 + 0x1cf18) + 0x19d8,(byte *)(param_1 + 0x1cf28));
  FUN_1800e2cec(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),uVar5);
  FUN_1800e34ac(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),uVar5);
  FUN_1800e34f8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),5);
  bVar1 = (byte)param_2[8] & 0x1f;
  bVar2 = (byte)param_2[8] & 0x1f;
  local_e8 = local_78 >> bVar2;
  local_e0 = 0;
  if (local_78 >> bVar2 == 0) {
    local_e8 = 1;
  }
  local_d0 = 0;
  local_cc = 0x3f800000;
  local_e4 = local_70 >> bVar1;
  if (local_70 >> bVar1 == 0) {
    local_e4 = 1;
  }
  local_f0 = 0;
  uVar5 = (ulonglong)local_e8;
  uVar6 = (ulonglong)local_e4;
  iVar11 = 1;
  local_d8 = (float)uVar5;
  local_d4 = (float)uVar6;
  FUN_1800e3cf8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,(longlong)&local_e0);
  FUN_1800e3c4c(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,(longlong)&local_f0);
  *(float *)(param_1 + 0x1ce40) = (float)uVar5;
  *(float *)(param_1 + 0x1ce44) = (float)uVar6;
  *(undefined4 *)(param_1 + 0x1cea0) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x1cea4) = param_2[0xc];
  *(float *)(param_1 + 0x1cef0) = (float)(uint)param_2[0xb];
  *(float *)(param_1 + 0x1cef4) = (float)(uint)param_2[0xc];
  fVar12 = (float)param_2[6];
  if (fVar12 < (float)param_2[4] || fVar12 == (float)param_2[4]) {
    fVar12 = (float)param_2[4];
  }
  else {
    fVar12 = fVar12 - 0.495;
  }
  *(float *)(param_1 + 0x1cea8) = fVar12;
  fVar12 = (float)param_2[7];
  if (fVar12 < (float)param_2[5] || fVar12 == (float)param_2[5]) {
    fVar12 = (float)param_2[5];
  }
  else {
    fVar12 = fVar12 - 0.495;
  }
  *(float *)(param_1 + 0x1ceac) = fVar12;
  FUN_1800e80fc(*(longlong *)(param_1 + 0x1cfd0) + 0x40,&local_108,2,
                *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1500) + 0x18),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb78));
  puVar4 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1ce48);
    *puVar4 = *(undefined8 *)(param_1 + 0x1ce40);
    puVar4[1] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1ce58);
    puVar4[2] = *(undefined8 *)(param_1 + 0x1ce50);
    puVar4[3] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1ce68);
    puVar4[4] = *(undefined8 *)(param_1 + 0x1ce60);
    puVar4[5] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1ce78);
    puVar4[6] = *(undefined8 *)(param_1 + 0x1ce70);
    puVar4[7] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1ce88);
    puVar4[8] = *(undefined8 *)(param_1 + 0x1ce80);
    puVar4[9] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1ce98);
    puVar4[10] = *(undefined8 *)(param_1 + 0x1ce90);
    puVar4[0xb] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1cea8);
    puVar4[0xc] = *(undefined8 *)(param_1 + 0x1cea0);
    puVar4[0xd] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1ceb8);
    puVar4[0xe] = *(undefined8 *)(param_1 + 0x1ceb0);
    puVar4[0xf] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1cec8);
    puVar4[0x10] = *(undefined8 *)(param_1 + 0x1cec0);
    puVar4[0x11] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1ced8);
    puVar4[0x12] = *(undefined8 *)(param_1 + 0x1ced0);
    puVar4[0x13] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1cee8);
    puVar4[0x14] = *(undefined8 *)(param_1 + 0x1cee0);
    puVar4[0x15] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1cef8);
    puVar4[0x16] = *(undefined8 *)(param_1 + 0x1cef0);
    puVar4[0x17] = uVar3;
    if (*(int *)(*(longlong *)(param_1 + 0x1cfd0) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1cfd0) + 0x34) = 0;
    }
    FUN_1800e3624(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),0,local_108);
  }
  local_c8[1] = param_2[1];
  local_c8[3] = param_2[5];
  local_c8[0] = *param_2;
  local_c8[2] = param_2[4];
  local_b8 = param_2[2];
  local_b0 = param_2[6];
  local_a4 = param_2[3];
  local_9c = param_2[7];
  if (*(int *)(param_1 + 0x1cf00) == 0x100) {
    *(undefined4 *)(param_1 + 0x1cf00) = 0;
    iVar11 = 2;
  }
  local_b4 = local_c8[1];
  local_ac = local_c8[3];
  local_a8 = local_c8[0];
  local_a0 = local_c8[2];
  local_98 = local_b8;
  local_94 = local_a4;
  local_90 = local_b0;
  local_8c = local_9c;
  FUN_1800e80fc(*(longlong *)(param_1 + 0x1cfc8) + 0x40,&local_108,iVar11,
                *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1500) + 0x18),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb78));
  if (CONCAT44(uStack_fc,local_100) != 0) {
    puVar9 = local_c8;
    puVar10 = (undefined4 *)
              ((ulonglong)(uint)(*(int *)(param_1 + 0x1cf00) << 2) * 0x10 +
              CONCAT44(uStack_fc,local_100));
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x1cfc8) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1cfc8) + 0x34) = 0;
    }
  }
  uStack_fc = 0x10;
  local_100 = 0x4000;
  FUN_1800e384c(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),0,1,(longlong)&local_108);
  FUN_1800e4040(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),4,1,
                *(int *)(param_1 + 0x1cf00) << 2,0);
  *(int *)(param_1 + 0x1cf00) = *(int *)(param_1 + 0x1cf00) + 1;
  return;
}

