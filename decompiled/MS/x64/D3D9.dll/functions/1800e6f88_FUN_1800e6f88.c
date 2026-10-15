/*
 * FUN_1800e6f88 at 1800e6f88
 * undefined8 __fastcall FUN_1800e6f88(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800e6f88-1800e7276
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e6f88(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_res8 [4];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240 [41];
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_2b8 = *param_2;
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    local_2b0 = 0;
  }
  else {
    local_2b0 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
  }
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    local_2a8 = 0;
  }
  else {
    local_2a8 = (**(code **)(*(longlong *)param_2[1] + 0x20))();
  }
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    local_2a0 = 0;
  }
  else {
    local_2a0 = (**(code **)(*(longlong *)param_2[2] + 0x18))();
  }
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    local_298 = 0;
  }
  else {
    local_298 = (**(code **)(*(longlong *)param_2[2] + 0x20))();
  }
  if ((longlong *)param_2[3] == (longlong *)0x0) {
    local_290 = 0;
  }
  else {
    local_290 = (**(code **)(*(longlong *)param_2[3] + 0x18))();
  }
  if ((longlong *)param_2[3] == (longlong *)0x0) {
    local_288 = 0;
  }
  else {
    local_288 = (**(code **)(*(longlong *)param_2[3] + 0x20))();
  }
  if ((longlong *)param_2[4] == (longlong *)0x0) {
    local_280 = 0;
  }
  else {
    local_280 = (**(code **)(*(longlong *)param_2[4] + 0x18))();
  }
  if ((longlong *)param_2[4] == (longlong *)0x0) {
    local_278 = 0;
  }
  else {
    local_278 = (**(code **)(*(longlong *)param_2[4] + 0x20))();
  }
  if ((longlong *)param_2[5] == (longlong *)0x0) {
    local_270 = 0;
  }
  else {
    local_270 = (**(code **)(*(longlong *)param_2[5] + 0x18))();
  }
  if ((longlong *)param_2[5] == (longlong *)0x0) {
    local_268 = 0;
  }
  else {
    local_268 = (**(code **)(*(longlong *)param_2[5] + 0x20))();
  }
  lVar7 = 2;
  puVar4 = (undefined8 *)&DAT_180106e30;
  if (param_2[6] != 0) {
    puVar4 = (undefined8 *)param_2[6];
  }
  local_260 = *puVar4;
  uStack_258 = puVar4[1];
  local_250 = puVar4[2];
  uStack_248 = puVar4[3];
  puVar4 = (undefined8 *)param_2[7];
  puVar1 = local_240;
  do {
    puVar6 = puVar1;
    puVar5 = puVar4;
    uVar3 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar3;
    uVar3 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar3;
    uVar3 = puVar5[5];
    puVar6[4] = puVar5[4];
    puVar6[5] = uVar3;
    uVar3 = puVar5[7];
    puVar6[6] = puVar5[6];
    puVar6[7] = uVar3;
    uVar3 = puVar5[9];
    puVar6[8] = puVar5[8];
    puVar6[9] = uVar3;
    uVar3 = puVar5[0xb];
    puVar6[10] = puVar5[10];
    puVar6[0xb] = uVar3;
    uVar3 = puVar5[0xd];
    puVar6[0xc] = puVar5[0xc];
    puVar6[0xd] = uVar3;
    uVar3 = puVar5[0xf];
    puVar6[0xe] = puVar5[0xe];
    puVar6[0xf] = uVar3;
    lVar7 = lVar7 + -1;
    puVar4 = puVar5 + 0x10;
    puVar1 = puVar6 + 0x10;
  } while (lVar7 != 0);
  uVar3 = puVar5[0x11];
  puVar6[0x10] = puVar5[0x10];
  puVar6[0x11] = uVar3;
  uVar3 = puVar5[0x13];
  puVar6[0x12] = puVar5[0x12];
  puVar6[0x13] = uVar3;
  uVar3 = puVar5[0x15];
  puVar6[0x14] = puVar5[0x14];
  puVar6[0x15] = uVar3;
  uVar3 = puVar5[0x17];
  puVar6[0x16] = puVar5[0x16];
  puVar6[0x17] = uVar3;
  puVar6[0x18] = puVar5[0x18];
  local_f8 = *(undefined4 *)(param_2 + 8);
  puVar4 = (undefined8 *)param_2[9];
  local_f4 = *puVar4;
  uStack_ec = puVar4[1];
  local_e4 = puVar4[2];
  uStack_dc = (undefined4)puVar4[3];
  uStack_d0 = *(undefined8 *)((longlong)puVar4 + 0x24);
  puVar1 = (undefined8 *)param_2[10];
  uStack_d8 = (undefined4)*(undefined8 *)((longlong)puVar4 + 0x1c);
  uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar4 + 0x1c) >> 0x20);
  local_c8 = *puVar1;
  uStack_c0 = puVar1[1];
  local_b8 = puVar1[2];
  uStack_b0 = puVar1[3];
  local_a8 = puVar1[4];
  uStack_a0 = puVar1[5];
  local_98 = *(undefined4 *)(puVar1 + 6);
  local_64 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uStack_60 = *(undefined4 *)(param_2 + 0x10);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x84);
  uStack_58 = *(undefined4 *)(param_2 + 0x11);
  local_90 = *(undefined8 *)param_2[0xb];
  uStack_88 = ((undefined8 *)param_2[0xb])[1];
  local_80 = *(undefined4 *)(param_2 + 0xc);
  local_7c = *(undefined4 *)((longlong)param_2 + 100);
  local_78 = *(undefined4 *)(param_2 + 0xd);
  local_54 = *(undefined4 *)((longlong)param_2 + 0x8c);
  local_50 = param_2[0x12];
  local_48 = *(undefined4 *)(param_2 + 0x13);
  local_30 = *(undefined4 *)((longlong)param_2 + 0x9c);
  local_40 = 0;
  local_74 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uStack_70 = *(undefined4 *)(param_2 + 0xe);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x74);
  uStack_68 = *(undefined4 *)(param_2 + 0xf);
  local_38 = 0;
  local_res8[0] = 0;
  plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 0x10) * 0x20 + *(longlong *)(param_1 + 8));
  (**(code **)(*plVar2 + 0x50))(plVar2,&local_2b8,&DAT_180106e50,local_res8);
  return local_res8[0];
}

