/*
 * DirectDrawEnumerateA_native at 1003fca0
 * undefined DirectDrawEnumerateA_native(void)
 * Address ranges: 1003fca0-1003fdfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DirectDrawEnumerateA_native(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  char local_420 [8];
  char acStack_418 [8];
  char local_410 [4];
  char local_40c [492];
  char local_220 [64] [8];
  
  iVar1 = FUN_100375c0(s_DirectDrawEnumerateA_100b3b58);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar1 == 0) {
      FUN_10001c10(0);
    }
    FUN_10002d00();
    uVar2 = 0x80070057;
    if (param_1 != 0) {
      uVar2 = 0x80004005;
      uVar3 = FUN_10001cf8();
      if ((uVar3 & 1) != 0) {
        FUN_10040968();
        FUN_10003630();
        uVar4 = 0;
        do {
          if ((&DAT_100be338)[uVar4 * 0x228] != '\0') {
            uVar2 = 0;
            local_410[0] = s_dgVoodoo_DX_API_Layer_100b3b70[0x10];
            local_410[1] = s_dgVoodoo_DX_API_Layer_100b3b70[0x11];
            local_410[2] = s_dgVoodoo_DX_API_Layer_100b3b70[0x12];
            local_410[3] = s_dgVoodoo_DX_API_Layer_100b3b70[0x13];
            acStack_418[0] = s_dgVoodoo_DX_API_Layer_100b3b70[8];
            acStack_418[1] = s_dgVoodoo_DX_API_Layer_100b3b70[9];
            acStack_418[2] = s_dgVoodoo_DX_API_Layer_100b3b70[10];
            acStack_418[3] = s_dgVoodoo_DX_API_Layer_100b3b70[0xb];
            acStack_418[4] = s_dgVoodoo_DX_API_Layer_100b3b70[0xc];
            acStack_418[5] = s_dgVoodoo_DX_API_Layer_100b3b70[0xd];
            acStack_418[6] = s_dgVoodoo_DX_API_Layer_100b3b70[0xe];
            acStack_418[7] = s_dgVoodoo_DX_API_Layer_100b3b70[0xf];
            local_420[0] = s_dgVoodoo_DX_API_Layer_100b3b70[0];
            local_420[1] = s_dgVoodoo_DX_API_Layer_100b3b70[1];
            local_420[2] = s_dgVoodoo_DX_API_Layer_100b3b70[2];
            local_420[3] = s_dgVoodoo_DX_API_Layer_100b3b70[3];
            local_420[4] = s_dgVoodoo_DX_API_Layer_100b3b70[4];
            local_420[5] = s_dgVoodoo_DX_API_Layer_100b3b70[5];
            local_420[6] = s_dgVoodoo_DX_API_Layer_100b3b70[6];
            local_420[7] = s_dgVoodoo_DX_API_Layer_100b3b70[7];
            local_40c[0] = s_dgVoodoo_DX_API_Layer_100b3b70[0x14];
            local_40c[1] = s_dgVoodoo_DX_API_Layer_100b3b70[0x15];
            builtin_strncpy(local_220[0],"display",8);
            (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11_00)(0,local_420,local_220,param_2);
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x20);
        if (DAT_100c2940 == 0) {
          FUN_10040a98();
          FUN_10002070();
        }
      }
    }
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(param_1,param_2);
  }
  return uVar2;
}

