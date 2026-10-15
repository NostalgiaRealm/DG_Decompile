/*
 * FUN_10090005 at 10090005
 * int __stdcall FUN_10090005(void)
 * Address ranges: 10090005-10090080
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090005(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if ((DAT_100e3a24 == (FARPROC)0x0) &&
     (DAT_100e3a24 = FUN_1008fc59("Direct3DShaderValidatorCreate9"), DAT_100e3a24 == (FARPROC)0x0))
  {
    FUN_1002a835();
    puVar1 = (undefined4 *)FUN_100cfd55(0x14);
    iVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = puVar1;
      *puVar1 = &PTR_FUN_100d705c;
      *(undefined1 *)(puVar1 + 4) = 0;
      iVar2 = FUN_1009cd03((int)puVar1,0x100d2f48,&local_8);
      iVar3 = local_8;
      if (iVar2 < 0) {
        *puVar1 = &PTR_FUN_100d705c;
        FUN_100cfd6c(puVar1);
        iVar3 = local_8;
      }
    }
  }
  else {
    iVar3 = (*DAT_100e3a24)();
  }
  return iVar3;
}

