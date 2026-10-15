/*
 * FUN_1800a4368 at 1800a4368
 * undefined FUN_1800a4368(void)
 * Address ranges: 1800a4368-1800a4467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800a4368(longlong param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong extraout_x1;
  int extraout_w10;
  int extraout_w10_00;
  longlong extraout_x11;
  longlong extraout_x11_00;
  longlong extraout_x11_01;
  longlong extraout_x11_02;
  longlong lVar7;
  longlong extraout_x12;
  longlong extraout_x12_00;
  longlong extraout_x12_01;
  longlong extraout_x13;
  longlong extraout_x13_00;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  uint extraout_w15;
  uint extraout_w15_00;
  uint uVar8;
  
  if (*(uint *)(param_1 + -0x30) <= param_2) {
    return 0;
  }
  bVar2 = FUN_18001f9b8();
  uVar8 = *(uint *)(DAT_18024de60 + 0x9e3);
  iVar3 = 0;
  lVar7 = (ulonglong)*(uint *)(*(longlong *)(extraout_x12 + -0x38) + (extraout_x1 & 0xffffffff) * 4)
          * 600 + (ulonglong)bVar2 * 0x10;
  if ((uVar8 >> 1 & 1) != 0) {
    iVar3 = func_0x000180106dc0(0x180248000,param_3);
    lVar7 = extraout_x11;
    uVar8 = extraout_w15;
    if (iVar3 == 0x10) {
      uVar4 = func_0x000180106a90(param_3);
      uVar6 = func_0x0001801073a0(*(undefined8 *)
                                   (extraout_x13 + 0x158 +
                                   (ulonglong)*(uint *)(extraout_x12_00 + -0x90) *
                                   (extraout_x14 & 0xffffffff)),uVar4);
      lVar7 = extraout_x11_00;
      uVar8 = extraout_w15_00;
      if ((uVar6 & 1) != 0) {
        iVar3 = 1;
        goto LAB_1800a43fc;
      }
    }
    iVar3 = 0;
  }
LAB_1800a43fc:
  if ((uVar8 >> 2 & 1) == 0) goto LAB_1800a4448;
  iVar5 = func_0x000180106dc0(param_3);
  lVar7 = extraout_x11_01;
  iVar3 = extraout_w10;
  if (iVar5 == 0x20) {
    uVar4 = func_0x000180106a90(param_3);
    uVar6 = func_0x0001801073a0(*(undefined8 *)
                                 (extraout_x13_00 + 0x158 +
                                 (ulonglong)*(uint *)(extraout_x12_01 + -0x90) *
                                 (extraout_x14_00 & 0xffffffff)),uVar4);
    lVar7 = extraout_x11_02;
    iVar3 = extraout_w10_00;
    if ((uVar6 & 1) == 0) goto LAB_1800a443c;
    bVar1 = true;
  }
  else {
LAB_1800a443c:
    bVar1 = false;
  }
  if (bVar1) {
    iVar3 = iVar3 + 1;
  }
LAB_1800a4448:
  return *(int *)((longlong)&DAT_180253a80 + lVar7) * iVar3;
}

