/*
 * FUN_1005ea71 at 1005ea71
 * undefined __thiscall FUN_1005ea71(void * this, float * param_1, int param_2, uint param_3, uint param_4, char param_5, float * param_6)
 * Address ranges: 1005ea71-1005ee5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1005ea71(void *this,float *param_1,int param_2,uint param_3,uint param_4,char param_5,
            float *param_6)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  float fVar15;
  float local_64 [17];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [2];
  uint local_c;
  float local_8;
  
  if ((char)param_6 == '\0') {
    local_c = -((int)param_4 >> 0x1f);
    fVar10 = param_1[6];
    fVar12 = param_1[4];
    fVar9 = param_1[7];
    fVar13 = param_1[5];
    pfVar14 = (float *)(((fVar10 - fVar12) / (param_1[2] - *param_1)) * 0.495);
    fVar15 = ((fVar9 - fVar13) / (param_1[3] - param_1[1])) * 0.495;
    param_6 = pfVar14;
    local_8 = fVar15;
    if (local_c == 0) {
      if ((param_4 == 5) || (param_4 == 4)) {
        cVar5 = '\x01';
      }
      else {
        cVar5 = '\0';
      }
    }
    else {
      uVar2 = FUN_10076527(param_4);
      cVar5 = (char)uVar2;
    }
    if (cVar5 != '\0') {
      (**(code **)(*(int *)param_1[0xf] + 0x28))((int *)param_1[0xf],local_64 + 5);
      uVar6 = (uint)local_64[5] >> (SUB41(param_1[10],0) & 0x1f);
      uVar7 = (uint)local_64[6] >> (SUB41(param_1[10],0) & 0x1f);
      uVar2 = 1;
      if (uVar6 != 0) {
        uVar2 = uVar6;
      }
      uVar6 = 1;
      if (uVar7 != 0) {
        uVar6 = uVar7;
      }
      fVar10 = (float)((double)(int)uVar2 + (double)(&DAT_100b5ce0)[-((int)uVar2 >> 0x1f)]);
      pfVar14 = (float *)((float)param_6 / fVar10);
      fVar9 = (float)((double)(int)uVar6 + (double)(&DAT_100b5ce0)[-((int)uVar6 >> 0x1f)]);
      fVar15 = local_8 / fVar9;
      if (param_5 == '\0') {
        fVar11 = 0.5;
      }
      else {
        fVar11 = 1.0;
      }
      fVar12 = (fVar11 + param_1[4]) / fVar10;
      fVar13 = (fVar11 + param_1[5]) / fVar9;
      fVar10 = (fVar11 + param_1[6]) / fVar10;
      fVar9 = (fVar11 + param_1[7]) / fVar9;
    }
    param_1[4] = fVar12 - (float)pfVar14;
    param_1[5] = fVar13 - fVar15;
    param_1[6] = fVar10 - (float)pfVar14;
    param_1[7] = fVar9 - fVar15;
    uVar2 = local_c;
  }
  else {
    uVar2 = param_4 >> 0x1f;
  }
  if ((uVar2 != 0) && (((byte)param_4 & 0xf) == 2)) {
    FUN_1007905f((uint *)&param_6,(int)this,param_3);
    param_4 = ~((int)param_6 << 8) & 0x40000000U | ((uint)param_6 & 0xfff00) << 10 |
              param_4 & 0x8003ffff;
  }
  param_6 = (float *)-((int)param_4 >> 0x1f);
  if (param_6 == (float *)0x0) {
    local_8 = *(float *)((int)this + param_4 * 4 + 0x1cf08);
  }
  else {
    local_8 = (float)FUN_1005d866((void *)((int)this + 0x1cfb0),param_4);
  }
  fVar10 = 0.0;
  fVar12 = 0.0;
  fVar9 = 0.0;
  fVar13 = 0.0;
  local_20 = 0.0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  afStack_14[0] = 0.0;
  if (param_6 == (float *)0x0) {
    bVar8 = FUN_10060e5d(this,local_64,local_64 + 1,local_64 + 2,local_64 + 3,param_3);
    if (!bVar8) {
      local_64[3] = 0.0;
      local_64[2] = 0.0;
      local_64[1] = 0.0;
      local_64[0] = 0.0;
    }
    if (param_2 == 0) {
      local_64[4] = *(float *)((int)this + 0x1d0e4);
    }
    else {
      local_64[4] = 0.0;
    }
    uVar2 = 7;
    local_64[5] = param_1[0x10];
    local_64[6] = param_1[0x11];
  }
  else {
    bVar1 = FUN_1007655b(param_4);
    param_6 = (float *)CONCAT13(bVar1,param_6._0_3_);
    if ((bVar1 & 0x3c) != 0) {
      FUN_10060e5d(this,&local_20,&fStack_1c,&fStack_18,afStack_14,param_3);
      bVar1 = param_6._3_1_;
    }
    bVar8 = (bVar1 & 1) != 0;
    if (bVar8) {
      local_64[0] = param_1[0x10];
    }
    uVar2 = (uint)bVar8;
    if ((bVar1 & 2) != 0) {
      local_64[uVar2] = param_1[0x11];
      uVar2 = uVar2 + 1;
    }
    if ((bVar1 & 4) != 0) {
      local_64[uVar2] = local_20;
      uVar2 = uVar2 + 1;
    }
    if ((bVar1 & 8) != 0) {
      local_64[uVar2] = fStack_1c;
      uVar2 = uVar2 + 1;
    }
    if ((bVar1 & 0x10) != 0) {
      local_64[uVar2] = fStack_18;
      uVar2 = uVar2 + 1;
    }
    if ((bVar1 & 0x20) != 0) {
      local_64[uVar2] = afStack_14[0];
      uVar2 = uVar2 + 1;
    }
    if ((char)bVar1 < '\0') {
      local_64[uVar2] = *(float *)((int)this + 0x1d0e4);
      uVar2 = uVar2 + 1;
    }
    param_6 = param_1 + 0x11;
    if (uVar2 == 0) goto LAB_1005edca;
  }
  param_6 = param_1 + 0x11;
  local_20 = fVar10;
  fStack_1c = fVar12;
  fStack_18 = fVar9;
  afStack_14[0] = fVar13;
  FUN_100930e5(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),4,(int)&local_20,0);
  if (uVar2 < 0x10) {
    pfVar14 = local_64 + uVar2;
    for (uVar6 = uVar2 * -4 + 0x40 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pfVar14 = 0.0;
      pfVar14 = pfVar14 + 1;
    }
  }
  FUN_10092e70(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),0,0x10,(int)local_64);
LAB_1005edca:
  param_1[0x10] = 0.0;
  *param_6 = 0.0;
  FUN_1007773b(this,param_2,0,0);
  FUN_10092b9a(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),(int *)&DAT_100b0a98,
               extraout_ECX,-1);
  piVar3 = (int *)&DAT_100b0c30;
  if (param_1[0xc] == 0.0) {
    piVar3 = (int *)&DAT_100b0ba0;
  }
  FUN_10092c09(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),piVar3,0);
  FUN_10092c76(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),(uint *)&DAT_100b0c08);
  puVar4 = (uint *)&DAT_100b0a64;
  if (param_5 == '\0') {
    puVar4 = (uint *)&DAT_100b0bd4;
  }
  FUN_10092d89(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),&DAT_100b0bd4,
               &DAT_100b0bd4,puVar4);
  FUN_1005e545(this,param_1,(int)local_8,extraout_ECX_00,1);
  return;
}

