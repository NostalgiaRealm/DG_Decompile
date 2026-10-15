/*
 * FUN_10008c6a at 10008c6a
 * undefined __thiscall FUN_10008c6a(void * this, uint param_1, uint param_2)
 * Address ranges: 10008c6a-10008cdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008c6a(void *this,uint param_1,uint param_2)

{
  if (*(int *)((int)this + 0x2b50) != 0) {
    (**(code **)(*(int *)this + 0x198))();
  }
  *(uint *)((int)this + 0x3630) = param_1 >> 0x18;
  *(uint *)((int)this + 0x3634) = param_1 >> 0x10 & 0xff;
  *(uint *)((int)this + 0x3638) = param_1 >> 8 & 0xff;
  *(uint *)((int)this + 0x3640) = param_2 >> 0x18;
  *(uint *)((int)this + 0x3644) = param_2 >> 0x10 & 0xff;
  *(uint *)((int)this + 0x3648) = param_2 >> 8 & 0xff;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

