/*
 * FUN_100b34e0 at 100b34e0
 * undefined FUN_100b34e0(void)
 * Address ranges: 100b34e0-100b364f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b34e0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [16];
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar3 == 0) {
      FUN_10006560(0);
    }
  }
  FUN_10121020(auStack_40);
  iVar3 = FUN_10008020(param_1 + -0x58e0,param_2,0x8876086c);
  if (-1 < iVar3) {
    iVar1 = *(int *)(*(int *)(param_1 + -0x56d0) + param_2 * 4 + -4);
    if (*(char *)(iVar1 + 0x93a1) != '\0') {
      *(undefined4 *)(iVar1 + 0x49b0) = *(undefined4 *)(param_1 + 0x60);
    }
    if (*(char *)(iVar1 + 0x93a0) != '\0') {
      *(undefined4 *)(iVar1 + 0x49ac) = *(undefined4 *)(param_1 + 100);
    }
    puVar4 = (undefined4 *)(iVar1 + 4);
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff,*puVar4);
  }
  FUN_10120f70(auStack_40);
  if (bVar2) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar3;
}

