/*
 * FUN_1800c3ee0 at 1800c3ee0
 * undefined8 __fastcall FUN_1800c3ee0(longlong param_1, longlong param_2)
 * Address ranges: 1800c3ee0-1800c3f08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c3ee0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + -0x100))
                      (*(undefined8 **)(param_1 + -0x100),&DAT_1800fd660,param_2);
  }
  return uVar1;
}

