/*
 * FUN_10006945 at 10006945
 * undefined __thiscall FUN_10006945(void * this, int param_1)
 * Address ranges: 10006945-1000697a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006945(void *this,int param_1)

{
  uint uVar1;
  
  if ((param_1 == *(int *)((int)this + 0x18)) || (param_1 == *(int *)((int)this + 0x28))) {
LAB_1000696f:
    (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  }
  else if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + 0x1c) == *(int *)((int)this + uVar1 * 4 + 0xf94)) goto LAB_1000696f;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
  }
  return;
}

