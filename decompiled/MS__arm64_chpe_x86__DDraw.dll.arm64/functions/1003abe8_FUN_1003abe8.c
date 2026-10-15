/*
 * FUN_1003abe8 at 1003abe8
 * undefined FUN_1003abe8(void)
 * Address ranges: 1003abe8-1003acfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003abe8(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *extraout_w11;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if ((param_3 != 0) && (param_4 != (undefined4 *)0x0)) {
    *param_4 = 0;
    uVar2 = 0x887600ff;
    if (*(uint *)(param_1 + 300) != 0) {
      uVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x128) + uVar3 * 4) + 4);
        if ((*(int *)(iVar1 + 0xb0) != 0) && (*(int *)(iVar1 + 0x94) == param_3)) {
          uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          iVar1 = (*extraout_w11)(uVar2,param_2,param_4,0);
          uVar2 = 0;
          if (iVar1 < 0) {
            uVar2 = 0x80004005;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 300));
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

