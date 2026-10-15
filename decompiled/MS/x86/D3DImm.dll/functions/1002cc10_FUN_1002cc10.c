/*
 * FUN_1002cc10 at 1002cc10
 * undefined __thiscall FUN_1002cc10(void * this, int param_1, int * param_2)
 * Address ranges: 1002cc10-1002cc9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cc10(void *this,int param_1,int *param_2)

{
  (**(code **)(*(int *)this + 0x98))(0);
  *(int *)((int)this + (param_1 + 0xe2) * 0x10 + 0x80) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0xea4) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0xea8) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0xeac) = param_2[3];
  *(undefined1 *)((int)this + 0x1d41) = 1;
  *(int *)((int)this + (param_1 + 0x4d) * 0x10 + 0x80) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0x554) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0x558) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0x55c) = param_2[3];
  *(undefined1 *)((int)this + 0x1d48) = 1;
  return;
}

