/*
 * FUN_18017b2d0 at 18017b2d0
 * undefined FUN_18017b2d0(void)
 * Address ranges: 18017b2d0-18017b373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017b2d0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  iVar1 = *(int *)(*param_1 + 0x4f8);
  if (iVar1 != 0) {
    *(undefined1 *)(*param_1 + (ulonglong)(iVar1 - 1) + 0x50c) = 1;
    lVar3 = *param_1;
    if (*(char *)(*(longlong *)(lVar3 + 0x100) + 0x148) != '\0') {
      if (*(int *)(lVar3 + 0x304) == 0) {
        uVar2 = FUN_180213760(lVar3,4,1);
        *(undefined4 *)(*param_1 + 0x304) = uVar2;
      }
      lVar3 = *param_1;
      local_18 = 0;
      local_20 = 0xe4;
      local_28 = *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x4f8) - 1) * 4 + 0x2e4);
      local_30[0] = 0xf;
      FUN_180214c88(lVar3,param_1[1],0x36,*(undefined4 *)(lVar3 + 0x304),local_30,0x20);
    }
  }
  return;
}

