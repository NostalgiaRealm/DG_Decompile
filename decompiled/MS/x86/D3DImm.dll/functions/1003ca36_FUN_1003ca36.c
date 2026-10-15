/*
 * FUN_1003ca36 at 1003ca36
 * undefined4 * __fastcall FUN_1003ca36(undefined4 param_1, undefined4 param_2)
 * Address ranges: 1003ca36-1003cabc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1003ca36(undefined4 param_1,undefined4 param_2)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1005c755(0xa4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    this = puVar2 + 1;
    puVar2[2] = 0;
    *this = 0;
    FUN_1005c9cc(puVar2 + 3,0,0x38);
    puVar1 = puVar2 + 0x11;
    puVar2[0x12] = param_2;
    *puVar2 = &PTR_FUN_1005f568;
    *puVar1 = 0;
    puVar2[0x27] = 0;
    *(undefined2 *)(puVar2 + 0x28) = 0;
    FUN_1005c9cc(puVar2 + 0x13,0,0x50);
    FUN_1004ac28(this,&DAT_1005d2a0,(int)puVar1);
    FUN_1004ac28(this,&DAT_1005d1e0,(int)puVar1);
  }
  return puVar2;
}

