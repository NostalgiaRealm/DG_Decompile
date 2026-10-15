/*
 * FUN_1802060f8 at 1802060f8
 * undefined FUN_1802060f8(void)
 * Address ranges: 1802060f8-1802061eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802060f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_180238aa8;
  param_1[0xd5] = &PTR_FUN_180238c60;
  param_1[0xd6] = &PTR_FUN_180238b38;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0xd9) != 0) {
    do {
      uVar2 = (*(code *)puVar1)();
      (*extraout_x11)(uVar2,param_1 + 0xd6);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xd9));
  }
  lVar5 = DAT_180258a30;
  if (DAT_180258a30 != 0) {
    FUN_18020d5a0(DAT_180258a30);
    FUN_1802229d8(lVar5,0x58);
  }
  DAT_180258a30 = 0;
  param_1[0x11a] = 0;
  FUN_1802012c8(param_1);
  lVar5 = 0x10;
  puVar4 = param_1 + 0x36a0;
  do {
    puVar4 = puVar4 + -0x358;
    lVar5 = lVar5 + -1;
    FUN_180205fd8(puVar4);
  } while (lVar5 != 0);
  FUN_18021afd8(param_1 + 0xd6);
  FUN_180201118(param_1);
  return;
}

