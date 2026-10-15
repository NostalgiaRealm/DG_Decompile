/*
 * FUN_1003e53c at 1003e53c
 * undefined4 __thiscall FUN_1003e53c(void * this, int param_1, undefined4 param_2)
 * Address ranges: 1003e53c-1003e580
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003e53c(void *this,int param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_1003e44e(this,param_1,local_20,&local_c);
  local_8 = 0;
  FUN_1003e401(this,param_1,local_20,local_c,param_2,0,extraout_ECX,extraout_ECX,&local_8);
  return local_8;
}

