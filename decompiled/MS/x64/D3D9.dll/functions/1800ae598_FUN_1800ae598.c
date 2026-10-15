/*
 * FUN_1800ae598 at 1800ae598
 * undefined8 __fastcall FUN_1800ae598(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1800ae598-1800ae5cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800ae598(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 != (undefined4 *)0x0)) {
    FUN_180003b0c(param_1 + -0xa0,*(uint *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4)
                  ,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

