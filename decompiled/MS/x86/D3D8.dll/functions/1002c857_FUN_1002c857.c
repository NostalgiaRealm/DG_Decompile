/*
 * FUN_1002c857 at 1002c857
 * undefined __thiscall FUN_1002c857(void * this, int param_1)
 * Address ranges: 1002c857-1002c89b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c857(void *this,int param_1)

{
  bool bVar1;
  
  FUN_1002a5f0(this,0,0,0);
  bVar1 = false;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xda2c) = 0;
  }
  else {
    *(int *)((int)this + 0xda2c) = param_1;
    bVar1 = *(int *)(param_1 + 0x40) == 0x104;
  }
  FUN_10048e14(this,bVar1);
  return;
}

