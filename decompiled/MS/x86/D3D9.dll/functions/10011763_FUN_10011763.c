/*
 * FUN_10011763 at 10011763
 * undefined4 __thiscall FUN_10011763(void * this, undefined4 * param_1, int * param_2, SIZE_T param_3, uint param_4)
 * Address ranges: 10011763-1001178d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10011763(void *this,undefined4 *param_1,int *param_2,SIZE_T param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_4 == 0) || (param_4 == 1)) {
    uVar1 = FUN_10011c33(this,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

