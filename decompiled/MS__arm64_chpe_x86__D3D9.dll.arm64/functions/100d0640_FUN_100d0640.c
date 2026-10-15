/*
 * FUN_100d0640 at 100d0640
 * undefined FUN_100d0640(void)
 * Address ranges: 100d0640-100d0727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d0640(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  if (param_3 == param_4) {
    return 0;
  }
  iVar4 = FUN_10004ff0(param_1,param_2);
  uVar5 = FUN_10003020(param_3);
  cVar3 = FUN_10003900(*(undefined4 *)(iVar4 + 0x130),uVar5);
  bVar2 = false;
  if (param_4 < 0x22) {
    if ((0x303f00000U >> ((ulonglong)param_4 & 0x3f) & 1) == 0) {
LAB_100d06c4:
      if ((0x1880000000U >> ((ulonglong)param_4 & 0x3f) & 1) == 0) goto LAB_100d06d0;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    if (param_4 < 0x25) goto LAB_100d06c4;
LAB_100d06d0:
    bVar1 = false;
    if ((3 < param_4 - 0x71) || ((9U >> (ulonglong)(param_4 - 0x71 & 0x1f) & 1) == 0))
    goto LAB_100d06f0;
  }
  bVar1 = true;
LAB_100d06f0:
  uVar6 = FUN_10003810(param_3);
  uVar5 = 0x8876086c;
  if ((((uVar6 & 1) != 0) || (cVar3 != '\0')) && (bVar1)) {
    uVar5 = 0;
    if (!bVar2) {
      uVar5 = 0x8876086a;
    }
  }
  return uVar5;
}

