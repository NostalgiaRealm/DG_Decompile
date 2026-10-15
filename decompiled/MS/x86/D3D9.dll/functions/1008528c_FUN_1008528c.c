/*
 * FUN_1008528c at 1008528c
 * uint __thiscall FUN_1008528c(void * this, byte param_1)
 * Address ranges: 1008528c-100852a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1008528c(void *this,byte param_1)

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

