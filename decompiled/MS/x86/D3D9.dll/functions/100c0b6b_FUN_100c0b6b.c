/*
 * FUN_100c0b6b at 100c0b6b
 * undefined __thiscall FUN_100c0b6b(void * this, uint param_1)
 * Address ranges: 100c0b6b-100c0b90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c0b6b(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 < param_1 * 2) {
    uVar1 = (3 - (uint)(uVar1 * 3 < param_1)) * param_1;
  }
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + uVar1;
  return;
}

