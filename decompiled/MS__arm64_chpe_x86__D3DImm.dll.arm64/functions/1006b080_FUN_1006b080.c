/*
 * FUN_1006b080 at 1006b080
 * undefined FUN_1006b080(void)
 * Address ranges: 1006b080-1006b0cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1006b080(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  uVar1 = FUN_1005dd80(*(undefined4 *)(param_1 + 4),param_2,uVar1,param_4,param_5,param_6,param_7,
                       param_8);
  return uVar1;
}

