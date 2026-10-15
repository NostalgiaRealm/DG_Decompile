/*
 * FUN_1004d530 at 1004d530
 * undefined FUN_1004d530(void)
 * Address ranges: 1004d530-1004d5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004d530(undefined4 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint extraout_w11;
  uint uVar5;
  uint extraout_w12;
  int extraout_w13;
  int extraout_w14;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  
  FUN_1004c408(param_1);
  iVar2 = FUN_1004c308(extraout_x14 & 0xffffffff);
  uVar3 = FUN_1004c3a8(extraout_x14_00 & 0xffffffff);
  iVar4 = extraout_w13;
  if (extraout_w13 == 0) {
    iVar4 = 1;
  }
  iVar4 = FUN_100071e0(iVar4,*(undefined4 *)(extraout_w14 + 0x54),uVar3);
  uVar5 = extraout_w11;
  if (iVar2 != 0) {
    if (extraout_w12 == 0) {
                    /* WARNING: Does not return */
      uVar1 = SoftwareBreakpoint(0xf004,0x1004d5b4);
      (*(code *)uVar1)();
    }
    uVar5 = 0;
    if (extraout_w12 != 0) {
      uVar5 = ((extraout_w11 + extraout_w12) - 1 & -extraout_w12) / extraout_w12;
    }
  }
  return iVar4 * uVar5;
}

