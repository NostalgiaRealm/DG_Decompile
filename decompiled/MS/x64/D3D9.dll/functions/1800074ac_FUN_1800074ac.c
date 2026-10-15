/*
 * FUN_1800074ac at 1800074ac
 * undefined __fastcall FUN_1800074ac(longlong param_1, uint param_2)
 * Address ranges: 1800074ac-1800076f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800074ac(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  byte *pbVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong local_50;
  uint local_48;
  
  uVar9 = (ulonglong)param_2;
  local_48 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar9 * 8);
  local_50 = *(ulonglong *)(lVar1 + 0xacd8);
  while( true ) {
    uVar6 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xf < local_48) goto LAB_180007571;
    local_50 = *(ulonglong *)(lVar1 + 0xacd8 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar4 = (byte *)((longlong)&local_50 + ((longlong)(uVar6 & 0xffffffff) >> 3));
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar6 & 7));
  iVar5 = local_48 + (int)uVar6;
  while (uVar7 = local_48, iVar5 != -1) {
    plVar2 = *(longlong **)(lVar1 + 0x5310 + (longlong)iVar5 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    uVar6 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        uVar7 = uVar7 + 0x40;
        local_48 = uVar7;
        if (0xf < uVar7) goto LAB_180007571;
        local_50 = ((ulonglong *)(lVar1 + 0xacd8))[uVar7 >> 6];
        uVar6 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar4 = (byte *)((longlong)&local_50 + ((longlong)(uVar6 & 0xffffffff) >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar6 & 7));
    iVar5 = local_48 + (int)uVar6;
  }
LAB_180007571:
  local_50 = *(ulonglong *)(lVar1 + 0xacf0);
  local_48 = 0;
  while( true ) {
    uVar6 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xf < local_48) goto LAB_180007615;
    local_50 = *(ulonglong *)(lVar1 + 0xacf0 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar4 = (byte *)((longlong)&local_50 + ((longlong)(uVar6 & 0xffffffff) >> 3));
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar6 & 7));
  iVar5 = local_48 + (int)uVar6;
  while (uVar7 = local_48, iVar5 != -1) {
    plVar2 = *(longlong **)(lVar1 + 0xab60 + (longlong)iVar5 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    uVar6 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        uVar7 = uVar7 + 0x40;
        local_48 = uVar7;
        if (0xf < uVar7) goto LAB_180007615;
        local_50 = ((ulonglong *)(lVar1 + 0xacf0))[uVar7 >> 6];
        uVar6 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar4 = (byte *)((longlong)&local_50 + ((longlong)(uVar6 & 0xffffffff) >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar6 & 7));
    iVar5 = local_48 + (int)uVar6;
  }
LAB_180007615:
  if ((*(char *)(lVar1 + 0xacfa) != '\0') && (*(longlong **)(lVar1 + 0xab58) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar1 + 0xab58) + 0x10))();
  }
  FUN_1800fbcf0(*(LPVOID *)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar9 * 8) + 8));
  pvVar3 = *(LPVOID *)(*(longlong *)(param_1 + 0x3f8) + uVar9 * 8);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_1800fbcf0(*(LPVOID *)((longlong)pvVar3 + 0x4ab8));
    *(undefined8 *)((longlong)pvVar3 + 0x4ab8) = 0;
    *(undefined8 *)((longlong)pvVar3 + 0x4ac0) = 0;
    *(undefined8 *)((longlong)pvVar3 + 0x4ac8) = 0;
    FUN_1800fbcf0(pvVar3);
  }
  uVar7 = *(uint *)(param_1 + 0x400);
  if (param_2 == uVar7 - 1) {
    if (param_2 < uVar7) {
      while( true ) {
        uVar8 = param_2 + 1;
        if (uVar7 <= uVar8) break;
        *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)param_2 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)uVar8 * 8);
        uVar7 = *(uint *)(param_1 + 0x400);
        param_2 = uVar8;
      }
      *(uint *)(param_1 + 0x400) = uVar7 - 1;
    }
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + uVar9 * 8) = 0;
  }
  return;
}

