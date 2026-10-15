/*
 * FUN_100081c6 at 100081c6
 * uint __thiscall FUN_100081c6(void * this, int * param_1)
 * Address ranges: 100081c6-100081ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100081c6(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      if (*(int *)(*(int *)this + uVar1 * 4) == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 4));
  }
  return 0xffffffff;
}

