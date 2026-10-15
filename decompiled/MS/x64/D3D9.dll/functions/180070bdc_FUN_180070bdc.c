/*
 * FUN_180070bdc at 180070bdc
 * undefined __fastcall FUN_180070bdc(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4, byte param_5, int param_6, uint * param_7)
 * Address ranges: 180070bdc-180070e00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180070bdc(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4,byte param_5,
                  int param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_6 == 0) {
    if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x126d) == '\x03') {
      if (*(ulonglong *)(param_2 + 0xb0) == 0) {
        *(byte *)(param_7 + 1) = param_5;
        param_7[4] = 0xffffffff;
        param_7[7] = 0xffffffff;
        param_7[6] = 0xffffffff;
        param_7[5] = 0xffffffff;
        *param_7 = 0x40410102;
        uVar4 = FUN_1800706e8(0xffffffff,param_2,param_3,param_4);
        param_7[8] = uVar4;
        *(undefined1 *)(param_7 + 9) = 0;
        goto LAB_180070dc8;
      }
      uVar6 = *(ulonglong *)(param_2 + 0xb0) >> ((char)param_4 * '\x04' & 0x3fU);
      if ((uVar6 & 0xf) == 0) {
        uVar4 = *(uint *)(&DAT_180102968 + (ulonglong)(param_5 >> 6) * 4);
        uVar3 = *(uint *)(&DAT_180102968 + (ulonglong)(param_5 >> 4 & 3) * 4);
        uVar1 = *(uint *)(&DAT_180102968 + (ulonglong)(param_5 >> 2 & 3) * 4);
        uVar2 = *(uint *)(&DAT_180102968 + (ulonglong)(param_5 & 3) * 4);
        *param_7 = param_2[0x2b];
        *(undefined1 *)(param_7 + 1) = 0xe4;
        param_7[4] = uVar2;
        param_7[5] = uVar1;
        param_7[6] = uVar3;
        param_7[7] = uVar4;
        return;
      }
      uVar4 = ((uint)uVar6 & 0xf) + 1 | 0x410100;
    }
    else {
      uVar4 = FUN_180070650(0,param_2,param_3,param_4);
    }
    *param_7 = uVar4;
    param_7[5] = 0xffffffff;
    param_7[6] = 0xffffffff;
    param_7[7] = 0xffffffff;
    param_7[4] = 0xffffffff;
    *(byte *)(param_7 + 1) = param_5;
  }
  else {
    if (((byte)((uint)param_6 >> 0x1c) & 7 | (byte)((uint)param_6 >> 8) & 0x18) != 0xf) {
      return;
    }
    if (*(char *)((longlong)param_2 + 0x531) == '\0') {
      lVar5 = (ulonglong)(param_2[0x13d] - 1) * 4 + 0x2e4;
      lVar7 = (ulonglong)(param_2[0x13d] - 1) * 4 + 0x2f4;
    }
    else {
      lVar5 = 0x304;
      lVar7 = 0x308;
    }
    uVar4 = *(uint *)(lVar5 + (longlong)param_2);
    if (*(uint *)(lVar7 + (longlong)param_2) != param_4) {
      FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)uVar4);
      param_2[(ulonglong)(param_2[0x13d] - 1) + 0xbd] = param_4;
    }
    if (param_2[0xb3] == 0xffffffff) {
      uVar3 = 0x40410102;
    }
    else {
      uVar3 = param_2[0xb3] << 0xe | 0x40420300;
    }
    *param_7 = uVar3;
    *(byte *)(param_7 + 1) = param_5;
    param_7[4] = 0xffffffff;
    param_7[7] = 0xffffffff;
    param_7[6] = 0xffffffff;
    param_7[5] = 0xffffffff;
    param_7[8] = uVar4;
    *(undefined1 *)(param_7 + 9) = 3;
LAB_180070dc8:
    *(undefined1 *)(param_2 + 0xb2) = 1;
  }
  return;
}

