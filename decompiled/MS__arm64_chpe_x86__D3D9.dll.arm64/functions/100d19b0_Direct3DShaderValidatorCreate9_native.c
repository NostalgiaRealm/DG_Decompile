/*
 * Direct3DShaderValidatorCreate9_native at 100d19b0
 * undefined Direct3DShaderValidatorCreate9_native(void)
 * Address ranges: 100d19b0-100d1a7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Direct3DShaderValidatorCreate9_native(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  if ((DAT_10175b44 == 0) &&
     (DAT_10175b44 = FUN_100cfd50(s_Direct3DShaderValidatorCreate9_10162e08), DAT_10175b44 == 0)) {
    FUN_1003ad48();
    puVar1 = (undefined4 *)FUN_101321c0(0x14);
    uVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 1) = 0;
      puVar1[3] = puVar1;
      *puVar1 = &PTR_FUN_1015fb7c;
      *(undefined1 *)(puVar1 + 4) = 0;
      iVar2 = FUN_100e7820(puVar1,&DAT_10163238,local_20);
      uVar3 = local_20[0];
      if (iVar2 < 0) {
        *puVar1 = &PTR_FUN_1015fb7c;
        FUN_10132260(puVar1,0x14);
        uVar3 = local_20[0];
      }
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar3 = (*extraout_w11)();
  }
  return uVar3;
}

