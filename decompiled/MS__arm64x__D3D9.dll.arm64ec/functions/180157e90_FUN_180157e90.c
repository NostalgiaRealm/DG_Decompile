/*
 * FUN_180157e90 at 180157e90
 * undefined FUN_180157e90(void)
 * Address ranges: 180157e90-180157f4f;180157fa8-18015806f;1801580c8-180158117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180157e90(longlong param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = param_3;
  if (0x200 < (uint)(param_3 - param_2)) {
    iVar1 = param_2 + 0x200;
  }
  lVar6 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar6 + 0x12c0);
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    iVar2 = (iVar1 - param_2) * 0x10;
    lVar3 = FUN_1802218b0(lVar6 + 0x12c0);
    if (lVar3 != 0) {
      FUN_1801042e0(lVar6 + 0x14c0);
      *(ulonglong *)(lVar3 + 8) = (ulonglong)(iVar2 + 0x18);
      *(longlong *)(lVar3 + 0x18) = param_1;
      *(int *)(lVar3 + 0x20) = param_2;
      *(int *)(lVar3 + 0x24) = iVar1;
      uVar5 = lVar3 + 0x2fU & 0xfffffffffffffff8;
      *(ulonglong *)(lVar3 + 0x10) = uVar5;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(uVar5,param_4,iVar2);
    }
    FUN_180221bb0(lVar6 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar6 + 0x12c0);
  }
  plVar4 = *(longlong **)(lVar6 + 0x14a0);
  *plVar4 = param_4;
  plVar4[1] = param_1;
  *(int *)(plVar4 + 2) = param_2;
  *(int *)((longlong)plVar4 + 0x14) = iVar1;
  FUN_180158120();
  FUN_180221bb0(lVar6 + 0x12c0);
  if (iVar1 != param_3) {
    lVar6 = *(longlong *)(param_1 + 0xf6e0);
    FUN_180221850(lVar6 + 0x12c0);
    param_4 = param_4 + (ulonglong)(uint)(iVar1 << 2) * 4;
    if (*(char *)(lVar6 + 0x14c4) != '\0') {
      iVar2 = (param_3 - iVar1) * 0x10;
      lVar3 = FUN_1802218b0(lVar6 + 0x12c0);
      if (lVar3 != 0) {
        FUN_1801042e0(lVar6 + 0x14c0);
        *(ulonglong *)(lVar3 + 8) = (ulonglong)(iVar2 + 0x18);
        *(longlong *)(lVar3 + 0x18) = param_1;
        *(int *)(lVar3 + 0x20) = iVar1;
        *(int *)(lVar3 + 0x24) = param_3;
        uVar5 = lVar3 + 0x2fU & 0xfffffffffffffff8;
        *(ulonglong *)(lVar3 + 0x10) = uVar5;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(uVar5,param_4,iVar2);
      }
      FUN_180221bb0(lVar6 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar6 + 0x12c0);
    }
    plVar4 = *(longlong **)(lVar6 + 0x14a0);
    *plVar4 = param_4;
    plVar4[1] = param_1;
    *(int *)(plVar4 + 2) = iVar1;
    *(int *)((longlong)plVar4 + 0x14) = param_3;
    FUN_180158120();
    FUN_180221bb0(lVar6 + 0x12c0);
  }
  return;
}

