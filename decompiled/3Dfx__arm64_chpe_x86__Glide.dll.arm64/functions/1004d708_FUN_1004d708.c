/*
 * FUN_1004d708 at 1004d708
 * undefined FUN_1004d708(void)
 * Address ranges: 1004d708-1004d80b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1004d708(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 in_w5;
  uint in_w6;
  undefined1 uVar5;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  ulonglong extraout_x14;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  
  uVar4 = 0xf0;
  auVar7 = FUN_1004d898(param_2,in_w5,0xf0);
  iVar3 = auVar7._8_4_;
  if ((auVar7._0_8_ & 1) == 0) {
    auVar7 = FUN_1004d898(extraout_x14 & 0xffffffff,auVar7._8_8_ & 0xffffffff);
    iVar3 = auVar7._8_4_;
    if ((auVar7._0_8_ & 1) != 0) goto LAB_1004d78c;
    auVar7 = FUN_1004d898(extraout_x13 & 0xffffffff,auVar7._8_8_ & 0xffffffff);
    iVar3 = auVar7._8_4_;
    if ((auVar7._0_8_ & 1) != 0) goto LAB_1004d78c;
    auVar8 = FUN_1004d898(extraout_x12 & 0xffffffff,auVar7._8_8_ & 0xffffffff);
    iVar3 = auVar8._8_4_;
    if (((auVar8._0_8_ & 1) != 0) || (*(char *)(param_1 + 0xa4) != '\0')) goto LAB_1004d78c;
    if (*(int *)(param_1 + 0xa0) != 0) goto LAB_1004d7fc;
    uVar5 = 0;
  }
  else {
LAB_1004d78c:
    uVar5 = 1;
  }
  if ((in_w6 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xa4) = uVar5;
  }
  uVar6 = 0;
  do {
    if (*(int *)(param_1 + 0x90 + uVar6 * 4) == 0) {
      uVar2 = 3;
      if (iVar3 != 7) {
        uVar2 = 1;
      }
      uVar1 = 4;
      if (iVar3 != 0xf) {
        uVar1 = uVar2;
      }
      uVar2 = FUN_1006ec30(param_1,uVar1,1);
      *(undefined4 *)(param_1 + uVar6 * 4 + 0x90) = uVar2;
      uVar4 = (ulonglong)(ushort)((ushort)uVar6 | 0x80);
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
LAB_1004d7fc:
  return uVar4 & 0xffffffff;
}

