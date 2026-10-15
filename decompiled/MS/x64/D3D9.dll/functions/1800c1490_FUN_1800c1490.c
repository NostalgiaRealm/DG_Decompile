/*
 * FUN_1800c1490 at 1800c1490
 * undefined8 __fastcall FUN_1800c1490(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 1800c1490-1800c14cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c1490(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined8 *)0x0) {
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800c14b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x40))();
      return uVar1;
    }
    uVar1 = FUN_1800aed38((uint *)(*(longlong *)(param_1 + 0x38) + 0x6840),param_2,param_3,
                          (int *)0x0);
  }
  return uVar1;
}

