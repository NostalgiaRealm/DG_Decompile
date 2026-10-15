/*
 * FUN_10055840 at 10055840
 * undefined FUN_10055840(void)
 * Address ranges: 10055840-10055923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055840(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = 0x80070057;
  if (param_2 != 0) {
    iVar2 = 1;
    uVar4 = 0;
    if (*(uint *)(param_1 + 0xa8c) != 0) {
      do {
        if (iVar2 == 0) break;
        uVar3 = (*pcVar1)(param_1 + uVar4 * 0x6c + 0xad8);
        iVar2 = (*extraout_w11)(uVar3,param_3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0xa8c));
    }
    uVar5 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar5;
}

