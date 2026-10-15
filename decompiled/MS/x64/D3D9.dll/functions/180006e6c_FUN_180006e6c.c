/*
 * FUN_180006e6c at 180006e6c
 * undefined8 __fastcall FUN_180006e6c(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6)
 * Address ranges: 180006e6c-180006f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180006e6c(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  undefined1 uVar5;
  uint uVar6;
  
  uVar3 = FUN_180002844(param_6);
  uVar4 = FUN_1800028a0(param_6);
  uVar6 = (uint)uVar4;
  uVar4 = FUN_1800026c0(param_6);
  uVar5 = 1;
  if ((((param_2 & (uint)uVar3 - 1) == 0) || (param_2 < (uint)uVar3)) &&
     (((param_3 & uVar6 - 1) == 0 || (param_3 < uVar6)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar3 = uVar4;
  if ((param_2 != 0) && (param_3 != 0)) {
    bVar2 = FUN_1800038e8(*(longlong *)(param_1 + 0xe28),*(int *)(param_1 + 0xe68),3,param_2,param_3
                          ,1);
    uVar3 = CONCAT71(extraout_var,bVar2);
    if ((bVar2) && (((bVar1 || ((int)uVar4 < 1)) && (param_4 <= param_5)))) goto LAB_180006f0e;
  }
  uVar5 = 0;
LAB_180006f0e:
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),uVar5);
}

