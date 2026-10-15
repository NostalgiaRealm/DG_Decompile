/*
 * FUN_1000f185 at 1000f185
 * undefined __thiscall FUN_1000f185(void * this, int param_1)
 * Address ranges: 1000f185-1000f1c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f185(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x170))();
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0xeb);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else if (iVar1 == 2) {
    param_1 = 1;
  }
  *(int *)((int)this + 0x2ce4) = param_1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

