/*
 * FUN_180043820 at 180043820
 * undefined8 __cdecl FUN_180043820(uint * param_1)
 * Address ranges: 180043820-180043c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180043820(uint *param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ULONG_PTR local_a0;
  LARGE_INTEGER local_98;
  ULONG_PTR local_90;
  ULONG_PTR local_88;
  ULONG_PTR local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  longlong local_60;
  char local_50;
  char cStack_4f;
  
  DVar2 = GetCurrentThreadId();
  param_1[0x7d] = DVar2;
  QueryPerformanceFrequency(&local_78);
  local_78.QuadPart = (local_78.QuadPart * 10000) / 10000;
  QueryPerformanceCounter(&local_70);
  QueryPerformanceFrequency(&local_68);
  local_50 = '\0';
  cStack_4f = '\0';
  local_68.QuadPart = (local_68.QuadPart * 5) / 10000;
  local_60 = 0;
  cVar1 = *(char *)((longlong)param_1 + 0x206);
  do {
    if (cVar1 != '\0') {
      return 0;
    }
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
    *(undefined1 *)((longlong)param_1 + 0x205) = 0;
    cVar1 = *(char *)((longlong)param_1 + 0x205);
    while (cVar1 == '\0') {
      plVar7 = *(longlong **)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x22);
      if (*plVar7 == 0) {
        if (param_1[0x7e] == param_1[0x7f]) {
          if ((char)param_1[0x81] == '\0') {
            if (*(char *)((longlong)param_1 + 0x206) == '\0') goto LAB_180043bd8;
            break;
          }
          QueryPerformanceCounter(&local_98);
          if (local_78.QuadPart < local_98.QuadPart - (longlong)local_70) {
            local_a0 = 0;
            local_88 = 0;
            pvVar5 = GetCurrentProcess();
            BVar4 = GetProcessAffinityMask(pvVar5,&local_a0,&local_88);
            if (BVar4 != 0) {
              if ((local_a0 - 1 & local_a0) != 0) {
                if ((local_a0 == *(ulonglong *)(param_1 + 0x1c)) ||
                   (*(longlong *)(param_1 + 0x1a) == 0)) {
                  local_50 = '\0';
                  local_70.s = local_98.s;
                }
                else {
                  local_50 = '\x01';
                  local_70.s = local_98.s;
                }
                goto LAB_180043b3c;
              }
              *(undefined1 *)(param_1 + 0x81) = 0;
              uVar6 = FUN_180061670(param_1,1,0);
              iVar3 = (int)uVar6;
              while (iVar3 != 0) {
                DataMemoryBarrier(2,2);
                Yield();
                uVar6 = FUN_180061670(param_1,1,0);
                iVar3 = (int)uVar6;
              }
              while( true ) {
                while( true ) {
                  plVar7 = *(longlong **)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x22);
                  if (*plVar7 == 0) break;
                  (*(code *)*plVar7)(plVar7 + 2);
                  *(longlong *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x22) =
                       (longlong)plVar7 + plVar7[1] + 0x10;
                  iVar3 = FUN_1800616f0(param_1 + 0x80);
                  if (iVar3 == 0) {
                    (**(code **)(param_1 + 0x14))(param_1 + 0x80);
                  }
                }
                if (param_1[0x7e] == param_1[0x7f]) break;
                SetEvent(*(HANDLE *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x2a));
                param_1[0x7e] = param_1[0x7e] + 1 & 7;
                *(undefined8 *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x22) =
                     *(undefined8 *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x26);
              }
              *param_1 = 0;
            }
            local_70.s = local_98.s;
          }
LAB_180043b3c:
          if (cStack_4f == '\0') {
            cStack_4f = '\x01';
            local_60 = local_98.QuadPart + local_68.QuadPart;
          }
          if (local_60 <= local_98.QuadPart) {
            if (((char)param_1[0x81] != '\0') &&
               (uVar6 = FUN_180061670(param_1,1,0), (int)uVar6 == 0)) {
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
            SwitchToThread();
          }
        }
        else {
          SetEvent(*(HANDLE *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x2a));
          param_1[0x7e] = param_1[0x7e] + 1 & 7;
          *(undefined8 *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x22) =
               *(undefined8 *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x26);
        }
      }
      else {
        (*(code *)*plVar7)(plVar7 + 2);
        *(longlong *)(param_1 + (ulonglong)param_1[0x7e] * 10 + 0x22) =
             (longlong)plVar7 + plVar7[1] + 0x10;
        iVar3 = FUN_1800616f0(param_1 + 0x80);
        if (iVar3 == 0) {
          (**(code **)(param_1 + 0x14))(param_1 + 0x80);
        }
      }
      cVar1 = *(char *)((longlong)param_1 + 0x205);
    }
LAB_180043c70:
    cVar1 = *(char *)((longlong)param_1 + 0x206);
  } while( true );
LAB_180043bd8:
  Sleep(1000);
  local_90 = 0;
  local_80 = 0;
  pvVar5 = GetCurrentProcess();
  BVar4 = GetProcessAffinityMask(pvVar5,&local_90,&local_80);
  if ((BVar4 == 0) || ((local_90 - 1 & local_90) == 0)) goto LAB_180043c18;
  uVar6 = FUN_180061670(param_1,1,0);
  iVar3 = (int)uVar6;
  while (iVar3 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    uVar6 = FUN_180061670(param_1,1,0);
    iVar3 = (int)uVar6;
  }
  SetEvent(*(HANDLE *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)((longlong)param_1 + 0x205) = 0;
  *param_1 = 0;
  goto LAB_180043c70;
LAB_180043c18:
  if (*(char *)((longlong)param_1 + 0x206) != '\0') goto LAB_180043c70;
  goto LAB_180043bd8;
}

