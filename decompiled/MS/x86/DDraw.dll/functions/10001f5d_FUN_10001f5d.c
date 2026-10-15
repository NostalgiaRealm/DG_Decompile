/*
 * FUN_10001f5d at 10001f5d
 * undefined __stdcall FUN_10001f5d(int param_1)
 * Address ranges: 10001f5d-1000202a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001f5d(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x228;
  LOCK();
  piVar1 = &DAT_1006c2b4 + param_1 * 0x8a;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    puVar2 = *(undefined4 **)(&DAT_1006c488 + iVar4);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100036d3(puVar2);
      FUN_10060be1(puVar2);
    }
    *(undefined4 *)(&DAT_1006c488 + iVar4) = 0;
    iVar3 = FUN_1000202b(param_1);
    if (iVar3 == 0) {
      (**(code **)(*(int *)(&DAT_1006c2b0)[param_1 * 0x8a] + 0xc))();
      (**(code **)(*(int *)(&DAT_1006c2b0)[param_1 * 0x8a] + 4))();
    }
    (&DAT_1006c2b0)[param_1 * 0x8a] = 0;
    thunk_FUN_10060be1(*(LPVOID *)(&DAT_1006c4b0 + iVar4));
    *(undefined4 *)(&DAT_1006c4b0 + iVar4) = 0;
    *(undefined4 *)(&DAT_1006c4b4 + iVar4) = 0;
    *(undefined4 *)(&DAT_1006c4b8 + iVar4) = 0;
    thunk_FUN_10060be1(*(LPVOID *)(&DAT_1006c4bc + iVar4));
    *(undefined4 *)(&DAT_1006c4bc + iVar4) = 0;
    *(undefined4 *)(&DAT_1006c4c0 + iVar4) = 0;
    *(undefined4 *)(&DAT_1006c4c4 + iVar4) = 0;
    thunk_FUN_10060be1(*(LPVOID *)(&DAT_1006c4c8 + iVar4));
    *(undefined4 *)(&DAT_1006c4c8 + iVar4) = 0;
    *(undefined4 *)(&DAT_1006c4cc + iVar4) = 0;
    *(undefined4 *)(&DAT_1006c4d0 + iVar4) = 0;
  }
  return;
}

