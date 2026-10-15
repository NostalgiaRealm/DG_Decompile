/*
 * FUN_1003aa38 at 1003aa38
 * undefined FUN_1003aa38(void)
 * Address ranges: 1003aa38-1003ab1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003aa38(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar4 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar4 = 0x887600ff;
    piVar1 = (int *)(param_1 + 0xf4);
    while (iVar2 = *piVar1, iVar2 != 0) {
      if ((*(uint *)(*(int *)(iVar2 + 4) + 200) >> 1 & 1) != 0) {
        uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        iVar2 = (*extraout_w11)(uVar3,param_2,param_3,0);
        uVar4 = iVar2 >> 0x1f & 0x80004005;
        break;
      }
      piVar1 = (int *)(iVar2 + 0x110);
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar4;
}

