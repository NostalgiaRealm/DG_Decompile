/*
 * FUN_180101680 at 180101680
 * undefined FUN_180101680(void)
 * Address ranges: 180101680-180101713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180101680(undefined4 *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  char local_50;
  char cStack_4f;
  
  uVar3 = (*__imp_KERNEL32_dll_GetCurrentThreadId)();
  pcVar2 = __imp_KERNEL32_dll_QueryPerformanceFrequency;
  param_1[0x7d] = uVar3;
  (*pcVar2)(&local_78);
  local_78 = (local_78 * 10000) / 10000;
  (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&lStack_70);
  (*__imp_KERNEL32_dll_QueryPerformanceFrequency)(&local_68);
  local_50 = '\0';
  cStack_4f = '\0';
  local_68 = (local_68 * 5) / 10000;
  lStack_60 = 0;
  cVar1 = *(char *)((longlong)param_1 + 0x206);
  do {
    if (cVar1 != '\0') {
      return 0;
    }
    (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(param_1 + 0x20),0xffffffff);
    *(undefined1 *)((longlong)param_1 + 0x205) = 0;
    cVar1 = *(char *)((longlong)param_1 + 0x205);
    while (cVar1 == '\0') {
      plVar6 = *(longlong **)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x22);
      if (*plVar6 == 0) {
        if (param_1[0x7e] == param_1[0x7f]) {
          if (*(char *)(param_1 + 0x81) == '\0') {
            if (*(char *)((longlong)param_1 + 0x206) == '\0') goto LAB_180101a38;
            break;
          }
          (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&lStack_98);
          if (local_78 < lStack_98 - lStack_70) {
            uStack_a0 = 0;
            uStack_88 = 0;
            uVar5 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
            iVar4 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)(uVar5,&uStack_a0,&uStack_88);
            if (iVar4 != 0) {
              if ((uStack_a0 - 1 & uStack_a0) != 0) {
                if ((uStack_a0 == *(ulonglong *)(param_1 + 0x1c)) ||
                   (*(longlong *)(param_1 + 0x1a) == 0)) {
                  local_50 = '\0';
                  lStack_70 = lStack_98;
                }
                else {
                  local_50 = '\x01';
                  lStack_70 = lStack_98;
                }
                goto LAB_18010199c;
              }
              *(undefined1 *)(param_1 + 0x81) = 0;
              iVar4 = FUN_180001510(param_1,1,0);
              while (iVar4 != 0) {
                DataMemoryBarrier(2,2);
                Yield();
                iVar4 = FUN_180001510(param_1,1,0);
              }
              while( true ) {
                while( true ) {
                  plVar6 = *(longlong **)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x22);
                  if (*plVar6 == 0) break;
                  (*(code *)*plVar6)(plVar6 + 2);
                  *(longlong *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x22) =
                       (longlong)plVar6 + plVar6[1] + 0x10;
                  iVar4 = FUN_180001590(param_1 + 0x80);
                  if (iVar4 == 0) {
                    (**(code **)(param_1 + 0x14))(param_1 + 0x80);
                  }
                }
                if (param_1[0x7e] == param_1[0x7f]) break;
                (*__imp_KERNEL32_dll_SetEvent)
                          (*(undefined8 *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x2a));
                param_1[0x7e] = param_1[0x7e] + 1 & 7;
                *(undefined8 *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x22) =
                     *(undefined8 *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x26);
              }
              *param_1 = 0;
            }
            lStack_70 = lStack_98;
          }
LAB_18010199c:
          if (cStack_4f == '\0') {
            cStack_4f = '\x01';
            lStack_60 = lStack_98 + local_68;
          }
          if (lStack_60 <= lStack_98) {
            if ((*(char *)(param_1 + 0x81) != '\0') &&
               (iVar4 = FUN_180001510(param_1,1,0), iVar4 == 0)) {
              *(bool *)((longlong)param_1 + 0x205) = param_1[0x80] == 0;
              *param_1 = 0;
            }
            cStack_4f = '\0';
          }
          if (local_50 == '\0') {
            DataMemoryBarrier(2,2);
            Yield();
          }
          else {
            (*__imp_KERNEL32_dll_SwitchToThread)();
          }
        }
        else {
          (*__imp_KERNEL32_dll_SetEvent)
                    (*(undefined8 *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x2a));
          param_1[0x7e] = param_1[0x7e] + 1 & 7;
          *(undefined8 *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x22) =
               *(undefined8 *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x26);
        }
      }
      else {
        (*(code *)*plVar6)(plVar6 + 2);
        *(longlong *)(param_1 + (ulonglong)(uint)param_1[0x7e] * 10 + 0x22) =
             (longlong)plVar6 + plVar6[1] + 0x10;
        iVar4 = FUN_180001590(param_1 + 0x80);
        if (iVar4 == 0) {
          (**(code **)(param_1 + 0x14))(param_1 + 0x80);
        }
      }
      cVar1 = *(char *)((longlong)param_1 + 0x205);
    }
LAB_180101ad0:
    cVar1 = *(char *)((longlong)param_1 + 0x206);
  } while( true );
LAB_180101a38:
  (*__imp_KERNEL32_dll_Sleep)(1000);
  uStack_90 = 0;
  uStack_80 = 0;
  uVar5 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
  iVar4 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)(uVar5,&uStack_90,&uStack_80);
  if ((iVar4 == 0) || ((uStack_90 - 1 & uStack_90) == 0)) goto LAB_180101a78;
  iVar4 = FUN_180001510(param_1,1,0);
  while (iVar4 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    iVar4 = FUN_180001510(param_1,1,0);
  }
  (*__imp_KERNEL32_dll_SetEvent)(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)((longlong)param_1 + 0x205) = 0;
  *param_1 = 0;
  goto LAB_180101ad0;
LAB_180101a78:
  if (*(char *)((longlong)param_1 + 0x206) != '\0') goto LAB_180101ad0;
  goto LAB_180101a38;
}

