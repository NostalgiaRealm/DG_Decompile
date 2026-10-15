/*
 * FUN_180065b00 at 180065b00
 * undefined FUN_180065b00(void)
 * Address ranges: 180065b00-180065cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180065b00(ulonglong param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6,undefined8 param_7,undefined4 param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uStack_3c;
  undefined3 uStack_3b;
  undefined8 uStack_38;
  
  *(uint *)(param_6 + 0x330) = *param_2 >> 7 & 0x2000;
  uVar3 = *param_2;
  bVar5 = (byte)(uVar3 >> 0x10) & (byte)((uint)param_3 >> 0x10);
  bVar4 = bVar5 & 0xf;
  if (*(int *)(param_6 + 0x340) != 0) goto LAB_180065c18;
  uVar2 = uVar3 & 0x1800 | uVar3 >> 0x14 & 0x700;
  if (uVar2 < 0x100) {
    lVar1 = param_6 + (ulonglong)(uVar3 & 0x7ff) * 4;
    uVar3 = *(uint *)(lVar1 + 0x218);
    param_1 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      param_1 = FUN_1800f42d0(param_6,4,1,param_5,param_6,param_7,param_8);
      *(int *)(lVar1 + 0x218) = (int)param_1;
    }
  }
  else {
    uVar2 = uVar2 >> 8;
    if (uVar2 == 8) {
      lVar1 = param_6 + (ulonglong)(uVar3 & 0x7ff) * 4;
      uVar3 = *(uint *)(lVar1 + 0x2d0);
      param_1 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        param_1 = FUN_1800f42d0(param_6,4,1,param_5,param_6,param_7,param_8);
        *(int *)(lVar1 + 0x2d0) = (int)param_1;
      }
    }
    else {
      if (uVar2 == 9) {
        *(undefined4 *)(param_6 + 0x340) = 0x20000c00;
        *(undefined1 *)(param_6 + 0x344) = 0;
        *(undefined8 *)(param_6 + 0x350) = 0xffffffffffffffff;
        *(undefined8 *)(param_6 + 0x358) = 0xffffffffffffffff;
        goto LAB_180065c18;
      }
      if (uVar2 != 0x13) goto LAB_180065c18;
      param_1 = (ulonglong)*(uint *)(param_6 + 0x30c);
      if (*(uint *)(param_6 + 0x30c) == 0) {
        param_1 = FUN_1800f42d0(param_6,4,1,param_5,param_6,param_7,param_8);
        *(int *)(param_6 + 0x30c) = (int)param_1;
      }
    }
  }
  *(undefined8 *)(param_6 + 0x350) = 0xffffffffffffffff;
  *(undefined8 *)(param_6 + 0x358) = 0xffffffffffffffff;
  *(byte *)(param_6 + 0x344) = bVar4;
  *(int *)(param_6 + 0x340) = (int)param_1;
LAB_180065c18:
  if ((param_2[1] & 0x1800 | param_2[1] >> 0x14 & 0x7ff) >> 8 == 0x13) {
    if (*(int *)(param_6 + 0x4f0) == -1) {
      *(undefined8 *)(param_6 + 0x378) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x370) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x388) = *(undefined8 *)(param_6 + 0x358);
      *(undefined8 *)(param_6 + 0x380) = *(undefined8 *)(param_6 + 0x350);
      *(undefined8 *)(param_6 + 0x3c0) = *(undefined8 *)(param_6 + 0x360);
      *(undefined8 *)(param_6 + 0x398) = *(undefined8 *)(param_6 + 0x368);
      *(undefined8 *)(param_6 + 0x390) = *(undefined8 *)(param_6 + 0x360);
      *(undefined8 *)(param_6 + 0x3a8) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x3a0) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x3b8) = *(undefined8 *)(param_6 + 0x358);
      *(undefined8 *)(param_6 + 0x3b0) = *(undefined8 *)(param_6 + 0x350);
      uVar6 = FUN_1800f42d0(param_6,4,1);
      *(undefined8 *)(param_6 + 0x348) = uStack_38;
      *(ulonglong *)(param_6 + 0x340) =
           CONCAT44(CONCAT31(uStack_3b,bVar5),uVar6) & 0xffffff0fffffffff;
      *(undefined8 *)(param_6 + 0x358) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 0x350) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 0x3d8) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x3d0) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 1000) = *(undefined8 *)(param_6 + 0x358);
      *(undefined8 *)(param_6 + 0x3e0) = *(undefined8 *)(param_6 + 0x350);
    }
    else {
      *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) | bVar4;
    }
    *(uint *)(param_6 + 0x4f0) = param_2[1];
    param_1 = FUN_1800f5ea8(0xe4,*(undefined1 *)(param_6 + 0x374));
    param_2 = param_2 + 1;
    *(char *)(param_6 + 0x3d4) = (char)param_1;
    *(char *)(param_6 + 0x3a4) = (char)param_1;
  }
  FUN_180065f48(param_1,param_2 + 1,param_4);
  return;
}

