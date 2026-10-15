/*
 * FUN_10003ae0 at 10003ae0
 * undefined FUN_10003ae0(void)
 * Address ranges: 10003ae0-10003c4f;10003f00-10003f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Switch with 1 destination removed at 0x10003bf4 */

int FUN_10003ae0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                uint param_6,int param_7,int param_8,byte param_9)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = param_6;
  if (param_9 != 0) {
    uVar1 = param_6 & 0xffc07fff;
  }
  iVar5 = -0x7789f794;
  uVar4 = FUN_10003770(param_1,param_3);
  if ((uVar4 & 1) == 0) {
    return -0x7789f794;
  }
  switch(param_7) {
  case 1:
    bVar2 = uVar1 < 4;
    goto LAB_10003b58;
  case 2:
  case 4:
    uVar1 = uVar1 & 0xfffffdff;
    break;
  case 3:
  case 5:
    if ((uVar1 == 0x200 || uVar1 < 4) || (bVar2 = false, uVar1 == 0x600 || uVar1 - 0x400 < 2)) {
      bVar2 = true;
    }
    goto LAB_10003b58;
  default:
    if (param_7 != 7) {
      return -0x7789f794;
    }
  case 6:
    uVar1 = uVar1 & 0xfffffc07;
  }
  bVar2 = uVar1 == 0;
LAB_10003b58:
  if ((bVar2) && (param_5 < 4)) {
    iVar5 = ((param_9 ^ 1) + 0xc43b0435) * 2;
    uVar4 = FUN_100037d0(param_4);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_10003020(param_4);
      uVar4 = FUN_10003900((&PTR_DAT_1016d454)[*(int *)(param_1 + 8) * 100],uVar3);
      if ((uVar4 & 1) != 0) {
        FUN_10003020(param_8);
        FUN_10004ff0(param_1,param_3);
        if ((0 < param_7) && (param_8 - 0x65U < 2)) {
          if ((param_5 != 3 || param_6 == 0) && ((param_5 != 1 || ((param_6 >> 9 & 1) == 0)))) {
            iVar5 = 0;
          }
          if ((param_6 & 0x3f8000) != 0) {
            iVar5 = -0x7789f796;
          }
        }
      }
    }
  }
  return iVar5;
}

