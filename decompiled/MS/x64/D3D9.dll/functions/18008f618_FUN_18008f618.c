/*
 * FUN_18008f618 at 18008f618
 * undefined4 __fastcall FUN_18008f618(longlong param_1, undefined8 param_2, int param_3)
 * Address ranges: 18008f618-18008f6ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18008f618(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_38 [8];
  undefined4 local_30;
  
  FUN_1800dfe48(*(longlong *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  bVar2 = FUN_18008f3f8(param_1 + -0xe0);
  uVar4 = 0;
  if (bVar2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
    iVar3 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*(undefined8 *)(param_1 + -0x28),
                       param_3 * *(int *)(param_1 + -0xa4) + (int)param_2,3,0,local_38);
    uVar4 = 0;
    if (-1 < iVar3) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
      (**(code **)(*plVar1 + 0x78))
                (plVar1,*(undefined8 *)(param_1 + -0x28),
                 (int)param_2 + param_3 * *(int *)(param_1 + -0xa4));
      uVar4 = local_30;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + -0x90) + 0x620));
  return uVar4;
}

