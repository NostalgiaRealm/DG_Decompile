/*
 * FUN_10075643 at 10075643
 * char __thiscall FUN_10075643(void * this, float * param_1, int * param_2, int * param_3, int * param_4, LONG * param_5, uint param_6, uint param_7, undefined4 param_8, undefined4 param_9, int * param_10, int * param_11)
 * Address ranges: 10075643-10075b34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10075643(void *this,float *param_1,int *param_2,int *param_3,int *param_4,LONG *param_5,
            uint param_6,uint param_7,undefined4 param_8,undefined4 param_9,int *param_10,
            int *param_11)

{
  char cVar1;
  tagRECT *ptVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  LONG *pLVar7;
  void *pvVar8;
  float10 fVar9;
  undefined1 local_b8 [16];
  int local_a8;
  undefined1 local_8c [16];
  uint local_7c;
  RECT local_60;
  tagRECT local_50;
  int local_40;
  int *local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  uint local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  float local_18;
  float local_14;
  void *local_10;
  char local_a;
  char local_9;
  
  local_10 = this;
  FUN_100b8667(*(void **)((int)this + 0x1cf00),this,(int)this);
  ptVar2 = &local_50;
  if (param_5 == (LONG *)0x0) {
    ptVar2 = (tagRECT *)FUN_1008cc0c(&ptVar2->left,param_1[2],param_1[3]);
  }
  else {
    local_50.left = *param_5;
    local_50.top = param_5[1];
    local_50.right = param_5[2];
    local_50.bottom = param_5[3];
  }
  local_34 = 1;
  local_60.left = ptVar2->left;
  param_5 = (LONG *)CONCAT13(1,param_5._0_3_);
  local_9 = '\x01';
  local_60.top = ptVar2->top;
  local_60.right = ptVar2->right;
  local_60.bottom = ptVar2->bottom;
  fVar9 = (float10)(**(code **)(*param_3 + 0x2c))();
  local_18 = (float)fVar9;
  fVar9 = (float10)(**(code **)(*param_3 + 0x30))();
  local_14 = (float)fVar9;
  fVar9 = (float10)(**(code **)(*param_2 + 0x2c))();
  local_38 = (float)fVar9;
  fVar9 = (float10)(**(code **)(*param_2 + 0x30))();
  local_40 = (int)param_1[0xb] * param_3[0xb] + (int)param_1[10];
  local_20 = (int *)(float)fVar9;
  local_28 = (int)param_1[9] * param_2[0xb] + (int)param_1[8];
  local_24 = param_3 + 0x12;
  local_1c = param_2 + 0x12;
  local_3c = (int *)0x0;
  local_a = '\0';
  uVar3 = FUN_10074d8d(param_2,param_3);
  if ((char)uVar3 == '\0') {
    local_2c = local_18;
    local_18 = local_38;
    local_30 = (float)local_20;
LAB_100757f2:
    (**(code **)(*param_3 + 4))(param_1[10],param_1[0xb],1);
  }
  else {
    cVar1 = (**(code **)(*param_3 + 0x54))();
    local_30 = 1.0;
    local_2c = local_18;
    if (cVar1 != '\0') {
      FUN_1007b051(param_3,(int)param_1[10],(int)param_1[0xb]);
      local_24 = param_3 + 0x3a;
      local_14 = 1.0;
      param_5 = (LONG *)((uint)param_5 & 0xffffff);
      local_2c = 1.0;
    }
    cVar1 = (**(code **)(*param_2 + 0x54))();
    if (cVar1 == '\0') {
      local_18 = local_38;
      local_30 = (float)local_20;
    }
    else {
      local_3c = param_2;
      FUN_1007b051(param_2,(int)param_1[8],(int)param_1[9]);
      local_1c = param_2 + 0x3a;
      local_18 = 1.0;
      local_9 = '\0';
    }
    local_a = '\x01';
    if (param_5._3_1_ != '\0') goto LAB_100757f2;
  }
  if (local_9 != '\0') {
    (**(code **)(*param_2 + 4))(param_1[8],param_1[9],0);
  }
  param_1[4] = local_2c * param_1[4];
  param_1[5] = local_14 * param_1[5];
  param_1[6] = local_2c * param_1[6];
  param_1[7] = local_14 * param_1[7];
  *param_1 = local_18 * *param_1;
  param_1[1] = local_30 * param_1[1];
  param_1[2] = local_18 * param_1[2];
  param_1[3] = local_30 * param_1[3];
  local_20 = (int *)local_24[4];
  if (local_20 == (int *)0x0) {
    local_20 = (int *)local_24[3];
  }
  (**(code **)(*local_20 + 0x28))(local_20,local_b8);
  cVar1 = FUN_1003a4d0(param_3[0xd]);
  pvVar8 = local_10;
  if (cVar1 != '\0') {
    cVar1 = FUN_10074bd4(param_1,(int)param_2,(int)param_3);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0xc))(local_28,&local_60);
    }
    goto LAB_10075b19;
  }
  (**(code **)(*(int *)local_1c[3] + 0x28))((int *)local_1c[3],local_8c);
  FUN_1008d81c(local_10,param_3[7],param_6,param_7,(byte)param_8,*(byte *)((int)local_10 + 0x1cef8),
               (char)param_9,(char)param_10,(byte)param_11);
  if (local_a == '\0') {
    if (local_a8 == 0x3c) {
      FUN_10076c2b(local_10,1,param_3[2]);
    }
    if (((char)param_4 == '\0') && (local_7c == 0x3c)) {
      FUN_10076c2b(local_10,2,param_2[2]);
    }
  }
  puVar4 = (uint *)(**(code **)(*param_3 + 0x10))(&param_4);
  FUN_1008da4c(local_10,(uint *)&param_5,param_3[7],param_2[7],local_a8,local_7c,*puVar4 >> 0x14 & 3
               ,(byte)param_9,(byte)param_10,(byte)param_8,(byte)param_11);
  pLVar7 = param_5;
  param_4 = (int *)local_24[5];
  param_11 = param_4;
  if (((param_5 == (LONG *)&DAT_00000008) && (local_24[3] != local_1c[3])) &&
     ((char)param_9 == (char)param_10)) {
LAB_10075996:
    param_5 = (LONG *)((param_3[9] != 1) + 4);
LAB_100759ad:
    param_4 = (int *)(**(code **)(*param_3 + 0x60))(0);
    param_1[0xf] = (float)local_20;
    piVar6 = param_4;
    pLVar7 = param_5;
    param_11 = param_4;
  }
  else {
    param_10 = param_4;
    uVar5 = FUN_1008c6e4((uint)param_5);
    piVar6 = param_10;
    if ((char)uVar5 != '\0') {
      if (pLVar7 == (LONG *)&DAT_00000008) goto LAB_10075996;
      goto LAB_100759ad;
    }
  }
  if (piVar6 != (int *)0x0) {
    if (local_24[3] == local_1c[3]) {
      param_10 = (int *)0x0;
      (**(code **)(*param_4 + 0x1c))(param_4,&param_10);
      FUN_1008e0cd(&local_50,param_1[6],param_1[7]);
      uVar3 = FUN_1007463a(local_10,param_10,param_4,(int *)(param_1 + 0xf),&param_11,
                           SUB41(param_1[10],0),local_40,&local_50);
      (**(code **)(*param_10 + 8))(param_10);
      param_1[10] = 0.0;
      param_1[0xb] = 0.0;
      uVar3 = CONCAT31((int3)((uint)param_1 >> 8),(char)uVar3);
      piVar6 = param_11;
      pLVar7 = param_5;
      local_34 = uVar3;
    }
    else {
      uVar3 = 1;
      piVar6 = param_4;
    }
    pvVar8 = local_10;
    if ((char)uVar3 == '\0') {
      cVar1 = (char)local_34;
      goto LAB_10075b19;
    }
    param_4 = (int *)(local_28 * 0x1c);
    if (*(int *)((int)param_4 + local_1c[6]) != 0) {
      param_1[0xc] = (float)local_1c[3];
      param_1[0xd] = *(float *)((int)param_4 + local_1c[6]);
      param_1[0x10] = (float)piVar6;
      FUN_100747e6(local_10,param_1,param_2[7],param_3[7],(uint)pLVar7,(char)param_9,(float *)0x0);
      if (local_3c == (int *)0x0) {
        (**(code **)(*param_2 + 0xc))(local_28,&local_60);
      }
      else {
        FUN_1007b1a2(local_3c,local_28,&local_60);
      }
      cVar1 = (char)local_34;
      goto LAB_10075b19;
    }
  }
  cVar1 = '\0';
  pvVar8 = local_10;
LAB_10075b19:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)pvVar8 + 0x1cf00) + 0x4a0));
  return cVar1;
}

