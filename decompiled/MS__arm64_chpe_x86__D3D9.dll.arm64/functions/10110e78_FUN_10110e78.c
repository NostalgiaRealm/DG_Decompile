/*
 * FUN_10110e78 at 10110e78
 * undefined FUN_10110e78(void)
 * Address ranges: 10110e78-10110f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10110e78(int param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  code *extraout_w11;
  
  uVar2 = (*(code *)PTR_FUN_1016c074)(param_1 + 0x4a0);
  bVar1 = FUN_1010ecb0(uVar2,param_2);
  if ((*(char *)(param_2 + 0xd5e) != '\0') || (bVar1 != *(byte *)(param_2 + 0xd5d))) {
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    FUN_1010efb0(param_1,param_2,0,param_3);
    *(byte *)(param_2 + 0xd5d) = bVar1;
    *(char *)(param_2 + 0xd5e) = '\0';
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,param_2);
  }
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x4a0);
  return;
}

