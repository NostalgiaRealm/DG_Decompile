/*
 * FUN_10007b6a at 10007b6a
 * uint __thiscall FUN_10007b6a(void * this, int * param_1)
 * Address ranges: 10007b6a-10007b92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10007b6a(void *this,int *param_1)

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

