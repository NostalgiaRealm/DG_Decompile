/*
 * FUN_1800c2acc at 1800c2acc
 * undefined8 __fastcall FUN_1800c2acc(longlong param_1, longlong param_2)
 * Address ranges: 1800c2acc-1800c2af1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c2acc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + -0x50))
                      (*(undefined8 **)(param_1 + -0x50),&DAT_1800fd660,param_2);
  }
  return uVar1;
}

