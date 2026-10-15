/*
 * _grGetString@4 at 180003598
 * char * __cdecl _grGetString@4(int param_1)
 * Address ranges: 180003598-18000367b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * _grGetString_4(int param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  
                    /* 0x3598  43  _grGetString@4
                       0x3598  143  grGetString */
  if (param_1 == 0xa0) {
    lVar3 = FUN_180008ce0();
    uVar2 = FUN_18000a930(lVar3);
    pcVar4 = (&PTR_s_GETGAMMA_18006f268)[(ulonglong)uVar2 * 4];
  }
  else if (param_1 == 0xa1) {
    lVar3 = FUN_180008ce0();
    uVar2 = FUN_18000a930(lVar3);
    pcVar4 = (&PTR_s_Voodoo_Graphics__tm__18006f260)[(ulonglong)uVar2 * 4];
    if (*(&PTR_s_Voodoo_Graphics__tm__18006f260)[(ulonglong)uVar2 * 4] == '\0') {
      lVar3 = FUN_180008ce0();
      bVar1 = FUN_180009768(lVar3);
      if ((bVar1 & 1) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(longlong *)(lVar3 + 0x30) + 0x8be);
      }
      pcVar4 = "dgVoodoo 2.87";
      if (iVar5 == 2) {
        pcVar4 = "Voodoo4 (tm)";
      }
    }
  }
  else if (param_1 == 0xa2) {
    pcVar4 = "Glide";
  }
  else if (param_1 == 0xa3) {
    pcVar4 = "Dege";
  }
  else if (param_1 == 0xa4) {
    pcVar4 = "3.10";
  }
  else {
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}

