/*
 * FUN_180177940 at 180177940
 * undefined FUN_180177940(void)
 * Address ranges: 180177940-180177b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180177940(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5,uint param_6,uint *param_7)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined4 local_80 [2];
  uint local_78;
  undefined4 local_70;
  longlong local_68;
  uint local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong uVar10;
  
  uVar10 = param_5 & 0xffffffff;
  uVar9 = (undefined1)uVar10;
  uVar2 = (undefined1)param_5;
  if (param_6 == 0) {
    if (*(char *)(*(longlong *)(param_2 + 0x100) + 0x126d) == '\x03') {
      if (*(ulonglong *)(param_2 + 0x2c0) == 0) {
        *(undefined1 *)(param_7 + 1) = uVar2;
        param_7[4] = 0xffffffff;
        param_7[5] = 0xffffffff;
        *param_7 = 0x40410102;
        param_7[6] = 0xffffffff;
        param_7[7] = 0xffffffff;
        uVar3 = FUN_180177508(param_1,param_2,param_3,param_4);
        *(undefined1 *)(param_7 + 9) = 0;
        param_7[8] = uVar3;
        *(undefined1 *)(param_2 + 0x2c8) = 1;
      }
      else {
        uVar5 = *(ulonglong *)(param_2 + 0x2c0) >> (((ulonglong)param_4 & 0xf) << 2);
        if ((uVar5 & 0xf) == 0) {
          uVar3 = *(uint *)(param_2 + 0xac);
          uVar6 = *(uint *)(&DAT_18022c448 + (param_5 & 3) * 4);
          uVar8 = *(uint *)(&DAT_18022c448 + (uVar10 >> 2 & 3) * 4);
          uVar9 = 0xe4;
          uVar7 = *(uint *)(&DAT_18022c448 + (uVar10 >> 4 & 3) * 4);
          uVar4 = *(uint *)(&DAT_18022c448 + (uVar10 >> 6 & 3) * 4);
        }
        else {
          uVar3 = ((uint)uVar5 & 0xf) + 1 | 0x410100;
          uVar7 = 0xffffffff;
          uVar4 = 0xffffffff;
          uVar8 = 0xffffffff;
          uVar6 = 0xffffffff;
        }
        param_7[6] = uVar7;
        param_7[7] = uVar4;
        *param_7 = uVar3;
        *(undefined1 *)(param_7 + 1) = uVar9;
        param_7[4] = uVar6;
        param_7[5] = uVar8;
      }
    }
    else {
      uVar3 = FUN_180177458(param_1,param_2,param_3,param_4);
      *(undefined1 *)(param_7 + 1) = uVar2;
      param_7[4] = 0xffffffff;
      param_7[5] = 0xffffffff;
      param_7[6] = 0xffffffff;
      param_7[7] = 0xffffffff;
      *param_7 = uVar3;
    }
  }
  else if ((param_6 & 0x1800 | param_6 >> 0x14 & 0x7ff) >> 8 == 0xf) {
    uVar3 = *(uint *)(param_2 + 0x304);
    uVar6 = *(uint *)(param_2 + 0x308);
    if (*(char *)(param_2 + 0x531) == '\0') {
      lVar1 = param_2 + (ulonglong)(*(int *)(param_2 + 0x4f4) - 1) * 4;
      uVar3 = *(uint *)(lVar1 + 0x2e4);
      uVar6 = *(uint *)(lVar1 + 0x2f4);
    }
    if (uVar6 != param_4) {
      local_60 = uVar3 | 0x10000000;
      local_68 = ((ulonglong)param_4 & 0xfffffff) << 4;
      local_50 = 0;
      local_58 = 1;
      local_78 = *(uint *)(param_2 + 0x88) | 0x40000000;
      local_70 = 0xff;
      local_80[0] = 8;
      FUN_180214c88(param_2,param_3,0x36,uVar3,local_80,0x38);
      *(uint *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x4f4) - 1) * 4 + 0x2f4) = param_4;
    }
    uVar6 = 0x40410102;
    if (*(int *)(param_2 + 0x2cc) != -1) {
      uVar6 = *(int *)(param_2 + 0x2cc) << 0xe | 0x40420300;
    }
    *param_7 = uVar6;
    *(undefined1 *)(param_7 + 1) = uVar2;
    param_7[4] = 0xffffffff;
    param_7[5] = 0xffffffff;
    param_7[6] = 0xffffffff;
    param_7[7] = 0xffffffff;
    *(undefined1 *)(param_7 + 9) = 3;
    param_7[8] = uVar3;
    *(undefined1 *)(param_2 + 0x2c8) = 1;
  }
  return;
}

