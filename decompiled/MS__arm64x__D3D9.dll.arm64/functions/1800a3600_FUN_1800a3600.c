/*
 * FUN_1800a3600 at 1800a3600
 * undefined FUN_1800a3600(void)
 * Address ranges: 1800a3600-1800a386f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a3600(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + 0x88;
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x90) + uVar6 * 8);
      (**(code **)(*plVar3 + 8))(plVar3,lVar7);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x98));
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar6 * 4);
      thunk_FUN_180102fc0((&DAT_180253348)[uVar5 * 5]);
      (&DAT_180253348)[uVar5 * 5] = 0;
      (&DAT_180253350)[uVar5 * 5] = 0;
      thunk_FUN_180102fc0((&DAT_180253358)[uVar5 * 5]);
      (&DAT_180253358)[uVar5 * 5] = 0;
      (&DAT_180253360)[uVar5 * 5] = 0;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x70));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x20));
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x18));
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x28));
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x30));
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      if (((*(char *)(param_1 + 0x46 + uVar6) != '\0') && ((&DAT_180253868)[uVar6 * 0x96] != 0)) &&
         (iVar2 = FUN_180001590(&DAT_180253868 + uVar6 * 0x96), iVar2 == 0)) {
        (**(code **)(*(longlong *)(&DAT_180253860)[uVar6 * 0x4b] + 0x10))();
        puVar4 = (undefined8 *)(&DAT_180253860)[uVar6 * 0x4b];
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        (&DAT_180253860)[uVar6 * 0x4b] = 0;
      }
      uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar6 * 4);
      iVar2 = FUN_180001590(&DAT_180253858 + uVar5 * 0x96);
      if (iVar2 == 0) {
        lVar7 = *(longlong *)(&DAT_180253a40 + uVar5 * 600);
        if (lVar7 != 0) {
          FUN_180020f50(lVar7);
          FUN_180102fc0(lVar7,0xb8);
        }
        plVar3 = (longlong *)(&DAT_180253850)[uVar5 * 0x4b];
        *(undefined8 *)(&DAT_180253a40 + uVar5 * 600) = 0;
        iVar2 = 0;
        lVar7 = 0;
        do {
          if ((longlong *)(&DAT_180253850)[lVar7 * 0x4b] == plVar3) {
            iVar2 = (&DAT_180253858)[lVar7 * 0x96] + iVar2;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x18))();
          (**(code **)(*(longlong *)(&DAT_180253850)[uVar5 * 0x4b] + 8))();
        }
        (&DAT_180253850)[uVar5 * 0x4b] = 0;
        thunk_FUN_180102fc0((&DAT_180253a78)[uVar5 * 0x4b]);
        (&DAT_180253a78)[uVar5 * 0x4b] = 0;
        (&DAT_180253a80)[uVar5 * 0x4b] = 0;
        thunk_FUN_180102fc0((&DAT_180253a88)[uVar5 * 0x4b]);
        (&DAT_180253a88)[uVar5 * 0x4b] = 0;
        (&DAT_180253a90)[uVar5 * 0x4b] = 0;
        thunk_FUN_180102fc0((&DAT_180253a98)[uVar5 * 0x4b]);
        (&DAT_180253a98)[uVar5 * 0x4b] = 0;
        (&DAT_180253aa0)[uVar5 * 0x4b] = 0;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x70));
  }
  iVar2 = FUN_180001590(&DAT_18024de38);
  if ((iVar2 == 0) && (DAT_18024de30 != 0)) {
    (*__imp_KERNEL32_dll_RemoveVectoredExceptionHandler)();
    (*__imp_KERNEL32_dll_RemoveVectoredContinueHandler)(DAT_18024de48);
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

