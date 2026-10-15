/*
 * FUN_100086c0 at 100086c0
 * undefined __thiscall FUN_100086c0(void * this, uint param_1, uint param_2)
 * Address ranges: 100086c0-10008732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100086c0(void *this,uint param_1,uint param_2)

{
  if (*(int *)((int)this + 0x2a14) != 0) {
    (**(code **)(*(int *)this + 0x170))();
  }
  *(uint *)((int)this + 0x32b0) = param_1 >> 0x18;
  *(uint *)((int)this + 0x32b4) = param_1 >> 0x10 & 0xff;
  *(uint *)((int)this + 0x32b8) = param_1 >> 8 & 0xff;
  *(uint *)((int)this + 0x32c0) = param_2 >> 0x18;
  *(uint *)((int)this + 0x32c4) = param_2 >> 0x10 & 0xff;
  *(uint *)((int)this + 13000) = param_2 >> 8 & 0xff;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

