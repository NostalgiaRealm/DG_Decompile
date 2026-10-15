/*
 * FUN_18011a3a8 at 18011a3a8
 * undefined FUN_18011a3a8(void)
 * Address ranges: 18011a3a8-18011a40b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18011a3a8(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int extraout_w15;
  int iVar5;
  
  uVar3 = param_3 & 0xffffffff;
  param_1 = param_1 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  iVar5 = 0;
  uVar4 = 0;
  if ((int)param_3 != 0) {
    do {
      uVar1 = (uint)param_2 >> (ulonglong)(uVar4 & 0x1f);
      uVar4 = (uint)param_1 >> (ulonglong)(uVar4 & 0x1f);
      if (uVar1 == 0) {
        uVar1 = 1;
      }
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      iVar2 = FUN_180116ed0(uVar4,uVar1);
      uVar4 = extraout_w15 + 1;
      iVar5 = iVar2 + iVar5;
    } while (uVar4 < (uint)uVar3);
  }
  return iVar5 * param_4;
}

