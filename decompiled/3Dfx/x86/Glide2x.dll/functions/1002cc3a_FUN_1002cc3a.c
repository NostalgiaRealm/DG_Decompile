/*
 * FUN_1002cc3a at 1002cc3a
 * undefined __thiscall FUN_1002cc3a(void * this, int param_1)
 * Address ranges: 1002cc3a-1002cc77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cc3a(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x150))();
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0xeb);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else if (iVar1 == 2) {
    param_1 = 1;
  }
  *(int *)((int)this + 0x2c44) = param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

