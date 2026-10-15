/*
 * FUN_1001489d at 1001489d
 * undefined __thiscall FUN_1001489d(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1001489d-100148cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001489d(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = param_2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  return;
}

