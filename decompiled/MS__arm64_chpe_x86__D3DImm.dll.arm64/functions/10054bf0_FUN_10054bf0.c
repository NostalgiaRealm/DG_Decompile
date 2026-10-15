/*
 * FUN_10054bf0 at 10054bf0
 * undefined FUN_10054bf0(void)
 * Address ranges: 10054bf0-10054d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054bf0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0x80070057;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x1528);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x1524) + uVar5 * 8) == param_3) goto LAB_10054c7c;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    if (uVar5 != uVar1) {
LAB_10054c7c:
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_2);
      if (*(int *)(param_1 + 0x1520) != 0) {
        uVar4 = (*pcVar2)();
        (*extraout_w11_00)(uVar4);
      }
      *(int *)(param_1 + 0x1520) = param_2;
      *(int *)(param_1 + 0x151c) = param_3;
      *(undefined1 *)(param_1 + 0x1754) = 1;
      uVar4 = 0;
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar4;
}

