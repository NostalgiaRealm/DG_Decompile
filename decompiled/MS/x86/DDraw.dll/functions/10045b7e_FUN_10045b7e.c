/*
 * FUN_10045b7e at 10045b7e
 * undefined __thiscall FUN_10045b7e(void * this, int param_1, RECT * param_2)
 * Address ranges: 10045b7e-10045dd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045b7e(void *this,int param_1,RECT *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
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
  
  piVar7 = *(int **)(param_1 + 0xd88);
  if (piVar7 != (int *)0x0) {
    iVar5 = *(int *)(param_1 + 8) * 0x1510;
    local_8 = iVar5;
    (**(code **)(*piVar7 + 0x28))(piVar7,&local_80);
    FUN_1004813d(param_1,param_2,local_80,local_7c,local_c4,&local_20);
    local_38 = 0;
    local_34 = 0x3f800000;
    local_48 = local_20;
    uStack_44 = uStack_1c;
    uStack_40 = uStack_18;
    uStack_3c = uStack_14;
    FUN_10046b75(this,*(int *)(param_1 + 8),&local_48);
    FUN_10046a9d(this,*(int *)(param_1 + 8),(int *)&DAT_10062f20);
    FUN_10046b04(this,*(int *)(param_1 + 8));
    FUN_10046de0(this,*(int *)(param_1 + 8),extraout_ECX,*(int *)(iVar5 + 0x988 + (int)this),
                 *(int *)(iVar5 + 0x980 + (int)this),*(int *)(iVar5 + 0x970 + (int)this));
    local_30 = *(undefined4 *)(param_1 + 0xd6c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_10046eaf(this,*(int *)(param_1 + 8),4,(int)&local_30,0);
    local_10 = 0x10;
    param_2 = (RECT *)0x0;
    FUN_10046d0e(this,*(int *)(param_1 + 8),&local_10,&local_10,(int *)(iVar5 + 0x990 + (int)this),
                 &local_10,(int *)&param_2);
    FUN_10046d90(this,*(int *)(param_1 + 8));
    param_2 = *(RECT **)(iVar5 + 0x994 + (int)this);
    if ((LONG *)0x400 < &param_2->top) {
      param_2 = (RECT *)0x0;
    }
    *(LONG **)(iVar5 + 0x994 + (int)this) = &param_2->top;
    piVar7 = *(int **)(iVar5 + 0x514 + (int)this);
    iVar2 = (**(code **)(*piVar7 + 0x38))
                      (piVar7,*(undefined4 *)(iVar5 + 0x990 + (int)this),0,
                       (param_2 != (RECT *)0x0) + '\x04',0,local_54);
    iVar1 = local_8;
    uVar3 = extraout_ECX_00;
    if (-1 < iVar2) {
      pfVar4 = local_c4;
      pfVar6 = (float *)((int)param_2 * 0x10 + local_54[0]);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      }
      piVar7 = *(int **)(local_8 + 0x514 + (int)this);
      (**(code **)(*piVar7 + 0x3c))(piVar7,*(undefined4 *)(local_8 + 0x990 + (int)this),0);
      uVar3 = extraout_ECX_01;
      iVar5 = iVar1;
    }
    FUN_10046c15(this,*(int *)(param_1 + 8),uVar3,uVar3,(uint *)&DAT_10062ec4);
    if (*(int *)(param_1 + 0xd94) == 0) {
      piVar7 = (int *)&DAT_10065f70;
    }
    else {
      local_8 = 0;
      local_c = *(int *)(param_1 + 0xd94);
      FUN_10046ca7(this,*(int *)(param_1 + 8),extraout_ECX_02,2,(int)&local_c);
      FUN_10046a34(this,*(int *)(param_1 + 8),(int *)&DAT_10065e68);
      piVar7 = *(int **)(iVar5 + 0x514 + (int)this);
      (**(code **)(*piVar7 + 0x34))(piVar7,4,param_2);
      piVar7 = (int *)&DAT_10066078;
    }
    FUN_10046a34(this,*(int *)(param_1 + 8),piVar7);
    local_c = *(int *)(param_1 + 0xd8c);
    local_8 = 0;
    FUN_10046ca7(this,*(int *)(param_1 + 8),extraout_ECX_03,2,(int)&local_c);
    piVar7 = *(int **)(iVar5 + 0x514 + (int)this);
    (**(code **)(*piVar7 + 0x34))(piVar7,4,param_2);
    local_c = 0;
    local_8 = 0;
    FUN_10046ca7(this,*(int *)(param_1 + 8),extraout_ECX_04,2,(int)&local_c);
  }
  return;
}

