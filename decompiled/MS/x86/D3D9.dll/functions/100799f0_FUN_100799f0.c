/*
 * FUN_100799f0 at 100799f0
 * uint __thiscall FUN_100799f0(void * this, byte param_1)
 * Address ranges: 100799f0-10079a09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100799f0(void *this,byte param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0xdc) >> (param_1 & 0x1f);
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

