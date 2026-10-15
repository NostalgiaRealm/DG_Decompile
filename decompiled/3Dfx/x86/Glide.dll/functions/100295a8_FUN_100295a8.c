/*
 * FUN_100295a8 at 100295a8
 * undefined __thiscall FUN_100295a8(void * this, int * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100295a8-100296b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100295a8(void *this,int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  float *local_18 [3];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10041cdb(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),5,*(int *)((int)this + 0x4b8),
               *(int *)((int)this + 0x4ac),param_2);
  local_c = param_4;
  local_8 = 0;
  FUN_10041daa(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),2,(int)&local_c,0);
  FUN_10041b6f(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),0,1,(int)&param_3);
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)((int)this + 0x4bc),0,4,0,local_18);
  if (-1 < iVar2) {
    FUN_1001b937(this,param_1,local_18[0]);
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x4bc),0);
  }
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x34))(piVar1,4,0);
  param_2 = 0;
  FUN_10041b6f(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x3184),0,1,(int)&param_2);
  return;
}

