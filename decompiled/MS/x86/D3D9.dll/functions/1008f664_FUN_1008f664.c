/*
 * FUN_1008f664 at 1008f664
 * uint __thiscall FUN_1008f664(void * this, byte param_1)
 * Address ranges: 1008f664-1008f67a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1008f664(void *this,byte param_1)

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

