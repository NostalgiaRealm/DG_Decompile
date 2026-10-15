/*
 * FUN_10098d46 at 10098d46
 * int __stdcall FUN_10098d46(int param_1, int * param_2, int param_3)
 * Address ranges: 10098d46-10098dfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10098d46(int param_1,int *param_2,int param_3)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_88 [2];
  int local_80 [14];
  undefined4 local_48;
  int local_44 [14];
  undefined4 local_c;
  
  BVar1 = TryEnterCriticalSection(DAT_100deaa4);
  if (BVar1 == 0) {
    FUN_10003e00((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar4 = -0x7789f794;
  if ((*(uint *)(param_1 + -0x58e4) & 0x200) == 0) {
    local_48 = *(undefined4 *)(param_1 + -0x58c4);
    piVar2 = FUN_1000339a(local_80,param_2,*(HWND *)(param_1 + -0x58e8));
    piVar5 = local_44;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar5 = piVar5 + 1;
    }
    local_c = 0;
    local_88[0] = 0;
    iVar4 = FUN_1000448a((void *)(param_1 + -0x66b4),1,(int)&local_48,(int)local_88,param_3,0);
    if (-1 < iVar4) {
      piVar2 = local_44;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *piVar2;
        piVar2 = piVar2 + 1;
        param_2 = param_2 + 1;
      }
    }
  }
  LeaveCriticalSection(DAT_100deaa4);
  return iVar4;
}

