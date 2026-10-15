/*
 * FUN_1800a3e50 at 1800a3e50
 * undefined FUN_1800a3e50(void)
 * Address ranges: 1800a3e50-1800a403b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800a3e50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar4 = FUN_180001590(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) + iVar4 == 0) {
    iVar5 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar5 == 0) {
      FUN_180003398();
    }
    lVar3 = param_1 + -0xa0;
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = param_1 + -0x18;
    }
    uVar10 = 0;
    if (*(int *)(param_1 + -8) != 0) {
      do {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + -0x10) + uVar10 * 8);
        (**(code **)(*plVar6 + 8))(plVar6,lVar2);
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + -8));
    }
    uVar10 = 0;
    if (*(int *)(param_1 + -0x30) != 0) {
      do {
        uVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x38) + uVar10 * 4);
        thunk_FUN_180102fc0((&DAT_180253348)[uVar9 * 5]);
        (&DAT_180253348)[uVar9 * 5] = 0;
        (&DAT_180253350)[uVar9 * 5] = 0;
        thunk_FUN_180102fc0((&DAT_180253358)[uVar9 * 5]);
        (&DAT_180253358)[uVar9 * 5] = 0;
        (&DAT_180253360)[uVar9 * 5] = 0;
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + -0x30));
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x80));
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x88));
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x78));
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x70));
    uVar7 = thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x68));
    *(undefined8 *)(param_1 + -0x88) = 0;
    *(undefined8 *)(param_1 + -0x80) = 0;
    uVar10 = 0;
    *(undefined8 *)(param_1 + -0x78) = 0;
    *(undefined8 *)(param_1 + -0x70) = 0;
    *(undefined8 *)(param_1 + -0x68) = 0;
    if (*(int *)(param_1 + -0x30) != 0) {
      do {
        if (((*(char *)(param_1 + uVar10 + -0x5a) != '\0') && ((&DAT_180253868)[uVar10 * 0x96] != 0)
            ) && (uVar7 = FUN_180001590(&DAT_180253868 + uVar10 * 0x96), (int)uVar7 == 0)) {
          (**(code **)(*(longlong *)(&DAT_180253860)[uVar10 * 0x4b] + 0x10))();
          puVar8 = (undefined8 *)(&DAT_180253860)[uVar10 * 0x4b];
          uVar7 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            uVar7 = (**(code **)*puVar8)(puVar8,1);
          }
          (&DAT_180253860)[uVar10 * 0x4b] = 0;
        }
        uVar7 = FUN_18001f8b8(uVar7,*(undefined4 *)(*(longlong *)(param_1 + -0x38) + uVar10 * 4));
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + -0x30));
    }
    FUN_180020b38();
    *(undefined1 *)(param_1 + -0x5c) = 0;
    if (lVar3 != 0) {
      FUN_1800a34d0(lVar3);
      FUN_180102fc0(lVar3,0x100);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  return iVar4;
}

