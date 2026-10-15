/*
 * FUN_1001f54b at 1001f54b
 * undefined __thiscall FUN_1001f54b(void * this, uint param_1, byte param_2, byte param_3, int param_4, int param_5, int param_6, int param_7, uint param_8)
 * Address ranges: 1001f54b-1001fb55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001f54b(void *this,uint param_1,byte param_2,byte param_3,int param_4,int param_5,int param_6,
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
  int iVar11;
  int iVar12;
  uint uVar13;
  int extraout_EDX;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  int local_f0 [13];
  int local_bc [13];
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  float local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  iVar11 = *(int *)(*(int *)((int)this + 0x138) + 0x3188);
  local_18 = iVar11;
  local_8 = this;
  bVar7 = FUN_100164e8(*(int *)((int)this + 0x138));
  *(bool *)(*(int *)((int)this + 0x138) + 0x3234) = bVar7;
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
  *(float *)(*(int *)((int)this + 0x138) + 0x2bd4) = fVar2;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3150) = 1;
  local_34 = *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ac4);
  if (*(char *)(param_1 + 0x7d) == '\0') {
    uVar9 = FUN_1001775b((void *)(iVar11 + 0x1600),&DAT_100518e8);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31d8) = uVar9;
    piVar10 = &DAT_100518b0;
    piVar14 = local_bc;
    for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
      *piVar14 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
    }
    cVar1 = *(char *)(param_1 + 0x48);
    local_bc[0] = 1;
    local_bc[1] = 1;
    piVar10 = local_bc;
    piVar14 = &DAT_10051850;
    piVar16 = local_f0;
    for (iVar12 = 0xd; iVar11 = local_18, iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar16 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar16 = piVar16 + 1;
    }
    if (cVar1 == '\0') {
      piVar10 = local_f0;
    }
    uVar9 = FUN_1001780a((void *)(local_18 + 0x15f0),piVar10);
    this = local_8;
    *(undefined4 *)(*(int *)((int)local_8 + 0x138) + 0x31e4) = uVar9;
    uVar9 = FUN_10017649((void *)(iVar11 + 0x1620),(uint *)&DAT_10051884);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31e0) = uVar9;
    *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3236) = 1;
    local_44 = *(float *)(param_1 + 0x28);
    local_40 = *(float *)(param_1 + 0x2c);
    local_4c = 0.0;
    local_48 = 0.0;
    FUN_1003e1f6(*(int *)(iVar11 + 0x1304),1,(int)&local_4c);
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2ac4) = 1;
    *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc2) = 1;
    FUN_10016bdc(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x3234));
    FUN_10016ed0(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x3234));
  }
  local_88 = 0;
  local_84 = 0;
  local_80 = (float)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_80 = local_80 + 4.2949673e+09;
  }
  local_7c = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_7c = local_7c + 4.2949673e+09;
  }
  local_78 = 0;
  local_74 = 0x3f800000;
  FUN_1003e281(*(int *)(iVar11 + 0x1304),1,(int)&local_88);
  local_50 = *(int *)(param_1 + 0x28);
  local_2c = *(float *)(param_1 + 0x20);
  if (((float)local_50 != local_2c) || (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x24))) {
    bVar7 = FUN_1001bb9e(*(int *)(*(int *)((int)this + 0x138) + 0x2c78),
                         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2c74));
    local_1c = CONCAT31(local_1c._1_3_,1);
    if (bVar7) goto LAB_1001f781;
  }
  local_1c = local_1c & 0xffffff00;
LAB_1001f781:
  uVar8 = FUN_1001bc16(param_1,param_2,(char)local_1c,param_3);
  local_30 = CONCAT22(extraout_var,uVar8);
  iVar11 = FUN_1001c7a6(*(uint *)(*(int *)((int)this + 0x138) + 0x2964) & 0x7f);
  iVar12 = FUN_1001c7a6(*(int *)(extraout_EDX + 0x2968));
  pvVar6 = local_8;
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar13 = -(uint)(iVar12 != -1) & iVar12 * 0x120 + 0x140 + (int)this;
    uVar15 = param_1;
  }
  else {
    uVar13 = param_1;
    uVar15 = -(uint)(iVar11 != -1) & iVar11 * 0x120 + 0x140 + (int)this;
  }
  iVar11 = (uint)param_3 * 0x20;
  local_60 = *(uint *)(param_1 + 0xdc + iVar11);
  local_5c = *(uint *)(param_1 + 0xe0 + iVar11);
  local_58 = *(uint *)(param_1 + 0xe8 + iVar11);
  local_54 = local_58 + 1;
  if (uVar15 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(uint *)(uVar15 + 0xb8);
  }
  if (uVar13 == 0) {
    local_10 = 0;
    local_c = 0;
    local_38 = 0;
  }
  else {
    local_10 = *(uint *)(uVar13 + 0xb8);
    local_c = *(uint *)(uVar13 + 0xcc);
    local_38 = (*(int *)(uVar13 + 0xd8) == 0x2d) + 1;
  }
  if (uVar15 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = *(uint *)(uVar15 + 0xc4);
  }
  if (uVar13 == 0) {
    _param_3 = 0xffffffff;
    local_20 = 0xffffffff;
  }
  else {
    _param_3 = *(uint *)(uVar13 + 0xc4);
    local_20 = *(uint *)(uVar13 + 0xd4);
  }
  if (uVar15 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(uVar15 + 200);
  }
  if (uVar13 == 0) {
    local_14 = 0;
    local_3c = 0;
  }
  else {
    local_14 = *(undefined4 *)(uVar13 + 200);
    local_3c = *(undefined4 *)(uVar13 + 0xd8);
  }
  if (((uVar15 != 0) && (uVar13 != 0)) &&
     ((*(uint *)(uVar13 + 0x28) < *(uint *)(uVar15 + 0x28) ||
      (*(uint *)(uVar13 + 0x2c) < *(uint *)(uVar15 + 0x2c))))) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      local_10 = 0;
      _param_3 = 0xffffffff;
      local_c = 0;
      local_20 = 0xffffffff;
    }
    else {
      local_24 = *(int *)(uVar15 + 0xc4) + 1;
      local_28 = 0;
    }
  }
  iVar11 = *(int *)(param_1 + 0x24);
  fVar2 = (float)*(int *)(param_1 + 0x24);
  if (iVar11 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if ((char)local_1c == '\0') {
    local_2c = 0.005;
    local_44 = 0.005;
  }
  else {
    fVar4 = (float)local_50;
    if (local_50 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)(int)local_2c;
    if ((int)local_2c < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    local_44 = -(0.49 / (fVar4 / fVar5));
    local_2c = -(0.49 / (fVar3 / fVar2));
  }
  local_70 = (float)param_4;
  if (param_4 < 0) {
    local_70 = local_70 + 4.2949673e+09;
  }
  local_6c = (float)param_5;
  if (param_5 < 0) {
    local_6c = local_6c + 4.2949673e+09;
  }
  local_68 = (float)param_6;
  if (param_6 < 0) {
    local_68 = local_68 + 4.2949673e+09;
  }
  local_64 = (float)param_7;
  if (param_7 < 0) {
    local_64 = local_64 + 4.2949673e+09;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    param_5 = iVar11 - param_5;
    param_7 = iVar11 - param_7;
  }
  local_4c = local_70 + local_44;
  local_48 = (float)param_5;
  if (param_5 < 0) {
    local_48 = local_48 + 4.2949673e+09;
  }
  local_48 = local_48 + local_2c;
  local_44 = local_68 + local_44;
  local_40 = (float)param_7;
  if (param_7 < 0) {
    local_40 = local_40 + 4.2949673e+09;
  }
  local_40 = local_2c + local_40;
  FUN_1001eba9(local_8,&local_70,&local_4c,*(int *)((int)local_8 + local_30 * 4 + 0x4a0),local_60,
               local_5c,local_28,local_10,local_c,local_18,local_14,local_3c,
               *(undefined4 *)(param_1 + 0x30),local_58,local_54,local_24,_param_3,local_20,0,
               local_38,param_8);
  FUN_100170ee(*(int *)((int)pvVar6 + 0x138));
  *(undefined4 *)(*(int *)((int)pvVar6 + 0x138) + 0x2ac4) = local_34;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2bc1) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2bc0) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2bc2) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x2bc3) = 1;
  *(undefined1 *)(*(int *)((int)pvVar6 + 0x138) + 0x3151) = 1;
  return;
}

