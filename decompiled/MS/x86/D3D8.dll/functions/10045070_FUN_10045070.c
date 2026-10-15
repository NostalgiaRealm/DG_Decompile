/*
 * FUN_10045070 at 10045070
 * undefined __thiscall FUN_10045070(void * this, uint param_1, int param_2, float param_3)
 * Address ranges: 10045070-100450a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045070(void *this,uint param_1,int param_2,float param_3)

{
  if (param_1 < 8) {
    (**(code **)(*(int *)this + 0xc0))(0);
    FUN_10043bb0((int)this + 0x90,(int)this + 0xd970,param_1,param_2,param_3);
  }
  return;
}

