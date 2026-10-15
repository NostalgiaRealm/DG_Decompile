/*
 * FUN_180018430 at 180018430
 * undefined8 __fastcall FUN_180018430(longlong param_1)
 * Address ranges: 180018430-18001857c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180018430(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  longlong *plVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  pbVar6 = (byte *)(*(longlong *)(param_1 + 0x40) + -0x59c0);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    pbVar6 = &DAT_00000e78;
  }
  if (((*pbVar6 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar2 = false;
  }
  else {
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    bVar2 = true;
    if (BVar3 == 0) {
      FUN_1800044dc(0);
      bVar2 = true;
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if ((*(longlong **)(param_1 + 0x60) == (longlong *)0x0) ||
       (((*(uint *)(param_1 + 0x50) & 0x200) == 0 && (*(char *)(param_1 + 0x8b) == '\0')))) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      LOCK();
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x40);
      uVar8 = 0;
      do {
        plVar4 = (longlong *)(lVar1 + -0x6838 + (longlong)(&DAT_000066c8 + uVar8 * 8));
        if (lVar1 == 0) {
          plVar4 = (longlong *)(&DAT_000066c8 + uVar8 * 8);
        }
        if (*plVar4 == param_1) {
          puVar7 = (uint *)(lVar1 + -0x30);
          if (lVar1 == 0) {
            puVar7 = (uint *)&DAT_00006808;
          }
          *puVar7 = *puVar7 | 1 << ((byte)uVar8 & 0x1f);
          break;
        }
        uVar5 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar5;
      } while (uVar5 < 0x10);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (*(int *)(param_1 + 0x84) != -1) {
        puVar7 = (uint *)(*(longlong *)(param_1 + 0x40) + -0x5c);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          puVar7 = (uint *)&DAT_000067dc;
        }
        *puVar7 = *puVar7 & ~(1 << ((byte)*(int *)(param_1 + 0x84) & 0x1f));
      }
    }
  }
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return 0;
}

