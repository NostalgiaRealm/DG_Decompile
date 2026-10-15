/*
 * FUN_1006aa60 at 1006aa60
 * undefined FUN_1006aa60(void)
 * Address ranges: 1006aa60-1006aaab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006aa60(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_3 + 4) + 0x60);
  }
  uVar1 = FUN_100575f0(*(undefined4 *)(param_1 + 4),param_2,uVar1,param_3);
  return uVar1;
}

