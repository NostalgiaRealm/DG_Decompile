/*
 * FUN_10092c82 at 10092c82
 * undefined4 __thiscall FUN_10092c82(void * this, int * param_1)
 * Address ranges: 10092c82-10092cd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10092c82(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
      return 0x8876086c;
    }
    if (param_1[0xd] != 0) {
      return 0x8876086c;
    }
    if ((void *)param_1[6] != this) {
      return 0x8876086c;
    }
    (**(code **)(*param_1 + 0x18))();
    if ((int *)param_1[7] != (int *)0x0) {
      (**(code **)(*(int *)param_1[7] + 4))();
    }
  }
  if (*(int *)((int)this + 0x28) != 0) {
    FUN_1000604e(*(int **)((int)this + 0x28));
  }
  *(int **)((int)this + 0x28) = param_1;
  *(undefined1 *)((int)this + 0xc2ed) = 1;
  return 0;
}

