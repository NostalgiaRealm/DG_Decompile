/*
 * FUN_100920c7 at 100920c7
 * undefined __thiscall FUN_100920c7(void * this, int param_1, undefined4 param_2, int param_3, int param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10)
 * Address ranges: 100920c7-100922dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100920c7(void *this,int param_1,undefined4 param_2,int param_3,int param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int iVar4;
  float local_38 [3];
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [3];
  
  iVar4 = param_1;
  if ((param_9 != 0.0) && (param_10 != 0.0)) {
    local_38[0] = 0.0;
    local_38[1] = 0.0;
    local_28 = 0;
    iVar3 = param_1 * 0x1510;
    local_24 = 0x3f800000;
    local_38[2] = (float)((double)param_3 + (double)(&DAT_100b5ce0)[-(param_3 >> 0x1f)]);
    local_2c = (float)((double)param_4 + (double)(&DAT_100b5ce0)[-(param_4 >> 0x1f)]);
    FUN_10092ce9(this,param_1,local_38);
    FUN_10092c09(this,iVar4,(int *)&DAT_100b0c30,0);
    FUN_10092b9a(this,iVar4,(int *)&DAT_100b0a98,extraout_ECX,-1);
    FUN_10092c76(this,iVar4,(uint *)&DAT_100b0c08);
    FUN_10093013(this,iVar4,5,*(int *)(iVar3 + 0x988 + (int)this),
                 *(int *)(iVar3 + 0x980 + (int)this),*(int *)(iVar3 + 0x974 + (int)this),0);
    local_20 = param_2;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_100930e5(this,iVar4,4,(int)&local_20,0);
    param_2 = 0x10;
    param_1 = 0;
    FUN_10092efa(this,iVar4,&param_2,1,iVar3 + 0x990 + (int)this,(int)&param_2,(int)&param_1);
    FUN_10092fb7(this,iVar4,0,0);
    iVar4 = *(int *)(iVar3 + 0x994 + (int)this);
    if (0x400 < iVar4 + 10U) {
      iVar4 = 0;
    }
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    *(int *)(iVar3 + 0x994 + (int)this) = iVar4 + 10;
    iVar2 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)(iVar3 + 0x990 + (int)this),0,(iVar4 != 0) + '\x04',0,
                       local_10);
    if (-1 < iVar2) {
      FUN_10095ce7((float *)(iVar4 * 0x10 + local_10[0]),param_3,param_4,param_5,param_6,param_7,
                   param_8,param_9,param_10);
      piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(iVar3 + 0x990 + (int)this),0);
      piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x34))(piVar1,10,iVar4);
    }
  }
  return;
}

