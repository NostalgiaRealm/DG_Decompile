/*
 * FUN_100cf881 at 100cf881
 * undefined4 * __stdcall FUN_100cf881(undefined4 * param_1)
 * Address ranges: 100cf881-100cf8bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100cf881(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100cfd55(0x6c);
  if (param_1 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_100aad4c(puVar1);
      return puVar1;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_100aadc8(puVar1,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

