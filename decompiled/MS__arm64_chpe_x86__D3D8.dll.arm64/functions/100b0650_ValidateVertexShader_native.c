/*
 * ValidateVertexShader_native at 100b0650
 * undefined ValidateVertexShader_native(void)
 * Address ranges: 100b0650-100b074b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
ValidateVertexShader_native
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  
  if ((DAT_1013cfe0 == 0) &&
     (DAT_1013cfe0 = FUN_100aef10(s_ValidateVertexShader_1012d090), DAT_1013cfe0 == 0)) {
    cVar2 = FUN_1001f4a8(param_1);
    uVar4 = 0;
    if (cVar2 == '\0') {
      uVar4 = 0x80004005;
    }
    pcVar1 = s_dgVoodoo_Vertex_Shader_validatio_1012d0a8;
    if (cVar2 != '\0' || param_4 == 0) {
      pcVar1 = &DAT_1012b1bc;
    }
    if (param_5 != (int *)0x0) {
      iVar3 = FUN_100ff010(pcVar1);
      iVar3 = (*(code *)PTR_FUN_101340cc)(0,iVar3 + 4);
      *param_5 = iVar3;
      if (iVar3 != 0) {
        FUN_100fefe0(iVar3,pcVar1);
      }
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar4 = (*extraout_w11)(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar4;
}

