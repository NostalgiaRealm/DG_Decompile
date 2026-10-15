/*
 * FUN_18009e874 at 18009e874
 * undefined8 __fastcall FUN_18009e874(longlong param_1, int param_2, uint param_3, longlong param_4, int param_5, int * param_6)
 * Address ranges: 18009e874-18009e8f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18009e874(longlong param_1,int param_2,uint param_3,longlong param_4,int param_5,int *param_6)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined7 extraout_var;
  undefined7 uVar4;
  
  plVar1 = (longlong *)(param_1 + -0x100);
  FUN_1800fb1f0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  bVar2 = 0;
  lVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,1);
  uVar4 = 0;
  if (lVar3 != 0) {
    bVar2 = FUN_18009ca3c(plVar1,lVar3,param_2,param_3,param_4,param_5,param_6);
    uVar4 = extraout_var;
  }
  return CONCAT71(uVar4,bVar2);
}

