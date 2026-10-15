/*
 * FUN_1009e5a3 at 1009e5a3
 * undefined __thiscall FUN_1009e5a3(void * this, uint param_1)
 * Address ranges: 1009e5a3-1009e5c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009e5a3(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 < param_1 * 2) {
    uVar1 = (3 - (uint)(uVar1 * 3 < param_1)) * param_1;
  }
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + uVar1;
  return;
}

