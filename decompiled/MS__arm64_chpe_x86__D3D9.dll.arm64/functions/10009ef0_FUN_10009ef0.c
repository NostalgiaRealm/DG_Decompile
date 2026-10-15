/*
 * FUN_10009ef0 at 10009ef0
 * undefined FUN_10009ef0(void)
 * Address ranges: 10009ef0-10009fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009ef0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((param_2 == 0) || (uVar4 = 0x8876086c, *(int *)(param_2 + 0x3c) != 3)) {
    if (*(char *)(param_1 + 0x3c4) == '\0') {
      cVar3 = FUN_1000c720(param_1,param_2,0);
      uVar4 = 0;
      if (cVar3 == '\0') {
        uVar4 = 0x8876086c;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
      if (param_2 != 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(param_2);
      }
      if (*(int *)(iVar1 + 0xaae0) != 0) {
        uVar4 = (*pcVar2)();
        (*extraout_w11_00)(uVar4);
      }
      *(int *)(iVar1 + 0xaae0) = param_2;
      *(undefined1 *)(iVar1 + 0xac1e) = 1;
      uVar4 = 0;
    }
  }
  return uVar4;
}

