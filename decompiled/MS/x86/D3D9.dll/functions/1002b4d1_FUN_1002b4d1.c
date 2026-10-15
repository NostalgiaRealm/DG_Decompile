/*
 * FUN_1002b4d1 at 1002b4d1
 * undefined __thiscall FUN_1002b4d1(void * this, uint param_1, uint param_2)
 * Address ranges: 1002b4d1-1002b4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002b4d1(void *this,uint param_1,uint param_2)

{
  if (param_1 < *(uint *)((int)this + 0x14)) {
    *(uint *)((int)this + 0x14) = param_1;
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    *(uint *)((int)this + 0x18) = param_2;
    if (*(uint *)((int)this + 0x10) < param_2) {
      *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x10);
    }
  }
  return;
}

