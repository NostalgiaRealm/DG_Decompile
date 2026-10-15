/*
 * FUN_1002cd46 at 1002cd46
 * undefined __thiscall FUN_1002cd46(void * this, uint param_1)
 * Address ranges: 1002cd46-1002cd90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cd46(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x2970) != 0) {
    (**(code **)(*(int *)this + 0x150))();
  }
  *(uint *)((int)this + 0x2c10) = param_1 >> 0x18;
  *(uint *)((int)this + 0x2c14) = param_1 >> 0x10 & 0xff;
  *(uint *)((int)this + 0x2c18) = param_1 >> 8 & 0xff;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

