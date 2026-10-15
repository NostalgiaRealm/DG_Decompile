/*
 * FUN_1009db5b at 1009db5b
 * undefined __fastcall FUN_1009db5b(void * param_1)
 * Address ranges: 1009db5b-1009dbd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009db5b(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  FUN_1009e100(param_1,-1,0,(int *)0x0);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  FUN_1009e150(param_1);
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x44) != 0) {
    if (*(int *)((int)param_1 + 0x44) == 0) {
      puVar1 = (uint *)&DAT_00000008;
      goto LAB_1009db9a;
    }
    do {
      puVar1 = (uint *)(*(int *)((int)param_1 + 0x40) + 0x10 + uVar2 * 0x38);
LAB_1009db9a:
      FUN_1009de61(param_1,puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x44));
  }
  thunk_FUN_100ad48c(*(LPVOID *)((int)param_1 + 0x3c));
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  return;
}

