/*
 * FUN_100102c7 at 100102c7
 * undefined __thiscall FUN_100102c7(void * this, uint param_1)
 * Address ranges: 100102c7-10010311
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100102c7(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x2b28) != 0) {
    (**(code **)(*(int *)this + 0x198))();
  }
  *(uint *)((int)this + 0x2e00) = param_1 >> 0x18;
  *(uint *)((int)this + 0x2e04) = param_1 >> 0x10 & 0xff;
  *(uint *)((int)this + 0x2e08) = param_1 >> 8 & 0xff;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

