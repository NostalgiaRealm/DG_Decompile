/*
 * FUN_100acfa1 at 100acfa1
 * undefined4 * __stdcall FUN_100acfa1(undefined4 * param_1)
 * Address ranges: 100acfa1-100acfdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100acfa1(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100ad475(0x6c);
  if (param_1 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_10088aee(puVar1);
      return puVar1;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10088b6a(puVar1,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

