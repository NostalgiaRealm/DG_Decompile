/*
 * FUN_180035cc8 at 180035cc8
 * undefined __cdecl FUN_180035cc8(longlong param_1)
 * Address ranges: 180035cc8-180035ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035cc8(longlong param_1)

{
  longlong *plVar1;
  ulonglong extraout_x1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x10))();
  FUN_180050758(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                *(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),*(longlong **)(param_1 + 0x6b8));
  lVar3 = 0;
  uVar2 = extraout_x1;
  do {
    plVar1 = *(longlong **)(param_1 + 0x5c8 + lVar3 * 8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar2;
    auVar4 = auVar4 << 0x40;
    if (plVar1 != (longlong *)0x0) {
      auVar4 = (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(param_1 + 0x5c8 + lVar3 * 8) = 0;
    }
    uVar2 = auVar4._8_8_;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x17);
  FUN_1800505e8(auVar4._0_8_,uVar2,3,param_1 + 0x680,param_1 + 0x698);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x218 + lVar3 * 0x180) != 0) {
      FUN_18003b888((uint *)(lVar3 * 0x180 + param_1 + 0x148));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return;
}

