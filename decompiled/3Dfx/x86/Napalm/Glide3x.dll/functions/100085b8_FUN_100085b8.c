/*
 * FUN_100085b8 at 100085b8
 * undefined __thiscall FUN_100085b8(void * this, undefined4 * param_1, char param_2)
 * Address ranges: 100085b8-10008659
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100085b8(void *this,undefined4 *param_1,char param_2)

{
  int *piVar1;
  
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x3660) + 0x1dc) != 1) {
    (**(code **)(*(int *)this + 0x198))();
    *(undefined4 *)(*(int *)((int)this + 0x3660) + 0x1dc) = 1;
  }
  FUN_10010109(*(void **)((int)this + 0x3660),1,1);
  if (param_2 == '\0') {
    FUN_10007ce7(*(void **)((int)this + 0x3660),(int)param_1,0,1);
  }
  else {
    FUN_10007f29(*(void **)((int)this + 0x3660),param_1,0,1);
  }
  **(int **)(*(int *)((int)this + 0x3660) + 0x1d4) =
       *(int *)(*(int *)((int)this + 0x3660) + 0x1d8) + -1;
  piVar1 = (int *)(*(int *)((int)this + 0x3660) + 0x1d4);
  *piVar1 = *piVar1 + 4;
  FUN_1000f326(this);
  (**(code **)(**(int **)((int)this + 0x365c) + 0x48))();
  return;
}

