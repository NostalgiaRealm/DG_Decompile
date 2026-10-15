/*
 * FUN_1002f9e9 at 1002f9e9
 * int __stdcall FUN_1002f9e9(int param_1, int param_2, int * param_3, int * param_4, uint param_5)
 * Address ranges: 1002f9e9-1002fae0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002f9e9(int param_1,int param_2,int *param_3,int *param_4,uint param_5)

{
  BOOL BVar1;
  int iVar2;
  RECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  iVar2 = -0x7ff8ffa9;
  if ((param_3 != (int *)0x0) && ((param_5 & 0xffffffcc) == 0)) {
    BVar1 = TryEnterCriticalSection(DAT_1006c254);
    if (BVar1 == 0) {
      FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    iVar2 = -0x7fffbfff;
    if (*(int *)((int)local_8 + 0x104) == 0) {
      local_10 = param_3[0x57];
      local_c = param_3[0x56];
      local_18 = 0;
      local_14 = 0;
      if (param_4 != (int *)0x0) {
        local_18 = *param_4;
        local_14 = param_4[1];
        local_10 = param_4[2];
        local_c = param_4[3];
      }
      local_28.right = (local_10 - local_18) + param_1;
      local_28.bottom = (local_c - local_14) + param_2;
      local_28.left = param_1;
      local_28.top = param_2;
      iVar2 = FUN_1002f3ab(local_8,&local_28,param_3,param_4,
                           ((((param_5 & 0x20) << 2 | param_5 & 0x10) << 5 | param_5 & 1) << 3 |
                           param_5 & 2) << 0xc | 0x200,0);
    }
    LeaveCriticalSection(DAT_1006c254);
  }
  return iVar2;
}

