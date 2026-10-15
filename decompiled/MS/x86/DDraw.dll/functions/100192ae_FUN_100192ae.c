/*
 * FUN_100192ae at 100192ae
 * undefined __thiscall FUN_100192ae(void * this, uint param_1, int param_2, int param_3)
 * Address ranges: 100192ae-10019936
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100192ae(void *this,uint param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *this_00;
  byte *pbVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float *pfVar22;
  byte bVar23;
  int local_ac;
  int local_a8;
  uint local_a4;
  int local_80;
  int local_7c;
  float local_78 [3];
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  uint local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar17 = 0xffffffff;
  local_a4 = 0xffffffff;
  iVar15 = *(int *)((int)this + 0x138);
  iVar16 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  if (iVar15 == 1) {
    uVar17 = 0xf;
    local_a4 = 0x22;
  }
  else if (iVar15 == 2) {
    uVar17 = 0x10;
    local_a4 = 0x23;
  }
  else if (iVar15 == 4) {
    uVar17 = 0x11;
    local_a4 = 0x24;
  }
  else if (iVar15 == 8) {
    uVar17 = 0x12;
    local_a4 = 0x25;
  }
  else if (iVar15 == 0x10) {
    uVar17 = 0x13;
    local_a4 = 0x26;
  }
  local_50 = iVar16;
  local_44 = iVar16;
  if (param_3 != 2) {
    if (param_3 != 1) {
      return;
    }
    local_ac = *(int *)((int)this + 0x58);
    if (local_ac == 0) {
      local_ac = *(int *)((int)this + 0x54);
    }
    uVar5 = *(undefined4 *)((int)this + 0x124);
    piVar12 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),&local_7c,
                           *(uint *)((int)this + 0x110),iVar16);
    piVar13 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_80,
                           *(uint *)((int)this + 0x60),0);
    iVar15 = *(int *)((int)this + 0x1c);
    local_20 = *(undefined4 *)((int)this + 0xfc);
    local_a8._0_1_ = '\0';
    pvVar6 = *(void **)((int)this + 0xe0);
    local_6c = (float)((double)*(int *)((int)this + 0x134) +
                      (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x134) >> 0x1f)]);
    local_78[2] = (float)((double)*(int *)((int)this + 0x130) +
                         (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x130) >> 0x1f)]);
    if (uVar17 < 0x24) {
      if (((uVar17 == 4) || (uVar17 == 5)) || ((uVar17 == 6 || (uVar17 == 7)))) goto LAB_1001982f;
      local_a8._0_1_ = '\0';
      if (uVar17 == 0x22) goto LAB_10019819;
    }
    else if ((((uVar17 == 0x24) || (uVar17 == 0x25)) || (uVar17 == 0x26)) ||
            (local_a8._0_1_ = '\0', uVar17 == 0x27)) {
LAB_10019819:
      local_a8._0_1_ = '\x01';
    }
    FUN_10020680(pvVar6,iVar15,0,0,0,0,'\0','\0',0);
LAB_1001982f:
    local_58 = param_1;
    local_4c = param_1;
    local_48 = param_2;
    local_30 = local_ac;
    local_78[0] = 0.0;
    local_78[1] = 0.0;
    local_68 = 0;
    local_64 = 0;
    local_54 = 0xffffffff;
    local_40 = 0;
    local_3c = 0;
    local_2c = 0;
    local_18 = 0;
    local_14 = 0;
    local_38 = 0;
    local_34 = 0;
    if (piVar13 == (int *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = *piVar13;
    }
    local_24 = 0;
    if (piVar12 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = *piVar12;
    }
    local_60 = local_78[2];
    local_5c = local_6c;
    local_10 = uVar5;
    FUN_1001038c(pvVar6,local_78,iVar15,iVar15,uVar17,(char)local_a8,(float *)0x0,0.0);
    pbVar11 = (byte *)((int)this + ((int)(param_1 & 0x1f) >> 3) + (param_1 >> 5) * 4 + 0x1c0);
    *pbVar11 = *pbVar11 | '\x01' << (param_1 & 7);
    return;
  }
  local_a8 = *(int *)((int)this + 0x58);
  if (local_a8 == 0) {
    local_a8 = *(int *)((int)this + 0x54);
  }
  uVar5 = *(undefined4 *)((int)this + 0x1ac);
  piVar12 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),&local_80,
                         *(uint *)((int)this + 0x198),iVar16);
  piVar13 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_7c,
                         *(uint *)((int)this + 0x60),0);
  local_20 = *(undefined4 *)((int)this + 0x184);
  iVar15 = *(int *)((int)this + 0x1c);
  local_ac._0_1_ = '\0';
  pvVar6 = *(void **)((int)this + 0xe0);
  local_5c = (float)((double)*(int *)((int)this + 0x134) +
                    (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x134) >> 0x1f)]);
  local_60 = (float)((double)*(int *)((int)this + 0x130) +
                    (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x130) >> 0x1f)]);
  local_6c = (float)((double)*(int *)((int)this + 0x18) +
                    (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x18) >> 0x1f)]);
  local_78[2] = (float)((double)*(int *)((int)this + 0x14) +
                       (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x14) >> 0x1f)]);
  if (uVar17 < 0x24) {
    if ((((uVar17 == 4) || (uVar17 == 5)) || (uVar17 == 6)) || (uVar17 == 7)) goto LAB_10019471;
    local_ac._0_1_ = '\0';
    if (uVar17 == 0x22) goto LAB_1001945b;
  }
  else if (((uVar17 == 0x24) || (uVar17 == 0x25)) ||
          ((uVar17 == 0x26 || (local_ac._0_1_ = '\0', uVar17 == 0x27)))) {
LAB_1001945b:
    local_ac._0_1_ = '\x01';
  }
  FUN_10020680(pvVar6,iVar15,0,0,0,0,'\0','\0',0);
LAB_10019471:
  local_58 = param_1;
  local_4c = param_1;
  local_48 = param_2;
  local_30 = local_a8;
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0xffffffff;
  local_40 = 0;
  local_3c = 0;
  local_2c = 0;
  local_18 = 0;
  local_14 = 0;
  local_38 = 0;
  local_34 = 0;
  if (piVar13 == (int *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = *piVar13;
  }
  local_24 = 0;
  if (piVar12 == (int *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *piVar12;
  }
  local_10 = uVar5;
  FUN_1001038c(pvVar6,local_78,iVar15,iVar15,uVar17,(char)local_ac,(float *)0x0,0.0);
  iVar15 = *(int *)((int)this + 0x10);
  iVar7 = *(int *)((int)this + 0x40);
  if ((((&DAT_10062a58)[*(int *)((int)this + 0x1c)] != '\0') &&
      (iVar14 = FUN_100188cc((int)this), (&DAT_10062a58)[iVar14] != '\0')) &&
     (*(char *)(iVar15 * 0x18 + 0x531 + iVar7) != '\0')) {
    bVar23 = 1;
    iVar15 = (*(int *)((int)this + 0x24) + param_2) * *(int *)((int)this + 0x2c) + param_1;
    local_ac = *(int *)((int)this + 0x58);
    if (local_ac == 0) {
      local_ac = *(int *)((int)this + 0x54);
    }
    uVar17 = *(uint *)((int)this + 0x60);
    iVar7 = *(int *)((int)this + 0x1c);
    pvVar6 = *(void **)(*(int *)((int)this + 0x44) + 0x15d8);
    uVar5 = *(undefined4 *)((int)this + 0x184);
    iVar14 = *(int *)((int)this + 0x134);
    dVar1 = (double)(&DAT_10066fd0)[-(iVar14 >> 0x1f)];
    iVar8 = *(int *)((int)this + 0x130);
    dVar2 = (double)(&DAT_10066fd0)[-(iVar8 >> 0x1f)];
    iVar9 = *(int *)((int)this + 0x18);
    dVar3 = (double)(&DAT_10066fd0)[-(iVar9 >> 0x1f)];
    iVar10 = *(int *)((int)this + 0x14);
    this_00 = *(void **)((int)this + 0xe0);
    dVar4 = (double)(&DAT_10066fd0)[-(iVar10 >> 0x1f)];
    pfVar22 = (float *)0x0;
    uVar21 = *(undefined4 *)((int)this + 0x1ac);
    uVar20 = 0;
    uVar19 = 0;
    piVar12 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),&local_7c,
                           *(uint *)((int)this + 0x198),iVar16);
    puVar18 = (undefined4 *)&DAT_10062730;
    piVar13 = FUN_1004be7b(pvVar6,&local_80,uVar17,1);
    FUN_10012688(this_00,iVar7,iVar7,param_1,iVar15,param_1,param_2,iVar15,0.0,0,
                 (float)((double)iVar10 + dVar4),(float)((double)iVar9 + dVar3),0,0,
                 (float)((double)iVar8 + dVar2),(float)((double)iVar14 + dVar1),0,0,local_ac,0,uVar5
                 ,(undefined4 *)&DAT_10062730,(undefined4 *)&DAT_10062730,piVar13,puVar18,piVar12,
                 uVar19,uVar20,uVar21,pfVar22,local_a4,bVar23);
  }
  return;
}

