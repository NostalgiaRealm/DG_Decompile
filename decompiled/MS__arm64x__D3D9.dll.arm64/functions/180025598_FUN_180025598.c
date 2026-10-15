/*
 * FUN_180025598 at 180025598
 * undefined FUN_180025598(void)
 * Address ranges: 180025598-1800256af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180025598(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1800e1808(*(longlong *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                  *(undefined8 *)(param_1 + 0x248));
    FUN_1800e1808(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                  *(undefined8 *)(param_1 + 0x240));
    auVar3 = FUN_1800e1808(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                           *(undefined8 *)(param_1 + 0x238));
    FUN_1800e15f0(auVar3._0_8_,auVar3._8_8_,1,param_1 + 0x230,param_1 + 0x228);
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0x168 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0x168 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x11);
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0x1f0 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0x1f0 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 6);
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0xd8 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0xd8 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x12);
    lVar2 = 0;
    do {
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 8 + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x11);
    FUN_1800e12c8(*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  return;
}

