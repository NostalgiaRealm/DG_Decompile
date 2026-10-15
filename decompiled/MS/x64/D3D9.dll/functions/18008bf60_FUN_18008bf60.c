/*
 * FUN_18008bf60 at 18008bf60
 * undefined __fastcall FUN_18008bf60(longlong param_1)
 * Address ranges: 18008bf60-18008c120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008bf60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x1cf10) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1d0a4) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1d098) + 0x10 + uVar4 * 0x18) + 0x10)
        )();
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x1d0a4));
    }
    *(undefined4 *)(param_1 + 0x1d0a4) = 0;
    FUN_180088e14((undefined8 *)(param_1 + 0x1d070));
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1d4d4) != 0) {
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1d4c8) + 0x40 + uVar4 * 0x48);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1d4c8) + 0x38 + uVar4 * 0x48);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x1d4d4));
    }
    *(undefined4 *)(param_1 + 0x1d4d4) = 0;
    if (*(longlong **)(param_1 + 0x1d4f8) != (longlong *)0x0) {
      FUN_1800dba14(*(longlong *)(param_1 + 0x1cf10),*(uint *)(param_1 + 0x28),
                    *(longlong **)(param_1 + 0x1d4f8));
      *(undefined8 *)(param_1 + 0x1d4f8) = 0;
    }
    if (*(longlong **)(param_1 + 0x1d4f0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x1d4f0) + 0x10))();
      *(undefined8 *)(param_1 + 0x1d4f0) = 0;
    }
    FUN_180089d90(param_1);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x28);
    FUN_1800dba9c(*(longlong *)(param_1 + 0x1cf10),uVar4,*(longlong **)(param_1 + 0x1d4b8));
    *(undefined8 *)(param_1 + 0x1d4b8) = 0;
    (**(code **)(**(longlong **)(param_1 + 120000) + 0x10))();
    *(undefined8 *)(param_1 + 120000) = 0;
    lVar2 = 0;
    do {
      lVar6 = lVar2;
      plVar3 = *(longlong **)(param_1 + 0x1cf20 + lVar6 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)(param_1 + 0x1cf20 + lVar6 * 8) = 0;
      }
      lVar2 = lVar6 + 1;
    } while (lVar6 + 1 != 0x28);
    FUN_1800db540(plVar3,uVar4,(int)lVar6 - 0x26,param_1 + 0x1d060,param_1 + 0x1d068);
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x1cf10) + 0x618);
    LOCK();
    if (param_1 == *plVar3) {
      *plVar3 = 0;
    }
    UNLOCK();
    FUN_1800dd47c(*(longlong *)(param_1 + 0x1cf10),*(uint *)(param_1 + 0x28));
    FUN_1800de65c(*(longlong **)(param_1 + 0x1cf10));
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
  }
  return;
}

