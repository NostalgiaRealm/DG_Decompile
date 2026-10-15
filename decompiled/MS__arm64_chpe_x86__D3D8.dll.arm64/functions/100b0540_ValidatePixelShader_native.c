/*
 * ValidatePixelShader_native at 100b0540
 * undefined ValidatePixelShader_native(void)
 * Address ranges: 100b0540-100b0643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
ValidatePixelShader_native(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [296];
  
  if ((DAT_1013cfd4 == 0) &&
     (DAT_1013cfd4 = FUN_100aef10(s_ValidatePixelShader_1012d048), DAT_1013cfd4 == 0)) {
    cVar2 = FUN_1001d7c0(param_1,auStack_158,auStack_160);
    uVar4 = 0;
    if (cVar2 == '\0') {
      uVar4 = 0x80004005;
    }
    pcVar1 = s_dgVoodoo_Pixel_Shader_validation_1012d060;
    if (cVar2 != '\0' || param_3 == 0) {
      pcVar1 = &DAT_1012b1bc;
    }
    if (param_4 != (int *)0x0) {
      iVar3 = FUN_100ff010(pcVar1);
      iVar3 = (*(code *)PTR_FUN_101340cc)(0,iVar3 + 4);
      *param_4 = iVar3;
      if (iVar3 != 0) {
        FUN_100fefe0(iVar3,pcVar1);
      }
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar4 = (*extraout_w11)(param_1,param_2,param_3,param_4);
  }
  return uVar4;
}

