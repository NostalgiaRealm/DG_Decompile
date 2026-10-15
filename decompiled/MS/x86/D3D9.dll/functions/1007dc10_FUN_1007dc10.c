/*
 * FUN_1007dc10 at 1007dc10
 * undefined __thiscall FUN_1007dc10(void * this, float * param_1, int * param_2, int * param_3, float param_4, int * param_5, uint param_6, uint param_7, undefined4 param_8, float * param_9, int param_10, float param_11)
 * Address ranges: 1007dc10-1007e05a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1007dc10(void *this,float *param_1,int *param_2,int *param_3,float param_4,int *param_5,
            uint param_6,uint param_7,undefined4 param_8,float *param_9,int param_10,float param_11)

{
  void *this_00;
  float *pfVar1;
  int *this_01;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  float10 fVar9;
  int iVar10;
  undefined1 local_c0 [32];
  int local_a0;
  undefined1 local_88 [32];
  uint local_68;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  RECT local_40;
  int *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int *local_1c;
  float local_18;
  float local_14;
  int *local_10;
  void *local_c;
  
  pfVar1 = param_1;
  piVar7 = &local_50;
  local_c = this;
  if (param_5 == (int *)0x0) {
    piVar7 = FUN_1008cc0c(piVar7,param_1[2],param_1[3]);
  }
  else {
    local_50 = *param_5;
    iStack_4c = param_5[1];
    iStack_48 = param_5[2];
    iStack_44 = param_5[3];
  }
  this_01 = param_3;
  param_1 = (float *)CONCAT13(1,param_1._0_3_);
  param_5 = (int *)CONCAT13(1,param_5._0_3_);
  local_40.left = *piVar7;
  local_40.top = piVar7[1];
  local_40.right = piVar7[2];
  local_40.bottom = piVar7[3];
  fVar9 = (float10)(**(code **)(*param_3 + 0x2c))();
  local_18 = (float)fVar9;
  fVar9 = (float10)(**(code **)(*this_01 + 0x30))();
  piVar7 = param_2;
  local_14 = (float)fVar9;
  fVar9 = (float10)(**(code **)(*param_2 + 0x2c))();
  local_28 = (float)fVar9;
  fVar9 = (float10)(**(code **)(*piVar7 + 0x30))();
  local_1c = this_01 + 0x12;
  local_10 = piVar7 + 0x12;
  local_2c = (float)fVar9;
  local_30 = (int *)0x0;
  param_3 = (int *)((uint)param_3 & 0xffffff);
  uVar3 = FUN_10074d8d(piVar7,this_01);
  if ((char)uVar3 == '\0') {
    local_20 = local_18;
    local_18 = local_28;
    local_24 = local_2c;
LAB_1007dd92:
    (**(code **)(*this_01 + 4))(pfVar1[0xb],pfVar1[0xc],1);
  }
  else {
    cVar2 = (**(code **)(*this_01 + 0x54))();
    local_24 = 1.0;
    local_20 = local_18;
    if (cVar2 != '\0') {
      FUN_100870c5(this_01,(int)pfVar1[0xb],(int)pfVar1[0xc]);
      local_1c = this_01 + 0x4f;
      local_14 = 1.0;
      param_1 = (float *)((uint)param_1 & 0xffffff);
      local_20 = 1.0;
    }
    cVar2 = (**(code **)(*piVar7 + 0x54))();
    if (cVar2 == '\0') {
      local_18 = local_28;
      local_24 = local_2c;
    }
    else {
      local_30 = piVar7;
      FUN_100870c5(piVar7,(int)pfVar1[8],(int)pfVar1[9]);
      local_10 = piVar7 + 0x4f;
      local_18 = 1.0;
      param_5 = (int *)((uint)param_5 & 0xffffff);
    }
    param_3 = (int *)CONCAT13(1,param_3._0_3_);
    if (param_1._3_1_ != '\0') goto LAB_1007dd92;
  }
  if (param_5._3_1_ != '\0') {
    (**(code **)(*piVar7 + 4))(pfVar1[8],pfVar1[9],0);
  }
  pfVar1[4] = local_20 * pfVar1[4];
  pfVar1[5] = local_14 * pfVar1[5];
  pfVar1[6] = local_20 * pfVar1[6];
  pfVar1[7] = local_14 * pfVar1[7];
  *pfVar1 = local_18 * *pfVar1;
  pfVar1[1] = local_24 * pfVar1[1];
  pfVar1[2] = local_18 * pfVar1[2];
  pfVar1[3] = local_24 * pfVar1[3];
  piVar4 = (int *)local_1c[4];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)local_1c[3];
  }
  (**(code **)(*piVar4 + 0x28))(piVar4,local_c0);
  cVar2 = FUN_1003a4d0(this_01[0xd]);
  if (cVar2 != '\0') {
    uVar6 = FUN_1007d613(pfVar1,(int)piVar7,this_01);
    if ((char)uVar6 == '\0') {
      return;
    }
    goto LAB_1007e046;
  }
  FUN_1008d81c(local_c,this_01[7],param_6,param_7,(byte)param_8,*(byte *)((int)local_c + 0x1cef8),
               (char)param_9,(char)param_10,SUB41(param_11,0));
  (**(code **)(*(int *)local_10[3] + 0x28))((int *)local_10[3],local_88);
  if (param_3._3_1_ == '\0') {
    if (local_a0 == 0x3c) {
      FUN_1007eed0(local_c,1,this_01[2]);
    }
    if ((param_4._0_1_ == '\0') && (local_68 == 0x3c)) {
      FUN_1007eed0(local_c,2,piVar7[2]);
    }
  }
  puVar5 = (uint *)(**(code **)(*this_01 + 0x10))(&param_4);
  FUN_1008da4c(local_c,(uint *)&param_1,this_01[7],piVar7[7],local_a0,local_68,*puVar5 >> 0x14 & 3,
               (byte)param_9,(byte)param_10,(byte)param_8,SUB41(param_11,0));
  param_4 = (float)local_1c[3];
  param_11 = (float)local_10[4];
  if (param_11 == 0.0) {
    param_11 = (float)local_10[3];
  }
  FUN_100ba192(*(void **)(*(int *)((int)local_c + 0x1cf04) + 0x15d8),(int *)&param_5,local_1c[6],0);
  if (((param_1 == (float *)&DAT_00000008) && (local_1c[3] != local_10[3])) &&
     ((char)param_9 == (char)param_10)) {
LAB_1007df5e:
    if ((char)param_9 == '\0') {
      param_1 = (float *)((this_01[9] != 1) + 4);
    }
    else {
      param_1 = (float *)((this_01[9] != 1) + 6);
    }
LAB_1007df7e:
    param_4 = (float)(**(code **)(*this_01 + 0x7c))();
    iVar10 = 0;
    this_00 = *(void **)(*(int *)((int)local_c + 0x1cf04) + 0x15d8);
    uVar6 = (**(code **)(*this_01 + 0x8c))(0,1);
    piVar7 = FUN_100ba192(this_00,&param_10,uVar6,iVar10);
    param_5 = (int *)*piVar7;
    pfVar1[0x12] = param_4;
    piVar7 = param_2;
  }
  else {
    uVar6 = FUN_1008c6e4((uint)param_1);
    if ((char)uVar6 != '\0') {
      if (param_1 == (float *)&DAT_00000008) goto LAB_1007df5e;
      goto LAB_1007df7e;
    }
  }
  pfVar1[0xe] = param_11;
  pfVar1[0x12] = param_4;
  pfVar8 = (float *)FUN_100ba192(*(void **)(*(int *)((int)local_c + 0x1cf04) + 0x15dc),
                                 (int *)&param_4,local_10[7],(int)pfVar1[10]);
  pfVar1[0x10] = *pfVar8;
  pfVar1[0x14] = (float)param_5;
  pfVar1[0x18] = (float)local_10[0xd];
  pfVar1[0x1a] = (float)local_10[0xd];
  FUN_1007cf8b(local_c,pfVar1,piVar7[7],this_01[7],(uint)param_1,'\0',param_9,0.0);
  if (local_30 != (int *)0x0) {
    FUN_100871d7(local_30,(uint)pfVar1[10],&local_40);
    return;
  }
LAB_1007e046:
  (**(code **)(*piVar7 + 0xc))(pfVar1[10],&local_40);
  return;
}

