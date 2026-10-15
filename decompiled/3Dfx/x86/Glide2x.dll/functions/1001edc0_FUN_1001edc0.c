/*
 * FUN_1001edc0 at 1001edc0
 * undefined __thiscall FUN_1001edc0(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, char param_6)
 * Address ranges: 1001edc0-1001f1be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001edc0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  char cVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  iVar2 = *(int *)(*(int *)((int)this + 0x138) + 0x3188);
  local_14 = iVar2;
  bVar4 = FUN_1001615a(*(int *)((int)this + 0x138));
  *(bool *)(*(int *)((int)this + 0x138) + 0x3234) = bVar4;
  cVar1 = *(char *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2c74) =
       *(undefined4 *)((uint)(cVar1 != '\0') * 4 + 8 + param_1);
  local_5c = 0;
  local_58 = 0;
  local_54 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    local_54 = local_54 + 4.2949673e+09;
  }
  local_50 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    local_50 = local_50 + 4.2949673e+09;
  }
  local_4c = 0;
  local_48 = 0x3f800000;
  FUN_1003def1(*(int *)(iVar2 + 0x1304),1,(int)&local_5c);
  local_1c = *(undefined4 *)(param_1 + 0x20);
  local_18 = *(undefined4 *)(param_1 + 0x24);
  local_24 = 0;
  local_20 = 0;
  FUN_1003de66(*(int *)(iVar2 + 0x1304),1,(int)&local_24);
  fVar3 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2bd0) = fVar3;
  fVar3 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2bd4) = fVar3;
  uVar5 = FUN_100173cd((void *)(iVar2 + 0x1600),&DAT_100518e8);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31d8) = uVar5;
  uVar5 = FUN_1001747c((void *)(iVar2 + 0x15f0),&DAT_10051850);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31e4) = uVar5;
  uVar5 = FUN_100172bb((void *)(iVar2 + 0x1620),(uint *)&DAT_10051884);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31e0) = uVar5;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3236) = 1;
  local_8 = *(uint *)(param_1 + 0xbc);
  if (*(uint *)(param_1 + 0xb8) != local_8) {
    FUN_1003d12e(*(void **)(iVar2 + 0x1304),local_8,0,0,0x1000);
    FUN_1003d12e(*(void **)(iVar2 + 0x1304),*(uint *)(param_1 + 0xb8),0,0,0x2000);
    FUN_1003df9b(*(int *)(iVar2 + 0x1304),*(undefined4 *)(param_1 + 0xbc),0,
                 *(undefined4 *)(param_1 + 0xb8),0,*(undefined4 *)(param_1 + 4));
    local_8 = *(uint *)(param_1 + 0xbc);
  }
  local_10 = (float)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_10 = local_10 + 4.2949673e+09;
  }
  fVar3 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_10 = local_10 / fVar3;
  iVar2 = *(int *)(param_1 + 0x24);
  fVar3 = (float)*(int *)(param_1 + 0x24);
  if (iVar2 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_c = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_c = local_c + 4.2949673e+09;
  }
  local_c = local_c / fVar3;
  local_44 = (float)param_2;
  if (param_2 < 0) {
    local_44 = local_44 + 4.2949673e+09;
  }
  local_40 = (float)param_3;
  if (param_3 < 0) {
    local_40 = local_40 + 4.2949673e+09;
  }
  local_3c = (float)param_4;
  if (param_4 < 0) {
    local_3c = local_3c + 4.2949673e+09;
  }
  local_38 = (float)param_5;
  if (param_5 < 0) {
    local_38 = local_38 + 4.2949673e+09;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    local_30 = (float)(iVar2 - param_3);
    if (iVar2 - param_3 < 0) {
      local_30 = local_30 + 4.2949673e+09;
    }
    param_5 = iVar2 - param_5;
  }
  else {
    local_30 = (float)param_3;
    if (param_3 < 0) {
      local_30 = local_30 + 4.2949673e+09;
    }
  }
  local_34 = local_44 * local_10;
  local_30 = local_30 * local_c;
  local_2c = local_3c * local_10;
  local_28 = (float)param_5;
  if (param_5 < 0) {
    local_28 = local_28 + 4.2949673e+09;
  }
  local_28 = local_c * local_28;
  puVar6 = (uint *)(((cVar1 != '\0') - 1 & 0xffffffe0) + 0xfc + param_1);
  FUN_1001e81d(this,&local_44,&local_34,
               *(int *)((uint)(*(char *)(param_1 + 0x48) != '\0') * 4 + 0x4a0 + (int)this),local_8,0
               ,*puVar6,puVar6[1],0,puVar6[6],puVar6[6],*(undefined4 *)(param_1 + 0xd8),1,
               *(uint *)(param_1 + 0xc0),*(uint *)(param_1 + 0xd0),puVar6[4],puVar6[4] + 1,
               0xffffffff,1,0,0);
  if (param_6 != '\0') {
    FUN_1003d12e(*(void **)(local_14 + 0x1304),*puVar6,0,0,0);
    uVar7 = FUN_1003d25f(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 0x1304));
    *(undefined8 *)(param_1 + 0xb0) = uVar7;
  }
  FUN_10016d60(*(int *)((int)this + 0x138));
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc1) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc0) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc2) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc3) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3151) = 1;
  return;
}

