/*
 * FUN_1800666c8 at 1800666c8
 * undefined FUN_1800666c8(void)
 * Address ranges: 1800666c8-1800667e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800666c8(undefined8 param_1,ulonglong param_2,uint *param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong extraout_x14;
  ulonglong extraout_x15;
  byte bVar10;
  
  uVar2 = *param_3;
  uVar6 = (ulonglong)(uVar2 & 0x7ff);
  bVar10 = (byte)(uVar2 >> 0x10) & 7;
  uVar5 = FUN_1800f5ea8(0xe4,uVar2 >> 0x10 & 7,param_5);
  uVar7 = (undefined1)uVar5;
  lVar1 = extraout_x14;
  if ((extraout_x15 & 0x2000) != 0) {
    lVar1 = extraout_x14 + 4;
  }
  uVar2 = (uint)extraout_x15 & 0x1800 | (uint)extraout_x15 >> 0x14 & 0x700;
  if (uVar2 < 0x100) {
    lVar8 = param_4 + (uVar6 & 0xffffffff) * 4;
    iVar4 = *(int *)(lVar8 + 0x218);
    if (iVar4 == 0) {
      iVar4 = FUN_1800f42d0(param_4,4,1);
      *(int *)(lVar8 + 0x218) = iVar4;
    }
    *(int *)(param_4 + 0x3f0) = iVar4;
  }
  else {
    uVar2 = uVar2 >> 8;
    if (uVar2 == 1) {
      FUN_180065ce8(uVar5,param_4);
      goto LAB_1800667ac;
    }
    if (uVar2 != 3) {
      bVar10 = 0;
      goto LAB_1800667ac;
    }
    *(uint *)(param_4 + 0x3f0) = (int)uVar6 + 5U | 0x410100;
  }
  *(undefined8 *)(param_4 + 0x400) = 0xffffffffffffffff;
  *(undefined8 *)(param_4 + 0x408) = 0xffffffffffffffff;
  *(undefined1 *)(param_4 + 0x3f4) = uVar7;
LAB_1800667ac:
  bVar3 = (param_2 & 0x10000000) == 0;
  if (bVar3) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(lVar1 + 8);
  }
  *(undefined4 *)(param_4 + 0x4f0) = uVar9;
  *(byte *)(param_4 + 0x344) = bVar10;
  lVar8 = 4;
  if (!bVar3) {
    lVar8 = 8;
  }
  return lVar8 + lVar1;
}

