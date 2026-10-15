/*
 * FUN_100222a0 at 100222a0
 * uint __thiscall FUN_100222a0(void * this, byte param_1)
 * Address ranges: 100222a0-100222b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100222a0(void *this,byte param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x14) >> (param_1 & 0x1f);
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

