/*
 * FUN_100035d8 at 100035d8
 * undefined * __thiscall FUN_100035d8(void * this, int param_1)
 * Address ranges: 100035d8-100035f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * __thiscall FUN_100035d8(void *this,int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 2) {
    puVar1 = &DAT_100db170;
  }
  else {
    puVar1 = &DAT_100db300 + *(int *)((int)this + 8) * 400;
  }
  return puVar1;
}

