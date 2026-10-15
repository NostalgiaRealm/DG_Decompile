/*
 * FUN_180197918 at 180197918
 * undefined FUN_180197918(void)
 * Address ranges: 180197918-180197a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180197918(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *extraout_x11;
  longlong extraout_x15;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_180104f10();
  lVar4 = extraout_x15 * -0x10;
  if (param_3 == 0) {
    FUN_180222c50(&stack0xffffffffffffffe0 + lVar4,0,0x1000);
  }
  else {
    uVar7 = 0;
    do {
      lVar6 = uVar7 * 4;
      uVar3 = (int)uVar7 * 4;
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
      bVar2 = *(byte *)(param_3 + 1 + lVar6);
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)uVar3 * 4 + lVar4) =
           (float)*(byte *)(param_3 + 2 + lVar6);
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)(uVar3 + 1) * 4 + lVar4) = (float)bVar2;
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)(uVar3 + 2) * 4 + lVar4) =
           (float)*(byte *)(param_3 + lVar6);
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)(uVar3 + 3) * 4 + lVar4) =
           (float)*(byte *)(param_3 + 3 + lVar6);
    } while (uVar1 < 0x100);
  }
  lVar6 = auVar8._0_8_ + (auVar8._8_8_ & 0xffffffff) * 8 + 0x1d000;
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar5,*(undefined8 *)(lVar6 + 0xb8),0,0,&stack0xffffffffffffffe0 + lVar4,0x400,
                  0x400);
  return;
}

