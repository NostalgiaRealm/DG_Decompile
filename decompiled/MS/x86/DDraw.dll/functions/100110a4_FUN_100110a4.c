/*
 * FUN_100110a4 at 100110a4
 * undefined __thiscall FUN_100110a4(void * this, float * param_1, int * param_2, int * param_3, int param_4, LONG * param_5, uint param_6, float param_7, undefined4 param_8, float * param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 100110a4-100115b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100110a4(void *this,float *param_1,int *param_2,int *param_3,int param_4,LONG *param_5,
            uint param_6,float param_7,undefined4 param_8,float *param_9,undefined4 param_10,
            undefined4 param_11)

{
  void *this_00;
  bool bVar1;
  int *piVar2;
  char cVar3;
  tagRECT *ptVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  bool bVar10;
  float10 fVar11;
  int iVar12;
  undefined1 local_c0 [32];
  int local_a0;
  undefined1 local_88 [32];
  uint local_68;
  RECT local_50;
  tagRECT local_40;
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
  
  piVar2 = param_3;
  ptVar4 = &local_40;
  local_c = this;
  if (param_5 == (LONG *)0x0) {
    ptVar4 = (tagRECT *)FUN_1001fa92(&ptVar4->left,param_1[2],param_1[3]);
  }
  else {
    local_40.left = *param_5;
    local_40.top = param_5[1];
    local_40.right = param_5[2];
    local_40.bottom = param_5[3];
  }
  param_5 = (LONG *)CONCAT13(1,param_5._0_3_);
  bVar10 = true;
  local_50.left = ptVar4->left;
  local_50.top = ptVar4->top;
  local_50.right = ptVar4->right;
  local_50.bottom = ptVar4->bottom;
  fVar11 = (float10)(**(code **)(*param_3 + 0x2c))();
  local_18 = (float)fVar11;
  fVar11 = (float10)(**(code **)(*param_3 + 0x30))();
  local_14 = (float)fVar11;
  fVar11 = (float10)(**(code **)(*param_2 + 0x2c))();
  local_28 = (float)fVar11;
  fVar11 = (float10)(**(code **)(*param_2 + 0x30))();
  local_1c = param_3 + 0x12;
  local_10 = param_2 + 0x12;
  local_2c = (float)fVar11;
  local_30 = (int *)0x0;
  bVar1 = false;
  uVar5 = FUN_100081fd(param_2,param_3);
  if ((char)uVar5 == '\0') {
    local_20 = local_18;
    local_18 = local_28;
    local_24 = local_2c;
LAB_10011226:
    (**(code **)(*param_3 + 4))(param_1[0xb],param_1[0xc],1);
  }
  else {
    cVar3 = (**(code **)(*param_3 + 0x54))();
    local_24 = 1.0;
    local_20 = local_18;
    if (cVar3 != '\0') {
      FUN_1001a76c(param_3,(int)param_1[0xb],(int)param_1[0xc]);
      local_1c = param_3 + 0x4f;
      local_14 = 1.0;
      param_5 = (LONG *)((uint)param_5 & 0xffffff);
      local_20 = 1.0;
    }
    cVar3 = (**(code **)(*param_2 + 0x54))();
    bVar10 = cVar3 == '\0';
    if (bVar10) {
      local_18 = local_28;
      local_24 = local_2c;
    }
    else {
      local_30 = param_2;
      FUN_1001a76c(param_2,(int)param_1[8],(int)param_1[9]);
      local_10 = param_2 + 0x4f;
      local_18 = 1.0;
    }
    bVar1 = true;
    if (param_5._3_1_ != '\0') goto LAB_10011226;
  }
  if (bVar10) {
    (**(code **)(*param_2 + 4))(param_1[8],param_1[9],0);
  }
  param_1[4] = local_20 * param_1[4];
  param_1[5] = local_14 * param_1[5];
  param_1[6] = local_20 * param_1[6];
  param_1[7] = local_14 * param_1[7];
  *param_1 = local_18 * *param_1;
  param_1[1] = local_24 * param_1[1];
  param_1[2] = local_18 * param_1[2];
  param_1[3] = local_24 * param_1[3];
  piVar8 = (int *)local_1c[4];
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)local_1c[3];
  }
  (**(code **)(*piVar8 + 0x28))(piVar8,local_c0);
  cVar3 = FUN_10006992(param_3[0xd]);
  if (cVar3 != '\0') {
    uVar7 = FUN_10010a14(param_1,(int)param_2,param_3);
    if ((char)uVar7 == '\0') {
      return;
    }
    goto LAB_100115a4;
  }
  FUN_10020680(local_c,param_3[7],param_6,(uint)param_7,(byte)param_8,
               *(byte *)((int)local_c + 0xcef8),(char)param_9,(char)param_10,(byte)param_11);
  (**(code **)(*(int *)local_10[3] + 0x28))((int *)local_10[3],local_88);
  if (!bVar1) {
    if (local_a0 == 0x3c) {
      FUN_100122bc(local_c,1,param_3[2]);
    }
    if (((char)param_4 == '\0') && (local_68 == 0x3c)) {
      FUN_100122bc(local_c,2,param_2[2]);
    }
  }
  puVar6 = (uint *)(**(code **)(*param_3 + 0x10))(&param_4);
  FUN_100208b0(local_c,(uint *)&param_5,param_3[7],param_2[7],local_a0,local_68,*puVar6 >> 0x14 & 3,
               (byte)param_9,(byte)param_10,(byte)param_8,(byte)param_11);
  piVar8 = (int *)local_1c[3];
  param_3 = (int *)local_10[4];
  if (param_3 == (int *)0x0) {
    param_3 = (int *)local_10[3];
  }
  FUN_1004be7b(*(void **)(*(int *)((int)local_c + 0xcf04) + 0x15d8),(int *)&param_7,local_1c[6],0);
  param_4 = param_4 & 0xffffff;
  if (((char)param_8 == '\0' && (char)param_11 == '\0') && ((char)param_9 == (char)param_10)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((param_5 != (LONG *)&DAT_00000008) || (local_1c[3] == local_10[3])) || (bVar10)) {
    uVar7 = FUN_1001f556((uint)param_5);
    if ((char)uVar7 != '\0') {
      if (param_5 == (LONG *)&DAT_00000008) goto LAB_10011408;
      goto LAB_10011428;
    }
  }
  else {
LAB_10011408:
    if ((char)param_9 == '\0') {
      param_5 = (LONG *)((piVar2[9] != 1) + 4);
    }
    else {
      param_5 = (LONG *)((piVar2[9] != 1) + 6);
    }
LAB_10011428:
    piVar8 = (int *)(**(code **)(*piVar2 + 0x7c))();
    iVar12 = 0;
    this_00 = *(void **)(*(int *)((int)local_c + 0xcf04) + 0x15d8);
    uVar7 = (**(code **)(*piVar2 + 0x8c))(0,1);
    pfVar9 = (float *)FUN_1004be7b(this_00,&param_4,uVar7,iVar12);
    param_7 = *pfVar9;
    param_1[0x12] = (float)piVar8;
    param_4 = CONCAT13(1,(undefined3)param_4);
  }
  if (((piVar8 == param_3) && (param_1[0xb] == param_1[8])) && (param_1[0xc] == param_1[9])) {
    FUN_10020f09(&local_40,param_1[6],param_1[7]);
    piVar8 = local_1c;
    if (param_4._3_1_ != '\0') {
      piVar8 = (int *)(**(code **)(*piVar2 + 0x78))();
    }
    iVar12 = FUN_100101a6((int)piVar2,(int)piVar8,(int)param_1[0xb],(int)param_1[0xc],&local_40);
    if (iVar12 == 0) {
      return;
    }
    param_1[0xd] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xb] = 0.0;
    piVar8 = *(int **)(iVar12 + 0xc);
    pfVar9 = (float *)FUN_1004be7b(*(void **)(*(int *)((int)local_c + 0xcf04) + 0x15d8),&param_4,
                                   *(uint *)(iVar12 + 0x18),0);
    param_7 = *pfVar9;
  }
  param_1[0xe] = (float)param_3;
  param_1[0x12] = (float)piVar8;
  pfVar9 = (float *)FUN_1004be7b(*(void **)(*(int *)((int)local_c + 0xcf04) + 0x15dc),&param_4,
                                 local_10[7],(int)param_1[10]);
  param_1[0x10] = *pfVar9;
  param_1[0x14] = param_7;
  param_1[0x18] = (float)local_10[0xd];
  param_1[0x1a] = (float)local_10[0xd];
  FUN_1001038c(local_c,param_1,param_2[7],piVar2[7],(uint)param_5,'\0',param_9,0.0);
  if (local_30 != (int *)0x0) {
    FUN_1001a87e(local_30,(uint)param_1[10],&local_50);
    return;
  }
LAB_100115a4:
  (**(code **)(*param_2 + 0xc))(param_1[10],&local_50);
  return;
}

