/*
 * FUN_1008fd51 at 1008fd51
 * uint __fastcall FUN_1008fd51(uint param_1)
 * Address ranges: 1008fd51-1008fea0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1008fd51(uint param_1)

{
  bool bVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort in_FPUControlWord;
  uint local_c;
  uint local_8;
  
  uVar6 = 0;
  local_c = 0;
  if ((DAT_100e3a34 == (FARPROC)0x0) &&
     (DAT_100e3a34 = FUN_1008fc59("Direct3DCreate9"), DAT_100e3a34 == (FARPROC)0x0)) {
    if (((param_1 & 0x7fffffff) == 0x1f) || ((param_1 & 0x7fffffff) == 0x20)) {
      FUN_1002a835();
      local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
      if ((in_FPUControlWord & 0xf3f) != 0x23f) {
        local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
      }
      bVar1 = FUN_10029a5f();
      if (bVar1) {
        FUN_1008f940();
        FUN_100912c6();
        this = (void *)FUN_100cfd55(0xc0);
        if (this == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = FUN_1009010b(this,param_1,'\0');
        }
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = FUN_10090504(puVar2);
          if ((char)uVar3 != '\0') {
            iVar4 = FUN_1009104e(puVar2 + 0x1d,0x100d1300,&local_c,(int *)0x0);
            if (-1 < iVar4) {
              return local_c;
            }
            FUN_10090539((int)puVar2);
            uVar6 = local_c;
          }
          FUN_100901f5(puVar2);
          FUN_100cfd6c(puVar2);
        }
        uVar5 = FUN_10001f95();
        if ((char)uVar5 != '\0') {
          FUN_1009130d();
        }
      }
    }
  }
  else {
    uVar6 = (*DAT_100e3a34)(param_1);
  }
  return uVar6;
}

