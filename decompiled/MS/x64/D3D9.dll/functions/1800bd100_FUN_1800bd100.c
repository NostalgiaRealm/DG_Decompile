/*
 * FUN_1800bd100 at 1800bd100
 * undefined8 __fastcall FUN_1800bd100(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800bd100-1800bd12f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bd100(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = FUN_1800aed38((uint *)(*(longlong *)(param_1 + 0x50) + 0xa8),(longlong *)&DAT_1800fd650,
                          param_2,(int *)0x0);
  }
  return uVar1;
}

