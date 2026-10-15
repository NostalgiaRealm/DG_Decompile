/*
 * FUN_1001045f at 1001045f
 * undefined __thiscall FUN_1001045f(void * this, int param_1)
 * Address ranges: 1001045f-1001049c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001045f(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x198))();
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0xeb);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else if (iVar1 == 2) {
    param_1 = 1;
  }
  *(int *)((int)this + 0x2e34) = param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

