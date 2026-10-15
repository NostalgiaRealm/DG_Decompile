/*
 * FUN_100086bd at 100086bd
 * uint __thiscall FUN_100086bd(void * this, int * param_1)
 * Address ranges: 100086bd-100086e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100086bd(void *this,int *param_1)

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

