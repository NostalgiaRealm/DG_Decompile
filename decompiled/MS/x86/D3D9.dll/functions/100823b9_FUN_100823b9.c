/*
 * FUN_100823b9 at 100823b9
 * int __thiscall FUN_100823b9(void * this, int param_1)
 * Address ranges: 100823b9-100823d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100823b9(void *this,int param_1)

{
  FUN_10081dc3((void *)((int)this + 0x48),*(uint *)((int)this + 0x2c),*(uint *)((int)this + 0x24));
  return *(int *)((int)this + 0x70) + param_1;
}

