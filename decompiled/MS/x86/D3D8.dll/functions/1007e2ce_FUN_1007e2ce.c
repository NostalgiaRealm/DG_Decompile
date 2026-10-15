/*
 * FUN_1007e2ce at 1007e2ce
 * int __stdcall FUN_1007e2ce(int param_1, int * param_2, int param_3)
 * Address ranges: 1007e2ce-1007e35c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007e2ce(int param_1,int *param_2,int param_3)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_78;
  int local_74 [13];
  undefined4 local_40;
  int local_3c [13];
  undefined4 local_8;
  
  BVar1 = TryEnterCriticalSection(DAT_100ba2e4);
  if (BVar1 == 0) {
    FUN_100037f8((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  local_78 = *(undefined4 *)(param_1 + -0x4db4);
  piVar2 = FUN_10002fe2(local_3c,param_2,*(HWND *)(param_1 + -0x4dd8));
  piVar5 = local_74;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar5 = piVar5 + 1;
  }
  local_40 = 0;
  local_8 = 0;
  iVar3 = FUN_10003e7d((void *)(param_1 + -0x58e0),1,(int)&local_78,(int)&local_8,param_3,0);
  if (-1 < iVar3) {
    piVar2 = local_74;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *piVar2;
      piVar2 = piVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  LeaveCriticalSection(DAT_100ba2e4);
  return iVar3;
}

