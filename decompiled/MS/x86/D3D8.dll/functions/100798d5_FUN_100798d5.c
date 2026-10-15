/*
 * FUN_100798d5 at 100798d5
 * int __fastcall FUN_100798d5(int param_1)
 * Address ranges: 100798d5-10079a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100798d5(int param_1)

{
  bool bVar1;
  WNDPROC pWVar2;
  void *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  ushort in_FPUControlWord;
  int local_c;
  uint local_8;
  
  iVar6 = 0;
  local_c = 0;
  if ((DAT_100bee68 == (FARPROC)0x0) &&
     (DAT_100bee68 = FUN_100797dd("Direct3DCreate8"), DAT_100bee68 == (FARPROC)0x0)) {
    if ((param_1 == 0x78) || (param_1 - 0xdcU < 100)) {
      if (DAT_100ba2c8 == '\0') {
        thunk_FUN_100ad48c(DAT_100ba714);
        DAT_100ba714 = (LPVOID)0x0;
        DAT_100ba718 = 0;
        DAT_100ba71c = 0;
        thunk_FUN_100ad48c((LPVOID)0x0);
        DAT_100ba2c8 = '\x01';
      }
      local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
      if ((in_FPUControlWord & 0xf3f) != 0x23f) {
        local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
      }
      bVar1 = FUN_100223c7();
      if (bVar1) {
        pWVar2 = FUN_100a9a56();
        if (pWVar2 != (WNDPROC)0x0) {
          pcVar5 = pWVar2 + 0x9c;
          puVar3 = &DAT_100b9820;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar3 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar3 = puVar3 + 1;
          }
          FUN_100a9adb((undefined4 *)pWVar2);
        }
        iVar6 = 0;
        FUN_1007a797();
        this = (void *)FUN_100ad475(0x8c);
        if (this == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_10079c6f(this,param_1);
        }
        if (puVar3 != (undefined4 *)0x0) {
          uVar4 = FUN_100031d7((int)puVar3);
          if ((char)uVar4 != '\0') {
            FUN_10021b73(puVar3 + 0x19,DAT_100ba2b4,puVar3 + 0x18);
            iVar6 = FUN_10079f53((int)(puVar3 + 0x1c),0x100af300,&local_c);
            if (-1 < iVar6) {
              return local_c;
            }
            FUN_10079f0d((int)puVar3);
            iVar6 = local_c;
          }
          FUN_10079d0f(puVar3);
          FUN_100ad48c(puVar3);
        }
        uVar4 = FUN_1000210a();
        if ((char)uVar4 != '\0') {
          FUN_1007a7de();
        }
      }
    }
  }
  else {
    iVar6 = (*DAT_100bee68)(param_1);
  }
  return iVar6;
}

