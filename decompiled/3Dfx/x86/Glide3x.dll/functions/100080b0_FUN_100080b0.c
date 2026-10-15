/*
 * FUN_100080b0 at 100080b0
 * undefined __thiscall FUN_100080b0(void * this, undefined4 * param_1, undefined4 * param_2, char param_3)
 * Address ranges: 100080b0-1000818b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100080b0(void *this,undefined4 *param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x32e0) + 0x1dc) != 2) {
    (**(code **)(*(int *)this + 0x170))();
    *(undefined4 *)(*(int *)((int)this + 0x32e0) + 0x1dc) = 2;
  }
  FUN_1000ed26(*(void **)((int)this + 0x32e0),2,2);
  if (param_3 == '\0') {
    FUN_1000773d(*(void **)((int)this + 0x32e0),(int)param_1,0,1);
    FUN_1000773d(*(void **)((int)this + 0x32e0),(int)param_2,0,1);
  }
  else {
    FUN_1000797f(*(void **)((int)this + 0x32e0),param_1,0,1);
    FUN_1000797f(*(void **)((int)this + 0x32e0),param_2,0,1);
  }
  **(int **)(*(int *)((int)this + 0x32e0) + 0x1d4) =
       *(int *)(*(int *)((int)this + 0x32e0) + 0x1d8) + -2;
  *(int *)(*(int *)(*(int *)((int)this + 0x32e0) + 0x1d4) + 4) =
       *(int *)(*(int *)((int)this + 0x32e0) + 0x1d8) + -1;
  piVar1 = (int *)(*(int *)((int)this + 0x32e0) + 0x1d4);
  *piVar1 = *piVar1 + 8;
  FUN_1000e06c(this);
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x48))();
  return;
}

