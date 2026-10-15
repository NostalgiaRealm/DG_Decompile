/*
 * FUN_10039698 at 10039698
 * undefined FUN_10039698(void)
 * Address ranges: 10039698-1003979f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039698(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar3;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = 0;
  if (*(uint *)(param_1 + 300) != 0) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x128) + uVar3 * 4) + 0x108) == param_2) {
        uVar2 = (*pcVar1)();
        (*extraout_w11)(uVar2,0,0x100);
        if (DAT_100c291c != 0) {
          uVar2 = (*pcVar1)();
          (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xc),*extraout_w8);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 300));
  }
  return;
}

