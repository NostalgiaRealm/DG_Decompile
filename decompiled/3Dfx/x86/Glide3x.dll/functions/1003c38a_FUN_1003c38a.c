/*
 * FUN_1003c38a at 1003c38a
 * undefined4 __fastcall FUN_1003c38a(void * param_1)
 * Address ranges: 1003c38a-1003c3f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003c38a(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c [2];
  
  uVar3 = 0;
  local_c[0] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  iVar1 = FUN_1003c5eb(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    iVar2 = FUN_1003c675((void *)(iVar1 + 4),local_c);
    if (iVar2 == 0) {
      local_c[0] = 0xffffffff;
      iVar2 = FUN_1003c675((void *)(iVar1 + 4),local_c);
      if (iVar2 == 0) goto LAB_1003c3e3;
    }
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
LAB_1003c3e3:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return uVar3;
}

