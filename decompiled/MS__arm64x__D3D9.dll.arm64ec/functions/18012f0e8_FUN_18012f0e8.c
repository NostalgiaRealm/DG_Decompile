/*
 * FUN_18012f0e8 at 18012f0e8
 * undefined FUN_18012f0e8(void)
 * Address ranges: 18012f0e8-18012f147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012f0e8(void)

{
  undefined8 uVar1;
  longlong lVar2;
  code *extraout_x11;
  undefined1 auVar3 [16];
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar1 = (*extraout_x11)();
  auVar3 = FUN_180220598(DAT_18024d928,uVar1);
  lVar2 = auVar3._0_8_;
  if (lVar2 != 0) {
    uVar1 = FUN_180220550(lVar2,auVar3._8_8_,FUN_180220748);
    *(undefined8 *)(lVar2 + 0x30) = uVar1;
  }
  return;
}

