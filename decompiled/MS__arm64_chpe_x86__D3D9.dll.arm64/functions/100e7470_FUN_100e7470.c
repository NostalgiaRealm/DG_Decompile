/*
 * FUN_100e7470 at 100e7470
 * undefined FUN_100e7470(void)
 * Address ranges: 100e7470-100e75c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e7470(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  
  iVar3 = -0x7789f794;
  if (((param_2 & 0xfffffffc) == 0) &&
     (((param_2 >> 1 & 1) == 0 || ((*(int *)(param_1 + 0x14) - 9U & 0xfffffffd) == 0)))) {
    iVar3 = -0x7789f798;
    if (*(char *)(*(int *)(param_1 + 0x10) + 0x669d) == '\0') {
      if (((*(uint *)(*(int *)(param_1 + 0x10) + 0xdd0) >> 2 & 1) == 0) &&
         (*(int *)(DAT_10175b54 + 0x20) == 0)) {
        bVar1 = false;
        *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
      }
      else {
        bVar1 = true;
        iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
        if (iVar3 == 0) {
          FUN_100071d0(0);
        }
      }
      puVar4 = (undefined4 *)(param_1 + 0x14);
      puVar5 = (undefined4 *)(param_1 + 0x1c);
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar3 = (*extraout_w11)(uVar2,*puVar5,*puVar4,param_2);
      if (bVar1) {
        (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
      }
      else {
        *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
      }
    }
    if (-1 < iVar3) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(byte *)(param_1 + 0x29) = (byte)(param_2 >> 1) & 1;
    }
  }
  return iVar3;
}

