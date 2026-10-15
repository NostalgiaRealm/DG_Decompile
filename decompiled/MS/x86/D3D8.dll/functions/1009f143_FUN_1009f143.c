/*
 * FUN_1009f143 at 1009f143
 * undefined4 __fastcall FUN_1009f143(void * param_1)
 * Address ranges: 1009f143-1009f1ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1009f143(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c [2];
  
  uVar3 = 0;
  local_c[0] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  iVar1 = FUN_1009f51b(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    iVar2 = FUN_1009f5a5((void *)(iVar1 + 4),local_c);
    if (iVar2 == 0) {
      local_c[0] = 0xffffffff;
      iVar2 = FUN_1009f5a5((void *)(iVar1 + 4),local_c);
      if (iVar2 == 0) goto LAB_1009f19c;
    }
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
LAB_1009f19c:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return uVar3;
}

