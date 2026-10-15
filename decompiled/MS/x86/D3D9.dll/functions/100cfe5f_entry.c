/*
 * entry at 100cfe5f
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 100cfe5f-100cfea0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 entry(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_100cfdcd();
    __initterm((undefined4 *)&DAT_100db000,(undefined4 *)&DAT_100db014);
  }
  uVar1 = FUN_100910cc(param_1,param_2);
  if (param_2 == 0) {
    FUN_100cfda5();
  }
  return uVar1;
}

