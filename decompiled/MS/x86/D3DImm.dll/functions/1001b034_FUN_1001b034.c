/*
 * FUN_1001b034 at 1001b034
 * undefined4 * __fastcall FUN_1001b034(undefined4 param_1)
 * Address ranges: 1001b034-1001b0b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1001b034(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1005c755(0xdc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1005ebcc;
    puVar1[0x32] = 0xffffffff;
    puVar1[0x33] = 0;
    puVar1[0x34] = param_1;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    FUN_1005c9cc(puVar1 + 1,0,0x78);
    FUN_1005c9cc(puVar1 + 0x1f,0,0x34);
    puVar1[0x2c] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
  }
  return puVar1;
}

