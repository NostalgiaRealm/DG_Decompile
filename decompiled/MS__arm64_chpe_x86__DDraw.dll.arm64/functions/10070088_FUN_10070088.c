/*
 * FUN_10070088 at 10070088
 * undefined FUN_10070088(void)
 * Address ranges: 10070088-10070167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070088(int param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  code *extraout_w11;
  
  uVar2 = (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x4a0);
  bVar1 = FUN_1006dec0(uVar2,param_2);
  if ((*(char *)(param_2 + 0xd5e) != '\0') || (bVar1 != *(byte *)(param_2 + 0xd5d))) {
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    FUN_1006e1c0(param_1,param_2,0,param_3);
    *(byte *)(param_2 + 0xd5d) = bVar1;
    *(char *)(param_2 + 0xd5e) = '\0';
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,param_2);
  }
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x4a0);
  return;
}

