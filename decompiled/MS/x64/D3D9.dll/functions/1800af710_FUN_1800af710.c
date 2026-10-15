/*
 * FUN_1800af710 at 1800af710
 * undefined8 __fastcall FUN_1800af710(longlong param_1, longlong param_2)
 * Address ranges: 1800af710-1800af735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800af710(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + -0x80))
                      (*(undefined8 **)(param_1 + -0x80),&DAT_1800fd660,param_2);
  }
  return uVar1;
}

