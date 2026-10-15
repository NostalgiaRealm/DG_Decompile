/*
 * FUN_10079b50 at 10079b50
 * int __fastcall FUN_10079b50(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 * param_5)
 * Address ranges: 10079b50-10079be4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall
FUN_10079b50(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  if ((DAT_100bee64 != (FARPROC)0x0) ||
     (DAT_100bee64 = FUN_100797dd("ValidateVertexShader"), DAT_100bee64 != (FARPROC)0x0)) {
    iVar4 = (*DAT_100bee64)(param_1,param_2,param_3,param_4,param_5);
    return iVar4;
  }
  cVar1 = FUN_1001336d(param_1);
  iVar4 = -0x7fffbffb;
  if (cVar1 == '\0') {
    pcVar3 = "dgVoodoo Vertex Shader validation failed.";
    if (param_4 != 0) goto LAB_10079b9a;
  }
  else {
    iVar4 = 0;
  }
  pcVar3 = "";
LAB_10079b9a:
  if (param_5 != (undefined4 *)0x0) {
    pcVar2 = pcVar3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = LocalAlloc(0,(SIZE_T)(pcVar2 + (4 - (int)(pcVar3 + 1))));
    *param_5 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
  }
  return iVar4;
}

