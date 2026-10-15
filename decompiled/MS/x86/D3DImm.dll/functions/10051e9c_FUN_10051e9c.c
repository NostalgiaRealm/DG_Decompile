/*
 * FUN_10051e9c at 10051e9c
 * undefined4 __thiscall FUN_10051e9c(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10051e9c-10051ee0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10051e9c(void *this,int param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10051de1(this,param_1,local_20,&local_c);
  local_8 = 0;
  FUN_10051db1(this,param_1,local_20,local_c,param_2,0,extraout_ECX,extraout_ECX,&local_8);
  return local_8;
}

