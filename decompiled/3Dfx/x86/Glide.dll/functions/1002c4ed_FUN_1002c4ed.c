/*
 * FUN_1002c4ed at 1002c4ed
 * undefined __thiscall FUN_1002c4ed(void * this, int param_1)
 * Address ranges: 1002c4ed-1002c52e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c4ed(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + param_1 * 0x180 + 0x2d18);
  if (((byte)uVar1 & 5) == 4) {
    uVar1 = uVar1 & 0xfffffffd;
    *(uint *)((int)this + param_1 * 0x180 + 0x2d18) = uVar1;
    if ((*(int *)((int)this + param_1 * 0x180 + 0x2cd4) == 0xd) ||
       (*(int *)((int)this + param_1 * 0x180 + 0x2ce4) == 0xd)) {
      *(uint *)((int)this + param_1 * 0x180 + 0x2d18) = uVar1 | 2;
    }
  }
  return;
}

