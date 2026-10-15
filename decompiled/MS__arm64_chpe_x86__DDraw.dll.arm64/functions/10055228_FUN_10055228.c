/*
 * FUN_10055228 at 10055228
 * undefined FUN_10055228(void)
 * Address ranges: 10055228-100552a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10055228(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  iVar2 = *param_2;
  if (DAT_100c2658 != 0) {
    uVar7 = 0;
    uVar6 = DAT_100c2658;
    do {
      uVar5 = uVar6 + uVar7 >> 1;
      uVar8 = *(ulonglong *)(DAT_100c2650._4_4_ + uVar5 * 0x10);
      uVar3 = uVar5;
      if (uVar8 <= (ulonglong)(longlong)iVar2) {
        if ((ulonglong)(longlong)iVar2 <= uVar8) break;
        uVar7 = uVar5 + 1;
        uVar5 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
  }
  if (uVar5 == DAT_100c2658) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)(DAT_100c2650._4_4_ + uVar5 * 0x10);
    iVar4 = (int)plVar1 + 0xc;
    if (*plVar1 != (longlong)iVar2) {
      iVar4 = 0;
    }
  }
  return iVar4;
}

