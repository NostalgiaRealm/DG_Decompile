/*
 * entry at 100ada1d
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 100ada1d-100ada5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 entry(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_100ad504();
    __initterm((undefined4 *)&DAT_100b7000,(undefined4 *)&DAT_100b7038);
  }
  uVar1 = FUN_1007a599(param_1,param_2);
  if (param_2 == 0) {
    FUN_100ad4dc();
  }
  return uVar1;
}

