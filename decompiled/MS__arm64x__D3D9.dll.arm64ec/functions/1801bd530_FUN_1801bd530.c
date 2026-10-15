/*
 * FUN_1801bd530 at 1801bd530
 * undefined FUN_1801bd530(void)
 * Address ranges: 1801bd530-1801bd66f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801bd530(undefined8 param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong extraout_x1;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int extraout_w10;
  int extraout_w10_00;
  longlong extraout_x11;
  longlong extraout_x11_00;
  longlong extraout_x11_01;
  longlong extraout_x11_02;
  ulonglong uVar9;
  ulonglong extraout_x12;
  longlong extraout_x12_00;
  longlong extraout_x12_01;
  ulonglong extraout_x15;
  ulonglong extraout_x15_00;
  undefined1 auVar10 [12];
  
  uVar9 = 0;
  if ((param_3 == (int *)0x0) || (*param_3 != 0xc)) goto LAB_1801bd664;
  uVar7 = (ulonglong)(uint)param_3[1];
  auVar10 = FUN_1801072f0(uVar7);
  uVar9 = extraout_x12;
  if (((auVar10._0_8_ & 1) == 0) || (1 < (uint)param_3[2])) goto LAB_1801bd664;
  if (*(uint *)(extraout_x11 + -0x30) <= auVar10._8_4_) {
    uVar9 = 0;
    goto LAB_1801bd664;
  }
  bVar2 = FUN_18012bcd8();
  uVar6 = *(uint *)(DAT_18024d928 + 0x9e3);
  iVar3 = 0;
  lVar8 = (ulonglong)
          *(uint *)(*(longlong *)(extraout_x11_00 + -0x38) + (extraout_x1 & 0xffffffff) * 4) * 600 +
          (ulonglong)bVar2 * 0x10;
  if ((uVar6 >> 1 & 1) != 0) {
    iVar3 = FUN_180106dc0(0x180246000,uVar7 & 0xffffffff);
    if (iVar3 == 0x10) {
      uVar4 = FUN_180106a90(uVar7 & 0xffffffff);
      uVar9 = FUN_1801073a0(*(undefined8 *)
                             (extraout_x12_00 + 0x158 +
                             (ulonglong)*(uint *)(extraout_x11_01 + -0x90) *
                             (extraout_x15 & 0xffffffff)),uVar4);
      if ((uVar9 & 1) != 0) {
        iVar3 = 1;
        goto LAB_1801bd600;
      }
    }
    iVar3 = 0;
  }
LAB_1801bd600:
  if ((uVar6 >> 2 & 1) != 0) {
    iVar5 = FUN_180106dc0(uVar7 & 0xffffffff);
    iVar3 = extraout_w10;
    if (iVar5 == 0x20) {
      uVar4 = FUN_180106a90(uVar7 & 0xffffffff);
      uVar9 = FUN_1801073a0(*(undefined8 *)
                             (extraout_x12_01 + 0x158 +
                             (ulonglong)*(uint *)(extraout_x11_02 + -0x90) *
                             (extraout_x15_00 & 0xffffffff)),uVar4);
      iVar3 = extraout_w10_00;
      if ((uVar9 & 1) == 0) goto LAB_1801bd640;
      bVar1 = true;
    }
    else {
LAB_1801bd640:
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = iVar3 + 1;
    }
  }
  uVar9 = (ulonglong)(uint)(*(int *)((longlong)&DAT_18024ea70 + lVar8) * iVar3);
LAB_1801bd664:
  return uVar9 & 0xffffffff;
}

