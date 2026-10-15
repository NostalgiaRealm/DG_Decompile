/*
 * FUN_100136b6 at 100136b6
 * undefined __thiscall FUN_100136b6(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5, char param_6)
 * Address ranges: 100136b6-10013b30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100136b6(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5,char param_6)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
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
  float local_14;
  float local_10;
  int local_c;
  char local_5;
  
  local_c = *(int *)(*(int *)((int)this + 0x138) + 0x3688);
  bVar3 = FUN_1000a535(*(int *)((int)this + 0x138));
  *(bool *)(*(int *)((int)this + 0x138) + 0x3734) = bVar3;
  local_5 = *(char *)(param_1 + 0x7c);
  if ((((local_5 == '\0') ||
       (iVar5 = *(int *)((int)this + 0x138),
       *(char *)(*(int *)(iVar5 + 0x3684) * 0x18 + 0x531 + *(int *)(iVar5 + 0x3680)) == '\0')) ||
      (*(char *)(param_1 + 0x48) == '\0')) || (*(int *)(param_1 + 0xd0) == -1)) {
    iVar5 = *(int *)((int)this + 0x138);
    bVar3 = false;
    bVar2 = false;
    if (local_5 == '\0') {
      bVar3 = false;
      iVar8 = 8;
      bVar2 = false;
      goto LAB_1001373b;
    }
  }
  else {
    bVar3 = true;
    bVar2 = true;
  }
  iVar8 = 0xc;
LAB_1001373b:
  *(undefined4 *)(iVar5 + 0x2e64) = *(undefined4 *)(iVar8 + param_1);
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
  FUN_10043ddf(*(int *)(local_c + 0x1304),1,(int)&local_5c);
  local_1c = *(undefined4 *)(param_1 + 0x20);
  local_18 = *(undefined4 *)(param_1 + 0x24);
  local_24 = 0;
  local_20 = 0;
  FUN_10043d54(*(int *)(local_c + 0x1304),1,(int)&local_24);
  fVar1 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2dc0) = fVar1;
  fVar1 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2dc4) = fVar1;
  uVar4 = FUN_1000b6a9((void *)(local_c + 0x1600),&DAT_10057820);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36d8) = uVar4;
  uVar4 = FUN_1000b758((void *)(local_c + 0x15f0),&DAT_1005778c);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36e4) = uVar4;
  uVar4 = FUN_1000b597((void *)(local_c + 0x1620),(uint *)&DAT_100577c0);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36e0) = uVar4;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3736) = 1;
  if (*(uint *)(param_1 + 0xb8) != *(uint *)(param_1 + 0xbc)) {
    FUN_1004301c(*(void **)(local_c + 0x1304),*(uint *)(param_1 + 0xbc),0,0,0x1000);
    FUN_1004301c(*(void **)(local_c + 0x1304),*(uint *)(param_1 + 0xb8),0,0,0x2000);
    FUN_10043e89(*(int *)(local_c + 0x1304),*(undefined4 *)(param_1 + 0xbc),0,
                 *(undefined4 *)(param_1 + 0xb8),0,*(undefined4 *)(param_1 + 4));
  }
  local_14 = (float)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_14 = local_14 + 4.2949673e+09;
  }
  fVar1 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_14 = local_14 / fVar1;
  iVar5 = *(int *)(param_1 + 0x24);
  fVar1 = (float)*(int *)(param_1 + 0x24);
  if (iVar5 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_10 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_10 = local_10 + 4.2949673e+09;
  }
  local_10 = local_10 / fVar1;
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
  local_38 = (float)(int)param_5;
  if ((int)param_5 < 0) {
    local_38 = local_38 + 4.2949673e+09;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    local_30 = (float)(iVar5 - param_3);
    if (iVar5 - param_3 < 0) {
      local_30 = local_30 + 4.2949673e+09;
    }
    param_5 = (int *)(iVar5 - (int)param_5);
    bVar3 = bVar2;
  }
  else {
    local_30 = (float)param_3;
    if (param_3 < 0) {
      local_30 = local_30 + 4.2949673e+09;
    }
  }
  local_34 = local_44 * local_14;
  local_30 = local_30 * local_10;
  local_2c = local_3c * local_14;
  local_28 = (float)(int)param_5;
  if ((int)param_5 < 0) {
    local_28 = local_28 + 4.2949673e+09;
  }
  local_28 = local_10 * local_28;
  puVar6 = (uint *)(((local_5 != '\0') - 1 & 0xffffffe0) + 0xfc + param_1);
  if (bVar3) {
    param_5 = *(int **)(param_1 + 0xcc);
  }
  else {
    param_5 = (int *)0x0;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar5 = 0x920;
  }
  else {
    iVar5 = (!bVar3 - 1 & 0x58) + 0x924;
  }
  FUN_1001302d(this,&local_44,&local_34,*(int *)(iVar5 + (int)this),*(uint *)(param_1 + 0xbc),
               param_5,*puVar6,puVar6[1],0,puVar6[6],puVar6[6],*(undefined4 *)(param_1 + 0xd8),1,
               *(uint *)(param_1 + 0xc0),*(uint *)(param_1 + 0xd0),puVar6[4],puVar6[4] + 1,
               0xffffffff,1,0,0);
  if (param_6 != '\0') {
    FUN_1004301c(*(void **)(local_c + 0x1304),*puVar6,0,0,0);
    uVar7 = FUN_1004314d(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304));
    *(undefined8 *)(param_1 + 0xb0) = uVar7;
  }
  FUN_1000b14f(*(int *)((int)this + 0x138));
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da9) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da8) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2daa) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2dab) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3651) = 1;
  return;
}

