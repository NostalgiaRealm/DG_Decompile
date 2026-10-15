/*
 * FUN_100219ae at 100219ae
 * undefined __thiscall FUN_100219ae(void * this, uint param_1, byte param_2, byte param_3, int param_4, int param_5, int param_6, int param_7, byte param_8)
 * Address ranges: 100219ae-10021efd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100219ae(void *this,uint param_1,byte param_2,byte param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  bool bVar8;
  undefined2 uVar9;
  int *piVar10;
  undefined2 extraout_var;
  uint uVar11;
  uint uVar12;
  float local_5c [3];
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
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  FUN_1000c9fc(*(void **)((int)this + 0x138),'\0');
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2e68) = *(undefined4 *)(param_1 + 0x5c);
  fVar3 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2dc0) = fVar3;
  fVar3 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  pcVar1 = (char *)(param_1 + 0x48);
  *(float *)(*(int *)((int)this + 0x138) + 0x2dc4) = fVar3;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3650) = 1;
  local_24 = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ca4);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ca4) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2daa) = 1;
  if (*(char *)(param_1 + 0x7d) == '\0') {
    DAT_1005f7c4 = ((*pcVar1 == '\0') - 1U & 0xf9) + 0xf;
    DAT_1005f7e4 = (*pcVar1 == '\0') - 1U & 0xf;
    if ((*pcVar1 != '\0') &&
       ((cVar7 = FUN_100165de(param_1), cVar7 != '\0' ||
        ((*(byte *)(*(int *)((int)this + 0x138) + 0x2b1c) & 0x80) != 0)))) {
      DAT_1005f7c4 = '\0';
    }
    iVar2 = *(int *)((int)this + 0x138);
    FUN_10047449(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),(int *)&DAT_1005f7a0,iVar2,-1);
    _DAT_1005f740 = 0;
    _DAT_1005f734 = 1;
    _DAT_1005f738 = 1;
    _DAT_1005f774 = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2c2c);
    piVar10 = (int *)&DAT_1005f734;
    if (*pcVar1 == '\0') {
      piVar10 = (int *)&DAT_1005f768;
    }
    iVar2 = *(int *)((int)this + 0x138);
    FUN_100474b8(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),piVar10,
                 *(int *)(iVar2 + 0x2c58));
    FUN_10047525(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
                 *(int *)(*(int *)((int)this + 0x138) + 0x3684),(uint *)&DAT_1005f70c);
    _DAT_1005f774 = 0;
  }
  else {
    FUN_1000c351(*(int *)((int)this + 0x138));
  }
  local_5c[0] = 0.0;
  local_5c[1] = 0.0;
  local_5c[2] = (float)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_5c[2] = local_5c[2] + 4.2949673e+09;
  }
  local_50 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_50 = local_50 + 4.2949673e+09;
  }
  local_4c = 0;
  local_48 = 0x3f800000;
  FUN_10047598(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x3684),local_5c);
  if ((*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x20)) ||
     (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
    bVar8 = FUN_10010c61(*(int *)(*(int *)((int)this + 0x138) + 0x2e68),
                         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2e64));
    local_8 = (float)CONCAT31(local_8._1_3_,1);
    if (bVar8) goto LAB_10021bc7;
  }
  local_8 = (float)((uint)local_8 & 0xffffff00);
LAB_10021bc7:
  uVar9 = FUN_10010ce1(param_1,param_2,SUB41(local_8,0),param_3);
  local_20 = CONCAT22(extraout_var,uVar9);
  if (*(char *)(param_1 + 0x7f) != '\0') {
    iVar2 = *(int *)((int)this + 0x138);
    local_1c = *(undefined4 *)(iVar2 + 0x7334 + *(int *)(param_1 + 0x74) * 4);
    local_18 = *(undefined4 *)(iVar2 + 0x7334 + *(int *)(param_1 + 0x78) * 4);
    FUN_100476d0(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),0x1c,2,(int)&local_1c);
  }
  uVar11 = FUN_100118f8(this,*(uint *)(*(int *)((int)this + 0x138) + 0x2b1c) & 0x7f);
  uVar12 = FUN_100118f8(this,*(int *)(*(int *)((int)this + 0x138) + 0x2b20));
  if (*pcVar1 == '\0') {
    uVar12 = -(uint)(uVar12 != 0xffffffff) & uVar12 * 0x104 + 0x13c + (int)this;
    uVar11 = param_1;
  }
  else {
    uVar12 = param_1;
    uVar11 = -(uint)(uVar11 != 0xffffffff) & uVar11 * 0x104 + 0x13c + (int)this;
  }
  local_18 = *(undefined4 *)(((param_3 != 0) - 1 & 0xffffffe8) + 0xec + param_1);
  local_14 = *(undefined4 *)(((param_3 != 0) - 1 & 0xffffffe8) + 0xf0 + param_1);
  if (uVar11 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(uVar11 + 0xb4);
  }
  if (uVar12 == 0) {
    local_c = 0;
    _param_2 = 0;
  }
  else {
    local_c = *(undefined4 *)(uVar12 + 0xb4);
    _param_2 = *(int *)(uVar12 + 0xf8);
  }
  if (((uVar11 != 0) && (uVar12 != 0)) &&
     ((*(int *)(uVar11 + 0x28) != *(int *)(uVar12 + 0x28) ||
      (*(int *)(uVar11 + 0x2c) != *(int *)(uVar12 + 0x2c))))) {
    if (*pcVar1 == '\0') {
      local_c = 0;
      _param_2 = 0;
    }
    else {
      local_10 = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x24);
  fVar3 = (float)*(int *)(param_1 + 0x24);
  if (iVar2 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar4 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  if (local_8._0_1_ == '\0') {
    local_8 = 0.005;
    local_2c = 0.005;
  }
  else {
    fVar5 = (float)*(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar6 = (float)*(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    local_2c = -(0.49 / (fVar5 / fVar6));
    local_8 = -(0.49 / (fVar4 / fVar3));
  }
  local_44 = (float)param_4;
  if (param_4 < 0) {
    local_44 = local_44 + 4.2949673e+09;
  }
  local_40 = (float)param_5;
  if (param_5 < 0) {
    local_40 = local_40 + 4.2949673e+09;
  }
  local_3c = (float)param_6;
  if (param_6 < 0) {
    local_3c = local_3c + 4.2949673e+09;
  }
  local_38 = (float)param_7;
  if (param_7 < 0) {
    local_38 = local_38 + 4.2949673e+09;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    param_5 = iVar2 - param_5;
    param_7 = iVar2 - param_7;
  }
  local_34 = local_44 + local_2c;
  local_30 = (float)param_5;
  if (param_5 < 0) {
    local_30 = local_30 + 4.2949673e+09;
  }
  local_30 = local_30 + local_8;
  local_2c = local_3c + local_2c;
  local_28 = (float)param_7;
  if (param_7 < 0) {
    local_28 = local_28 + 4.2949673e+09;
  }
  local_28 = local_8 + local_28;
  FUN_100213f3(this,&local_44,&local_34,*(int *)((int)this + local_20 * 4 + 0x858),local_18,local_14
               ,local_10,local_c,_param_2,param_8);
  FUN_1000c9a6(*(void **)((int)this + 0x138));
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ca4) = local_24;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da9) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da8) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2daa) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2dab) = 1;
  return;
}

