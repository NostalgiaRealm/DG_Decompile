/*
 * FUN_180057910 at 180057910
 * undefined FUN_180057910(void)
 * Address ranges: 180057910-180057917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057910(longlong *param_1,uint param_2,int param_3,float param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 < 0x10) {
    uVar6 = (ulonglong)param_2;
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
    if (param_3 - 1U < 0xb) {
      iVar1 = (int)param_2 >> 3;
      switch(param_3) {
      case 1:
        if ((uint)param_4 < 6) {
          uVar4 = *(undefined4 *)(&DAT_1802310f0 + (ulonglong)(uint)param_4 * 4);
          *(undefined4 *)((longlong)param_1 + uVar6 * 0x34 + 0xb4) = uVar4;
          *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) =
               *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) |
               (byte)(1 << (ulonglong)(param_2 & 7));
          *(undefined4 *)((longlong)param_1 + uVar6 * 0x34 + 0x3f4) = uVar4;
          return;
        }
        break;
      case 2:
        if ((uint)param_4 < 6) {
          uVar4 = *(undefined4 *)(&DAT_1802310f0 + (ulonglong)(uint)param_4 * 4);
          *(undefined4 *)((longlong)param_1 + uVar6 * 0x34 + 0xb8) = uVar4;
          *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) =
               *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) |
               (byte)(1 << (ulonglong)(param_2 & 7));
          *(undefined4 *)((longlong)param_1 + uVar6 * 0x34 + 0x3f8) = uVar4;
          return;
        }
        break;
      case 3:
        if ((uint)param_4 < 6) {
          uVar4 = *(undefined4 *)(&DAT_1802310f0 + (ulonglong)(uint)param_4 * 4);
          *(undefined4 *)((longlong)param_1 + uVar6 * 0x34 + 0xbc) = uVar4;
          *(undefined4 *)((longlong)param_1 + uVar6 * 0x34 + 0x3fc) = uVar4;
          FUN_180057c74(1);
          return;
        }
        break;
      case 4:
        fVar10 = (float)((uint)param_4 >> 0x10 & 0xff) / 255.0;
        fVar9 = (float)((uint)param_4 >> 8 & 0xff) / 255.0;
        fVar8 = (float)((uint)param_4 & 0xff) / 255.0;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0xcc) = fVar10;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0xd0) = fVar9;
        fVar7 = (float)((uint)param_4 >> 0x18) / 255.0;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0xd4) = fVar8;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0xd8) = fVar7;
        *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) =
             *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) |
             (byte)(1 << (ulonglong)(param_2 & 7));
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0x40c) = fVar10;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0x410) = fVar9;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0x414) = fVar8;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0x418) = fVar7;
        return;
      case 5:
        uVar2 = 2;
        if (param_4 != 4.2039e-45) {
          uVar2 = param_4 == 2.8026e-45;
        }
        *(undefined1 *)((longlong)param_1 + uVar6 * 8 + 0x731) = uVar2;
        FUN_180057c74(1);
        return;
      case 6:
        uVar2 = 2;
        if (param_4 != 4.2039e-45) {
          uVar2 = param_4 == 2.8026e-45;
        }
        *(undefined1 *)((longlong)param_1 + uVar6 * 8 + 0x732) = uVar2;
        FUN_180057c74(1);
        return;
      case 7:
        uVar2 = 2;
        if (param_4 != 0.0) {
          uVar2 = param_4 == 2.8026e-45;
        }
        *(undefined1 *)(param_1 + uVar6 + 0xe6) = uVar2;
        FUN_180057c74(1);
        return;
      case 8:
        fVar7 = 15.99;
        if (((param_4 <= 15.99) && (fVar7 = -16.0, -16.0 <= param_4)) &&
           (fVar7 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
          fVar7 = param_4;
        }
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0xc0) = fVar7;
        *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) =
             *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf684) |
             (byte)(1 << (ulonglong)(param_2 & 7));
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0x400) = fVar7;
        return;
      case 9:
        *(char *)((longlong)param_1 + uVar6 * 8 + 0x733) = SUB41(param_4,0);
        FUN_180057c74(1);
        return;
      case 10:
        if (0x10 < (uint)param_4) {
          param_4 = 1.4013e-45;
        }
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0xc4) = param_4;
        *(float *)((longlong)param_1 + uVar6 * 0x34 + 0x404) = param_4;
        FUN_180057c74(1);
        return;
      case 0xb:
        uVar5 = 1 << (ulonglong)(param_2 & 0x1f);
        uVar3 = *(uint *)((longlong)param_1 + 0xe94) & (uVar5 ^ 0xffffffff);
        if (param_4 != 0.0) {
          uVar3 = *(uint *)((longlong)param_1 + 0xe94) | uVar5;
        }
        *(uint *)((longlong)param_1 + 0xe94) = uVar3;
        *(undefined1 *)((longlong)param_1 + 0xf689) = 1;
        *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf680) =
             *(byte *)((longlong)param_1 + (longlong)iVar1 + 0xf680) |
             (byte)(1 << (ulonglong)(param_2 & 7));
      }
    }
  }
  return;
}

