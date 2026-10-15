/*
 * FUN_180060360 at 180060360
 * undefined __fastcall FUN_180060360(int * param_1)
 * Address ranges: 180060360-1800605fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060360(int *param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined8 uVar5;
  HANDLE pvVar6;
  bool bVar7;
  ULONG_PTR local_res8;
  LARGE_INTEGER local_res10;
  ULONG_PTR local_res18;
  ULONG_PTR local_res20;
  ULONG_PTR local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  longlong local_48;
  char local_38;
  char cStack_37;
  
  DVar3 = GetCurrentThreadId();
  param_1[0x7d] = DVar3;
  QueryPerformanceFrequency(&local_60);
  local_60.QuadPart = (local_60.QuadPart * 10000) / 10000;
  QueryPerformanceCounter(&local_58);
  QueryPerformanceFrequency(&local_50);
  local_48 = 0;
  local_38 = '\0';
  cStack_37 = '\0';
  local_50.QuadPart = (local_50.QuadPart * 5) / 10000;
  cVar2 = *(char *)((longlong)param_1 + 0x206);
  do {
    if (cVar2 != '\0') {
      return;
    }
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
    *(undefined1 *)((longlong)param_1 + 0x205) = 0;
    cVar2 = *(char *)((longlong)param_1 + 0x205);
    while (cVar2 == '\0') {
      uVar5 = FUN_180060600((longlong)param_1);
      if ((char)uVar5 == '\0') {
        if ((char)param_1[0x81] == '\0') {
          if (*(char *)((longlong)param_1 + 0x206) == '\0') goto LAB_180060570;
          break;
        }
        QueryPerformanceCounter(&local_res10);
        if (local_60.QuadPart < local_res10.QuadPart - (longlong)local_58) {
          local_res8 = 0;
          local_res20 = 0;
          pvVar6 = GetCurrentProcess();
          BVar4 = GetProcessAffinityMask(pvVar6,&local_res8,&local_res20);
          if (BVar4 != 0) {
            if ((local_res8 & local_res8 - 1) == 0) {
              *(undefined1 *)(param_1 + 0x81) = 0;
              LOCK();
              bVar7 = *param_1 == 0;
              if (bVar7) {
                *param_1 = 1;
              }
              UNLOCK();
              while (!bVar7) {
                LOCK();
                bVar7 = *param_1 == 0;
                if (bVar7) {
                  *param_1 = 1;
                }
                UNLOCK();
              }
              uVar5 = FUN_180060600((longlong)param_1);
              cVar2 = (char)uVar5;
              while (cVar2 != '\0') {
                uVar5 = FUN_180060600((longlong)param_1);
                cVar2 = (char)uVar5;
              }
              *param_1 = 0;
            }
            else if ((local_res8 == *(ulonglong *)(param_1 + 0x1c)) ||
                    (local_38 = '\x01', *(longlong *)(param_1 + 0x1a) == 0)) {
              local_38 = '\0';
            }
          }
          local_58.s = local_res10.s;
        }
        if (cStack_37 == '\0') {
          local_48 = local_50.QuadPart + local_res10.QuadPart;
          cStack_37 = '\x01';
        }
        if (local_48 <= local_res10.QuadPart) {
          if ((char)param_1[0x81] != '\0') {
            LOCK();
            iVar1 = *param_1;
            if (iVar1 == 0) {
              *param_1 = 1;
            }
            UNLOCK();
            if (iVar1 == 0) {
              *(bool *)((longlong)param_1 + 0x205) = param_1[0x80] == 0;
              *param_1 = 0;
            }
          }
          cStack_37 = '\0';
        }
        if (local_38 != '\0') {
          SwitchToThread();
        }
      }
      cVar2 = *(char *)((longlong)param_1 + 0x205);
    }
LAB_1800605e7:
    cVar2 = *(char *)((longlong)param_1 + 0x206);
  } while( true );
LAB_180060570:
  Sleep(1000);
  local_res18 = 0;
  local_68 = 0;
  pvVar6 = GetCurrentProcess();
  BVar4 = GetProcessAffinityMask(pvVar6,&local_res18,&local_68);
  if ((BVar4 == 0) || ((local_res18 & local_res18 - 1) == 0)) goto LAB_1800605ab;
  LOCK();
  bVar7 = *param_1 == 0;
  if (bVar7) {
    *param_1 = 1;
  }
  UNLOCK();
  while (!bVar7) {
    LOCK();
    bVar7 = *param_1 == 0;
    if (bVar7) {
      *param_1 = 1;
    }
    UNLOCK();
  }
  SetEvent(*(HANDLE *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)((longlong)param_1 + 0x205) = 0;
  *param_1 = 0;
  goto LAB_1800605e7;
LAB_1800605ab:
  if (*(char *)((longlong)param_1 + 0x206) != '\0') goto LAB_1800605e7;
  goto LAB_180060570;
}

