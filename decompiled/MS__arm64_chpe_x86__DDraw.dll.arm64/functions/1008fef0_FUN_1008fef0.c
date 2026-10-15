/*
 * FUN_1008fef0 at 1008fef0
 * undefined FUN_1008fef0(void)
 * Address ranges: 1008fef0-100902b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1008fef0(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  char local_74;
  char cStack_73;
  int *local_70;
  undefined4 local_6c;
  int *local_68;
  uint *local_64;
  int *local_60;
  int *local_5c;
  undefined4 local_58;
  int *local_54;
  longlong local_50 [2];
  
  uVar8 = ZEXT48(param_1);
  iVar4 = (*(code *)PTR_FUN_100ba0b8)();
  param_1[0x47] = iVar4;
  (*(code *)PTR_FUN_100ba118)(&local_98);
  local_98 = (local_98 * 10000) / 10000;
  (*(code *)PTR_FUN_100ba114)(&local_90);
  (*(code *)PTR_FUN_100ba118)(&local_88);
  local_74 = '\0';
  cStack_73 = '\0';
  local_88 = (local_88 * 5) / 10000;
  local_80 = 0;
  if (*(char *)((int)param_1 + 0x12e) != '\0') {
    return 0;
  }
  local_70 = param_1 + 0x18;
  iVar4 = 1;
  local_54 = local_70;
LAB_1008ffac:
  (*(code *)PTR_FUN_100ba168)(*local_70,0xffffffff);
  *(undefined1 *)((int)param_1 + 0x12d) = 0;
  if (*(char *)((int)param_1 + 0x12d) == '\0') {
    local_68 = param_1 + 0x4b;
    local_64 = (uint *)(param_1 + 0x16);
    local_60 = param_1 + 0x15;
    local_5c = param_1 + 0x4a;
    do {
      uVar7 = FUN_1008fd88(param_1);
      if ((uVar7 & 1) == 0) {
        if ((char)param_1[0x4b] == '\0') {
          if (*(char *)((int)param_1 + 0x12e) == '\0') {
            goto LAB_100901c0;
          }
          break;
        }
        (*(code *)PTR_FUN_100ba114)(local_50);
        if (local_98 < local_50[0] - local_90) {
          local_a0 = 0;
          local_6c = 0;
          uVar5 = (*(code *)PTR_FUN_100ba0ac)();
          iVar6 = (*(code *)PTR_FUN_100ba0d4)(uVar5,&local_a0,&local_6c);
          if (iVar6 != 0) {
            if ((local_a0 - 1 & local_a0) != 0) {
              if ((local_a0 == *local_64) || (*local_60 == 0)) {
                local_74 = '\0';
                local_90 = local_50[0];
              }
              else {
                local_74 = '\x01';
                local_90 = local_50[0];
              }
              goto LAB_10090110;
            }
            *(undefined1 *)local_68 = 0;
            FUN_1008fd30(param_1);
            uVar7 = FUN_1008fd88(param_1);
            while ((uVar7 & 1) != 0) {
              uVar7 = FUN_1008fd88(param_1);
            }
            *param_1 = 0;
          }
          local_90 = local_50[0];
        }
LAB_10090110:
        if (cStack_73 == '\0') {
          cStack_73 = '\x01';
          local_80 = local_50[0] + local_88;
        }
        if (local_80 <= local_50[0]) {
          if ((char)param_1[0x4b] != '\0') {
            do {
              iVar1 = *param_1;
              iVar6 = iVar1;
              if (iVar1 == 0) {
                iVar6 = iVar4;
              }
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(uVar8,0x10);
              if (bVar3) {
                *param_1 = iVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar1 == 0) {
              *(bool *)((int)param_1 + 0x12d) = *local_5c == 0;
              *param_1 = 0;
            }
          }
          cStack_73 = '\0';
        }
        if (local_74 == '\0') {
          DataMemoryBarrier(2,2);
          Yield();
        }
        else {
          (*(code *)PTR_FUN_100ba148)();
        }
      }
    } while (*(char *)((int)param_1 + 0x12d) == '\0');
  }
  goto LAB_10090288;
  while (*(char *)((int)param_1 + 0x12e) == '\0') {
LAB_100901c0:
    (*(code *)PTR_FUN_100ba144)(1000);
    local_9c = 0;
    local_58 = 0;
    uVar5 = (*(code *)PTR_FUN_100ba0ac)();
    iVar6 = (*(code *)PTR_FUN_100ba0d4)(uVar5,&local_9c,&local_58);
    if ((iVar6 != 0) && ((local_9c - 1 & local_9c) != 0)) goto LAB_10090218;
  }
LAB_10090288:
  if (*(char *)((int)param_1 + 0x12e) != '\0') {
    return 0;
  }
  goto LAB_1008ffac;
LAB_10090218:
  do {
    iVar1 = *param_1;
    iVar6 = iVar1;
    if (iVar1 == 0) {
      iVar6 = iVar4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(uVar8,0x10);
    if (bVar3) {
      *param_1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  while (iVar1 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    do {
      iVar1 = *param_1;
      iVar6 = iVar1;
      if (iVar1 == 0) {
        iVar6 = iVar4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(uVar8,0x10);
      if (bVar3) {
        *param_1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
  }
  (*(code *)PTR_FUN_100ba12c)(*local_54);
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x12d) = 0;
  *param_1 = 0;
  goto LAB_10090288;
}

