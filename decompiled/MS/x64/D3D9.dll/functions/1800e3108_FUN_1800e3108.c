/*
 * FUN_1800e3108 at 1800e3108
 * undefined8 __fastcall FUN_1800e3108(longlong param_1)
 * Address ranges: 1800e3108-1800e3139
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e3108(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xb50) == -1) {
    uVar1 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xb48) = *(longlong *)(param_1 + 0xb48) + 1;
    uVar1 = *(undefined8 *)(param_1 + 0xb48);
    FUN_1800e2fd8(param_1,uVar1);
  }
  return uVar1;
}

