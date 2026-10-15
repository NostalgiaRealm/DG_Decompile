/*
 * FUN_100c962f at 100c962f
 * undefined4 * __fastcall FUN_100c962f(undefined4 param_1, undefined4 param_2)
 * Address ranges: 100c962f-100c967a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100c962f(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_100cfd55(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    bVar1 = FUN_100c95d9(puVar2);
    if (bVar1) {
      return puVar2;
    }
    FUN_100c95bd((int)puVar2);
    FUN_100cfd6c(puVar2);
  }
  return (undefined4 *)0x0;
}

