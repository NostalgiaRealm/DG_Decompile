/*
 * FUN_1800a4778 at 1800a4778
 * undefined FUN_1800a4778(void)
 * Address ranges: 1800a4778-1800a4887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a4778(longlong param_1,uint param_2,int param_3,int param_4,int param_5,
                       int param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  
  uVar6 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x30) <= param_2) || (3 < param_3 - 1U)) ||
     (uVar4 = FUN_180002178(param_1 + -0xa0,param_3), uVar6 = extraout_x10, (uVar4 & 1) == 0))
  goto LAB_1800a487c;
  uVar3 = func_0x000180106a90(param_4);
  uVar4 = func_0x0001801073a0(extraout_x11,uVar3);
  uVar6 = extraout_x10_00;
  if ((uVar4 & 1) == 0) goto LAB_1800a487c;
  uVar3 = func_0x000180106a90(param_5);
  uVar4 = func_0x0001801073a0(extraout_x11_00,uVar3);
  uVar6 = extraout_x10_01;
  if ((uVar4 & 1) == 0) goto LAB_1800a487c;
  if (param_6 != 0) {
    uVar6 = 0;
    goto LAB_1800a487c;
  }
  bVar1 = param_4 == param_5;
  if (param_4 == 0x15) {
    bVar2 = param_5 == 0x16;
LAB_1800a486c:
    bVar1 = (bool)(bVar2 | bVar1);
  }
  else {
    if (param_4 == 0x16) {
      bVar2 = param_5 == 0x15;
      goto LAB_1800a486c;
    }
    if (param_4 == 0x18) {
      bVar2 = param_5 == 0x19;
      goto LAB_1800a486c;
    }
    if (param_4 == 0x19) {
      bVar2 = param_5 == 0x18;
      goto LAB_1800a486c;
    }
    if (param_4 == 0x1a) {
      bVar2 = param_5 == 0x1e;
      goto LAB_1800a486c;
    }
    if (param_4 == 0x1e) {
      bVar2 = param_5 == 0x1a;
      goto LAB_1800a486c;
    }
  }
  uVar5 = 0;
  if (!bVar1) {
    uVar5 = (uint)extraout_x10_01;
  }
  uVar6 = (ulonglong)uVar5;
LAB_1800a487c:
  return uVar6 & 0xffffffff;
}

