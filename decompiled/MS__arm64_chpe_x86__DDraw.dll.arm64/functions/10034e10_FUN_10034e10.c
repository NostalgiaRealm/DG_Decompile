/*
 * FUN_10034e10 at 10034e10
 * undefined FUN_10034e10(void)
 * Address ranges: 10034e10-10034e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10034e10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (param_1 != 0x38) {
    iVar1 = param_1 + -0x28;
  }
  uVar2 = FUN_10002dc8(*(undefined4 *)(param_1 + 0xe4),param_2,iVar1,param_3);
  return uVar2;
}

