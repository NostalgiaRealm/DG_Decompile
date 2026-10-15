/*
 * FUN_180055270 at 180055270
 * undefined8 __cdecl FUN_180055270(longlong param_1)
 * Address ranges: 180055270-18005527f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180055270(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  longlong *plVar7;
  
  do {
    if (*(char *)(param_1 + 0x59) != '\0') {
      return 0;
    }
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x18),0xffffffff);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    iVar2 = *(int *)(param_1 + 0x10);
    while (iVar2 != 0) {
      if (*(char *)(param_1 + 0x58) == '\0') {
        uVar6 = *(uint *)(param_1 + 0x10);
        plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
        if (uVar6 != 0) {
          uVar4 = 1;
          if (1 < uVar6) {
            do {
              uVar6 = uVar4 - 1;
              uVar1 = (ulonglong)uVar4;
              uVar4 = uVar4 + 1;
              *(undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar6 * 8) =
                   *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar1 * 8);
              uVar6 = *(uint *)(param_1 + 0x10);
            } while (uVar4 < uVar6);
          }
          *(uint *)(param_1 + 0x10) = uVar6 - 1;
        }
        if (*(char *)(param_1 + 0x59) == '\0') {
          *(longlong **)(param_1 + 0x48) = plVar7;
          uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
          *(undefined8 *)(param_1 + 0x50) = uVar3;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
          (**(code **)(*plVar7 + 8))(plVar7);
          (**(code **)*plVar7)(plVar7,1);
          pcVar5 = EnterCriticalSection_exref;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          goto LAB_1800553b0;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
      else {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
        Sleep(1);
        pcVar5 = EnterCriticalSection_exref;
LAB_1800553b0:
        (*pcVar5)(param_1 + 0x20);
      }
      iVar2 = *(int *)(param_1 + 0x10);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  } while( true );
}

