/*
 * FUN_10039430 at 10039430
 * undefined FUN_10039430(void)
 * Address ranges: 10039430-1003956b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10039430(int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar4 [16];
  
  uVar2 = 1;
  iVar3 = *(int *)(param_1 + 0x11c) * 0x228;
  if ((&DAT_100be33a)[iVar3] != '\0') {
    if ((*(int *)(&DAT_100be2e8 + iVar3) ==
         *(int *)(&DAT_100be2cc + *(int *)(param_1 + 0x11c) * 0x45)) &&
       (*(int *)(&DAT_100be2ec + iVar3) == *(int *)((int)&DAT_100be2cc + iVar3 + 4))) {
      uVar2 = 1;
      iVar3 = FUN_10038010(param_1,0);
      pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (iVar3 != 0) {
        auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        iVar3 = (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,0,0,4,2,2,0,0);
        if (iVar3 != 0) {
          (*pcVar1)();
          uVar2 = (*extraout_w11_00)(iVar3);
          (*pcVar1)();
          (*extraout_w11_01)(iVar3);
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

