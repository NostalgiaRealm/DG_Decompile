/*
 * FUN_100036a0 at 100036a0
 * undefined FUN_100036a0(void)
 * Address ranges: 100036a0-100037db;10003a10-10003a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Switch with 1 destination removed at 0x1000379c */

int FUN_100036a0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                uint param_6,int param_7,int param_8,byte param_9)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = -0x7789f794;
  uVar4 = FUN_100033f0(param_1,param_3);
  if ((uVar4 & 1) == 0) {
    return -0x7789f794;
  }
  switch(param_7) {
  case 1:
    bVar2 = param_6 < 4;
    goto LAB_10003708;
  case 2:
  case 4:
    uVar1 = param_6 & 0xfffffdff;
    break;
  case 3:
  case 5:
    bVar2 = param_6 == 0x200 || param_6 < 4;
    goto LAB_10003708;
  default:
    if (param_7 != 7) {
      return -0x7789f794;
    }
  case 6:
    uVar1 = param_6 & 0xfffffc07;
  }
  bVar2 = uVar1 == 0;
LAB_10003708:
  if ((bVar2) && (param_5 < 4)) {
    iVar5 = ((param_9 ^ 1) + 0xc43b0435) * 2;
    uVar4 = FUN_10003448(param_4);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_10002f00(param_4);
      uVar4 = FUN_100034c0((&PTR_DAT_101353a8)[*(int *)(param_1 + 8) * 0x4d],uVar3);
      if ((uVar4 & 1) != 0) {
        FUN_10002f00(param_8);
        FUN_10004650(param_1,param_3);
        if ((((0 < param_7) && (param_8 - 0x65U < 2)) && (param_5 != 3 || param_6 == 0)) &&
           ((param_5 != 1 || ((param_6 >> 9 & 1) == 0)))) {
          iVar5 = 0;
        }
      }
    }
  }
  return iVar5;
}

