/*
 * FUN_100053f2 at 100053f2
 * undefined4 * __stdcall FUN_100053f2(undefined4 * param_1)
 * Address ranges: 100053f2-1000542d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100053f2(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1004f60f(0x6c);
  if (param_1 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_10005f0b(puVar1);
      return puVar1;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10005f87(puVar1,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

