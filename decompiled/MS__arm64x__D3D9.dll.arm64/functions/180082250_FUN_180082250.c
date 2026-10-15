/*
 * FUN_180082250 at 180082250
 * undefined FUN_180082250(void)
 * Address ranges: 180082250-18008233f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180082250(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong extraout_x15;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_180001640();
  lVar5 = extraout_x15 * -0x10;
  if (param_3 == 0) {
    func_0x000180222c50(&stack0xffffffffffffffe0 + lVar5,0,0x1000);
  }
  else {
    uVar7 = 0;
    do {
      lVar4 = uVar7 * 4;
      uVar3 = (int)uVar7 * 4;
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
      bVar2 = *(byte *)(param_3 + 1 + lVar4);
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)uVar3 * 4 + lVar5) =
           (float)*(byte *)(param_3 + 2 + lVar4);
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)(uVar3 + 1) * 4 + lVar5) = (float)bVar2;
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)(uVar3 + 2) * 4 + lVar5) =
           (float)*(byte *)(param_3 + lVar4);
      *(float *)(&stack0xffffffffffffffe0 + (ulonglong)(uVar3 + 3) * 4 + lVar5) =
           (float)*(byte *)(param_3 + 3 + lVar4);
    } while (uVar1 < 0x100);
  }
  plVar6 = *(longlong **)(*(longlong *)(auVar8._0_8_ + 0x1cf18) + 8);
  (**(code **)(*plVar6 + 0x180))
            (plVar6,*(undefined8 *)(auVar8._0_8_ + (auVar8._8_8_ & 0xffffffff) * 8 + 0x1d0b8),0,0,
             &stack0xffffffffffffffe0 + lVar5,0x400,0x400);
  return;
}

