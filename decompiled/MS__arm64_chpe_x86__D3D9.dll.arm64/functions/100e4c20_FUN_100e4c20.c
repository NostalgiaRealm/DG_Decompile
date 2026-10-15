/*
 * FUN_100e4c20 at 100e4c20
 * undefined FUN_100e4c20(void)
 * Address ranges: 100e4c20-100e4c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4c20(int param_1,uint param_2,undefined4 param_3)

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
    uVar3 = FUN_100e9c00(iVar1,&DAT_1015e4d0,param_3);
  }
  return uVar3;
}

