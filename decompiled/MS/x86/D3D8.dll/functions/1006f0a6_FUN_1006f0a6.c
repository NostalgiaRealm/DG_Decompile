/*
 * FUN_1006f0a6 at 1006f0a6
 * uint __thiscall FUN_1006f0a6(void * this, byte param_1)
 * Address ranges: 1006f0a6-1006f0bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1006f0a6(void *this,byte param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x130) >> (param_1 & 0x1f);
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

