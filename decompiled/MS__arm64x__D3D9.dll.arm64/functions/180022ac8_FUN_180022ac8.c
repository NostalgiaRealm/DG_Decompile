/*
 * FUN_180022ac8 at 180022ac8
 * undefined FUN_180022ac8(void)
 * Address ranges: 180022ac8-180022b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022ac8(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  auVar3 = func_0x000180220598(DAT_18024de60,uVar1);
  lVar2 = auVar3._0_8_;
  if (lVar2 != 0) {
    FUN_180100d48(lVar2,auVar3._8_8_,*(undefined8 *)(lVar2 + 0x30));
    *(undefined8 *)(lVar2 + 0x30) = 0;
  }
  return;
}

