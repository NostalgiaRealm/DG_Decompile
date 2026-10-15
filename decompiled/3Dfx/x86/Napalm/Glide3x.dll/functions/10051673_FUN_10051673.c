/*
 * FUN_10051673 at 10051673
 * undefined4 * __fastcall FUN_10051673(undefined4 param_1, undefined4 param_2)
 * Address ranges: 10051673-100516be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10051673(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1005566f(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    bVar1 = FUN_1005161d(puVar2);
    if (bVar1) {
      return puVar2;
    }
    FUN_10051601((int)puVar2);
    FUN_10055686(puVar2);
  }
  return (undefined4 *)0x0;
}

