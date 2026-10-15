/*
 * FUN_100189db at 100189db
 * undefined __thiscall FUN_100189db(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100189db-10018a09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100189db(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = param_2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  return;
}

