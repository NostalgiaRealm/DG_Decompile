/*
 * FUN_100398a5 at 100398a5
 * undefined4 __fastcall FUN_100398a5(void * param_1)
 * Address ranges: 100398a5-1003990f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100398a5(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c [2];
  
  uVar3 = 0;
  local_c[0] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  iVar1 = FUN_10039b06(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    iVar2 = FUN_10039b90((void *)(iVar1 + 4),local_c);
    if (iVar2 == 0) {
      local_c[0] = 0xffffffff;
      iVar2 = FUN_10039b90((void *)(iVar1 + 4),local_c);
      if (iVar2 == 0) goto LAB_100398fe;
    }
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
LAB_100398fe:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return uVar3;
}

