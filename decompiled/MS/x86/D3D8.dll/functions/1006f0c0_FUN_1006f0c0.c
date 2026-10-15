/*
 * FUN_1006f0c0 at 1006f0c0
 * uint __thiscall FUN_1006f0c0(void * this, byte param_1)
 * Address ranges: 1006f0c0-1006f0d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1006f0c0(void *this,byte param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x134) >> (param_1 & 0x1f);
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

