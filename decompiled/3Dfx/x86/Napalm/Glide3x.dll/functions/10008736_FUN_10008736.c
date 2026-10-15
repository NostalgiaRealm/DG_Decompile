/*
 * FUN_10008736 at 10008736
 * undefined __thiscall FUN_10008736(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, char param_4)
 * Address ranges: 10008736-10008850
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10008736(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  int *piVar1;
  
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x3660) + 0x1dc) != 4) {
    (**(code **)(*(int *)this + 0x198))();
    *(undefined4 *)(*(int *)((int)this + 0x3660) + 0x1dc) = 4;
  }
  FUN_10010109(*(void **)((int)this + 0x3660),3,3);
  if (param_4 == '\0') {
    FUN_10007ce7(*(void **)((int)this + 0x3660),(int)param_1,0,1);
    FUN_10007ce7(*(void **)((int)this + 0x3660),(int)param_2,0,1);
    FUN_10007ce7(*(void **)((int)this + 0x3660),(int)param_3,0,1);
  }
  else {
    FUN_10007f29(*(void **)((int)this + 0x3660),param_1,0,1);
    FUN_10007f29(*(void **)((int)this + 0x3660),param_2,0,1);
    FUN_10007f29(*(void **)((int)this + 0x3660),param_3,0,1);
  }
  **(int **)(*(int *)((int)this + 0x3660) + 0x1d4) =
       *(int *)(*(int *)((int)this + 0x3660) + 0x1d8) + -3;
  *(int *)(*(int *)(*(int *)((int)this + 0x3660) + 0x1d4) + 4) =
       *(int *)(*(int *)((int)this + 0x3660) + 0x1d8) + -2;
  *(int *)(*(int *)(*(int *)((int)this + 0x3660) + 0x1d4) + 8) =
       *(int *)(*(int *)((int)this + 0x3660) + 0x1d8) + -1;
  piVar1 = (int *)(*(int *)((int)this + 0x3660) + 0x1d4);
  *piVar1 = *piVar1 + 0xc;
  FUN_1000f326(this);
  (**(code **)(**(int **)((int)this + 0x365c) + 0x48))();
  return;
}

