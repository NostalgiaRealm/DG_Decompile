/*
 * FUN_1800a4ef8 at 1800a4ef8
 * undefined FUN_1800a4ef8(void)
 * Address ranges: 1800a4ef8-1800a5037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a4ef8(undefined8 param_1,undefined8 param_2,int *param_3)

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
  ulonglong uVar8;
  ulonglong extraout_x11;
  longlong extraout_x11_00;
  longlong extraout_x11_01;
  longlong extraout_x11_02;
  longlong extraout_x11_03;
  longlong lVar9;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  ulonglong extraout_x12_02;
  longlong extraout_x13;
  longlong extraout_x13_00;
  longlong extraout_x13_01;
  longlong extraout_x13_02;
  longlong extraout_x14;
  longlong extraout_x14_00;
  ulonglong extraout_x15;
  ulonglong extraout_x15_00;
  undefined1 auVar10 [12];
  
  uVar8 = 0;
  if ((param_3 == (int *)0x0) || (*param_3 != 0xc)) goto LAB_1800a502c;
  auVar10 = func_0x0001801072f0(param_3[1]);
  uVar8 = extraout_x11;
  if (((auVar10._0_8_ & 1) == 0) || (1 < (uint)param_3[2])) goto LAB_1800a502c;
  if (*(uint *)(extraout_x13 + -0x30) <= auVar10._8_4_) {
    uVar8 = 0;
    goto LAB_1800a502c;
  }
  bVar2 = FUN_18001f9b8();
  uVar7 = *(uint *)(DAT_18024de60 + 0x9e3);
  iVar3 = 0;
  lVar9 = (ulonglong)
          *(uint *)(*(longlong *)(extraout_x13_00 + -0x38) + (extraout_x1 & 0xffffffff) * 4) * 600 +
          (ulonglong)bVar2 * 0x10;
  uVar8 = extraout_x12;
  if ((uVar7 >> 1 & 1) != 0) {
    iVar3 = func_0x000180106dc0(0x180248000,extraout_x12 & 0xffffffff);
    lVar9 = extraout_x11_00;
    uVar8 = extraout_x12_00;
    if (iVar3 == 0x10) {
      uVar4 = func_0x000180106a90(extraout_x12_00 & 0xffffffff);
      uVar6 = func_0x0001801073a0(*(undefined8 *)
                                   (extraout_x14 + 0x158 +
                                   (ulonglong)*(uint *)(extraout_x13_01 + -0x90) *
                                   (extraout_x15 & 0xffffffff)),uVar4);
      lVar9 = extraout_x11_01;
      uVar8 = extraout_x12_01;
      if ((uVar6 & 1) != 0) {
        iVar3 = 1;
        goto LAB_1800a4fc8;
      }
    }
    iVar3 = 0;
  }
LAB_1800a4fc8:
  if ((uVar7 >> 2 & 1) != 0) {
    iVar5 = func_0x000180106dc0(uVar8 & 0xffffffff);
    lVar9 = extraout_x11_02;
    iVar3 = extraout_w10;
    if (iVar5 == 0x20) {
      uVar4 = func_0x000180106a90(extraout_x12_02 & 0xffffffff);
      uVar8 = func_0x0001801073a0(*(undefined8 *)
                                   (extraout_x14_00 + 0x158 +
                                   (ulonglong)*(uint *)(extraout_x13_02 + -0x90) *
                                   (extraout_x15_00 & 0xffffffff)),uVar4);
      lVar9 = extraout_x11_03;
      iVar3 = extraout_w10_00;
      if ((uVar8 & 1) == 0) goto LAB_1800a5008;
      bVar1 = true;
    }
    else {
LAB_1800a5008:
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = iVar3 + 1;
    }
  }
  uVar8 = (ulonglong)(uint)(*(int *)((longlong)&DAT_180253a80 + lVar9) * iVar3);
LAB_1800a502c:
  return uVar8 & 0xffffffff;
}

