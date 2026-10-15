/*
 * FUN_1004317f at 1004317f
 * undefined __thiscall FUN_1004317f(void * this, int param_1, RECT * param_2)
 * Address ranges: 1004317f-100433d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004317f(void *this,int param_1,RECT *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 uVar7;
  float local_c4 [17];
  int local_80;
  int local_7c;
  int local_54 [3];
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  piVar6 = *(int **)(param_1 + 0xd88);
  if (piVar6 != (int *)0x0) {
    iVar4 = *(int *)(param_1 + 8) * 0x1510;
    local_8 = iVar4;
    (**(code **)(*piVar6 + 0x28))(piVar6,&local_80);
    FUN_1004571d(param_1,param_2,local_80,local_7c,local_c4,&local_20);
    local_38 = 0;
    local_34 = 0x3f800000;
    local_48 = local_20;
    uStack_44 = uStack_1c;
    uStack_40 = uStack_18;
    uStack_3c = uStack_14;
    FUN_1004418f(this,*(int *)(param_1 + 8),&local_48);
    FUN_100440af(this,*(int *)(param_1 + 8),(int *)&DAT_10054c1c,0);
    FUN_1004411c(this,*(int *)(param_1 + 8),(uint *)&DAT_10054bf4);
    FUN_10044433(this,*(int *)(param_1 + 8),5,*(int *)(iVar4 + 0x988 + (int)this),
                 *(int *)(iVar4 + 0x980 + (int)this),*(int *)(iVar4 + 0x970 + (int)this));
    local_30 = *(undefined4 *)(param_1 + 0xd6c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_10044502(this,*(int *)(param_1 + 8),4,(int)&local_30,0);
    local_10 = 0x10;
    param_2 = (RECT *)0x0;
    FUN_10044351(this,*(int *)(param_1 + 8),0,&local_10,(int *)(iVar4 + 0x990 + (int)this),&local_10
                 ,(int *)&param_2);
    FUN_100443d7(this,*(int *)(param_1 + 8),0,0);
    param_2 = *(RECT **)(iVar4 + 0x994 + (int)this);
    if ((LONG *)0x400 < &param_2->top) {
      param_2 = (RECT *)0x0;
    }
    piVar6 = *(int **)(iVar4 + 0x514 + (int)this);
    *(LONG **)(iVar4 + 0x994 + (int)this) = &param_2->top;
    iVar2 = (**(code **)(*piVar6 + 0x38))
                      (piVar6,*(undefined4 *)(iVar4 + 0x990 + (int)this),0,
                       (param_2 != (RECT *)0x0) + '\x04',0,local_54);
    iVar1 = local_8;
    if (-1 < iVar2) {
      pfVar3 = local_c4;
      pfVar5 = (float *)((int)param_2 * 0x10 + local_54[0]);
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar5 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar5 = pfVar5 + 1;
      }
      piVar6 = *(int **)(local_8 + 0x514 + (int)this);
      (**(code **)(*piVar6 + 0x3c))(piVar6,*(undefined4 *)(local_8 + 0x990 + (int)this),0);
      iVar4 = iVar1;
    }
    FUN_1004422f(this,*(int *)(param_1 + 8));
    if (*(int *)(param_1 + 0xd94) == 0) {
      piVar6 = (int *)&DAT_10057960;
      uVar7 = extraout_ECX;
    }
    else {
      local_8 = 0;
      local_c = *(int *)(param_1 + 0xd94);
      FUN_100442c7(this,*(int *)(param_1 + 8),0,2,(int)&local_c);
      FUN_10044040(this,*(int *)(param_1 + 8),(int *)&DAT_10057858,extraout_ECX_00,-1);
      piVar6 = *(int **)(iVar4 + 0x514 + (int)this);
      (**(code **)(*piVar6 + 0x34))(piVar6,4,param_2);
      piVar6 = (int *)&DAT_10057a68;
      uVar7 = extraout_ECX_01;
    }
    FUN_10044040(this,*(int *)(param_1 + 8),piVar6,uVar7,-1);
    local_c = *(int *)(param_1 + 0xd8c);
    local_8 = 0;
    FUN_100442c7(this,*(int *)(param_1 + 8),0,2,(int)&local_c);
    piVar6 = *(int **)(iVar4 + 0x514 + (int)this);
    (**(code **)(*piVar6 + 0x34))(piVar6,4,param_2);
    local_c = 0;
    local_8 = 0;
    FUN_100442c7(this,*(int *)(param_1 + 8),0,2,(int)&local_c);
  }
  return;
}

