/*
 * FUN_1004d460 at 1004d460
 * undefined FUN_1004d460(void)
 * Address ranges: 1004d460-1004d52f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004d460(undefined4 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint extraout_w10;
  uint uVar5;
  int extraout_w11;
  uint extraout_w12;
  uint extraout_w12_00;
  uint uVar6;
  ulonglong extraout_x13;
  ulonglong extraout_x13_00;
  int extraout_w14;
  int extraout_w14_00;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  ulonglong extraout_x14_01;
  
  uVar4 = FUN_1004c3a8(param_1);
  uVar4 = uVar4 & 0xffffffff;
  FUN_1004c308(extraout_x14 & 0xffffffff);
  iVar2 = FUN_100071e0(extraout_x13 & 0xffffffff,*(undefined4 *)(extraout_w14 + 0x54));
  if ((int)uVar4 != 0) {
    FUN_1004c408(extraout_x14_00 & 0xffffffff);
    iVar3 = FUN_1004c308(extraout_x14_01 & 0xffffffff);
    uVar5 = *(uint *)(extraout_w14_00 + 8);
    uVar6 = extraout_w12;
    iVar2 = extraout_w11;
    if (extraout_w11 == 0) {
      iVar2 = FUN_100071e0(extraout_x13_00 & 0xffffffff,0,uVar4 & 0xffffffff,iVar3,1);
      uVar6 = extraout_w12_00;
      uVar5 = extraout_w10;
    }
    if (iVar3 != 0) {
      iVar3 = uVar5 + uVar6;
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        uVar1 = SoftwareBreakpoint(0xf004,0x1004d514);
        (*(code *)uVar1)();
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = (iVar3 - 1U & -uVar6) / uVar6;
      }
    }
    iVar2 = uVar5 * iVar2;
  }
  return iVar2;
}

