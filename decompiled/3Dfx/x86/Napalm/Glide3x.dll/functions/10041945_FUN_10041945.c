/*
 * FUN_10041945 at 10041945
 * undefined4 __thiscall FUN_10041945(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10041945-10041989
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10041945(void *this,int param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_10041857(this,param_1,local_20,&local_c);
  local_8 = 0;
  FUN_1004180a(this,param_1,local_20,local_c,param_2,0,extraout_ECX,extraout_ECX,&local_8);
  return local_8;
}

