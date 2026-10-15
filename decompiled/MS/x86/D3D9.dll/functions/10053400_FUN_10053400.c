/*
 * FUN_10053400 at 10053400
 * undefined __thiscall FUN_10053400(void * this, byte param_1)
 * Address ranges: 10053400-10053436
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053400(void *this,byte param_1)

{
  (**(code **)(*(int *)this + 0xec))(0);
  *(undefined1 *)((int)this + 0xf6a3) = 1;
  *(uint *)((int)this + 0x644c) = (uint)(param_1 ^ 1);
  *(uint *)((int)this + 0x6984) = (uint)(param_1 ^ 1);
  *(undefined1 *)((int)this + 0xf671) = 1;
  return;
}

