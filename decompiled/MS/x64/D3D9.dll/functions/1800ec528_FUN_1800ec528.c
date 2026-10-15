/*
 * FUN_1800ec528 at 1800ec528
 * undefined8 __fastcall FUN_1800ec528(longlong param_1)
 * Address ranges: 1800ec528-1800ec64b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800ec528(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
LAB_1800ec549:
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x18),0xffffffff);
LAB_1800ec613:
  do {
    EnterCriticalSection(lpCriticalSection);
    while( true ) {
      if (*(int *)(param_1 + 0x10) == 0) {
        LeaveCriticalSection(lpCriticalSection);
        if (*(char *)(param_1 + 0x59) != '\0') {
          return 0;
        }
        goto LAB_1800ec549;
      }
      if (*(char *)(param_1 + 0x58) != '\0') {
        LeaveCriticalSection(lpCriticalSection);
        Sleep(1);
        goto LAB_1800ec613;
      }
      plVar1 = (longlong *)**(longlong **)(param_1 + 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      if (uVar3 != 0) {
        uVar5 = 1;
        if (1 < uVar3) {
          do {
            uVar3 = uVar5 - 1;
            uVar4 = (ulonglong)uVar5;
            uVar5 = uVar5 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
            uVar3 = *(uint *)(param_1 + 0x10);
          } while (uVar5 < uVar3);
        }
        *(uint *)(param_1 + 0x10) = uVar3 - 1;
      }
      if (*(char *)(param_1 + 0x59) == '\0') break;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)*plVar1)(plVar1);
      }
    }
    *(longlong **)(param_1 + 0x48) = plVar1;
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    LeaveCriticalSection(lpCriticalSection);
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)*plVar1)(plVar1);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  } while( true );
}

