/*
 * FUN_10006d60 at 10006d60
 * undefined FUN_10006d60(void)
 * Address ranges: 10006d60-10006def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10006d60(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + 0x4c)) && (param_3 - 1U < 4)) &&
     (uVar2 = FUN_10003770(param_1,param_3), (uVar2 & 1) != 0)) {
    uVar1 = FUN_10002ba8(param_1,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

