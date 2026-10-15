/*
 * FUN_1001cba3 at 1001cba3
 * undefined __thiscall FUN_1001cba3(void * this, float * param_1, float * param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, int param_8, byte param_9)
 * Address ranges: 1001cba3-1001cd10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001cba3(void *this,float *param_1,float *param_2,int param_3,undefined4 param_4,
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
  
  FUN_1000bd93(*(void **)((int)this + 0x138),5,*(int *)((int)this + (uint)param_9 * 8 + 0x8c0),
               *(int *)((int)this + (uint)param_9 * 8 + 0x8b4),param_3);
  local_c = param_6;
  local_8 = param_7;
  FUN_10044502(*(void **)(*(int *)((int)this + 0x138) + 0x3300),
               *(int *)(*(int *)((int)this + 0x138) + 0x3304),2,(int)&local_c,param_8);
  local_14 = param_4;
  local_10 = param_5;
  FUN_100442c7(*(void **)(*(int *)((int)this + 0x138) + 0x3300),
               *(int *)(*(int *)((int)this + 0x138) + 0x3304),0,2,(int)&local_14);
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 4);
  iVar3 = (**(code **)(*piVar2 + 0x38))(piVar2,*(undefined4 *)((int)this + 0x8cc),0,4,0,local_20);
  if (-1 < iVar3) {
    FUN_1000f80f(this,param_1,param_2,local_20[0],param_9);
    piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 4);
    (**(code **)(*piVar2 + 0x3c))(piVar2,*(undefined4 *)((int)this + 0x8cc),0);
  }
  pbVar1 = (byte *)(*(int *)((int)this + 0x138) + 0x3edc);
  *pbVar1 = *pbVar1 | *(byte *)(*(int *)((int)this + 0x138) + 0x32d0);
  FUN_1000b917(*(int *)((int)this + 0x138));
  iVar3 = *(int *)((int)this + 0x138);
  FUN_1004428e(*(void **)(iVar3 + 0x3300),*(int *)(iVar3 + 0x3304),0,iVar3,
               (int *)((int)this + 0x8d0));
  FUN_1001c8b9(*(int *)((int)this + 0x138) + 0x3d10);
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 4);
  (**(code **)(*piVar2 + 0x34))(piVar2,4,0);
  local_14 = 0;
  local_10 = 0;
  FUN_100442c7(*(void **)(*(int *)((int)this + 0x138) + 0x3300),
               *(int *)(*(int *)((int)this + 0x138) + 0x3304),0,2,(int)&local_14);
  return;
}

