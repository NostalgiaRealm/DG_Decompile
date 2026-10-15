/*
 * FUN_10059f18 at 10059f18
 * undefined __fastcall FUN_10059f18(void * param_1)
 * Address ranges: 10059f18-10059f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10059f18(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  FUN_1005a4bd(param_1,-1,0,(int *)0x0);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  FUN_1005a50d(param_1);
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x44) != 0) {
    if (*(int *)((int)param_1 + 0x44) == 0) {
      puVar1 = (uint *)&DAT_00000008;
      goto LAB_10059f57;
    }
    do {
      puVar1 = (uint *)(*(int *)((int)param_1 + 0x40) + 0x10 + uVar2 * 0x38);
LAB_10059f57:
      FUN_1005a21e(param_1,puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x44));
  }
  thunk_FUN_10060be1(*(LPVOID *)((int)param_1 + 0x3c));
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  return;
}

