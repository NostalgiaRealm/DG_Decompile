/*
 * FUN_1000a2a0 at 1000a2a0
 * undefined FUN_1000a2a0(void)
 * Address ranges: 1000a2a0-1000a457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000a2a0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar6;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,param_2);
  if (iVar3 != 0) {
    do {
      uVar2 = (*pcVar1)();
      uVar2 = (*extraout_w11_00)(uVar2,param_2,uVar6);
      iVar3 = FUN_1007a5c0(uVar2,s_datafolderredirection_100959b0);
      if (iVar3 == 0) {
        uVar2 = (*pcVar1)();
        iVar3 = (*extraout_w11_01)(uVar2,param_2,uVar6);
        if (iVar3 == 1) {
          uVar2 = (*pcVar1)();
          pcVar5 = (char *)(*extraout_w11_03)(uVar2,param_2,uVar6,0);
          if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
            (*(code *)PTR_FUN_1009d0a4)
                      (0,0,pcVar5,0xffffffff,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8));
          }
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar2 = (*pcVar1)();
      uVar4 = (*extraout_w11_02)(uVar2,param_2);
    } while (uVar6 < uVar4);
  }
  return 0;
}

