/*
 * FUN_10054a30 at 10054a30
 * undefined FUN_10054a30(void)
 * Address ranges: 10054a30-10054bdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10054a30(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  uVar3 = 0x80070057;
  if (param_4 == (undefined4 *)0x0) goto switchD_10054aa4_caseD_3;
  *param_4 = 0;
  switch(param_5) {
  case 1:
    uVar1 = *(uint *)(param_1 + 0x1528);
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x1524) + uVar4 * 8) == param_3) {
          if (uVar4 < uVar1 - 1) {
            uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar3,param_2,param_4);
          }
          uVar3 = 0;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    goto switchD_10054aa4_caseD_3;
  case 2:
    iVar2 = *(int *)(param_1 + 0x1528);
    break;
  default:
    goto switchD_10054aa4_caseD_3;
  case 4:
    iVar2 = *(int *)(param_1 + 0x1528);
  }
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar3 = (*extraout_w11_00)(uVar3,param_2,param_4);
  }
switchD_10054aa4_caseD_3:
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

