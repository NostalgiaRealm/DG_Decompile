/*
 * FUN_100e3980 at 100e3980
 * undefined FUN_100e3980(void)
 * Address ranges: 100e3980-100e39ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100e3980(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x591c)) {
    iVar2 = *(int *)(*(int *)(param_1 + -0x5920) + param_2 * 4);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar2 + -8;
    }
    uVar3 = FUN_100ea270(iVar1,param_3,param_4,param_5);
  }
  return uVar3;
}

