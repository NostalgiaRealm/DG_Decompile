/*
 * FUN_1002adb0 at 1002adb0
 * undefined __fastcall FUN_1002adb0(int * param_1)
 * Address ranges: 1002adb0-1002b0b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002aed6) */

void __fastcall FUN_1002adb0(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  ULONG_PTR *pUVar8;
  ULONG_PTR *pUVar9;
  ULONG_PTR local_48;
  ULONG_PTR local_44;
  ULONG_PTR local_40;
  ULONG_PTR local_3c;
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  uint local_18;
  int local_14;
  char local_c;
  char cStack_b;
  
  DVar2 = GetCurrentThreadId();
  param_1[0x47] = DVar2;
  QueryPerformanceFrequency(&local_30);
  lVar7 = __allmul(local_30.s.LowPart,local_30.s.HighPart,10000,0);
  local_30 = (LARGE_INTEGER)__alldiv((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),10000,0);
  QueryPerformanceCounter(&local_28);
  QueryPerformanceFrequency(&local_20);
  local_20 = (LARGE_INTEGER)
             __alldiv(local_20.s.LowPart * 5,
                      local_20.s.HighPart + (local_20.s.HighPart << 2 | local_20.s.LowPart >> 0x1e)
                      + (uint)CARRY4(local_20.s.LowPart,local_20.s.LowPart * 4),10000,0);
  cVar1 = *(char *)((int)param_1 + 0x12e);
  local_18 = 0;
  local_14 = 0;
  local_c = '\0';
  cStack_b = '\0';
  do {
    if (cVar1 != '\0') {
      return;
    }
    WaitForSingleObject((HANDLE)param_1[0x18],0xffffffff);
    *(undefined1 *)((int)param_1 + 0x12d) = 0;
    cVar1 = *(char *)((int)param_1 + 0x12d);
    while (cVar1 == '\0') {
      uVar3 = FUN_1002acf0((int)param_1);
      if ((char)uVar3 == '\0') {
        if ((char)param_1[0x4b] == '\0') {
          if (*(char *)((int)param_1 + 0x12e) != '\0') {
            return;
          }
          goto LAB_1002b024;
        }
        QueryPerformanceCounter(&local_38);
        if ((longlong)local_30 <
            CONCAT44((local_38.s.HighPart - local_28._4_4_) -
                     (uint)(local_38.s.LowPart < local_28.s.LowPart),
                     local_38.s.LowPart - local_28._0_4_)) {
          pUVar9 = &local_40;
          local_48 = 0;
          pUVar8 = &local_48;
          local_40 = 0;
          pvVar4 = GetCurrentProcess();
          BVar5 = GetProcessAffinityMask(pvVar4,pUVar8,pUVar9);
          if (BVar5 != 0) {
            if ((local_48 & local_48 - 1) == 0) {
              *(undefined1 *)(param_1 + 0x4b) = 0;
              LOCK();
              iVar6 = *param_1;
              if (iVar6 == 0) {
                *param_1 = 1;
                iVar6 = 0;
              }
              UNLOCK();
              while (iVar6 != 0) {
                LOCK();
                iVar6 = *param_1;
                if (iVar6 == 0) {
                  *param_1 = 1;
                  iVar6 = 0;
                }
                UNLOCK();
              }
              uVar3 = FUN_1002acf0((int)param_1);
              cVar1 = (char)uVar3;
              while (cVar1 != '\0') {
                uVar3 = FUN_1002acf0((int)param_1);
                cVar1 = (char)uVar3;
              }
              *param_1 = 0;
            }
            else if ((local_48 == param_1[0x16]) || (local_c = '\x01', param_1[0x15] == 0)) {
              local_c = '\0';
            }
          }
          local_28.s.LowPart = local_38.s.LowPart;
          local_28.s.HighPart = local_38.s.HighPart;
        }
        if (cStack_b == '\0') {
          cStack_b = '\x01';
          local_18 = local_38.s.LowPart + local_20.s.LowPart;
          local_14 = local_38.s.HighPart + local_20.s.HighPart +
                     (uint)CARRY4(local_38.s.LowPart,local_20.s.LowPart);
        }
        if ((local_14 <= local_38.s.HighPart) &&
           ((local_14 < local_38.s.HighPart || (local_18 <= local_38.s.LowPart)))) {
          if ((char)param_1[0x4b] != '\0') {
            LOCK();
            iVar6 = *param_1;
            if (iVar6 == 0) {
              *param_1 = 1;
              iVar6 = 0;
            }
            UNLOCK();
            if (iVar6 == 0) {
              *(bool *)((int)param_1 + 0x12d) = param_1[0x4a] == 0;
              *param_1 = 0;
            }
          }
          cStack_b = '\0';
        }
        if (local_c != '\0') {
          SwitchToThread();
        }
      }
      cVar1 = *(char *)((int)param_1 + 0x12d);
    }
LAB_1002b0a5:
    cVar1 = *(char *)((int)param_1 + 0x12e);
  } while( true );
LAB_1002b024:
  Sleep(1000);
  pUVar9 = &local_3c;
  local_44 = 0;
  pUVar8 = &local_44;
  local_3c = 0;
  pvVar4 = GetCurrentProcess();
  BVar5 = GetProcessAffinityMask(pvVar4,pUVar8,pUVar9);
  if ((BVar5 == 0) || ((local_44 & local_44 - 1) == 0)) goto LAB_1002b05d;
  LOCK();
  iVar6 = *param_1;
  if (iVar6 == 0) {
    *param_1 = 1;
    iVar6 = 0;
  }
  UNLOCK();
  while (iVar6 != 0) {
    LOCK();
    iVar6 = *param_1;
    if (iVar6 == 0) {
      *param_1 = 1;
      iVar6 = 0;
    }
    UNLOCK();
  }
  SetEvent((HANDLE)param_1[0x18]);
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x12d) = 0;
  *param_1 = 0;
  goto LAB_1002b0a5;
LAB_1002b05d:
  if (*(char *)((int)param_1 + 0x12e) != '\0') goto LAB_1002b0a5;
  goto LAB_1002b024;
}

