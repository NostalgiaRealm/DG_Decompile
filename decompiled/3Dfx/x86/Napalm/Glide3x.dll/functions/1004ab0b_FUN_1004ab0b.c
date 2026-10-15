/*
 * FUN_1004ab0b at 1004ab0b
 * uint __thiscall FUN_1004ab0b(void * this, int * param_1)
 * Address ranges: 1004ab0b-1004ab33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004ab0b(void *this,int *param_1)

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

