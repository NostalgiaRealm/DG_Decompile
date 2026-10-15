/*
 * FUN_1000f151 at 1000f151
 * undefined __thiscall FUN_1000f151(void * this, int param_1)
 * Address ranges: 1000f151-1000f184
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f151(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x170))();
  if (param_1 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = (param_1 != 1) + 2;
  }
  *(int *)((int)this + 0x2b64) = iVar1;
  *(undefined1 *)((int)this + 0x2c62) = 1;
  return;
}

