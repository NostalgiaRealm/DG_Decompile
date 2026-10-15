/*
 * _grGetString@4 at 180001f2c
 * char * __fastcall _grGetString@4(int param_1)
 * Address ranges: 180001f2c-18000200a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * _grGetString_4(int param_1)

{
  char cVar1;
  uint uVar2;
  WNDPROC pWVar3;
  int iVar4;
  char *pcVar5;
  
                    /* 0x1f2c  43  _grGetString@4
                       0x1f2c  143  grGetString */
  if (param_1 == 0xa0) {
    pWVar3 = (WNDPROC)FUN_1800069ac();
    uVar2 = FUN_1800079d4(pWVar3);
    pcVar5 = (&PTR_s_GETGAMMA_18006d288)[(ulonglong)uVar2 * 4];
  }
  else if (param_1 == 0xa1) {
    pWVar3 = (WNDPROC)FUN_1800069ac();
    uVar2 = FUN_1800079d4(pWVar3);
    pcVar5 = (&PTR_s_Voodoo_Graphics__tm__18006d280)[(ulonglong)uVar2 * 4];
    iVar4 = 0;
    if (*pcVar5 == '\0') {
      pWVar3 = (WNDPROC)FUN_1800069ac();
      cVar1 = FUN_180006b64(pWVar3);
      if (cVar1 != '\0') {
        iVar4 = *(int *)(*(longlong *)(pWVar3 + 0x30) + 0x8be);
      }
      pcVar5 = "Voodoo4 (tm)";
      if (iVar4 != 2) {
        pcVar5 = "dgVoodoo 2.87";
      }
    }
  }
  else if (param_1 == 0xa2) {
    pcVar5 = "Glide";
  }
  else if (param_1 == 0xa3) {
    pcVar5 = "Dege";
  }
  else if (param_1 == 0xa4) {
    pcVar5 = "3.10";
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}

