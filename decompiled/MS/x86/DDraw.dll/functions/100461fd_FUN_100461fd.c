/*
 * FUN_100461fd at 100461fd
 * undefined __thiscall FUN_100461fd(void * this, int param_1, undefined4 param_2, int param_3, int param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10)
 * Address ranges: 100461fd-10046407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100461fd(void *this,int param_1,undefined4 param_2,int param_3,int param_4,float param_5,
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
    local_38[2] = (float)((double)param_3 + (double)(&DAT_10066fd0)[-(param_3 >> 0x1f)]);
    local_2c = (float)((double)param_4 + (double)(&DAT_10066fd0)[-(param_4 >> 0x1f)]);
    FUN_10046b75(this,param_1,local_38);
    FUN_10046a9d(this,iVar4,(int *)&DAT_10062f20);
    FUN_10046a34(this,iVar4,(int *)&DAT_10062d88);
    FUN_10046b04(this,iVar4);
    FUN_10046de0(this,iVar4,extraout_ECX,*(int *)(iVar3 + 0x988 + (int)this),
                 *(int *)(iVar3 + 0x980 + (int)this),*(int *)(iVar3 + 0x974 + (int)this));
    local_20 = param_2;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_10046eaf(this,iVar4,4,(int)&local_20,0);
    param_2 = 0x10;
    param_1 = 0;
    FUN_10046d0e(this,iVar4,&param_2,&param_2,(int *)(iVar3 + 0x990 + (int)this),&param_2,&param_1);
    FUN_10046d90(this,iVar4);
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
      FUN_10048a55((float *)(iVar4 * 0x10 + local_10[0]),param_3,param_4,param_5,param_6,param_7,
                   param_8,param_9,param_10);
      piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(iVar3 + 0x990 + (int)this),0);
      piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x34))(piVar1,10,iVar4);
    }
  }
  return;
}

