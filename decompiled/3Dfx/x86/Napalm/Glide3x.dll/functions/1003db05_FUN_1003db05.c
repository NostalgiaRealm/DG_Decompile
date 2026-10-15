/*
 * FUN_1003db05 at 1003db05
 * undefined4 __thiscall FUN_1003db05(void * this, undefined4 * param_1)
 * Address ranges: 1003db05-1003dd4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003db05(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218 [5];
  undefined4 local_204 [82];
  undefined4 local_bc;
  undefined4 local_b8 [11];
  undefined4 local_8c [13];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  puVar3 = param_1;
  local_244 = *param_1;
  piVar1 = (int *)param_1[1];
  local_8 = this;
  if (piVar1 == (int *)0x0) {
    local_240 = 0;
  }
  else {
    local_240 = (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = (int *)puVar3[1];
  if (piVar1 == (int *)0x0) {
    local_23c = 0;
  }
  else {
    local_23c = (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  piVar1 = (int *)puVar3[2];
  if (piVar1 == (int *)0x0) {
    local_238 = 0;
  }
  else {
    local_238 = (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = (int *)puVar3[2];
  if (piVar1 == (int *)0x0) {
    local_234 = 0;
  }
  else {
    local_234 = (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  piVar1 = (int *)puVar3[3];
  if (piVar1 == (int *)0x0) {
    local_230 = 0;
  }
  else {
    local_230 = (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = (int *)puVar3[3];
  if (piVar1 == (int *)0x0) {
    local_22c = 0;
  }
  else {
    local_22c = (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  piVar1 = (int *)puVar3[4];
  if (piVar1 == (int *)0x0) {
    local_228 = 0;
  }
  else {
    local_228 = (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = (int *)puVar3[4];
  if (piVar1 == (int *)0x0) {
    local_224 = 0;
  }
  else {
    local_224 = (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  piVar1 = (int *)puVar3[5];
  if (piVar1 == (int *)0x0) {
    local_220 = 0;
  }
  else {
    local_220 = (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  piVar1 = (int *)puVar3[5];
  if (piVar1 == (int *)0x0) {
    local_21c = 0;
  }
  else {
    local_21c = (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  uVar2 = puVar3[8];
  puVar5 = &DAT_1005a758;
  if (puVar3[6] != 0) {
    puVar5 = (undefined4 *)puVar3[6];
  }
  puVar6 = local_218;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)puVar3[7];
  puVar6 = local_204;
  for (iVar4 = 0x52; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)puVar3[0xb];
  puVar6 = (undefined4 *)puVar3[9];
  puVar7 = local_b8;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)puVar3[10];
  puVar7 = local_8c;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_58 = *puVar5;
  local_54 = puVar5[1];
  local_50 = puVar3[0xc];
  local_4c = puVar3[0xd];
  local_48 = puVar3[0xe];
  local_44 = puVar3[0xf];
  local_40 = puVar3[0x10];
  local_3c = puVar3[0x11];
  local_38 = puVar3[0x12];
  local_34 = puVar3[0x13];
  local_30 = puVar3[0x14];
  local_2c = puVar3[0x15];
  local_28 = puVar3[0x16];
  local_24 = puVar3[0x17];
  local_20 = puVar3[0x18];
  local_18 = puVar3[0x1a];
  local_c = puVar3[0x1b];
  local_1c = puVar3[0x19];
  local_14 = 0;
  local_10 = 0;
  param_1 = (undefined4 *)0x0;
  piVar1 = *(int **)(*(int *)((int)local_8 + 8) * 0x18 + *(int *)((int)local_8 + 4));
  local_bc = uVar2;
  (**(code **)(*piVar1 + 0x28))(piVar1,&local_244,&DAT_1005a76c,&param_1);
  return param_1;
}

