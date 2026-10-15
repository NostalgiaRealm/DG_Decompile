/*
 * FUN_10044229 at 10044229
 * uint __thiscall FUN_10044229(void * this, int param_1)
 * Address ranges: 10044229-10044253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10044229(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x254) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0x250) + uVar1 * 4) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 0x254));
  }
  return 0xffffffff;
}

