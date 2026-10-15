/*
 * Direct3DShaderValidatorCreate9 at 1800a8120
 * undefined Direct3DShaderValidatorCreate9(void)
 * Address ranges: 1800a8120-1800a81f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Direct3DShaderValidatorCreate9(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if ((DAT_180258788 == (code *)0x0) &&
     (DAT_180258788 = (code *)FUN_1800a3360(s_Direct3DShaderValidatorCreate9_180235ea8),
     DAT_180258788 == (code *)0x0)) {
    if (DAT_18024de40 == '\0') {
      thunk_FUN_180102fc0(DAT_180253840);
      DAT_180253840 = 0;
      _DAT_180253848 = 0;
      thunk_FUN_180102fc0(0);
      DAT_18024de40 = '\x01';
    }
    puVar2 = (undefined8 *)FUN_180102f80(0x20);
    uVar3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = puVar2;
      *puVar2 = &PTR_FUN_180236860;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      iVar1 = FUN_1800c2df0(puVar2,&DAT_180231d88,local_30);
      uVar3 = local_30[0];
      if (iVar1 < 0) {
        *puVar2 = &PTR_FUN_180236860;
        FUN_180102fc0(puVar2,0x20);
        uVar3 = local_30[0];
      }
    }
  }
  else {
    uVar3 = (*DAT_180258788)();
  }
  return uVar3;
}

