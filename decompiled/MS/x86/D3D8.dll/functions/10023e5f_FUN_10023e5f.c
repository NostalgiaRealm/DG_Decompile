/*
 * FUN_10023e5f at 10023e5f
 * undefined __thiscall FUN_10023e5f(void * this, uint param_1, uint param_2)
 * Address ranges: 10023e5f-10023e85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10023e5f(void *this,uint param_1,uint param_2)

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

