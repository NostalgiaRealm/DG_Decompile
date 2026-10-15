/*
 * FUN_1800c34f4 at 1800c34f4
 * undefined8 __fastcall FUN_1800c34f4(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800c34f4-1800c3523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c34f4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = FUN_1800aed38((uint *)(*(longlong *)(param_1 + -0x40) + 0x6840),
                          (longlong *)&DAT_1800fd660,param_2,(int *)0x0);
  }
  return uVar1;
}

