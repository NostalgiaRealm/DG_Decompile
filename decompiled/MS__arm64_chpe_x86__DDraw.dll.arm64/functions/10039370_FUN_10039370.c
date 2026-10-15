/*
 * FUN_10039370 at 10039370
 * undefined FUN_10039370(void)
 * Address ranges: 10039370-1003942b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10039370(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (DAT_100c2940 != 0) {
    do {
      uVar2 = (*pcVar1)();
      iVar3 = (*extraout_w11)(uVar2);
      if (param_1 == iVar3) {
        iVar3 = *(int *)(DAT_100c2950 + uVar4 * 4);
        if ((*(uint *)(iVar3 + 0x104) >> 4 & 1) != 0) {
          return iVar3;
        }
        if ((*(uint *)(iVar3 + 0x104) & 1) != 0) {
          return iVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_100c2940);
  }
  return 0;
}

