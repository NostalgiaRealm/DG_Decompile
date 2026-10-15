/*
 * FUN_18000eb00 at 18000eb00
 * undefined FUN_18000eb00(void)
 * Address ranges: 18000eb00-18000eb5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18000eb00(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int extraout_w13;
  int extraout_w14;
  
  uVar3 = param_3 & 0xffffffff;
  param_1 = param_1 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  iVar2 = 0;
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
      iVar2 = func_0x000180116ed0(uVar4,uVar1);
      uVar4 = extraout_w13 + 1;
      iVar2 = iVar2 + extraout_w14;
    } while (uVar4 < (uint)uVar3);
  }
  return iVar2 * param_4;
}

