/*
 * FUN_10005742 at 10005742
 * undefined4 * __stdcall FUN_10005742(undefined4 * param_1)
 * Address ranges: 10005742-1000577d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10005742(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1004f99f(0x6c);
  if (param_1 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_1000625d(puVar1);
      return puVar1;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_100062d9(puVar1,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

