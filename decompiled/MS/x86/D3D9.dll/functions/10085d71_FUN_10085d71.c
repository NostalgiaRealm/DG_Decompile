/*
 * FUN_10085d71 at 10085d71
 * undefined __thiscall FUN_10085d71(void * this, uint param_1, int param_2, int param_3)
 * Address ranges: 10085d71-10086355
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10085d71(void *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *this_00;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float *pfVar12;
  uint uVar13;
  byte bVar14;
  float local_a4 [3];
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  uint local_84;
  undefined4 local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_34;
  int local_30;
  void *local_2c;
  float local_28;
  int local_24;
  void *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  uint local_c;
  uint local_8;
  
  uVar7 = 0xffffffff;
  local_c = 0xffffffff;
  iVar1 = *(int *)((int)this + 0x138);
  local_24 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  if (iVar1 == 1) {
    uVar7 = 0xf;
    local_c = 0x22;
  }
  else if (iVar1 == 2) {
    uVar7 = 0x10;
    local_c = 0x23;
  }
  else if (iVar1 == 4) {
    uVar7 = 0x11;
    local_c = 0x24;
  }
  else if (iVar1 == 8) {
    uVar7 = 0x12;
    local_c = 0x25;
  }
  else if (iVar1 == 0x10) {
    uVar7 = 0x13;
    local_c = 0x26;
  }
  local_2c = this;
  if (param_3 != 2) {
    if (param_3 != 1) {
      return;
    }
    param_3 = *(int *)((int)this + 0x58);
    if (param_3 == 0) {
      param_3 = *(int *)((int)this + 0x54);
    }
    local_1c = *(int **)((int)this + 0x124);
    local_14 = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),&local_34,
                            *(uint *)((int)this + 0x110),local_24);
    local_18 = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_30,
                            *(uint *)((int)this + 0x60),0);
    local_2c = *(void **)((int)this + 0x1c);
    local_20 = *(void **)((int)this + 0xfc);
    uVar13 = local_8 >> 8;
    local_8 = local_8 & 0xffffff00;
    local_10 = *(void **)((int)this + 0xe0);
    local_98 = (float)((double)*(int *)((int)this + 0x134) +
                      (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x134) >> 0x1f)]);
    local_a4[2] = (float)((double)*(int *)((int)this + 0x130) +
                         (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x130) >> 0x1f)]);
    if (uVar7 < 0x24) {
      if (((uVar7 == 4) || (uVar7 == 5)) || ((uVar7 == 6 || (uVar7 == 7)))) goto LAB_10086282;
      if (uVar7 == 0x22) goto LAB_1008626e;
    }
    else if ((((uVar7 == 0x24) || (uVar7 == 0x25)) || (uVar7 == 0x26)) || (uVar7 == 0x27)) {
LAB_1008626e:
      local_8 = CONCAT31((int3)uVar13,1);
    }
    FUN_1008d81c(local_10,(int)local_2c,0,0,0,0,'\0','\0',0);
LAB_10086282:
    local_84 = param_1;
    local_78 = param_1;
    local_74 = param_2;
    local_5c = param_3;
    local_4c = local_20;
    local_3c = local_1c;
    local_a4[0] = 0.0;
    local_a4[1] = 0.0;
    local_94 = 0;
    local_90 = 0;
    local_80 = 0xffffffff;
    local_7c = local_24;
    local_70 = local_24;
    local_6c = 0;
    local_68 = 0;
    local_58 = 0;
    local_44 = 0;
    local_40 = 0;
    local_64 = 0;
    local_60 = 0;
    if (local_18 == (int *)0x0) {
      local_54 = 0;
    }
    else {
      local_54 = *local_18;
    }
    local_50 = 0;
    if (local_14 == (int *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = *local_14;
    }
    local_8c = local_a4[2];
    local_88 = local_98;
    FUN_1007cf8b(local_10,local_a4,(int)local_2c,(uint)local_2c,uVar7,(char)local_8,(float *)0x0,0.0
                );
    pbVar3 = (byte *)((int)this + ((int)(param_1 & 0x1f) >> 3) + (param_1 >> 5) * 4 + 0x1c0);
    *pbVar3 = *pbVar3 | '\x01' << (param_1 & 7);
    return;
  }
  param_3 = *(int *)((int)this + 0x58);
  if (param_3 == 0) {
    param_3 = *(int *)((int)this + 0x54);
  }
  local_14 = *(int **)((int)this + 0x1ac);
  local_1c = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),&local_30,
                          *(uint *)((int)this + 0x198),local_24);
  local_18 = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_34,
                          *(uint *)((int)this + 0x60),0);
  local_10 = *(void **)((int)this + 0x184);
  local_28 = *(float *)((int)this + 0x1c);
  uVar13 = local_8 >> 8;
  local_8 = local_8 & 0xffffff00;
  local_20 = *(void **)((int)this + 0xe0);
  local_88 = (float)((double)*(int *)((int)this + 0x134) +
                    (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x134) >> 0x1f)]);
  local_8c = (float)((double)*(int *)((int)this + 0x130) +
                    (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x130) >> 0x1f)]);
  local_98 = (float)((double)*(int *)((int)this + 0x18) +
                    (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x18) >> 0x1f)]);
  local_a4[2] = (float)((double)*(int *)((int)this + 0x14) +
                       (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x14) >> 0x1f)]);
  if (uVar7 < 0x24) {
    if ((((uVar7 == 4) || (uVar7 == 5)) || (uVar7 == 6)) || (uVar7 == 7)) goto LAB_10085f1c;
    if (uVar7 == 0x22) goto LAB_10085f08;
  }
  else if (((uVar7 == 0x24) || (uVar7 == 0x25)) || ((uVar7 == 0x26 || (uVar7 == 0x27)))) {
LAB_10085f08:
    local_8 = CONCAT31((int3)uVar13,1);
  }
  FUN_1008d81c(local_20,(int)local_28,0,0,0,0,'\0','\0',0);
LAB_10085f1c:
  local_84 = param_1;
  local_78 = param_1;
  local_74 = param_2;
  local_5c = param_3;
  local_4c = local_10;
  local_3c = local_14;
  local_a4[0] = 0.0;
  local_a4[1] = 0.0;
  local_94 = 0;
  local_90 = 0;
  local_80 = 0xffffffff;
  local_7c = local_24;
  local_70 = local_24;
  local_6c = 0;
  local_68 = 0;
  local_58 = 0;
  local_44 = 0;
  local_40 = 0;
  local_64 = 0;
  local_60 = 0;
  if (local_18 == (int *)0x0) {
    local_54 = 0;
  }
  else {
    local_54 = *local_18;
  }
  local_50 = 0;
  if (local_1c == (int *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = *local_1c;
  }
  FUN_1007cf8b(local_20,local_a4,(int)local_28,(uint)local_28,uVar7,(char)local_8,(float *)0x0,0.0);
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0x40);
  if ((((&DAT_100d29e8)[*(int *)((int)this + 0x1c)] != '\0') &&
      (iVar4 = FUN_10085368((int)this), (&DAT_100d29e8)[iVar4] != '\0')) &&
     (*(char *)(iVar1 * 0x18 + 0x531 + iVar2) != '\0')) {
    bVar14 = 1;
    local_8 = (*(int *)((int)this + 0x24) + param_2) * *(int *)((int)this + 0x2c) + param_1;
    param_3 = *(int *)((int)this + 0x58);
    if (param_3 == 0) {
      param_3 = *(int *)((int)this + 0x54);
    }
    uVar7 = *(uint *)((int)this + 0x60);
    iVar1 = *(int *)((int)this + 0x1c);
    local_20 = *(void **)(*(int *)((int)this + 0x44) + 0x15d8);
    local_1c = *(int **)((int)this + 0x184);
    local_18 = (int *)(float)((double)*(int *)((int)this + 0x134) +
                             (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x134) >> 0x1f)]);
    local_14 = (int *)(float)((double)*(int *)((int)this + 0x130) +
                             (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x130) >> 0x1f)]);
    this_00 = *(void **)((int)this + 0xe0);
    local_10 = (void *)(float)((double)*(int *)((int)this + 0x18) +
                              (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x18) >> 0x1f)]);
    pfVar12 = (float *)0x0;
    uVar11 = *(undefined4 *)((int)local_2c + 0x1ac);
    uVar10 = 0;
    uVar9 = 0;
    local_28 = (float)((double)*(int *)((int)this + 0x14) +
                      (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x14) >> 0x1f)]);
    uVar13 = local_c;
    piVar5 = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),&local_34,
                          *(uint *)((int)local_2c + 0x198),local_24);
    puVar8 = (undefined4 *)&DAT_100d2548;
    piVar6 = FUN_100ba192(local_20,&local_30,uVar7,1);
    FUN_1007f29c(this_00,iVar1,iVar1,param_1,local_8,param_1,param_2,local_8,0.0,0,local_28,local_10
                 ,0,0,local_14,local_18,0,0,param_3,0,local_1c,(undefined4 *)&DAT_100d2548,
                 (undefined4 *)&DAT_100d2548,piVar6,puVar8,piVar5,uVar9,uVar10,uVar11,pfVar12,uVar13
                 ,bVar14);
  }
  return;
}

