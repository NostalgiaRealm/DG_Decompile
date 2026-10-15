/*
 * FUN_100575e8 at 100575e8
 * undefined __thiscall FUN_100575e8(void * this, byte param_1)
 * Address ranges: 100575e8-10057626
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100575e8(void *this,byte param_1)

{
  bool bVar1;
  
  *(undefined1 *)((int)this + 0xf668) = 1;
  if (param_1 == 0) {
    bVar1 = *(int *)((int)this + 0x6f0c) != 0;
  }
  else {
    bVar1 = *(int *)((int)this + 0x6f0c) == 0;
  }
  *(byte *)((int)this + 0xf671) = *(byte *)((int)this + 0xf671) | bVar1;
  *(uint *)((int)this + 0x6f0c) = (uint)param_1;
  *(undefined1 *)((int)this + 0xf6a2) = 1;
  return;
}

