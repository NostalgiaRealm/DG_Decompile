/*
 * FUN_10049803 at 10049803
 * undefined __fastcall FUN_10049803(void * param_1)
 * Address ranges: 10049803-1004987a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10049803(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  FUN_10049d98(param_1,-1,0,(int *)0x0);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  FUN_10049de8(param_1);
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x44) != 0) {
    if (*(int *)((int)param_1 + 0x44) == 0) {
      puVar1 = (uint *)&DAT_00000008;
      goto LAB_10049842;
    }
    do {
      puVar1 = (uint *)(*(int *)((int)param_1 + 0x40) + 0x10 + uVar2 * 0x38);
LAB_10049842:
      FUN_10049af9(param_1,puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x44));
  }
  thunk_FUN_1004f626(*(LPVOID *)((int)param_1 + 0x3c));
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  return;
}

