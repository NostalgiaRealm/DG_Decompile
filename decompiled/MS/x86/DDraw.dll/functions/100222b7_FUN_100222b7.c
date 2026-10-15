/*
 * FUN_100222b7 at 100222b7
 * uint __thiscall FUN_100222b7(void * this, byte param_1)
 * Address ranges: 100222b7-100222cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100222b7(void *this,byte param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x18) >> (param_1 & 0x1f);
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

