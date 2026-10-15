/*
 * FUN_18003a710 at 18003a710
 * undefined __fastcall FUN_18003a710(longlong param_1, uint param_2, int param_3, longlong * param_4)
 * Address ranges: 18003a710-18003a867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a710(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 in_stack_00000040;
  
  if (param_2 < 0x10) {
    uVar4 = (ulonglong)param_2;
    FUN_180038960(param_1,0,0,0);
    if (param_4 == (longlong *)0x0) {
      FUN_18005e0b0(param_1,param_2,param_3,(longlong *)0x0,(longlong *)0x0);
      *(undefined8 *)(param_1 + 64000 + uVar4 * 8) = 0;
      *(undefined8 *)(param_1 + 0xfa80 + uVar4 * 8) = 0;
    }
    else {
      iVar1 = (**(code **)(*param_4 + 8))(param_4);
      plVar2 = (longlong *)0x0;
      if (iVar1 == 1) {
        plVar3 = plVar2;
        plVar2 = param_4 + -4;
      }
      else {
        plVar3 = param_4 + -0x1c;
        (**(code **)(*plVar3 + 0xf8))(plVar3,in_stack_00000040);
      }
      *(longlong **)(param_1 + 64000 + uVar4 * 8) = plVar3;
      *(longlong **)(param_1 + 0xfa80 + uVar4 * 8) = plVar2;
      FUN_18005e0b0(param_1,param_2,param_3,plVar3,plVar2);
    }
  }
  return;
}

