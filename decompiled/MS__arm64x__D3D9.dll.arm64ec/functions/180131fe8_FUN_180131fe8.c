/*
 * FUN_180131fe8 at 180131fe8
 * undefined FUN_180131fe8(void)
 * Address ranges: 180131fe8-180132107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180131fe8(longlong param_1)

{
  undefined *puVar1;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1801feb08(*(longlong *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                  *(undefined8 *)(param_1 + 0x248));
    FUN_1801feb08(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                  *(undefined8 *)(param_1 + 0x240));
    auVar4 = FUN_1801feb08(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),
                           *(undefined8 *)(param_1 + 0x238));
    FUN_1801fe898(auVar4._0_8_,auVar4._8_8_,1,param_1 + 0x230,param_1 + 0x228);
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    lVar3 = 0;
    uVar2 = extraout_x1;
    do {
      if (*(longlong *)(param_1 + 0x168 + lVar3 * 8) != 0) {
        (*(code *)puVar1)();
        (*extraout_x11)();
        *(undefined8 *)(param_1 + 0x168 + lVar3 * 8) = 0;
        uVar2 = extraout_x1_00;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x11);
    lVar3 = 0;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar2;
      auVar4 = auVar4 << 0x40;
      if (*(longlong *)(param_1 + 0x1f0 + lVar3 * 8) != 0) {
        (*(code *)puVar1)();
        auVar4 = (*extraout_x11_00)();
        *(undefined8 *)(param_1 + 0x1f0 + lVar3 * 8) = 0;
      }
      uVar2 = auVar4._8_8_;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 6);
    FUN_1801fe6b0(auVar4._0_8_,uVar2,0x12,param_1 + 0xd8);
    lVar3 = 0;
    do {
      FUN_1802229d8(*(undefined8 *)(param_1 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x11);
    FUN_1801fe510(*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  return;
}

