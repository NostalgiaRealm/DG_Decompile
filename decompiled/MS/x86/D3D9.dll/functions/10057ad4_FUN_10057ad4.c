/*
 * FUN_10057ad4 at 10057ad4
 * undefined __thiscall FUN_10057ad4(void * this, uint param_1, int param_2, float param_3)
 * Address ranges: 10057ad4-10057b0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057ad4(void *this,uint param_1,int param_2,float param_3)

{
  if (param_1 < 5) {
    (**(code **)(*(int *)this + 0xec))(0);
    FUN_10057748((int)this + 0x90,(int)this + 0xf660,param_1,param_2,param_3);
  }
  return;
}

