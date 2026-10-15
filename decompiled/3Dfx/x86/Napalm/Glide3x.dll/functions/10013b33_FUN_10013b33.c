/*
 * FUN_10013b33 at 10013b33
 * undefined __thiscall FUN_10013b33(void * this, uint param_1, byte param_2, byte param_3, int param_4, int param_5, int param_6, int param_7, uint param_8)
 * Address ranges: 10013b33-100141ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10013b33(void *this,uint param_1,byte param_2,byte param_3,int param_4,int param_5,int param_6,
            int param_7,uint param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined2 extraout_var;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int local_e8 [13];
  int local_b4 [13];
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  int *local_54;
  uint local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  uVar10 = *(int *)(*(int *)((int)this + 0x138) + 0x3688);
  local_c = uVar10;
  local_8 = this;
  bVar6 = FUN_1000a535(*(int *)((int)this + 0x138));
  *(bool *)(*(int *)((int)this + 0x138) + 0x3734) = bVar6;
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2e68) = *(undefined4 *)(param_1 + 0x5c);
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
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3650) = 1;
  local_2c = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ca4);
  if (*(char *)(param_1 + 0x7d) == '\0') {
    uVar8 = FUN_1000b6a9((void *)(uVar10 + 0x1600),&DAT_10057820);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36d8) = uVar8;
    piVar9 = &DAT_100577ec;
    piVar13 = local_b4;
    for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar13 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar13 = piVar13 + 1;
    }
    local_b4[0] = 1;
    local_b4[1] = 1;
    piVar9 = &DAT_1005778c;
    piVar13 = local_e8;
    for (iVar12 = 0xd; uVar10 = local_c, iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar13 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar13 = piVar13 + 1;
    }
    if ((param_3 == 0) ||
       (local_b4[3] = 1,
       *(char *)(*(int *)(*(int *)((int)this + 0x138) + 0x3684) * 0x18 + 0x531 +
                *(int *)(*(int *)((int)this + 0x138) + 0x3680)) == '\0')) {
      local_b4[3] = 0;
    }
    local_e8[3] = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2c2c);
    piVar9 = local_b4;
    if (*(char *)(param_1 + 0x48) == '\0') {
      piVar9 = local_e8;
    }
    uVar8 = FUN_1000b758((void *)(local_c + 0x15f0),piVar9);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36e4) = uVar8;
    uVar8 = FUN_1000b597((void *)(uVar10 + 0x1620),(uint *)&DAT_100577c0);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36e0) = uVar8;
    *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3736) = 1;
    local_40 = *(float *)(param_1 + 0x28);
    local_3c = *(float *)(param_1 + 0x2c);
    local_48 = 0.0;
    local_44 = 0.0;
    FUN_10043d54(*(int *)(uVar10 + 0x1304),1,(int)&local_48);
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ca4) = 1;
    *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2daa) = 1;
    FUN_1000ac25(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x3734));
    FUN_1000af2b(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x3734));
  }
  local_80 = 0;
  local_7c = 0;
  local_78 = (float)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_78 = local_78 + 4.2949673e+09;
  }
  local_74 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_74 = local_74 + 4.2949673e+09;
  }
  local_70 = 0;
  local_6c = 0x3f800000;
  FUN_10043ddf(*(int *)(uVar10 + 0x1304),1,(int)&local_80);
  if ((*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x20)) ||
     (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
    bVar6 = FUN_10010c61(*(int *)(*(int *)((int)this + 0x138) + 0x2e68),
                         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2e64));
    local_18 = (float)CONCAT31(local_18._1_3_,1);
    if (bVar6) goto LAB_10013da0;
  }
  local_18 = (float)((uint)local_18 & 0xffffff00);
LAB_10013da0:
  uVar7 = FUN_1001362d(this,param_1,param_2,SUB41(local_18,0),param_3);
  local_28 = CONCAT22(extraout_var,uVar7);
  if (*(char *)(param_1 + 0x7f) != '\0') {
    lVar14 = FUN_1001c45e((void *)(*(int *)((int)this + 0x138) + 0x4668),*(int *)(param_1 + 0x74));
    lVar15 = FUN_1001c45e((void *)(*(int *)((int)this + 0x138) + 0x4668),*(int *)(param_1 + 0x78));
    uVar10 = local_c;
    FUN_100436d7(*(int *)(local_c + 0x1304),0xf,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
    FUN_100436d7(*(int *)(uVar10 + 0x1304),0x10,(int)lVar15,(int)((ulonglong)lVar15 >> 0x20));
    this = local_8;
    FUN_1001c489(*(int *)((int)local_8 + 0x138) + 0x4668);
  }
  uVar10 = FUN_100118f8(this,*(uint *)(*(int *)((int)this + 0x138) + 0x2b1c) & 0x7f);
  uVar11 = FUN_100118f8(this,*(int *)(*(int *)((int)this + 0x138) + 0x2b20));
  pvVar5 = local_8;
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar11 = -(uint)(uVar11 != 0xffffffff) & uVar11 * 0x120 + 0x140 + (int)this;
    uVar10 = param_1;
  }
  else {
    uVar11 = param_1;
    uVar10 = -(uint)(uVar10 != 0xffffffff) & uVar10 * 0x120 + 0x140 + (int)this;
  }
  iVar12 = (uint)param_3 * 0x20;
  local_58 = *(uint *)(param_1 + 0xdc + iVar12);
  local_54 = *(int **)(param_1 + 0xe0 + iVar12);
  local_50 = *(uint *)(param_1 + 0xe8 + iVar12);
  local_4c = local_50 + 1;
  if (uVar10 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(uint *)(uVar10 + 0xb8);
  }
  if (uVar11 == 0) {
    local_14 = 0;
    local_10 = 0;
    local_30 = 0;
  }
  else {
    local_14 = *(uint *)(uVar11 + 0xb8);
    local_10 = *(uint *)(uVar11 + 0xcc);
    local_30 = (*(int *)(uVar11 + 0xd8) == 0x2d) + 1;
  }
  if (uVar10 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = *(uint *)(uVar10 + 0xc4);
  }
  if (uVar11 == 0) {
    _param_3 = 0xffffffff;
    local_20 = 0xffffffff;
  }
  else {
    _param_3 = *(uint *)(uVar11 + 0xc4);
    local_20 = *(uint *)(uVar11 + 0xd4);
  }
  if (uVar10 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(uVar10 + 200);
  }
  if (uVar11 == 0) {
    local_1c = 0;
    local_34 = 0;
  }
  else {
    local_1c = *(undefined4 *)(uVar11 + 200);
    local_34 = *(undefined4 *)(uVar11 + 0xd8);
  }
  if (((uVar10 != 0) && (uVar11 != 0)) &&
     ((*(uint *)(uVar11 + 0x28) < *(uint *)(uVar10 + 0x28) ||
      (*(uint *)(uVar11 + 0x2c) < *(uint *)(uVar10 + 0x2c))))) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      local_14 = 0;
      _param_3 = 0xffffffff;
      local_10 = 0;
      local_20 = 0xffffffff;
    }
    else {
      local_24 = *(int *)(uVar10 + 0xc4) + 1;
      local_c = 0;
    }
  }
  iVar12 = *(int *)(param_1 + 0x24);
  fVar1 = (float)*(int *)(param_1 + 0x24);
  if (iVar12 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (local_18._0_1_ == '\0') {
    local_18 = 0.005;
    local_40 = 0.005;
  }
  else {
    fVar3 = (float)*(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = (float)*(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    local_40 = -(0.49 / (fVar3 / fVar4));
    local_18 = -(0.49 / (fVar2 / fVar1));
  }
  local_68 = (float)param_4;
  if (param_4 < 0) {
    local_68 = local_68 + 4.2949673e+09;
  }
  local_64 = (float)param_5;
  if (param_5 < 0) {
    local_64 = local_64 + 4.2949673e+09;
  }
  local_60 = (float)param_6;
  if (param_6 < 0) {
    local_60 = local_60 + 4.2949673e+09;
  }
  local_5c = (float)param_7;
  if (param_7 < 0) {
    local_5c = local_5c + 4.2949673e+09;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    param_5 = iVar12 - param_5;
    param_7 = iVar12 - param_7;
  }
  local_48 = local_68 + local_40;
  local_44 = (float)param_5;
  if (param_5 < 0) {
    local_44 = local_44 + 4.2949673e+09;
  }
  local_44 = local_44 + local_18;
  local_40 = local_60 + local_40;
  local_3c = (float)param_7;
  if (param_7 < 0) {
    local_3c = local_3c + 4.2949673e+09;
  }
  local_3c = local_18 + local_3c;
  FUN_1001302d(local_8,&local_68,&local_48,*(int *)((int)local_8 + local_28 * 4 + 0x920),local_58,
               local_54,local_c,local_14,local_10,local_38,local_1c,local_34,
               *(undefined4 *)(param_1 + 0x30),local_50,local_4c,local_24,_param_3,local_20,0,
               local_30,param_8);
  FUN_1000b14f(*(int *)((int)pvVar5 + 0x138));
  *(undefined4 *)(*(int *)((int)pvVar5 + 0x138) + 0x2ca4) = local_2c;
  *(undefined1 *)(*(int *)((int)pvVar5 + 0x138) + 0x2da9) = 1;
  *(undefined1 *)(*(int *)((int)pvVar5 + 0x138) + 0x2da8) = 1;
  *(undefined1 *)(*(int *)((int)pvVar5 + 0x138) + 0x2daa) = 1;
  *(undefined1 *)(*(int *)((int)pvVar5 + 0x138) + 0x2dab) = 1;
  *(undefined1 *)(*(int *)((int)pvVar5 + 0x138) + 0x3651) = 1;
  return;
}

