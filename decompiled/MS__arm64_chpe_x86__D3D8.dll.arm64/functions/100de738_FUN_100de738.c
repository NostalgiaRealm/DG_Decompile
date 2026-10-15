/*
 * FUN_100de738 at 100de738
 * undefined FUN_100de738(void)
 * Address ranges: 100de738-100de817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100de738(int param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  code *extraout_w11;
  
  uVar2 = (*(code *)PTR_FUN_10134070)(param_1 + 0x4a0);
  bVar1 = FUN_100dc570(uVar2,param_2);
  if ((*(char *)(param_2 + 0xd5e) != '\0') || (bVar1 != *(byte *)(param_2 + 0xd5d))) {
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    FUN_100dc870(param_1,param_2,0,param_3);
    *(byte *)(param_2 + 0xd5d) = bVar1;
    *(char *)(param_2 + 0xd5e) = '\0';
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,param_2);
  }
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x4a0);
  return;
}

