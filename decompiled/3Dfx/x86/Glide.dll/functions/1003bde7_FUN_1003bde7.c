/*
 * FUN_1003bde7 at 1003bde7
 * undefined4 __thiscall FUN_1003bde7(void * this, int param_1, undefined4 param_2)
 * Address ranges: 1003bde7-1003be2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003bde7(void *this,int param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_1003bcf9(this,param_1,local_20,&local_c);
  local_8 = 0;
  FUN_1003bcac(this,param_1,local_20,local_c,param_2,0,extraout_ECX,extraout_ECX,&local_8);
  return local_8;
}

