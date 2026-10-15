/*
 * FUN_1001f388 at 1001f388
 * undefined FUN_1001f388(void)
 * Address ranges: 1001f388-1001f45b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1001f388(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int extraout_w1;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong extraout_x11;
  ulonglong uVar8;
  ulonglong extraout_x12;
  ulonglong uVar9;
  ulonglong extraout_x13;
  ulonglong uVar10;
  ulonglong extraout_x14;
  ulonglong uVar11;
  ulonglong extraout_x15;
  
  uVar5 = 0;
  if (param_3 <= param_2) {
    uVar10 = (ulonglong)(param_4 + 0x1009698c);
    uVar11 = (ulonglong)(param_5 + 0x10096940);
    uVar9 = ZEXT48(&DAT_10096998);
    uVar7 = (ulonglong)(param_1 & 3);
    uVar8 = (ulonglong)(param_4 - 4);
    do {
      iVar4 = (int)uVar5;
      if ((int)uVar7 == 3) {
LAB_1001f3f0:
        uVar6 = *(uint *)((int)uVar9 + param_3 * 4);
        uVar1 = uVar6 >> (ulonglong)(*(byte *)uVar10 & 0x1f);
        if (uVar1 == 0) {
          uVar1 = 1;
        }
        uVar2 = uVar6;
        if ((uint)uVar8 < 3) {
          uVar2 = uVar1;
          uVar1 = uVar6;
        }
        if (param_5 < 0x11) {
          uVar6 = (uint)*(byte *)uVar11;
        }
        else {
          uVar6 = 0;
        }
        uVar5 = (ulonglong)(iVar4 + ((uVar1 | uVar2 << 0x10) >> 0x10) * (uVar1 & 0xffff) * uVar6);
      }
      else {
        bVar3 = FUN_1001f360(param_3);
        iVar4 = (int)uVar5;
        param_2 = extraout_w1;
        uVar7 = extraout_x11;
        uVar8 = extraout_x12;
        uVar9 = extraout_x13;
        uVar10 = extraout_x14;
        uVar11 = extraout_x15;
        if ((bool)(bVar3 & 1) == ((int)extraout_x11 != 1)) goto LAB_1001f3f0;
      }
      param_3 = param_3 + 1;
    } while (param_3 <= param_2);
  }
  return uVar5 & 0xffffffff;
}

