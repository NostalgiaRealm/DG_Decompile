/*
 * FUN_1008fec6 at 1008fec6
 * int __fastcall FUN_1008fec6(undefined4 param_1, uint * param_2)
 * Address ranges: 1008fec6-10090004
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1008fec6(undefined4 param_1,uint *param_2)

{
  bool bVar1;
  FARPROC pFVar2;
  void *this;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  pFVar2 = DAT_100e3a30;
  *param_2 = 0;
  if ((pFVar2 == (FARPROC)0x0) &&
     (pFVar2 = FUN_1008fc59("Direct3DCreate9Ex"), DAT_100e3a30 = pFVar2, pFVar2 == (FARPROC)0x0)) {
    iVar6 = -0x7fffbffb;
    FUN_1002a835();
    bVar1 = FUN_10029a5f();
    if (bVar1) {
      FUN_1008f940();
      FUN_100912c6();
      this = (void *)FUN_100cfd55(0xc0);
      if (this == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_1009010b(this,param_1,'\x01');
      }
      if (puVar3 != (undefined4 *)0x0) {
        uVar4 = FUN_10090504(puVar3);
        if ((char)uVar4 != '\0') {
          iVar6 = FUN_10090a86((int)(puVar3 + 0x1c),0x100d13f0,param_2);
          if (-1 < iVar6) {
            return iVar6;
          }
          FUN_10090539((int)puVar3);
        }
        FUN_100901f5(puVar3);
        FUN_100cfd6c(puVar3);
      }
      uVar5 = FUN_10001f95();
      if ((char)uVar5 != '\0') {
        FUN_1009130d();
      }
    }
  }
  else {
    iVar6 = (*pFVar2)(param_1,param_2);
  }
  return iVar6;
}

