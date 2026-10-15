/*
 * entry at 1005562d
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 1005562d-1005566e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 entry(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_10055bb7();
    __initterm((undefined4 *)&DAT_1005e000,(undefined4 *)&DAT_1005e004);
  }
  uVar1 = FUN_10002581(param_1,param_2);
  if (param_2 == 0) {
    FUN_10055b8f();
  }
  return uVar1;
}

