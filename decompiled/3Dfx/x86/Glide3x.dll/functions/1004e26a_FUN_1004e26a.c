/*
 * FUN_1004e26a at 1004e26a
 * undefined4 * __fastcall FUN_1004e26a(undefined4 param_1, undefined4 param_2)
 * Address ranges: 1004e26a-1004e2b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1004e26a(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1005225f(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    bVar1 = FUN_1004e214(puVar2);
    if (bVar1) {
      return puVar2;
    }
    FUN_1004e1f8((int)puVar2);
    FUN_10052276(puVar2);
  }
  return (undefined4 *)0x0;
}

