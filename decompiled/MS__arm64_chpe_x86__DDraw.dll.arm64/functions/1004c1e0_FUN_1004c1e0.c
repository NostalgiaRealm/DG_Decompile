/*
 * FUN_1004c1e0 at 1004c1e0
 * undefined FUN_1004c1e0(void)
 * Address ranges: 1004c1e0-1004c2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c1e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int extraout_w1;
  int extraout_w12;
  uint extraout_w13;
  ulonglong extraout_x14;
  
  FUN_1004c3a8(param_1 + 0x150);
  uVar5 = FUN_1004c408(extraout_x14 & 0xffffffff);
  if (extraout_w13 == 0) {
                    /* WARNING: Does not return */
    uVar4 = SoftwareBreakpoint(0xf004,0x1004c224);
    (*(code *)uVar4)();
  }
  uVar2 = 0;
  if (extraout_w13 != 0) {
    uVar2 = ((*(int *)(extraout_w12 + 0x15c) + extraout_w13) - 1 & -extraout_w13) / extraout_w13;
  }
  if (uVar5 != 0) {
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = ((*(int *)(extraout_w12 + 0x158) + uVar5) - 1 & -uVar5) / uVar5;
    }
    if ((*(int *)(extraout_w12 + 0x1a0) + 0xcdaba7bcU & 0xfcffffff) == 0) {
      uVar5 = 0;
      if (uVar3 * uVar2 != 0) {
        do {
          *(undefined4 *)(extraout_w1 + uVar5 * 0x10) = 0;
          *(undefined4 *)(extraout_w1 + 4 + uVar5 * 0x10) = 0;
          *(undefined4 *)(extraout_w1 + 8 + uVar5 * 0x10) = 0xffff0000;
          iVar1 = uVar5 * 0x10;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(extraout_w1 + 0xc + iVar1) = 0xffffffff;
        } while (uVar5 < uVar3 * uVar2);
      }
    }
    else if (*(int *)(extraout_w12 + 0x1a0) == 0x31545844) {
      uVar5 = 0;
      if (uVar3 * uVar2 != 0) {
        do {
          *(undefined4 *)(extraout_w1 + uVar5 * 8) = 0xffff0000;
          iVar1 = uVar5 * 8;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(extraout_w1 + 4 + iVar1) = 0xffffffff;
        } while (uVar5 < uVar3 * uVar2);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  uVar4 = SoftwareBreakpoint(0xf004,0x1004c248);
  (*(code *)uVar4)();
}

