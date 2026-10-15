/*
 * FUN_1000861e at 1000861e
 * undefined __thiscall FUN_1000861e(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1000861e-10008663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000861e(void *this,int param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2bb8) = param_1;
  *(int *)((int)this + 0x2bbc) = param_2;
  *(int *)((int)this + 0x2bc0) = param_3;
  *(int *)((int)this + 0x2bc4) = param_4;
  FUN_10008341(this,param_1,param_2,param_3,param_4);
  return;
}

