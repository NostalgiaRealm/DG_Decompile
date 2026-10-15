/*
 * FUN_1001aad9 at 1001aad9
 * undefined __thiscall FUN_1001aad9(void * this, undefined4 * param_1)
 * Address ranges: 1001aad9-1001ab5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001aad9(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  (**(code **)(**(int **)((int)this + 0x315c) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x3160) + 0x30) != 1) {
    (**(code **)(*(int *)this + 0x150))();
    *(undefined4 *)(*(int *)((int)this + 0x3160) + 0x30) = 1;
  }
  FUN_1002c7c8(*(void **)((int)this + 0x3160),1,1);
  FUN_1001a14d(*(void **)((int)this + 0x3160),param_1,1,0);
  **(int **)(*(int *)((int)this + 0x3160) + 0x28) =
       *(int *)(*(int *)((int)this + 0x3160) + 0x2c) + -1;
  piVar1 = (int *)(*(int *)((int)this + 0x3160) + 0x28);
  *piVar1 = *piVar1 + 4;
  FUN_1001dc1c(this);
  (**(code **)(**(int **)((int)this + 0x315c) + 0x48))();
  return;
}

