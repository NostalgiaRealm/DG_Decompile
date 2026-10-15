/*
 * FUN_10045170 at 10045170
 * undefined __thiscall FUN_10045170(void * this, int param_1, int * param_2)
 * Address ranges: 10045170-10045234
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045170(void *this,int param_1,int *param_2)

{
  (**(code **)(*(int *)this + 0xc0))(0);
  *(int *)((int)this + (param_1 + 0x510) * 0x10 + 0x90) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0x5194) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0x5198) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0x519c) = param_2[3];
  *(undefined1 *)((int)this + 0xd981) = 1;
  *(int *)((int)this + (param_1 + 0x47e) * 0x10 + 0x90) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0x4874) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0x4878) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0x487c) = param_2[3];
  *(undefined1 *)((int)this + 0xd9a8) = 1;
  *(int *)((int)this + (param_1 + 0x46c) * 0x10 + 0x90) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0x4754) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0x4758) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0x475c) = param_2[3];
  *(undefined1 *)((int)this + 0xd9a4) = 1;
  return;
}

