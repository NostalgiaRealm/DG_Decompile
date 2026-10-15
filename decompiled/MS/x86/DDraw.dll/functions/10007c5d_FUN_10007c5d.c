/*
 * FUN_10007c5d at 10007c5d
 * undefined __thiscall FUN_10007c5d(void * this, float * param_1, int param_2, uint param_3, uint param_4, char param_5, float * param_6)
 * Address ranges: 10007c5d-10008043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10007c5d(void *this,float *param_1,int param_2,uint param_3,uint param_4,char param_5,
            float *param_6)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  undefined4 extraout_ECX_00;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float fVar16;
  float local_64 [17];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [2];
  uint local_c;
  float local_8;
  
  if ((char)param_6 == '\0') {
    local_c = -((int)param_4 >> 0x1f);
    fVar11 = param_1[6];
    fVar13 = param_1[4];
    fVar10 = param_1[7];
    fVar14 = param_1[5];
    pfVar15 = (float *)(((fVar11 - fVar13) / (param_1[2] - *param_1)) * 0.495);
    fVar16 = ((fVar10 - fVar14) / (param_1[3] - param_1[1])) * 0.495;
    param_6 = pfVar15;
    local_8 = fVar16;
    if (local_c == 0) {
      if ((param_4 == 5) || (param_4 == 4)) {
        cVar5 = '\x01';
      }
      else {
        cVar5 = '\0';
      }
    }
    else {
      uVar2 = FUN_1001f556(param_4);
      cVar5 = (char)uVar2;
    }
    if (cVar5 != '\0') {
      (**(code **)(*(int *)param_1[0xf] + 0x28))((int *)param_1[0xf],local_64 + 5);
      uVar7 = (uint)local_64[5] >> (SUB41(param_1[10],0) & 0x1f);
      uVar8 = (uint)local_64[6] >> (SUB41(param_1[10],0) & 0x1f);
      uVar2 = 1;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar7 = 1;
      if (uVar8 != 0) {
        uVar7 = uVar8;
      }
      fVar11 = (float)((double)(int)uVar2 + (double)(&DAT_10066fd0)[-((int)uVar2 >> 0x1f)]);
      pfVar15 = (float *)((float)param_6 / fVar11);
      fVar10 = (float)((double)(int)uVar7 + (double)(&DAT_10066fd0)[-((int)uVar7 >> 0x1f)]);
      fVar16 = local_8 / fVar10;
      if (param_5 == '\0') {
        fVar12 = 0.5;
      }
      else {
        fVar12 = 1.0;
      }
      fVar13 = (fVar12 + param_1[4]) / fVar11;
      fVar14 = (fVar12 + param_1[5]) / fVar10;
      fVar11 = (fVar12 + param_1[6]) / fVar11;
      fVar10 = (fVar12 + param_1[7]) / fVar10;
    }
    param_1[4] = fVar13 - (float)pfVar15;
    param_1[5] = fVar14 - fVar16;
    param_1[6] = fVar11 - (float)pfVar15;
    param_1[7] = fVar10 - fVar16;
    uVar2 = local_c;
  }
  else {
    uVar2 = param_4 >> 0x1f;
  }
  if ((uVar2 != 0) && (((byte)param_4 & 0xf) == 2)) {
    FUN_10022013((uint *)&param_6,(int)this,param_3);
    param_4 = ~((int)param_6 << 8) & 0x40000000U | ((uint)param_6 & 0xfff00) << 10 |
              param_4 & 0x8003ffff;
  }
  param_6 = (float *)-((int)param_4 >> 0x1f);
  if (param_6 == (float *)0x0) {
    local_8 = *(float *)((int)this + param_4 * 4 + 53000);
  }
  else {
    local_8 = (float)FUN_10006a8a((void *)((int)this + 0xcfb0),param_4);
  }
  fVar11 = 0.0;
  fVar13 = 0.0;
  fVar10 = 0.0;
  fVar14 = 0.0;
  local_20 = 0.0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  afStack_14[0] = 0.0;
  if (param_6 == (float *)0x0) {
    bVar9 = FUN_10009f85(this,local_64,local_64 + 1,local_64 + 2,local_64 + 3,param_3);
    if (!bVar9) {
      local_64[3] = 0.0;
      local_64[2] = 0.0;
      local_64[1] = 0.0;
      local_64[0] = 0.0;
    }
    if (param_2 == 0) {
      local_64[4] = *(float *)((int)this + 0xd0e4);
    }
    else {
      local_64[4] = 0.0;
    }
    uVar2 = 7;
    local_64[5] = param_1[0x10];
    local_64[6] = param_1[0x11];
  }
  else {
    bVar1 = FUN_1001f58a(param_4);
    param_6 = (float *)CONCAT13(bVar1,param_6._0_3_);
    if ((bVar1 & 0x3c) != 0) {
      FUN_10009f85(this,&local_20,&fStack_1c,&fStack_18,afStack_14,param_3);
      bVar1 = param_6._3_1_;
    }
    bVar9 = (bVar1 & 1) != 0;
    if (bVar9) {
      local_64[0] = param_1[0x10];
    }
    uVar2 = (uint)bVar9;
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
      local_64[uVar2] = *(float *)((int)this + 0xd0e4);
      uVar2 = uVar2 + 1;
    }
    param_6 = param_1 + 0x11;
    if (uVar2 == 0) goto LAB_10007fb5;
  }
  param_6 = param_1 + 0x11;
  local_20 = fVar11;
  fStack_1c = fVar13;
  fStack_18 = fVar10;
  afStack_14[0] = fVar14;
  FUN_10046eaf(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),4,(int)&local_20,0);
  uVar6 = extraout_ECX;
  if (uVar2 < 0x10) {
    pfVar15 = local_64 + uVar2;
    for (uVar7 = uVar2 * -4 + 0x40 >> 2; uVar6 = 0, uVar7 != 0; uVar7 = uVar7 - 1) {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    }
  }
  FUN_10046ca7(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),uVar6,0x10,(int)local_64);
LAB_10007fb5:
  param_1[0x10] = 0.0;
  *param_6 = 0.0;
  FUN_1002074f(this,param_2,0,0);
  FUN_10046a34(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),(int *)&DAT_10062d88);
  piVar3 = (int *)&DAT_10062f20;
  if (param_1[0xc] == 0.0) {
    piVar3 = (int *)&DAT_10062e90;
  }
  FUN_10046a9d(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),piVar3);
  FUN_10046b04(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14));
  puVar4 = (uint *)&DAT_10062d54;
  if (param_5 == '\0') {
    puVar4 = (uint *)&DAT_10062ec4;
  }
  FUN_10046c15(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),&DAT_10062ec4,&DAT_10062ec4
               ,puVar4);
  FUN_10007760(this,param_1,(int)local_8,extraout_ECX_00,1);
  return;
}

