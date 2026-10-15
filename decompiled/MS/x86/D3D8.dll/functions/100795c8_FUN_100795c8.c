/*
 * FUN_100795c8 at 100795c8
 * undefined4 * __fastcall FUN_100795c8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100795c8-10079656
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_100795c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100ad475(0x5c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = puVar1 + 0x13;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[4] = param_3;
    puVar1[6] = param_3;
    puVar1[0xd] = param_4;
    puVar1[0xe] = param_5;
    puVar1[10] = 0;
    puVar1[0xb] = -(uint)(param_1 != 0) & param_1 + 0x58e0U;
    puVar1[0xc] = 7;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1[0xf] = param_6;
    puVar1[0x10] = 0;
    puVar1[0x11] = param_2;
    puVar1[0x12] = 0;
    *puVar1 = &PTR_FUN_100b372c;
    puVar1[0x13] = &PTR_FUN_100b36f4;
  }
  return puVar1;
}

