/*
 * FUN_10045240 at 10045240
 * undefined __thiscall FUN_10045240(void * this, int * param_1)
 * Address ranges: 10045240-100452ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045240(void *this,int *param_1)

{
  (**(code **)(*(int *)this + 0xc0))(0);
  *(int *)((int)this + 0x52c0) = *param_1;
  *(int *)((int)this + 0x52c4) = param_1[1];
  *(int *)((int)this + 0x52c8) = param_1[2];
  *(int *)((int)this + 0x52cc) = param_1[3];
  *(int *)((int)this + 0x52e0) = param_1[8];
  *(int *)((int)this + 0x52e4) = param_1[9];
  *(int *)((int)this + 0x52e8) = param_1[10];
  *(int *)((int)this + 0x52ec) = param_1[0xb];
  *(int *)((int)this + 0x52d0) = param_1[4];
  *(int *)((int)this + 0x52d4) = param_1[5];
  *(int *)((int)this + 0x52d8) = param_1[6];
  *(int *)((int)this + 0x52dc) = param_1[7];
  *(int *)((int)this + 0x52f0) = param_1[0xc];
  *(int *)((int)this + 0x52f4) = param_1[0xd];
  *(int *)((int)this + 0x52f8) = param_1[0xe];
  *(int *)((int)this + 0x52fc) = param_1[0x10];
  *(undefined1 *)((int)this + 0xd981) = 1;
  return;
}

