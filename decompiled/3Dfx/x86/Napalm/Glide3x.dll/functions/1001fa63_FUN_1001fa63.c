/*
 * FUN_1001fa63 at 1001fa63
 * undefined __thiscall FUN_1001fa63(void * this, int param_1)
 * Address ranges: 1001fa63-1001fab6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001fa63(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + param_1 * 0x250 + 0x2f7c);
  if (((byte)uVar1 & 5) == 4) {
    uVar1 = uVar1 & 0xfffffffd;
    *(uint *)((int)this + param_1 * 0x250 + 0x2f7c) = uVar1;
    if ((((*(byte *)((int)this + param_1 * 0x250 + 0x2ee8) & 0x20) != 0) &&
        (*(int *)((int)this + param_1 * 0x250 + 0x2ef8) == 2)) ||
       (((*(byte *)((int)this + param_1 * 0x250 + 0x2f18) & 0x20) != 0 &&
        (*(int *)((int)this + param_1 * 0x250 + 0x2f28) == 2)))) {
      *(uint *)((int)this + param_1 * 0x250 + 0x2f7c) = uVar1 | 2;
    }
  }
  return;
}

