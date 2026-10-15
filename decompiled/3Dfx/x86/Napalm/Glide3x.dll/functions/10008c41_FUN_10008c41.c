/*
 * FUN_10008c41 at 10008c41
 * undefined __thiscall FUN_10008c41(void * this, int param_1)
 * Address ranges: 10008c41-10008c69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008c41(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x3624) = param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(int *)((int)this + 0x2b50) = param_1;
  return;
}

