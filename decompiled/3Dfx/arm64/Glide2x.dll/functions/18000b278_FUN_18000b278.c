/*
 * FUN_18000b278 at 18000b278
 * int __cdecl FUN_18000b278(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 18000b278-18000b337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18000b278(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = *(int *)(param_1 + 0x7c) + param_3;
  if (*(uint *)(param_1 + 0x78) < iVar2 + 1U) {
    uVar1 = iVar2 * 2 + 2;
    puVar3 = (undefined8 *)thunk_FUN_18005fb88((ulonglong)uVar1);
    if (puVar3 != (undefined8 *)0x0) {
      thunk_FUN_180001218(puVar3,*(undefined8 **)(param_1 + 0x70),
                          (ulonglong)*(uint *)(param_1 + 0x7c));
      thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x70));
    }
    *(undefined8 **)(param_1 + 0x70) = puVar3;
    *(uint *)(param_1 + 0x78) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    thunk_FUN_180001218((undefined8 *)
                        (*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x7c)),
                        param_2,(ulonglong)param_3);
    iVar4 = *(int *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x7c) = iVar4 + param_3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(iVar4 + param_3)) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  return iVar4;
}

