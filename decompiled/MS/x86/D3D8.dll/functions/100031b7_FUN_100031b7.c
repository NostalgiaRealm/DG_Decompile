/*
 * FUN_100031b7 at 100031b7
 * undefined * __thiscall FUN_100031b7(void * this, int param_1)
 * Address ranges: 100031b7-100031d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * __thiscall FUN_100031b7(void *this,int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 2) {
    puVar1 = &DAT_100b7190;
  }
  else {
    puVar1 = &DAT_100b72c8 + *(int *)((int)this + 8) * 0x134;
  }
  return puVar1;
}

