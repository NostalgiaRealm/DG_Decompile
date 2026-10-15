/*
 * FUN_10027255 at 10027255
 * undefined __fastcall FUN_10027255(int param_1)
 * Address ranges: 10027255-100272b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027255(int param_1)

{
  undefined4 *puVar1;
  
  FUN_1002738c(param_1);
  FUN_100283db(param_1 + 0x60);
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038ecc(puVar1);
    FUN_1004f9b6(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038ecc(puVar1);
    FUN_1004f9b6(puVar1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_10027225(param_1);
  FUN_100272b7(param_1);
  return;
}

