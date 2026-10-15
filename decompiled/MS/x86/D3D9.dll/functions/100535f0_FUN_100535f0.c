/*
 * FUN_100535f0 at 100535f0
 * undefined __thiscall FUN_100535f0(void * this, uint param_1, int param_2, float param_3)
 * Address ranges: 100535f0-10053626
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100535f0(void *this,uint param_1,int param_2,float param_3)

{
  if (param_1 < 0x10) {
    (**(code **)(*(int *)this + 0xec))(0);
    FUN_10052110((int)this + 0x90,(int)this + 0xf660,param_1,param_2,param_3);
  }
  return;
}

