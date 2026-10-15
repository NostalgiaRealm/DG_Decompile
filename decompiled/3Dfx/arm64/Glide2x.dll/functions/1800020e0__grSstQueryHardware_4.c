/*
 * _grSstQueryHardware@4 at 1800020e0
 * undefined8 __cdecl _grSstQueryHardware@4(undefined4 * param_1)
 * Address ranges: 1800020e0-18000227f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _grSstQueryHardware_4(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
                    /* 0x20e0  72  _grSstQueryHardware@4
                       0x20e0  229  grSstQueryHardware */
  lVar5 = FUN_180016878();
  FUN_180016a28(lVar5);
  lVar5 = FUN_180016878();
  uVar4 = FUN_1800179f8(lVar5);
  lVar5 = FUN_180016878();
  bVar3 = FUN_180016a28(lVar5);
  if ((bVar3 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(*(longlong *)(lVar5 + 0x30) + 0x833);
  }
  lVar5 = (ulonglong)uVar4 * 0x20;
  *param_1 = 1;
  bVar3 = (&DAT_18006a128)[lVar5];
  param_1[1] = (uint)bVar3;
  if ((bVar3 < 6) && ((0x39U >> (ulonglong)(bVar3 & 0x1f) & 1) != 0)) {
    lVar6 = FUN_180016878();
    bVar3 = FUN_180016a28(lVar6);
    if ((bVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(lVar6 + 0x30) + 0x82b);
    }
    param_1[2] = uVar4 >> 0x14;
    uVar2 = *(undefined4 *)(&DAT_18006a120 + lVar5);
    uVar7 = 0;
    param_1[5] = 0;
    param_1[3] = uVar2;
    param_1[4] = uVar8;
    if (uVar8 != 0) {
      do {
        param_1[uVar7 * 2 + 6] = *(undefined4 *)(&DAT_18006a124 + lVar5);
        lVar6 = FUN_180016878();
        bVar3 = FUN_180016a28(lVar6);
        if ((bVar3 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(*(longlong *)(lVar6 + 0x30) + 0x82f);
        }
        uVar1 = (int)uVar7 + 1;
        param_1[uVar7 * 2 + 7] = uVar4 >> 0x14;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < uVar8);
    }
  }
  else {
    if (bVar3 != 1) {
      return 0;
    }
    lVar6 = FUN_180016878();
    bVar3 = FUN_180016a28(lVar6);
    if ((bVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(lVar6 + 0x30) + 0x82b);
    }
    param_1[2] = uVar4 >> 0x14;
    param_1[3] = 1;
    param_1[4] = *(undefined4 *)(&DAT_18006a124 + lVar5);
    lVar5 = FUN_180016878();
    bVar3 = FUN_180016a28(lVar5);
    if ((bVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x30) + 0x82f);
    }
    param_1[5] = uVar4 >> 0x14;
  }
  return 1;
}

