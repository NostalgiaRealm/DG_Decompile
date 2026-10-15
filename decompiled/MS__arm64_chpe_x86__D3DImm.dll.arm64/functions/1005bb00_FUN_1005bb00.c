/*
 * FUN_1005bb00 at 1005bb00
 * undefined FUN_1005bb00(void)
 * Address ranges: 1005bb00-1005bb47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1005bb00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0x112;
  if (param_3 == 2) {
    uVar1 = 0x1e2;
  }
  if (param_3 == 3) {
    uVar1 = 0x1c4;
  }
  uVar1 = FUN_1005c650(param_1,param_2,uVar1,param_4,param_5,param_6);
  return uVar1;
}

