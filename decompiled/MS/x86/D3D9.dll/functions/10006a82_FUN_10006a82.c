/*
 * FUN_10006a82 at 10006a82
 * undefined __thiscall FUN_10006a82(void * this, int param_1)
 * Address ranges: 10006a82-10006aad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006a82(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 0x6674)) {
    *(int *)((int)this + 0x6674) = param_1;
    *(undefined4 *)((int)this + 0x667c) = 0xffff;
    *(undefined4 *)((int)this + 0x6688) = 0x1f;
  }
  return;
}

