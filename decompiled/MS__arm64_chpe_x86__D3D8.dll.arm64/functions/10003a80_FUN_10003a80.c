/*
 * FUN_10003a80 at 10003a80
 * undefined FUN_10003a80(void)
 * Address ranges: 10003a80-10003bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10003a80(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                uint param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint extraout_w11;
  ulonglong extraout_x12;
  undefined1 auVar9 [16];
  
  if (2 < param_3 - 1U || 0x10 < (int)param_6) {
    return -0x7789f794;
  }
  auVar9 = FUN_100033f0(param_1,param_3);
  if ((auVar9._0_8_ & 1) == 0) {
    return -0x7789f795;
  }
  iVar4 = (extraout_w11 ^ 1) + 0x8876086a;
  iVar5 = FUN_10004650(extraout_x12 & 0xffffffff,auVar9._8_8_ & 0xffffffff);
  uVar6 = FUN_10002f00(param_4);
  auVar9 = FUN_100034c0(*(undefined4 *)(iVar5 + 0xd4),uVar6);
  if (((auVar9._0_8_ & 1) == 0) &&
     (uVar7 = FUN_100034c0(*(undefined4 *)(iVar5 + 0xdc),auVar9._8_8_ & 0xffffffff),
     (uVar7 & 1) == 0)) {
    return iVar4;
  }
  if (param_6 != 0) {
    if (*(int *)(DAT_1013ceec + 2000) != 0) {
      return iVar4;
    }
    if (param_7 != 0) {
      return iVar4;
    }
    cVar3 = *(char *)(iVar5 + 0xec);
    iVar1 = 0;
    while( true ) {
      if (cVar3 == '\0') {
        return iVar4;
      }
      if ((uint)(byte)((char *)(iVar5 + 0xec))[iVar1] == (param_6 & 0xff)) break;
      iVar1 = iVar1 + 1;
      cVar3 = *(char *)(iVar1 + iVar5 + 0xec);
    }
    uVar2 = *(uint *)((int)&DAT_101389d8 + param_2 * 0x228 + 4);
    if (uVar2 == 0) {
      return iVar4;
    }
    uVar8 = 0;
    while (*(uint *)(*(int *)(&DAT_101389d8 + param_2 * 0x45) + uVar8 * 4) != (param_6 & 0xff)) {
      uVar8 = uVar8 + 1;
      if (uVar2 <= uVar8) {
        return iVar4;
      }
    }
  }
  return 0;
}

