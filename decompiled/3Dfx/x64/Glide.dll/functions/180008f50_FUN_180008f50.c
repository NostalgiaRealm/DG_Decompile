/*
 * FUN_180008f50 at 180008f50
 * int __fastcall FUN_180008f50(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 180008f50-180008feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180008f50(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = *(int *)(param_1 + 0x7c) + param_3;
  if (*(uint *)(param_1 + 0x78) < iVar3 + 1U) {
    uVar1 = iVar3 * 2 + 2;
    puVar2 = (undefined8 *)thunk_FUN_18005db9c((ulonglong)uVar1);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_18005f1b0(puVar2,*(undefined8 **)(param_1 + 0x70),(ulonglong)*(uint *)(param_1 + 0x7c));
      FUN_18005dbc0(*(LPVOID *)(param_1 + 0x70));
    }
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *(uint *)(param_1 + 0x78) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_18005f1b0((undefined8 *)
                  ((ulonglong)*(uint *)(param_1 + 0x7c) + *(longlong *)(param_1 + 0x70)),param_2,
                  (ulonglong)param_3);
    iVar4 = *(int *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x7c) = iVar4 + param_3;
    *(undefined1 *)((ulonglong)(iVar4 + param_3) + *(longlong *)(param_1 + 0x70)) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  return iVar4;
}

