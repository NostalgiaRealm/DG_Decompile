/*
 * FUN_1000865a at 1000865a
 * undefined __thiscall FUN_1000865a(void * this, undefined4 * param_1, undefined4 * param_2, char param_3)
 * Address ranges: 1000865a-10008735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000865a(void *this,undefined4 *param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x3660) + 0x1dc) != 2) {
    (**(code **)(*(int *)this + 0x198))();
    *(undefined4 *)(*(int *)((int)this + 0x3660) + 0x1dc) = 2;
  }
  FUN_10010109(*(void **)((int)this + 0x3660),2,2);
  if (param_3 == '\0') {
    FUN_10007ce7(*(void **)((int)this + 0x3660),(int)param_1,0,1);
    FUN_10007ce7(*(void **)((int)this + 0x3660),(int)param_2,0,1);
  }
  else {
    FUN_10007f29(*(void **)((int)this + 0x3660),param_1,0,1);
    FUN_10007f29(*(void **)((int)this + 0x3660),param_2,0,1);
  }
  **(int **)(*(int *)((int)this + 0x3660) + 0x1d4) =
       *(int *)(*(int *)((int)this + 0x3660) + 0x1d8) + -2;
  *(int *)(*(int *)(*(int *)((int)this + 0x3660) + 0x1d4) + 4) =
       *(int *)(*(int *)((int)this + 0x3660) + 0x1d8) + -1;
  piVar1 = (int *)(*(int *)((int)this + 0x3660) + 0x1d4);
  *piVar1 = *piVar1 + 8;
  FUN_1000f326(this);
  (**(code **)(**(int **)((int)this + 0x365c) + 0x48))();
  return;
}

