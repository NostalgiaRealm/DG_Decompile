/*
 * FUN_1004c2eb at 1004c2eb
 * undefined __fastcall FUN_1004c2eb(void * param_1)
 * Address ranges: 1004c2eb-1004c362
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c2eb(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  FUN_1004c880(param_1,-1,0,(int *)0x0);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  FUN_1004c8d0(param_1);
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x44) != 0) {
    if (*(int *)((int)param_1 + 0x44) == 0) {
      puVar1 = (uint *)&DAT_00000008;
      goto LAB_1004c32a;
    }
    do {
      puVar1 = (uint *)(*(int *)((int)param_1 + 0x40) + 0x10 + uVar2 * 0x38);
LAB_1004c32a:
      FUN_1004c5e1(param_1,puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x44));
  }
  thunk_FUN_10052276(*(LPVOID *)((int)param_1 + 0x3c));
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  return;
}

