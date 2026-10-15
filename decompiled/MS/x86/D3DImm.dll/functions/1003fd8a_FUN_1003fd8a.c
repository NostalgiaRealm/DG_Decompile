/*
 * FUN_1003fd8a at 1003fd8a
 * undefined4 __thiscall FUN_1003fd8a(void * this, undefined4 * param_1, uint param_2, int * param_3, uint param_4, uint * param_5)
 * Address ranges: 1003fd8a-100400a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1003fd8a(void *this,undefined4 *param_1,uint param_2,int *param_3,uint param_4,uint *param_5)

{
  BOOL BVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ushort in_FPUControlWord;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 auStack_24c [7];
  undefined4 uStack_230;
  float local_210 [16];
  int local_1d0 [16];
  int local_190 [3];
  int local_184;
  undefined1 local_174;
  undefined1 local_171;
  byte local_170;
  undefined2 local_16f;
  undefined4 *local_16c;
  int *local_168;
  uint *local_164;
  int local_15c;
  int local_158;
  int local_154;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  RECT local_50;
  uint local_40;
  uint local_3c;
  int local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  uint *local_18;
  uint *local_14;
  
  local_1c = this;
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  local_18 = &local_40;
  local_14 = (uint *)CONCAT22(local_14._2_2_,in_FPUControlWord);
  local_40 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_40 = (uint)in_FPUControlWord;
    local_14 = (uint *)(in_FPUControlWord & 0xf0ff | 0x23f);
  }
  uVar7 = 0x80070057;
  if (((param_3 != (int *)0x0) && ((param_4 & 3) != 0)) && (*param_3 == 0x34)) {
    FUN_10008bab((int)this);
    local_14 = MXCSR;
    MXCSR = (void *)0x3fc0;
    local_18 = (uint *)(*(int *)((int)this + 0x9cc) + 0x7c0);
    puVar8 = param_1;
    puVar9 = auStack_24c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    pfVar2 = FUN_1003e2c6(local_210);
    FUN_10013790(local_18,local_1d0,(int)pfVar2);
    local_68 = param_1[1];
    local_34 = (float)param_3[9];
    local_64 = param_1[2];
    local_60 = param_1[3];
    local_5c = param_1[4];
    fStack_30 = (float)param_3[0xb];
    local_24 = 0;
    local_20 = 0;
    bVar3 = ~(byte)(param_4 >> 1) & 1;
    local_2c = (float)param_3[10];
    local_58 = 0;
    local_54 = 0x3f800000;
    local_3c = 0;
    fStack_28 = (float)param_3[0xc];
    local_38 = 0xfff;
    uStack_230 = 0x1003ff03;
    FUN_1005c9cc(local_190,0,0x40);
    local_190[0] = param_3[1];
    local_184 = param_3[2];
    local_15c = param_3[3];
    local_154 = param_3[4];
    local_174 = 2;
    if (bVar3 == 0) {
      local_158 = 0;
    }
    else {
      local_158 = param_3[5];
    }
    local_164 = &local_3c;
    local_16c = &local_68;
    local_168 = local_1d0;
    local_171 = 1;
    local_16f = 0x101;
    uStack_230 = 0x1003ff95;
    local_170 = bVar3;
    FUN_10011755(local_1c,local_190,0,param_2);
    *param_5 = 0;
    if (bVar3 != 0) {
      uVar5 = (local_38 << 0xc | local_3c) & 0xfff000;
      param_3[7] = uVar5;
      param_3[8] = local_3c & 0xfff;
      *param_5 = uVar5;
    }
    if ((DAT_1006bbfc & 1) == 0) {
      DAT_1006bbfc = DAT_1006bbfc | 1;
      _DAT_1006bc00 = -2.0;
      fRam1006bc04 = -2.0;
      fRam1006bc08 = 2.0;
      fRam1006bc0c = 2.0;
    }
    fVar10 = local_2c + fRam1006bc04;
    fVar11 = fStack_30 + fRam1006bc08;
    fVar12 = fStack_28 + fRam1006bc0c;
    param_3[9] = (int)(local_34 + _DAT_1006bc00);
    param_3[10] = (int)fVar10;
    param_3[0xb] = (int)fVar11;
    param_3[0xc] = (int)fVar12;
    local_50.left = param_1[1];
    local_50.top = param_1[2];
    local_50.right = param_1[3] + param_1[1];
    local_50.bottom = param_1[4] + param_1[2];
    uStack_230 = 0x10040039;
    IntersectRect((LPRECT)(param_3 + 9),(RECT *)(param_3 + 9),&local_50);
    iVar4 = param_3[1];
    uVar5 = 0;
    iVar6 = param_3[3];
    if (param_2 != 0) {
      do {
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
        iVar4 = iVar4 + param_3[2];
        iVar6 = iVar6 + param_3[4];
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_2);
    }
    uVar7 = 0;
    local_1c = local_14;
    MXCSR = local_14;
  }
  local_14 = &local_40;
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar7;
}

