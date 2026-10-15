/*
 * FUN_1005049e at 1005049e
 * char __fastcall FUN_1005049e(void * param_1)
 * Address ranges: 1005049e-1005050a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_1005049e(void *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  cVar4 = '\x01';
  iVar1 = FUN_100507cd(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    uVar3 = *(uint *)(iVar1 + 0xc);
    cVar2 = '\x01';
    do {
      cVar4 = cVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      if (uVar3 < *(uint *)(iVar1 + 0xc)) {
        piVar5 = (int *)(*(int *)(iVar1 + 8) + 0x1c + uVar3 * 0x28);
      }
      else {
        piVar5 = (int *)&DAT_00000014;
      }
      cVar2 = '\0';
      if (*piVar5 == 0) {
        cVar2 = cVar4;
      }
      cVar4 = '\0';
    } while (cVar2 != '\0');
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return cVar4;
}

