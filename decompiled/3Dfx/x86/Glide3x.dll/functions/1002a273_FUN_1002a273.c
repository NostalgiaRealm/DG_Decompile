/*
 * FUN_1002a273 at 1002a273
 * char * __fastcall FUN_1002a273(int param_1)
 * Address ranges: 1002a273-1002a2fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __fastcall FUN_1002a273(int param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 == 0xa0) {
    puVar2 = FUN_1000504c();
    uVar3 = FUN_10005e0b((int)puVar2);
    pcVar4 = (&PTR_s_GETGAMMA_1005b1ac)[uVar3 * 6];
  }
  else {
    if (param_1 != 0xa1) {
      if (param_1 == 0xa2) {
        return "Glide";
      }
      if (param_1 != 0xa3) {
        if (param_1 != 0xa4) {
          return (char *)0x0;
        }
        return "3.10";
      }
      return "Dege";
    }
    puVar2 = FUN_1000504c();
    uVar3 = FUN_10005e0b((int)puVar2);
    pcVar4 = (&PTR_s_Voodoo_Graphics__tm__1005b1a8)[uVar3 * 6];
    if (*pcVar4 == '\0') {
      puVar2 = FUN_1000504c();
      cVar1 = FUN_1000522d((int)puVar2);
      if ((cVar1 == '\0') ||
         (pcVar4 = "Voodoo4 (tm)", *(int *)(*(int *)(puVar2 + 0x1c) + 0x822) != 2)) {
        pcVar4 = "dgVoodoo 2.87";
      }
      return pcVar4;
    }
  }
  return pcVar4;
}

