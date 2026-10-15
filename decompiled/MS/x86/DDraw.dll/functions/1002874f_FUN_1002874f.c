/*
 * FUN_1002874f at 1002874f
 * int __stdcall FUN_1002874f(int * param_1, undefined4 param_2, int * param_3, int param_4)
 * Address ranges: 1002874f-10028807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002874f(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  BOOL BVar2;
  int *piVar3;
  int iVar4;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  piVar1 = param_3;
  iVar4 = -0x7ff8ffa9;
  if ((param_3 == (int *)0x0) || (*param_3 = 0, param_4 != 0)) goto LAB_100287f4;
  iVar4 = -0x7ff8fff2;
  piVar3 = FUN_10022545(param_1);
  if (piVar3 == (int *)0x0) goto LAB_100287f4;
  param_3 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_10062380,&param_3);
  }
  iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,param_3,0);
  if (iVar4 < 0) {
LAB_100287dd:
    (**(code **)(*piVar3 + 0x24))(1);
  }
  else {
    iVar4 = (**(code **)*piVar3)(piVar3,&DAT_10062420,piVar1);
    if (iVar4 < 0) {
      FUN_10022f4a((int)piVar3);
      goto LAB_100287dd;
    }
    iVar4 = 0;
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
LAB_100287f4:
  LeaveCriticalSection(DAT_1006c254);
  return iVar4;
}

