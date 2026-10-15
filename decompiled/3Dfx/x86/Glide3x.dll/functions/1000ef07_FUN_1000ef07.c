/*
 * FUN_1000ef07 at 1000ef07
 * undefined __thiscall FUN_1000ef07(void * this, uint param_1)
 * Address ranges: 1000ef07-1000ef51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ef07(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x29ec) != 0) {
    (**(code **)(*(int *)this + 0x170))();
  }
  *(uint *)((int)this + 0x2cb0) = param_1 >> 0x18;
  *(uint *)((int)this + 0x2cb4) = param_1 >> 0x10 & 0xff;
  *(uint *)((int)this + 0x2cb8) = param_1 >> 8 & 0xff;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

