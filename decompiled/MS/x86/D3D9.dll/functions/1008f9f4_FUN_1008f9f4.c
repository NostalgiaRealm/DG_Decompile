/*
 * FUN_1008f9f4 at 1008f9f4
 * undefined4 * __fastcall FUN_1008f9f4(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1008f9f4-1008fa42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1008f9f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100cfd55(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar1;
    *puVar1 = &PTR_FUN_100d703c;
    puVar1[4] = param_1;
    puVar1[5] = param_3;
    puVar1[6] = param_2;
    puVar1[7] = 0;
    *(undefined2 *)(puVar1 + 10) = 1;
    puVar1[9] = 0;
    puVar1[8] = 0;
  }
  return puVar1;
}

