/*
 * FUN_1800f4040 at 1800f4040
 * undefined FUN_1800f4040(void)
 * Address ranges: 1800f4040-1800f41c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f4040(longlong param_1)

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
    (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(param_1 + 0x18),0xffffffff);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x20);
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
          pcVar5 = __imp_KERNEL32_dll_LeaveCriticalSection;
          *(undefined8 *)(param_1 + 0x50) = uVar3;
          (*pcVar5)(param_1 + 0x20);
          (**(code **)(*plVar7 + 8))(plVar7);
          (**(code **)*plVar7)(plVar7,1);
          pcVar5 = __imp_KERNEL32_dll_EnterCriticalSection;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          goto LAB_1800f4180;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
      else {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x20);
        (*__imp_KERNEL32_dll_Sleep)(1);
        pcVar5 = __imp_KERNEL32_dll_EnterCriticalSection;
LAB_1800f4180:
        (*pcVar5)(param_1 + 0x20);
      }
      iVar2 = *(int *)(param_1 + 0x10);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x20);
  } while( true );
}

