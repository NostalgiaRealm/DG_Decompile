/*
 * FUN_10079aad at 10079aad
 * undefined FUN_10079aad(void)
 * Address ranges: 10079aad-10079b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10079aad(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int local_134;
  undefined4 local_130 [75];
  
  if ((DAT_100bee70 != (FARPROC)0x0) ||
     (DAT_100bee70 = FUN_100797dd("ValidatePixelShader"), DAT_100bee70 != (FARPROC)0x0)) {
    iVar4 = (*DAT_100bee70)(param_1,param_2,param_3,param_4);
    return iVar4;
  }
  uVar2 = FUN_10011cdf(param_1,local_130,&local_134);
  iVar4 = -0x7fffbffb;
  if ((char)uVar2 == '\0') {
    pcVar5 = "dgVoodoo Pixel Shader validation failed.";
    if (param_3 != 0) goto LAB_10079b0a;
  }
  else {
    iVar4 = 0;
  }
  pcVar5 = "";
LAB_10079b0a:
  if (param_4 != (undefined4 *)0x0) {
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = LocalAlloc(0,(SIZE_T)(pcVar3 + (4 - (int)(pcVar5 + 1))));
    *param_4 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
  }
  return iVar4;
}

