/*
 * FUN_1801bc930 at 1801bc930
 * undefined FUN_1801bc930(void)
 * Address ranges: 1801bc930-1801bca2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801bc930(longlong param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong extraout_x1;
  uint uVar7;
  int extraout_w10;
  int extraout_w10_00;
  longlong extraout_x11;
  longlong extraout_x11_00;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  longlong extraout_x15_02;
  longlong lVar8;
  
  if (*(uint *)(param_1 + -0x30) <= param_2) {
    return 0;
  }
  bVar2 = FUN_18012bcd8();
  uVar7 = *(uint *)(DAT_18024d928 + 0x9e3);
  iVar3 = 0;
  lVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x38) + (extraout_x1 & 0xffffffff) * 4) *
          600 + (ulonglong)bVar2 * 0x10;
  if ((uVar7 >> 1 & 1) != 0) {
    iVar3 = FUN_180106dc0(0x180246000,param_3);
    lVar8 = extraout_x15;
    if (iVar3 == 0x10) {
      uVar4 = FUN_180106a90(param_3);
      uVar6 = FUN_1801073a0(*(undefined8 *)
                             (extraout_x11 + 0x158 +
                             (ulonglong)*(uint *)(param_1 + -0x90) * (extraout_x12 & 0xffffffff)),
                            uVar4);
      lVar8 = extraout_x15_00;
      if ((uVar6 & 1) != 0) {
        iVar3 = 1;
        goto LAB_1801bc9c4;
      }
    }
    iVar3 = 0;
  }
LAB_1801bc9c4:
  if ((uVar7 >> 2 & 1) == 0) goto LAB_1801bca10;
  iVar5 = FUN_180106dc0(param_3);
  lVar8 = extraout_x15_01;
  iVar3 = extraout_w10;
  if (iVar5 == 0x20) {
    uVar4 = FUN_180106a90(param_3);
    uVar6 = FUN_1801073a0(*(undefined8 *)
                           (extraout_x11_00 + 0x158 +
                           (ulonglong)*(uint *)(param_1 + -0x90) * (extraout_x12_00 & 0xffffffff)),
                          uVar4);
    lVar8 = extraout_x15_02;
    iVar3 = extraout_w10_00;
    if ((uVar6 & 1) == 0) goto LAB_1801bca04;
    bVar1 = true;
  }
  else {
LAB_1801bca04:
    bVar1 = false;
  }
  if (bVar1) {
    iVar3 = iVar3 + 1;
  }
LAB_1801bca10:
  return *(int *)((longlong)&DAT_18024ea70 + lVar8) * iVar3;
}

