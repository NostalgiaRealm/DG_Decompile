/*
 * FUN_1800a4ba0 at 1800a4ba0
 * undefined FUN_1800a4ba0(void)
 * Address ranges: 1800a4ba0-1800a4cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a4ba0(longlong param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x9;
  ulonglong uVar5;
  ulonglong extraout_x10;
  int extraout_w11;
  int extraout_w12;
  int extraout_w13;
  
  uVar5 = 0x8876086c;
  if ((((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) &&
      (uVar3 = FUN_180002178(param_1 + -0xa0,param_3), uVar5 = extraout_x10, (uVar3 & 1) != 0)) &&
     (uVar5 = 0, param_4 != param_5)) {
    if (param_3 == 2) {
      puVar4 = (undefined8 *)&DAT_180248b80;
    }
    else {
      puVar4 = &DAT_180248e60;
    }
    uVar2 = func_0x000180106a90(puVar4,param_4);
    func_0x0001801073a0(*extraout_x9,uVar2);
    uVar5 = func_0x000180107328(param_4);
    if ((((uVar5 & 1) == 0) && (extraout_w13 == 0)) || (extraout_w12 == 0)) {
      uVar5 = 0x8876086a;
    }
    else {
      uVar1 = 0;
      if (extraout_w11 == 0) {
        uVar1 = 0x8876086a;
      }
      uVar5 = (ulonglong)uVar1;
    }
  }
  return uVar5 & 0xffffffff;
}

