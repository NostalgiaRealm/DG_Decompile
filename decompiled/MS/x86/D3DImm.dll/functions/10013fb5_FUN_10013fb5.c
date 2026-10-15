/*
 * FUN_10013fb5 at 10013fb5
 * undefined4 * __thiscall FUN_10013fb5(void * this, undefined4 param_1)
 * Address ranges: 10013fb5-1001403a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10013fb5(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x134) = param_1;
  *(undefined ***)this = &PTR_FUN_1005e834;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  FUN_1005c9cc((int *)((int)this + 4),0,0x34);
  FUN_1005c9cc((int *)((int)this + 0x38),0,0x34);
  FUN_1005c9cc((int *)((int)this + 0x6c),0,0x78);
  FUN_1005c9cc((int *)((int)this + 0xe4),0,0x34);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  return this;
}

