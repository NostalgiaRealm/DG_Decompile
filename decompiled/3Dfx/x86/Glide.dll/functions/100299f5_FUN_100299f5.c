/*
 * FUN_100299f5 at 100299f5
 * undefined __thiscall FUN_100299f5(void * this, uint param_1, byte param_2, byte param_3, int param_4, int param_5, int param_6, int param_7, byte param_8)
 * Address ranges: 100299f5-10029ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100299f5(void *this,uint param_1,byte param_2,byte param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined2 uVar7;
  int *piVar8;
  undefined2 extraout_var;
  int iVar9;
  int iVar10;
  uint uVar11;
  int extraout_EDX;
  uint uVar12;
  float local_60 [3];
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  FUN_10018ae1(*(void **)((int)this + 0x138),'\0');
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2c78) = *(undefined4 *)(param_1 + 0x5c);
  fVar2 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2bd0) = fVar2;
  fVar2 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  pcVar1 = (char *)(param_1 + 0x48);
  *(float *)(*(int *)((int)this + 0x138) + 0x2bd4) = fVar2;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3150) = 1;
  local_28 = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ac4);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ac4) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc2) = 1;
  if (*(char *)(param_1 + 0x7d) == '\0') {
    DAT_10059534 = ((*pcVar1 == '\0') - 1U & 0xf9) + 0xf;
    DAT_10059554 = (*pcVar1 == '\0') - 1U & 0xf;
    if ((*pcVar1 != '\0') &&
       ((*(int *)(param_1 + 0x10) == 5 ||
        ((*(byte *)(*(int *)((int)this + 0x138) + 0x2964) & 0x80) != 0)))) {
      DAT_10059534 = '\0';
    }
    iVar9 = *(int *)((int)this + 0x138);
    FUN_100418e8(*(void **)(iVar9 + 0x3180),*(int *)(iVar9 + 0x3184),(int *)&DAT_10059510,iVar9,-1);
    _DAT_100594a8 = 1;
    _DAT_100594ac = 1;
    piVar8 = (int *)&DAT_100594a8;
    if (*pcVar1 == '\0') {
      piVar8 = (int *)&DAT_100594dc;
    }
    iVar9 = *(int *)((int)this + 0x138);
    FUN_10041957(*(void **)(iVar9 + 0x3180),*(int *)(iVar9 + 0x3184),piVar8,*(int *)(iVar9 + 0x2a78)
                );
    FUN_100419c4(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
                 *(int *)(*(int *)((int)this + 0x138) + 0x3184),(uint *)&DAT_10059480);
    _DAT_100594e8 = 0;
  }
  else {
    FUN_100183fd(*(int *)((int)this + 0x138));
  }
  local_60[0] = 0.0;
  local_60[1] = 0.0;
  local_60[2] = (float)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_60[2] = local_60[2] + 4.2949673e+09;
  }
  local_54 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_54 = local_54 + 4.2949673e+09;
  }
  local_50 = 0;
  local_4c = 0x3f800000;
  FUN_10041a37(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),local_60);
  local_14 = *(int *)(param_1 + 0x28);
  local_18 = *(float *)(param_1 + 0x20);
  if (((float)local_14 != local_18) || (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
    bVar6 = FUN_1001bb9e(*(int *)(*(int *)((int)this + 0x138) + 0x2c78),
                         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2c74));
    local_8 = CONCAT31(local_8._1_3_,1);
    if (bVar6) goto LAB_10029bf6;
  }
  local_8 = local_8 & 0xffffff00;
LAB_10029bf6:
  uVar7 = FUN_1001bc16(param_1,param_2,(char)local_8,param_3);
  local_24 = CONCAT22(extraout_var,uVar7);
  iVar9 = FUN_1001c7a6(*(uint *)(*(int *)((int)this + 0x138) + 0x2964) & 0x7f);
  iVar10 = FUN_1001c7a6(*(int *)(extraout_EDX + 0x2968));
  if (*pcVar1 == '\0') {
    uVar11 = -(uint)(iVar10 != -1) & iVar10 * 0x104 + 0x13c + (int)this;
    uVar12 = param_1;
  }
  else {
    uVar11 = param_1;
    uVar12 = -(uint)(iVar9 != -1) & iVar9 * 0x104 + 0x13c + (int)this;
  }
  local_20 = *(undefined4 *)(((param_3 != 0) - 1 & 0xffffffe8) + 0xec + param_1);
  local_1c = *(undefined4 *)(((param_3 != 0) - 1 & 0xffffffe8) + 0xf0 + param_1);
  if (uVar12 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(uVar12 + 0xb4);
  }
  if (uVar11 == 0) {
    local_c = 0;
    _param_2 = 0;
  }
  else {
    local_c = *(undefined4 *)(uVar11 + 0xb4);
    _param_2 = *(int *)(uVar11 + 0xf8);
  }
  if (((uVar12 != 0) && (uVar11 != 0)) &&
     ((*(int *)(uVar12 + 0x28) != *(int *)(uVar11 + 0x28) ||
      (*(int *)(uVar12 + 0x2c) != *(int *)(uVar11 + 0x2c))))) {
    if (*pcVar1 == '\0') {
      local_c = 0;
      _param_2 = 0;
    }
    else {
      local_10 = 0;
    }
  }
  iVar9 = *(int *)(param_1 + 0x24);
  fVar2 = (float)*(int *)(param_1 + 0x24);
  if (iVar9 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if ((char)local_8 == '\0') {
    local_18 = 0.005;
    local_30 = 0.005;
  }
  else {
    fVar4 = (float)local_14;
    if (local_14 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)(int)local_18;
    if ((int)local_18 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    local_30 = -(0.49 / (fVar4 / fVar5));
    local_18 = -(0.49 / (fVar3 / fVar2));
  }
  local_48 = (float)param_4;
  if (param_4 < 0) {
    local_48 = local_48 + 4.2949673e+09;
  }
  local_44 = (float)param_5;
  if (param_5 < 0) {
    local_44 = local_44 + 4.2949673e+09;
  }
  local_40 = (float)param_6;
  if (param_6 < 0) {
    local_40 = local_40 + 4.2949673e+09;
  }
  local_3c = (float)param_7;
  if (param_7 < 0) {
    local_3c = local_3c + 4.2949673e+09;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    param_5 = iVar9 - param_5;
    param_7 = iVar9 - param_7;
  }
  local_38 = local_48 + local_30;
  local_34 = (float)param_5;
  if (param_5 < 0) {
    local_34 = local_34 + 4.2949673e+09;
  }
  local_34 = local_34 + local_18;
  local_30 = local_40 + local_30;
  local_2c = (float)param_7;
  if (param_7 < 0) {
    local_2c = local_2c + 4.2949673e+09;
  }
  local_2c = local_18 + local_2c;
  FUN_1002943a(this,&local_48,&local_38,*(int *)((int)this + local_24 * 4 + 0x448),local_20,local_1c
               ,local_10,local_c,_param_2,param_8);
  FUN_10018a8b(*(void **)((int)this + 0x138));
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ac4) = local_28;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc1) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc0) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc2) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc3) = 1;
  return;
}

