/*
 * FUN_100290b0 at 100290b0
 * undefined __thiscall FUN_100290b0(void * this, float * param_1, float * param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, int param_8, byte param_9)
 * Address ranges: 100290b0-1002921d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100290b0(void *this,float *param_1,float *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,byte param_9)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  float *local_20 [3];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_100182ef(*(void **)((int)this + 0x138),5,*(int *)((int)this + (uint)param_9 * 8 + 0x4b0),
               *(int *)((int)this + (uint)param_9 * 8 + 0x4a4),param_3);
  local_c = param_6;
  local_8 = param_7;
  FUN_10041a1a(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),2,(int)&local_c,param_8);
  local_14 = param_4;
  local_10 = param_5;
  FUN_100417df(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),0,2,(int)&local_14);
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
  iVar3 = (**(code **)(*piVar2 + 0x38))(piVar2,*(undefined4 *)((int)this + 0x4bc),0,4,0,local_20);
  if (-1 < iVar3) {
    FUN_1001b69b(this,param_1,param_2,local_20[0],param_9);
    piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
    (**(code **)(*piVar2 + 0x3c))(piVar2,*(undefined4 *)((int)this + 0x4bc),0);
  }
  pbVar1 = (byte *)(*(int *)((int)this + 0x138) + 0x37a0);
  *pbVar1 = *pbVar1 | *(byte *)(*(int *)((int)this + 0x138) + 0x3150);
  FUN_10017e9c(*(int *)((int)this + 0x138));
  iVar3 = *(int *)((int)this + 0x138);
  FUN_100417a6(*(void **)(iVar3 + 0x3180),*(int *)(iVar3 + 0x3184),0,iVar3,
               (int *)((int)this + 0x4c0));
  FUN_10028ee7(*(int *)((int)this + 0x138) + 0x3780);
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
  (**(code **)(*piVar2 + 0x34))(piVar2,4,0);
  local_14 = 0;
  local_10 = 0;
  FUN_100417df(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),0,2,(int)&local_14);
  return;
}

