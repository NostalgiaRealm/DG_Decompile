/*
 * FUN_180168110 at 180168110
 * undefined FUN_180168110(void)
 * Address ranges: 180168110-1801681ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180168110(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  code *extraout_x11;
  
  uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar6,0);
  uVar5 = param_2 * 4;
  lVar1 = param_1 + (ulonglong)uVar5 * 4;
  lVar2 = param_1 + (ulonglong)(uVar5 + 1) * 4;
  *(undefined4 *)(lVar1 + 0x6e20) = *param_3;
  lVar3 = param_1 + (ulonglong)(uVar5 + 2) * 4;
  lVar4 = param_1 + (ulonglong)(uVar5 + 3) * 4;
  *(undefined4 *)(lVar2 + 0x6e20) = param_3[1];
  *(undefined4 *)(lVar3 + 0x6e20) = param_3[2];
  *(undefined4 *)(lVar4 + 0x6e20) = param_3[3];
  *(undefined1 *)(param_1 + 0xf691) = 1;
  *(undefined4 *)(lVar1 + 0x6470) = *param_3;
  *(undefined4 *)(lVar2 + 0x6470) = param_3[1];
  *(undefined4 *)(lVar3 + 0x6470) = param_3[2];
  *(undefined4 *)(lVar4 + 0x6470) = param_3[3];
  *(undefined1 *)(param_1 + 0xf6c3) = 1;
  *(undefined4 *)(lVar1 + 0x51d0) = *param_3;
  *(undefined4 *)(lVar2 + 0x51d0) = param_3[1];
  *(undefined4 *)(lVar3 + 0x51d0) = param_3[2];
  *(undefined4 *)(lVar4 + 0x51d0) = param_3[3];
  *(undefined1 *)(param_1 + 0xf6b4) = 1;
  return;
}

