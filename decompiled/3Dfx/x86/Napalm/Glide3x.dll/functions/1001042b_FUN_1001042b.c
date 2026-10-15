/*
 * FUN_1001042b at 1001042b
 * undefined __thiscall FUN_1001042b(void * this, int param_1)
 * Address ranges: 1001042b-1001045e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001042b(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x198))();
  if (param_1 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = (param_1 != 1) + 2;
  }
  *(int *)((int)this + 0x2ca4) = iVar1;
  *(undefined1 *)((int)this + 0x2daa) = 1;
  return;
}

