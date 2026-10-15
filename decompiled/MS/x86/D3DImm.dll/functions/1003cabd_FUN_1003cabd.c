/*
 * FUN_1003cabd at 1003cabd
 * undefined4 * __fastcall FUN_1003cabd(undefined4 param_1)
 * Address ranges: 1003cabd-1003cb23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1003cabd(undefined4 param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1005c755(100);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    this = puVar1 + 1;
    puVar1[2] = 0;
    *this = 0;
    FUN_1005c9cc(puVar1 + 3,0,0x54);
    *puVar1 = &PTR_FUN_1005f584;
    puVar1[0x18] = param_1;
    FUN_1004b6a1(this,&DAT_1005d2a0);
    FUN_1004b6a1(this,&DAT_1005d1c0);
    FUN_1004b6a1(this,&DAT_1005d1d0);
  }
  return puVar1;
}

