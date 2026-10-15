/*
 * FUN_100b3c40 at 100b3c40
 * undefined __thiscall FUN_100b3c40(void * this, int param_1, RECT * param_2)
 * Address ranges: 100b3c40-100b3e9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b3c40(void *this,int param_1,RECT *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
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
  
  piVar1 = *(int **)(param_1 + 0xd88);
  if (piVar1 != (int *)0x0) {
    iVar7 = *(int *)(param_1 + 8) * 0x1510;
    local_8 = iVar7;
    (**(code **)(*piVar1 + 0x28))(piVar1,&local_80);
    FUN_100b7a22(param_1,param_2,local_80,local_7c,local_c4,&local_20);
    local_38 = 0;
    local_34 = 0x3f800000;
    local_48 = local_20;
    uStack_44 = uStack_1c;
    uStack_40 = uStack_18;
    uStack_3c = uStack_14;
    FUN_100b4f64(this,*(int *)(param_1 + 8),&local_48);
    FUN_100b4e84(this,*(int *)(param_1 + 8),(int *)&DAT_100d3f40,0);
    FUN_100b4ef1(this,*(int *)(param_1 + 8),(uint *)&DAT_100d3f18);
    FUN_100b5313(this,*(int *)(param_1 + 8),5,*(int *)(iVar7 + 0x988 + (int)this),
                 *(int *)(iVar7 + 0x980 + (int)this),*(int *)(iVar7 + 0x970 + (int)this),0);
    local_30 = *(undefined4 *)(param_1 + 0xd6c);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_100b53e5(this,*(int *)(param_1 + 8),4,(int)&local_30,0);
    local_10 = 0x10;
    param_2 = (RECT *)0x0;
    FUN_100b51fa(this,*(int *)(param_1 + 8),&local_10,1,iVar7 + 0x990 + (int)this,(int)&local_10,
                 (int)&param_2);
    FUN_100b52b7(this,*(int *)(param_1 + 8),0,0);
    param_2 = *(RECT **)(iVar7 + 0x994 + (int)this);
    if ((LONG *)0x400 < &param_2->top) {
      param_2 = (RECT *)0x0;
    }
    piVar1 = *(int **)(iVar7 + 0x514 + (int)this);
    *(LONG **)(iVar7 + 0x994 + (int)this) = &param_2->top;
    iVar3 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)(iVar7 + 0x990 + (int)this),0,
                       (param_2 != (RECT *)0x0) + '\x04',0,local_54);
    iVar2 = local_8;
    uVar5 = extraout_ECX;
    if (-1 < iVar3) {
      pfVar6 = local_c4;
      pfVar8 = (float *)((int)param_2 * 0x10 + local_54[0]);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar8 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
      }
      piVar1 = *(int **)(local_8 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(local_8 + 0x990 + (int)this),0);
      uVar5 = extraout_ECX_00;
      iVar7 = iVar2;
    }
    FUN_100b5089(this,*(int *)(param_1 + 8),uVar5,uVar5,(uint *)&DAT_100d3ee4);
    if (*(int *)(param_1 + 0xd94) == 0) {
      puVar4 = (uint *)&DAT_100d8570;
    }
    else {
      local_8 = 0;
      local_c = *(int *)(param_1 + 0xd94);
      FUN_100b5170(this,*(int *)(param_1 + 8),0,2,(int)&local_c);
      FUN_100b4d9e(this,*(int *)(param_1 + 8),(uint *)&DAT_100d8468,(int *)0x0,-1,'\0');
      piVar1 = *(int **)(iVar7 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x34))(piVar1,4,param_2);
      puVar4 = (uint *)&DAT_100d8678;
    }
    FUN_100b4d9e(this,*(int *)(param_1 + 8),puVar4,(int *)0x0,-1,'\0');
    local_c = *(int *)(param_1 + 0xd8c);
    local_8 = 0;
    FUN_100b5170(this,*(int *)(param_1 + 8),0,2,(int)&local_c);
    piVar1 = *(int **)(iVar7 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x34))(piVar1,4,param_2);
    local_c = 0;
    local_8 = 0;
    FUN_100b5170(this,*(int *)(param_1 + 8),0,2,(int)&local_c);
  }
  return;
}

