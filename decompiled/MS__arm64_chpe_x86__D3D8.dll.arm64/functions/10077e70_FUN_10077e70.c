/*
 * FUN_10077e70 at 10077e70
 * undefined FUN_10077e70(void)
 * Address ranges: 10077e70-10077f47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10077e70(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong extraout_x1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong extraout_x15;
  undefined4 unaff_w29;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  FUN_100013c0();
  uVar2 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  iVar1 = (int)uVar2;
  FUN_100ff660(uVar2 & 0xffffffff,param_3 & 0xffffffff,0x4858);
  uVar3 = 0;
  uVar4 = 0xffffffff;
  uVar6 = 0xffffffff;
  do {
    uVar5 = uVar4;
    uVar7 = uVar6;
    if (((*(char *)(uVar3 + iVar1 + 0x10) != '\0') &&
        (uVar7 = uVar3, *(char *)(uVar3 + iVar1) != '\0')) &&
       (uVar5 = uVar3, uVar7 = uVar6, *(char *)(uVar3 + iVar1) != '0')) {
      uVar5 = uVar4;
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar5;
    uVar6 = uVar7;
  } while (uVar3 < 0x10);
  if (uVar5 != 0xffffffff) {
    if ((uVar7 != 0xffffffff) && ((param_4 >> 9 & 1) != 0)) {
      *(undefined1 *)(uVar7 + iVar1 + 0x10) = 7;
    }
    if ((param_4 >> 10 & 1) != 0) {
      *(undefined1 *)(uVar5 + iVar1 + 0x10) = 7;
    }
  }
  FUN_100ff660(extraout_x1 & 0xffffffff,uVar2 & 0xffffffff,0x4858);
  return extraout_x1 & 0xffffffff;
}

