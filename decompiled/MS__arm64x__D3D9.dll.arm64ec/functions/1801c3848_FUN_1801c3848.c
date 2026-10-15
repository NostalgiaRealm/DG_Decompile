/*
 * FUN_1801c3848 at 1801c3848
 * undefined FUN_1801c3848(void)
 * Address ranges: 1801c3848-1801c398b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c3848(undefined8 param_1,uint param_2,int param_3)

{
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  
  if (*(int *)(&DAT_18022e450 + (longlong)param_3 * 4) != -1) {
    if (param_2 < 0x100) {
      auVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      pcVar1 = extraout_x11;
    }
    else {
      auVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      auVar2._8_4_ = auVar3._8_4_ + -0x100;
      auVar2._0_8_ = auVar3._0_8_;
      auVar2._12_4_ = 0;
      pcVar1 = extraout_x11_00;
    }
    (*pcVar1)(auVar2._0_8_,auVar2._8_8_);
  }
  return;
}

