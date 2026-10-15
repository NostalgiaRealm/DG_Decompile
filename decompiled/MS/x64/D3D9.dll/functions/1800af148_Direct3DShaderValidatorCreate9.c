/*
 * Direct3DShaderValidatorCreate9 at 1800af148
 * INT_PTR __fastcall Direct3DShaderValidatorCreate9(void)
 * Address ranges: 1800af148-1800af1e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

INT_PTR Direct3DShaderValidatorCreate9(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  INT_PTR IVar3;
  INT_PTR local_res8;
  
                    /* 0xaf148  11  Direct3DShaderValidatorCreate9 */
  local_res8 = 0;
  if ((DAT_180117438 == (FARPROC)0x0) &&
     (DAT_180117438 = FUN_1800ad364("Direct3DShaderValidatorCreate9"), DAT_180117438 == (FARPROC)0x0
     )) {
    FUN_18002ebbc();
    puVar1 = (undefined8 *)FUN_1800fbccc(0x20);
    IVar3 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = puVar1;
      *puVar1 = &PTR_FUN_1801048f8;
      *(undefined1 *)(puVar1 + 3) = 0;
      uVar2 = FUN_1800c09b0((longlong)puVar1,(longlong *)&DAT_1800ff318,&local_res8);
      IVar3 = local_res8;
      if ((int)uVar2 < 0) {
        *puVar1 = &PTR_FUN_1801048f8;
        FUN_1800fbcf0(puVar1);
        IVar3 = local_res8;
      }
    }
  }
  else {
    IVar3 = (*DAT_180117438)();
  }
  return IVar3;
}

