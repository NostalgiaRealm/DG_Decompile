/*
 * FUN_1001d15e at 1001d15e
 * undefined __thiscall FUN_1001d15e(void * this, uint param_1, byte param_2, byte param_3, int param_4, int param_5, int param_6, int param_7, byte param_8)
 * Address ranges: 1001d15e-1001d68d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1001d15e(void *this,uint param_1,byte param_2,byte param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined2 uVar8;
  int *piVar9;
  undefined2 extraout_var;
  uint uVar10;
  uint uVar11;
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
  
  FUN_1000c19b(*(void **)((int)this + 0x138),'\0');
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2d18) = *(undefined4 *)(param_1 + 0x5c);
  fVar3 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2c70) = fVar3;
  fVar3 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  pcVar1 = (char *)(param_1 + 0x48);
  *(float *)(*(int *)((int)this + 0x138) + 0x2c74) = fVar3;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x32d0) = 1;
  local_24 = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2b64);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2b64) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2c62) = 1;
  if (*(char *)(param_1 + 0x7d) == '\0') {
    DAT_1005b5ec = ((*pcVar1 == '\0') - 1U & 0xf9) + 0xf;
    DAT_1005b60c = (*pcVar1 == '\0') - 1U & 0xf;
    if ((*pcVar1 != '\0') &&
       ((*(int *)(param_1 + 0x10) == 5 ||
        ((*(byte *)(*(int *)((int)this + 0x138) + 0x29e0) & 0x80) != 0)))) {
      DAT_1005b5ec = '\0';
    }
    iVar2 = *(int *)((int)this + 0x138);
    FUN_10044040(*(void **)(iVar2 + 0x3300),*(int *)(iVar2 + 0x3304),(int *)&DAT_1005b5c8,iVar2,-1);
    _DAT_1005b560 = 1;
    _DAT_1005b564 = 1;
    piVar9 = (int *)&DAT_1005b560;
    if (*pcVar1 == '\0') {
      piVar9 = (int *)&DAT_1005b594;
    }
    iVar2 = *(int *)((int)this + 0x138);
    FUN_100440af(*(void **)(iVar2 + 0x3300),*(int *)(iVar2 + 0x3304),piVar9,*(int *)(iVar2 + 0x2b18)
                );
    FUN_1004411c(*(void **)(*(int *)((int)this + 0x138) + 0x3300),
                 *(int *)(*(int *)((int)this + 0x138) + 0x3304),(uint *)&DAT_1005b538);
    _DAT_1005b5a0 = 0;
  }
  else {
    FUN_1000baf0(*(int *)((int)this + 0x138));
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
  FUN_1004418f(*(void **)(*(int *)((int)this + 0x138) + 0x3300),
               *(int *)(*(int *)((int)this + 0x138) + 0x3304),local_5c);
  if ((*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x20)) ||
     (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
    bVar7 = FUN_1000f987(*(int *)(*(int *)((int)this + 0x138) + 0x2d18),
                         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2d14));
    local_8 = (float)CONCAT31(local_8._1_3_,1);
    if (bVar7) goto LAB_1001d357;
  }
  local_8 = (float)((uint)local_8 & 0xffffff00);
LAB_1001d357:
  uVar8 = FUN_1000f9ff(param_1,param_2,SUB41(local_8,0),param_3);
  local_20 = CONCAT22(extraout_var,uVar8);
  if (*(char *)(param_1 + 0x7f) != '\0') {
    iVar2 = *(int *)((int)this + 0x138);
    local_1c = *(undefined4 *)(iVar2 + 0x6fac + *(int *)(param_1 + 0x74) * 4);
    local_18 = *(undefined4 *)(iVar2 + 0x6fac + *(int *)(param_1 + 0x78) * 4);
    FUN_100442c7(*(void **)(iVar2 + 0x3300),*(int *)(iVar2 + 0x3304),0x1c,2,(int)&local_1c);
  }
  uVar10 = FUN_1001059c(this,*(uint *)(*(int *)((int)this + 0x138) + 0x29e0) & 0x7f);
  uVar11 = FUN_1001059c(this,*(int *)(*(int *)((int)this + 0x138) + 0x29e4));
  if (*pcVar1 == '\0') {
    uVar11 = -(uint)(uVar11 != 0xffffffff) & uVar11 * 0x104 + 0x13c + (int)this;
    uVar10 = param_1;
  }
  else {
    uVar11 = param_1;
    uVar10 = -(uint)(uVar10 != 0xffffffff) & uVar10 * 0x104 + 0x13c + (int)this;
  }
  local_18 = *(undefined4 *)(((param_3 != 0) - 1 & 0xffffffe8) + 0xec + param_1);
  local_14 = *(undefined4 *)(((param_3 != 0) - 1 & 0xffffffe8) + 0xf0 + param_1);
  if (uVar10 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(uVar10 + 0xb4);
  }
  if (uVar11 == 0) {
    local_c = 0;
    _param_2 = 0;
  }
  else {
    local_c = *(undefined4 *)(uVar11 + 0xb4);
    _param_2 = *(int *)(uVar11 + 0xf8);
  }
  if (((uVar10 != 0) && (uVar11 != 0)) &&
     ((*(int *)(uVar10 + 0x28) != *(int *)(uVar11 + 0x28) ||
      (*(int *)(uVar10 + 0x2c) != *(int *)(uVar11 + 0x2c))))) {
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
  FUN_1001cba3(this,&local_44,&local_34,*(int *)((int)this + local_20 * 4 + 0x858),local_18,local_14
               ,local_10,local_c,_param_2,param_8);
  FUN_1000c145(*(void **)((int)this + 0x138));
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2b64) = local_24;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2c61) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2c60) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2c62) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2c63) = 1;
  return;
}

