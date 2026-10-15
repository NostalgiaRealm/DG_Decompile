/*
 * FUN_10021561 at 10021561
 * undefined __thiscall FUN_10021561(void * this, int * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10021561-10021669
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10021561(void *this,int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  float *local_18 [3];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_1004783c(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x3684),5,*(int *)((int)this + 0x8c8),
               *(int *)((int)this + 0x8bc),param_2);
  local_c = param_4;
  local_8 = 0;
  FUN_1004790b(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x3684),2,(int)&local_c,0);
  FUN_100476d0(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x3684),0,1,(int)&param_3);
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)((int)this + 0x8cc),0,4,0,local_18);
  if (-1 < iVar2) {
    FUN_100109fa(this,param_1,local_18[0]);
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x8cc),0);
  }
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
  (**(code **)(*piVar1 + 0x34))(piVar1,4,0);
  param_2 = 0;
  FUN_100476d0(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x3684),0,1,(int)&param_2);
  return;
}

