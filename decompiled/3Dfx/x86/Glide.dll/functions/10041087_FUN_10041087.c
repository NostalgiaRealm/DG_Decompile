/*
 * FUN_10041087 at 10041087
 * undefined __thiscall FUN_10041087(void * this, int param_1, undefined4 param_2, int param_3, int param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10)
 * Address ranges: 10041087-100412b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FUN_10041087(void *this,int param_1,undefined4 param_2,int param_3,int param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_44 [2];
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20 [3];
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_9 != 0.0) && (param_10 != 0.0)) {
    local_20[0] = 0.0;
    local_20[1] = 0.0;
    local_10 = 0;
    iVar3 = param_1 * 0x1510;
    local_c = 0x3f800000;
    local_20[2] = (float)((double)param_3 + (double)(&DAT_10055140)[-(param_3 >> 0x1f)]);
    local_14 = (float)((double)param_4 + (double)(&DAT_10055140)[-(param_4 >> 0x1f)]);
    FUN_10041a37(this,param_1,local_20);
    FUN_10041957(this,param_1,(int *)&DAT_10051d9c,0);
    FUN_100418e8(this,param_1,(int *)&DAT_10051c38,extraout_ECX,-1);
    FUN_100419c4(this,param_1,(uint *)&DAT_10051d74);
    FUN_10041cdb(this,param_1,5,*(int *)(iVar3 + 0x988 + (int)this),
                 *(int *)(iVar3 + 0x980 + (int)this),*(int *)(iVar3 + 0x974 + (int)this));
    local_30 = param_2;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_10041daa(this,param_1,4,(int)&local_30,0);
    local_44[1] = 0x10;
    local_44[0] = 0;
    FUN_10041bf9(this,param_1,0,local_44 + 1,(int *)(iVar3 + 0x990 + (int)this),local_44 + 1,
                 local_44);
    FUN_10041c7f(this,param_1,0,0);
    iVar4 = *(int *)(iVar3 + 0x994 + (int)this);
    if (0x400 < iVar4 + 10U) {
      iVar4 = 0;
    }
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    *(int *)(iVar3 + 0x994 + (int)this) = iVar4 + 10;
    puVar5 = local_3c;
    iVar2 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)(iVar3 + 0x990 + (int)this),0,(iVar4 != 0) + '\x04',0);
    if (-1 < iVar2) {
      FUN_100438dd((float *)(puVar5 + iVar4 * 0x10),param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,param_10);
      piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(iVar3 + 0x990 + (int)this),0);
      piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x34))(piVar1,10,iVar4);
    }
  }
  return;
}

