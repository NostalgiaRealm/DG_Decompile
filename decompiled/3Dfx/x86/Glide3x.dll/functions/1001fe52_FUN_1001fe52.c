/*
 * FUN_1001fe52 at 1001fe52
 * undefined __thiscall FUN_1001fe52(void * this, int param_1)
 * Address ranges: 1001fe52-1001fe93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001fe52(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + param_1 * 0x1a0 + 0x2db8);
  if (((byte)uVar1 & 5) == 4) {
    uVar1 = uVar1 & 0xfffffffd;
    *(uint *)((int)this + param_1 * 0x1a0 + 0x2db8) = uVar1;
    if ((*(int *)((int)this + param_1 * 0x1a0 + 0x2d74) == 0xd) ||
       (*(int *)((int)this + param_1 * 0x1a0 + 0x2d84) == 0xd)) {
      *(uint *)((int)this + param_1 * 0x1a0 + 0x2db8) = uVar1 | 2;
    }
  }
  return;
}

