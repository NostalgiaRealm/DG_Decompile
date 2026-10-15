/*
 * FUN_180065ce8 at 180065ce8
 * undefined FUN_180065ce8(void)
 * Address ranges: 180065ce8-180065f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180065ce8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5,uint param_6,uint *param_7)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar13;
  ulonglong uVar12;
  
  uVar12 = param_5 & 0xffffffff;
  uVar11 = (undefined1)uVar12;
  iVar13 = (int)param_4;
  uVar2 = (undefined1)param_5;
  if (param_6 == 0) {
    if (*(char *)(*(longlong *)(param_2 + 0x100) + 0x126d) == '\x03') {
      if (*(ulonglong *)(param_2 + 0x2c0) == 0) {
        lVar1 = param_2 + (param_4 & 0xffffffff) * 4;
        *(undefined1 *)(param_7 + 1) = uVar2;
        param_7[4] = 0xffffffff;
        param_7[5] = 0xffffffff;
        param_7[6] = 0xffffffff;
        param_7[7] = 0xffffffff;
        *param_7 = 0x40410102;
        if (*(int *)(lVar1 + 0x298) == 0) {
          uVar3 = FUN_1800f42d0(param_2,1,1);
          *(undefined4 *)(lVar1 + 0x298) = uVar3;
          FUN_1800f5730(param_2,param_3,0x36,uVar3,1,*(undefined4 *)(param_2 + 0x88),0xff,
                        iVar13 << 4);
        }
        uVar4 = *(uint *)(lVar1 + 0x298);
        *(undefined1 *)(param_7 + 9) = 0;
        param_7[8] = uVar4;
        *(undefined1 *)(param_2 + 0x2c8) = 1;
      }
      else {
        uVar6 = *(ulonglong *)(param_2 + 0x2c0) >> ((param_4 & 0xf) << 2);
        if ((uVar6 & 0xf) == 0) {
          uVar4 = *(uint *)(param_2 + 0xac);
          uVar9 = *(uint *)(&DAT_1802349d8 + (param_5 & 3) * 4);
          uVar10 = *(uint *)(&DAT_1802349d8 + (uVar12 >> 2 & 3) * 4);
          uVar11 = 0xe4;
          uVar8 = *(uint *)(&DAT_1802349d8 + (uVar12 >> 4 & 3) * 4);
          uVar5 = *(uint *)(&DAT_1802349d8 + (uVar12 >> 6 & 3) * 4);
        }
        else {
          uVar4 = ((uint)uVar6 & 0xf) + 1 | 0x410100;
          uVar8 = 0xffffffff;
          uVar5 = 0xffffffff;
          uVar10 = 0xffffffff;
          uVar9 = 0xffffffff;
        }
        param_7[6] = uVar8;
        param_7[7] = uVar5;
        *param_7 = uVar4;
        *(undefined1 *)(param_7 + 1) = uVar11;
        param_7[4] = uVar9;
        param_7[5] = uVar10;
      }
    }
    else {
      uVar4 = FUN_1800658e8(param_1,param_2,param_3,param_4 & 0xffffffff);
      *(undefined1 *)(param_7 + 1) = uVar2;
      param_7[4] = 0xffffffff;
      param_7[5] = 0xffffffff;
      param_7[6] = 0xffffffff;
      param_7[7] = 0xffffffff;
      *param_7 = uVar4;
    }
  }
  else if ((param_6 & 0x1800 | param_6 >> 0x14 & 0x7ff) >> 8 == 0xf) {
    uVar4 = *(uint *)(param_2 + 0x304);
    iVar7 = *(int *)(param_2 + 0x308);
    if (*(char *)(param_2 + 0x531) == '\0') {
      lVar1 = param_2 + (ulonglong)(*(int *)(param_2 + 0x4f4) - 1) * 4;
      uVar4 = *(uint *)(lVar1 + 0x2e4);
      iVar7 = *(int *)(lVar1 + 0x2f4);
    }
    if (iVar7 != iVar13) {
      FUN_1800f5730(param_2,param_3,0x36,uVar4,8,*(uint *)(param_2 + 0x88) | 0x40000000,0xff,
                    (param_4 & 0xfffffff) << 4,uVar4 | 0x10000000,1,0);
      *(int *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x4f4) - 1) * 4 + 0x2f4) = iVar13;
    }
    uVar9 = 0x40410102;
    if (*(int *)(param_2 + 0x2cc) != -1) {
      uVar9 = *(int *)(param_2 + 0x2cc) << 0xe | 0x40420300;
    }
    *param_7 = uVar9;
    *(undefined1 *)(param_7 + 1) = uVar2;
    param_7[4] = 0xffffffff;
    param_7[5] = 0xffffffff;
    param_7[6] = 0xffffffff;
    param_7[7] = 0xffffffff;
    *(undefined1 *)(param_7 + 9) = 3;
    param_7[8] = uVar4;
    *(undefined1 *)(param_2 + 0x2c8) = 1;
  }
  return;
}

