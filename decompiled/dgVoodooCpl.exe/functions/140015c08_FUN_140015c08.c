/*
 * FUN_140015c08 at 140015c08
 * int __fastcall FUN_140015c08(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140015c08-140015ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_140015c08(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = *(int *)(param_1 + 0x7c) + param_3;
  if (*(uint *)(param_1 + 0x78) < iVar3 + 1U) {
    uVar1 = iVar3 * 2 + 2;
    puVar2 = (undefined8 *)thunk_FUN_14002423c((ulonglong)uVar1);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140024620(puVar2,*(undefined8 **)(param_1 + 0x70),(ulonglong)*(uint *)(param_1 + 0x7c));
      FUN_140024260(*(LPVOID *)(param_1 + 0x70));
    }
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *(uint *)(param_1 + 0x78) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_140024620((undefined8 *)
                  ((ulonglong)*(uint *)(param_1 + 0x7c) + *(longlong *)(param_1 + 0x70)),param_2,
                  (ulonglong)param_3);
    iVar4 = *(int *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x7c) = iVar4 + param_3;
    *(undefined1 *)((ulonglong)(iVar4 + param_3) + *(longlong *)(param_1 + 0x70)) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  return iVar4;
}

