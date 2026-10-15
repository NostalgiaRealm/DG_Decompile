/*
 * FUN_100c2ab0 at 100c2ab0
 * undefined4 __stdcall FUN_100c2ab0(int param_1)
 * Address ranges: 100c2ab0-100c2b6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c2ab0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x35) != '\0') {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x14);
LAB_100c2ac9:
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  do {
    EnterCriticalSection(lpCriticalSection);
    while( true ) {
      if (*(int *)(param_1 + 8) == 0) {
        LeaveCriticalSection(lpCriticalSection);
        if (*(char *)(param_1 + 0x35) != '\0') {
          return 0;
        }
        goto LAB_100c2ac9;
      }
      if (*(char *)(param_1 + 0x34) != '\0') break;
      piVar1 = (int *)**(int **)(param_1 + 4);
      FUN_100c2d7e((int *)(param_1 + 4));
      if (*(char *)(param_1 + 0x35) == '\0') {
        *(int **)(param_1 + 0x2c) = piVar1;
        uVar2 = (**(code **)(*piVar1 + 8))();
        *(undefined4 *)(param_1 + 0x30) = uVar2;
        LeaveCriticalSection(lpCriticalSection);
        (**(code **)(*piVar1 + 4))();
        (**(code **)*piVar1)(1);
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        EnterCriticalSection(lpCriticalSection);
      }
      else if (piVar1 != (int *)0x0) {
        (**(code **)*piVar1)(1);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    Sleep(1);
  } while( true );
}

