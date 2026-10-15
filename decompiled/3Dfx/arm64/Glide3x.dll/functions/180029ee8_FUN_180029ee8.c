/*
 * FUN_180029ee8 at 180029ee8
 * undefined __cdecl FUN_180029ee8(longlong param_1)
 * Address ranges: 180029ee8-180029f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029ee8(longlong param_1)

{
  longlong *plVar1;
  ulonglong extraout_x1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x10))();
  FUN_180053498(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                *(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),*(longlong **)(param_1 + 0xcb8));
  lVar3 = 0;
  uVar2 = extraout_x1;
  do {
    plVar1 = *(longlong **)(param_1 + 0xbc8 + lVar3 * 8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar2;
    auVar4 = auVar4 << 0x40;
    if (plVar1 != (longlong *)0x0) {
      auVar4 = (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(param_1 + 0xbc8 + lVar3 * 8) = 0;
    }
    uVar2 = auVar4._8_8_;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x17);
  FUN_180053328(auVar4._0_8_,uVar2,3,param_1 + 0xc80,param_1 + 0xc98);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x218 + lVar3 * 0x180) != 0) {
      FUN_18002f788((uint *)(lVar3 * 0x180 + param_1 + 0x148));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 7);
  return;
}

