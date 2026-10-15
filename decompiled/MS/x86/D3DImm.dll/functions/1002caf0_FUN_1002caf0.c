/*
 * FUN_1002caf0 at 1002caf0
 * undefined __thiscall FUN_1002caf0(void * this, uint param_1, uint param_2, float param_3)
 * Address ranges: 1002caf0-1002cb26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002caf0(void *this,uint param_1,uint param_2,float param_3)

{
  if (param_1 < 8) {
    (**(code **)(*(int *)this + 0x98))(0);
    FUN_1002b200((int)this + 0x80,(int)this + 0x1d30,param_1,param_2,param_3);
  }
  return;
}

