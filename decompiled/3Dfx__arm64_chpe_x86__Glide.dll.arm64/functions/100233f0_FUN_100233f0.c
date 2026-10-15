/*
 * FUN_100233f0 at 100233f0
 * undefined FUN_100233f0(void)
 * Address ranges: 100233f0-100234d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100233f0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_40 [4];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x3150) != '\0') {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0x318c),0,4,0,local_40);
    if (-1 < iVar3) {
      FUN_1007ac00(local_40[0],param_1 + 0x2bd0,0x580);
      uVar2 = (*pcVar1)();
      (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0x318c),0);
      *(undefined1 *)(param_1 + 0x3150) = 0;
    }
  }
  return;
}

