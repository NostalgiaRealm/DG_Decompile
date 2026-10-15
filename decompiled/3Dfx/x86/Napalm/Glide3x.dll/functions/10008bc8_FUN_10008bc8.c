/*
 * FUN_10008bc8 at 10008bc8
 * undefined __thiscall FUN_10008bc8(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10008bc8-10008c0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008bc8(void *this,int param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2cf8) = param_1;
  *(int *)((int)this + 0x2cfc) = param_2;
  *(int *)((int)this + 0x2d00) = param_3;
  *(int *)((int)this + 0x2d04) = param_4;
  FUN_100088eb(this,param_1,param_2,param_3,param_4);
  return;
}

