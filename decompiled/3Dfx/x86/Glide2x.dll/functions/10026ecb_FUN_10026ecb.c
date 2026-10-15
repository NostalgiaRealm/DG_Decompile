/*
 * FUN_10026ecb at 10026ecb
 * undefined __fastcall FUN_10026ecb(int param_1)
 * Address ranges: 10026ecb-10026f2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10026ecb(int param_1)

{
  undefined4 *puVar1;
  
  FUN_10027002(param_1);
  FUN_10028051(param_1 + 0x60);
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038b3c(puVar1);
    FUN_1004f626(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038b3c(puVar1);
    FUN_1004f626(puVar1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_10026e9b(param_1);
  FUN_10026f2d(param_1);
  return;
}

