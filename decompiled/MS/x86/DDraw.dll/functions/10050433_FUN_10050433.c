/*
 * FUN_10050433 at 10050433
 * undefined4 __fastcall FUN_10050433(void * param_1)
 * Address ranges: 10050433-1005049d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10050433(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c [2];
  
  uVar3 = 0;
  local_c[0] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  iVar1 = FUN_100507cd(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    iVar2 = FUN_10050857((void *)(iVar1 + 4),local_c);
    if (iVar2 == 0) {
      local_c[0] = 0xffffffff;
      iVar2 = FUN_10050857((void *)(iVar1 + 4),local_c);
      if (iVar2 == 0) goto LAB_1005048c;
    }
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
LAB_1005048c:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return uVar3;
}

