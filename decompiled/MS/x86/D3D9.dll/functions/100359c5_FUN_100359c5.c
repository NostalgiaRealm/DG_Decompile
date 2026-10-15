/*
 * FUN_100359c5 at 100359c5
 * undefined __thiscall FUN_100359c5(void * this, int param_1)
 * Address ranges: 100359c5-10035a09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100359c5(void *this,int param_1)

{
  bool bVar1;
  
  FUN_10032e50(this,0,0,0);
  bVar1 = false;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xf72c) = 0;
  }
  else {
    *(int *)((int)this + 0xf72c) = param_1;
    bVar1 = *(int *)(param_1 + 0x40) == 0x104;
  }
  FUN_100575e8(this,bVar1);
  return;
}

