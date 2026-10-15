/*
 * FUN_100f2160 at 100f2160
 * undefined FUN_100f2160(void)
 * Address ranges: 100f2160-100f222f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100f2160(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_100febf0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_1012ac64;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_100fece0(param_1);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_1;
      FUN_100ff660(iVar2,param_2,param_1);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_1012ac64;
    FUN_100fed00(0);
    FUN_100fec90(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

