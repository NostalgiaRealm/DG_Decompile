/*
 * FUN_1002779a at 1002779a
 * uint __thiscall FUN_1002779a(void * this, int * param_1)
 * Address ranges: 1002779a-100277c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002779a(void *this,int *param_1)

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

