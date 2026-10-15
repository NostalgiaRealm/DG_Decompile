/*
 * FUN_1000800e at 1000800e
 * undefined __thiscall FUN_1000800e(void * this, undefined4 * param_1, char param_2)
 * Address ranges: 1000800e-100080af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000800e(void *this,undefined4 *param_1,char param_2)

{
  int *piVar1;
  
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x32e0) + 0x1dc) != 1) {
    (**(code **)(*(int *)this + 0x170))();
    *(undefined4 *)(*(int *)((int)this + 0x32e0) + 0x1dc) = 1;
  }
  FUN_1000ed26(*(void **)((int)this + 0x32e0),1,1);
  if (param_2 == '\0') {
    FUN_1000773d(*(void **)((int)this + 0x32e0),(int)param_1,0,1);
  }
  else {
    FUN_1000797f(*(void **)((int)this + 0x32e0),param_1,0,1);
  }
  **(int **)(*(int *)((int)this + 0x32e0) + 0x1d4) =
       *(int *)(*(int *)((int)this + 0x32e0) + 0x1d8) + -1;
  piVar1 = (int *)(*(int *)((int)this + 0x32e0) + 0x1d4);
  *piVar1 = *piVar1 + 4;
  FUN_1000e06c(this);
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x48))();
  return;
}

