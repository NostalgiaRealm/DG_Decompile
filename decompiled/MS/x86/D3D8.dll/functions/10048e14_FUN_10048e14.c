/*
 * FUN_10048e14 at 10048e14
 * undefined __thiscall FUN_10048e14(void * this, byte param_1)
 * Address ranges: 10048e14-10048e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10048e14(void *this,byte param_1)

{
  bool bVar1;
  
  *(undefined1 *)((int)this + 0xd978) = 1;
  if (param_1 == 0) {
    bVar1 = *(int *)((int)this + 0x529c) != 0;
  }
  else {
    bVar1 = *(int *)((int)this + 0x529c) == 0;
  }
  *(byte *)((int)this + 0xd981) = *(byte *)((int)this + 0xd981) | bVar1;
  *(uint *)((int)this + 0x529c) = (uint)param_1;
  return;
}

