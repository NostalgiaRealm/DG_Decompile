/*
 * FUN_1002fe59 at 1002fe59
 * undefined4 __fastcall FUN_1002fe59(int param_1)
 * Address ranges: 1002fe59-1002feb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002fe59(int param_1)

{
  uint uVar1;
  int unaff_ESI;
  undefined1 local_18 [20];
  
  uVar1 = FUN_1002f9e0(param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 1) {
      uVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34) * 8
                                            ) + 0x38) + 0x10))(local_18,2,0,0,0);
      if (unaff_ESI != 0) {
        uVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) +
                                              *(int *)(param_1 + 0x34) * 8) + 0x38) + 0x14))();
      }
    }
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}

