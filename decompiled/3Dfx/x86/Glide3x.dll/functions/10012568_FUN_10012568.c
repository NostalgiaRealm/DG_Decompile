/*
 * FUN_10012568 at 10012568
 * undefined __thiscall FUN_10012568(void * this, uint param_1, byte param_2, byte param_3, int param_4, int param_5, int param_6, int param_7, uint param_8)
 * Address ranges: 10012568-10012bde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10012568(void *this,uint param_1,byte param_2,byte param_3,int param_4,int param_5,int param_6,
            int param_7,uint param_8)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  bool bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined2 extraout_var;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
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
  uint local_54;
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
  
  uVar11 = *(int *)(*(int *)((int)this + 0x138) + 0x3308);
  local_c = uVar11;
  local_8 = this;
  bVar7 = FUN_10009cc4(*(int *)((int)this + 0x138));
  *(bool *)(*(int *)((int)this + 0x138) + 0x33b4) = bVar7;
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2d18) = *(undefined4 *)(param_1 + 0x5c);
  fVar2 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2c70) = fVar2;
  fVar2 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2c74) = fVar2;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x32d0) = 1;
  local_2c = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2b64);
  if (*(char *)(param_1 + 0x7d) == '\0') {
    uVar9 = FUN_1000ae48((void *)(uVar11 + 0x1600),&DAT_10054630);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3358) = uVar9;
    piVar10 = &DAT_100545f8;
    piVar14 = local_b4;
    for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar14 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
    }
    cVar1 = *(char *)(param_1 + 0x48);
    local_b4[0] = 1;
    local_b4[1] = 1;
    piVar10 = local_b4;
    piVar14 = &DAT_10054598;
    piVar15 = local_e8;
    for (iVar13 = 0xd; uVar11 = local_c, iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar15 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar15 = piVar15 + 1;
    }
    if (cVar1 == '\0') {
      piVar10 = local_e8;
    }
    uVar9 = FUN_1000aef7((void *)(local_c + 0x15f0),piVar10);
    this = local_8;
    *(undefined4 *)(*(int *)((int)local_8 + 0x138) + 0x3364) = uVar9;
    uVar9 = FUN_1000ad36((void *)(uVar11 + 0x1620),(uint *)&DAT_100545cc);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3360) = uVar9;
    *(undefined1 *)(*(int *)((int)this + 0x138) + 0x33b6) = 1;
    local_40 = *(float *)(param_1 + 0x28);
    local_3c = *(float *)(param_1 + 0x2c);
    local_48 = 0.0;
    local_44 = 0.0;
    FUN_1004094b(*(int *)(uVar11 + 0x1304),1,(int)&local_48);
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2b64) = 1;
    *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2c62) = 1;
    FUN_1000a3b8(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x33b4));
    FUN_1000a6be(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x33b4));
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
  FUN_100409d6(*(int *)(uVar11 + 0x1304),1,(int)&local_80);
  if ((*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x20)) ||
     (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
    bVar7 = FUN_1000f987(*(int *)(*(int *)((int)this + 0x138) + 0x2d18),
                         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2d14));
    local_18 = (float)CONCAT31(local_18._1_3_,1);
    if (bVar7) goto LAB_10012790;
  }
  local_18 = (float)((uint)local_18 & 0xffffff00);
LAB_10012790:
  uVar8 = FUN_1000f9ff(param_1,param_2,SUB41(local_18,0),param_3);
  local_28 = CONCAT22(extraout_var,uVar8);
  if (*(char *)(param_1 + 0x7f) != '\0') {
    lVar16 = FUN_1001a2b5((void *)(*(int *)((int)this + 0x138) + 0x42d0),*(int *)(param_1 + 0x74));
    lVar17 = FUN_1001a2b5((void *)(*(int *)((int)local_8 + 0x138) + 0x42d0),*(int *)(param_1 + 0x78)
                         );
    uVar11 = local_c;
    FUN_100402ce(*(int *)(local_c + 0x1304),0xf,(int)lVar16,(int)((ulonglong)lVar16 >> 0x20));
    FUN_100402ce(*(int *)(uVar11 + 0x1304),0x10,(int)lVar17,(int)((ulonglong)lVar17 >> 0x20));
    this = local_8;
    FUN_1001a2e0(*(int *)((int)local_8 + 0x138) + 0x42d0);
  }
  uVar11 = FUN_1001059c(this,*(uint *)(*(int *)((int)this + 0x138) + 0x29e0) & 0x7f);
  uVar12 = FUN_1001059c(this,*(int *)(*(int *)((int)this + 0x138) + 0x29e4));
  pvVar6 = local_8;
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar12 = -(uint)(uVar12 != 0xffffffff) & uVar12 * 0x120 + 0x140 + (int)this;
    uVar11 = param_1;
  }
  else {
    uVar12 = param_1;
    uVar11 = -(uint)(uVar11 != 0xffffffff) & uVar11 * 0x120 + 0x140 + (int)this;
  }
  iVar13 = (uint)param_3 * 0x20;
  local_58 = *(uint *)(param_1 + 0xdc + iVar13);
  local_54 = *(uint *)(param_1 + 0xe0 + iVar13);
  local_50 = *(uint *)(param_1 + 0xe8 + iVar13);
  local_4c = local_50 + 1;
  if (uVar11 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(uint *)(uVar11 + 0xb8);
  }
  if (uVar12 == 0) {
    local_14 = 0;
    local_10 = 0;
    local_30 = 0;
  }
  else {
    local_14 = *(uint *)(uVar12 + 0xb8);
    local_10 = *(uint *)(uVar12 + 0xcc);
    local_30 = (*(int *)(uVar12 + 0xd8) == 0x2d) + 1;
  }
  if (uVar11 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = *(uint *)(uVar11 + 0xc4);
  }
  if (uVar12 == 0) {
    _param_3 = 0xffffffff;
    local_20 = 0xffffffff;
  }
  else {
    _param_3 = *(uint *)(uVar12 + 0xc4);
    local_20 = *(uint *)(uVar12 + 0xd4);
  }
  if (uVar11 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(uVar11 + 200);
  }
  if (uVar12 == 0) {
    local_1c = 0;
    local_34 = 0;
  }
  else {
    local_1c = *(undefined4 *)(uVar12 + 200);
    local_34 = *(undefined4 *)(uVar12 + 0xd8);
  }
  if (((uVar11 != 0) && (uVar12 != 0)) &&
     ((*(uint *)(uVar12 + 0x28) < *(uint *)(uVar11 + 0x28) ||
      (*(uint *)(uVar12 + 0x2c) < *(uint *)(uVar11 + 0x2c))))) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      local_14 = 0;
      _param_3 = 0xffffffff;
      local_10 = 0;
      local_20 = 0xffffffff;
    }
    else {
      local_24 = *(int *)(uVar11 + 0xc4) + 1;
      local_c = 0;
    }
  }
  iVar13 = *(int *)(param_1 + 0x24);
  fVar2 = (float)*(int *)(param_1 + 0x24);
  if (iVar13 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if (local_18._0_1_ == '\0') {
    local_18 = 0.005;
    local_40 = 0.005;
  }
  else {
    fVar4 = (float)*(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)*(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    local_40 = -(0.49 / (fVar4 / fVar5));
    local_18 = -(0.49 / (fVar3 / fVar2));
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
    param_5 = iVar13 - param_5;
    param_7 = iVar13 - param_7;
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
  FUN_10011bc6(local_8,&local_68,&local_48,*(int *)((int)local_8 + local_28 * 4 + 0x920),local_58,
               local_54,local_c,local_14,local_10,local_38,local_1c,local_34,
               *(undefined4 *)(param_1 + 0x30),local_50,local_4c,local_24,_param_3,local_20,0,
               local_30,param_8);
  FUN_1000a8e2(*(int *)((int)pvVar6 + 0x138));
  *(undefined4 *)(*(int *)((int)pvVar6 + 0x138) + 0x2b64) = local_2c;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2c61) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2c60) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2c62) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2c63) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x32d1) = 1;
  return;
}

