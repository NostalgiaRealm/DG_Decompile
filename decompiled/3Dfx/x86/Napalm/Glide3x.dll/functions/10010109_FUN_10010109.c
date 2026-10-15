/*
 * FUN_10010109 at 10010109
 * undefined __thiscall FUN_10010109(void * this, uint param_1, uint param_2)
 * Address ranges: 10010109-10010136
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10010109(void *this,uint param_1,uint param_2)

{
  FUN_100100d2(this,param_1,param_2);
  *(int *)((int)this + 0x1b8) = *(int *)((int)this + 0x1b8) - param_1;
  *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1bc) - param_2;
  *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) + param_1;
  return;
}

