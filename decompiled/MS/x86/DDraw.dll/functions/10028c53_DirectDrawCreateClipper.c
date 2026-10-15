/*
 * DirectDrawCreateClipper at 10028c53
 * int __stdcall DirectDrawCreateClipper(int param_1, undefined4 * param_2, int param_3)
 * Address ranges: 10028c53-10028d04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int DirectDrawCreateClipper(int param_1,undefined4 *param_2,int param_3)

{
  BOOL BVar1;
  FARPROC pFVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0x28c53  7  DirectDrawCreateClipper */
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  pFVar2 = FUN_10023885("DirectDrawCreateClipper");
  if (pFVar2 == (FARPROC)0x0) {
    iVar3 = -0x7ff8ffa9;
    if (((param_1 == 0) && (param_2 != (undefined4 *)0x0)) && (*param_2 = 0, param_3 == 0)) {
      iVar3 = -0x7ff8fff2;
      piVar4 = FUN_10022545((int *)0x0);
      if (piVar4 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar4 + 0x14))(piVar4,0,0);
        if (iVar3 == 0) {
          iVar3 = (**(code **)*piVar4)(piVar4,&DAT_10062420,param_2);
          if (-1 < iVar3) goto LAB_10028cf2;
          FUN_10022f4a((int)piVar4);
        }
        if (iVar3 < 0) {
          (**(code **)(*piVar4 + 0x24))(1);
        }
      }
    }
  }
  else {
    iVar3 = (*pFVar2)(param_1,param_2,param_3);
  }
LAB_10028cf2:
  LeaveCriticalSection(DAT_1006c254);
  return iVar3;
}

