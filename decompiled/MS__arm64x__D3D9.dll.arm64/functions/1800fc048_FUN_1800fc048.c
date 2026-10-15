/*
 * FUN_1800fc048 at 1800fc048
 * undefined FUN_1800fc048(void)
 * Address ranges: 1800fc048-1800fc0c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800fc048(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (param_4 == 1) {
    lVar2 = 0x1e20;
  }
  else if (param_4 == 2) {
    lVar2 = 0x1eb0;
  }
  else {
    if (param_4 != 3) {
      lVar2 = 0;
      goto LAB_1800fc098;
    }
    lVar2 = 8000;
  }
  lVar2 = lVar3 + (ulonglong)param_2 * 0x1ac0 + lVar2;
LAB_1800fc098:
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x6d0;
  }
  lVar2 = FUN_1800eeec0(lVar1,param_2,lVar2,param_3,0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + 0x40;
  }
  return lVar3;
}

