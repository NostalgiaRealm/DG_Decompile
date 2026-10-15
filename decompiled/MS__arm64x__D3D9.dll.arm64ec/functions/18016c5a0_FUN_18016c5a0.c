/*
 * FUN_18016c5a0 at 18016c5a0
 * undefined FUN_18016c5a0(void)
 * Address ranges: 18016c5a0-18016c653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c5a0(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  code *extraout_x11;
  
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar4,0);
  if (param_2 < param_3) {
    lVar1 = param_1 + 0x6360;
    uVar5 = param_2;
    do {
      uVar2 = (uVar5 - param_2) * 4;
      uVar3 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar1 + (ulonglong)uVar3 * 4) =
           *(undefined4 *)(param_4 + (ulonglong)uVar2 * 4);
      *(undefined4 *)(lVar1 + (ulonglong)(uVar3 + 1) * 4) =
           *(undefined4 *)(param_4 + (ulonglong)(uVar2 + 1) * 4);
      *(undefined4 *)(lVar1 + (ulonglong)(uVar3 + 2) * 4) =
           *(undefined4 *)(param_4 + (ulonglong)(uVar2 + 2) * 4);
    } while (uVar5 < param_3);
  }
  *(undefined1 *)(param_1 + 0xf6b7) = 1;
  return;
}

