/*
 * FUN_10061603 at 10061603
 * undefined __stdcall FUN_10061603(int * param_1, int * param_2, int param_3, byte param_4, uint param_5, uint * param_6)
 * Address ranges: 10061603-100617f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061603(int *param_1,int *param_2,int param_3,byte param_4,uint param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_5 == 0) {
    if (*(char *)(param_1[0x3d] + 0x126d) == '\x03') {
      if (param_1[0xac] == 0 && param_1[0xad] == 0) {
        *param_6 = 0x40410102;
        *(byte *)(param_6 + 1) = param_4;
        param_6[4] = 0xffffffff;
        param_6[7] = 0xffffffff;
        param_6[6] = 0xffffffff;
        param_6[5] = 0xffffffff;
        uVar1 = FUN_1006125c(param_1,param_2,param_3);
        param_6[8] = uVar1;
        *(undefined1 *)(param_6 + 9) = 0;
        goto LAB_100617c0;
      }
      uVar7 = __aullshr((byte)(param_3 << 2),param_1[0xad]);
      if ((uVar7 & 0xf) == 0) {
        param_2 = *(int **)(&DAT_100d5e48 + (uint)(param_4 >> 6) * 4);
        uVar1 = *(uint *)(&DAT_100d5e48 + (param_4 >> 2 & 3) * 4);
        uVar3 = *(uint *)(&DAT_100d5e48 + (param_4 & 3) * 4);
        uVar4 = param_1[0x29];
        uVar6 = *(uint *)(&DAT_100d5e48 + (param_4 >> 4 & 3) * 4);
        param_4 = 0xe4;
      }
      else {
        uVar1 = 0xffffffff;
        param_2 = (int *)0xffffffff;
        uVar3 = 0xffffffff;
        uVar4 = ((uint)uVar7 & 0xf) + 1 | 0x410100;
        uVar6 = 0xffffffff;
      }
      param_6[7] = (uint)param_2;
      param_6[6] = uVar6;
      *param_6 = uVar4;
      *(byte *)(param_6 + 1) = param_4;
      param_6[4] = uVar3;
    }
    else {
      uVar3 = FUN_100611e8(param_1,param_2,param_3);
      uVar1 = 0xffffffff;
      *param_6 = uVar3;
      *(byte *)(param_6 + 1) = param_4;
      param_6[4] = 0xffffffff;
      param_6[7] = 0xffffffff;
      param_6[6] = 0xffffffff;
    }
    param_6[5] = uVar1;
  }
  else {
    uVar1 = FUN_1005da5e(param_5);
    if (uVar1 != 0xf) {
      return;
    }
    if (*(char *)((int)param_1 + 0x521) == '\0') {
      iVar2 = param_1[0x139];
      iVar5 = iVar2 * 4 + 0x2d0;
      iVar2 = iVar2 * 4 + 0x2e0;
    }
    else {
      iVar5 = 0x2f4;
      iVar2 = 0x2f8;
    }
    uVar1 = *(uint *)(iVar5 + (int)param_1);
    if (*(int *)(iVar2 + (int)param_1) != param_3) {
      FUN_100c3be1(param_1,param_2,0x36);
      param_1[param_1[0x139] + 0xb8] = param_3;
    }
    if (param_1[0xaf] == -1) {
      uVar3 = 0x40410102;
    }
    else {
      uVar3 = param_1[0xaf] << 0xe | 0x40420300;
    }
    *param_6 = uVar3;
    *(byte *)(param_6 + 1) = param_4;
    param_6[4] = 0xffffffff;
    param_6[7] = 0xffffffff;
    param_6[6] = 0xffffffff;
    param_6[5] = 0xffffffff;
    param_6[8] = uVar1;
    *(undefined1 *)(param_6 + 9) = 3;
LAB_100617c0:
    *(undefined1 *)(param_1 + 0xae) = 1;
  }
  return;
}

