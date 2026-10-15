/*
 * FUN_10079a0a at 10079a0a
 * uint __thiscall FUN_10079a0a(void * this, byte param_1)
 * Address ranges: 10079a0a-10079a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10079a0a(void *this,byte param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0xe0) >> (param_1 & 0x1f);
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

