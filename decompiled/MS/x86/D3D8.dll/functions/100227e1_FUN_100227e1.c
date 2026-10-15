/*
 * FUN_100227e1 at 100227e1
 * undefined __stdcall FUN_100227e1(int param_1)
 * Address ranges: 100227e1-100228c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100227e1(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x228;
  LOCK();
  piVar2 = &DAT_100ba724 + param_1 * 0x8a;
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1) {
    puVar1 = *(undefined4 **)(&DAT_100ba8f8 + iVar5);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_10023f5e(puVar1);
      FUN_100ad48c(puVar1);
    }
    piVar2 = (int *)(&DAT_100ba720)[param_1 * 0x8a];
    *(undefined4 *)(&DAT_100ba8f8 + iVar5) = 0;
    iVar4 = 0;
    uVar3 = 0;
    do {
      if ((int *)(&DAT_100ba720)[uVar3 * 0x8a] == piVar2) {
        iVar4 = iVar4 + (&DAT_100ba724)[uVar3 * 0x8a];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x20);
    if (iVar4 == 0) {
      (**(code **)(*piVar2 + 0xc))();
      (**(code **)(*(int *)(&DAT_100ba720)[param_1 * 0x8a] + 4))();
    }
    (&DAT_100ba720)[param_1 * 0x8a] = 0;
    thunk_FUN_100ad48c(*(LPVOID *)(&DAT_100ba920 + iVar5));
    *(undefined4 *)(&DAT_100ba920 + iVar5) = 0;
    *(undefined4 *)(&DAT_100ba924 + iVar5) = 0;
    *(undefined4 *)(&DAT_100ba928 + iVar5) = 0;
    thunk_FUN_100ad48c(*(LPVOID *)(&DAT_100ba92c + iVar5));
    *(undefined4 *)(&DAT_100ba92c + iVar5) = 0;
    *(undefined4 *)(&DAT_100ba930 + iVar5) = 0;
    *(undefined4 *)(&DAT_100ba934 + iVar5) = 0;
    thunk_FUN_100ad48c(*(LPVOID *)(&DAT_100ba938 + iVar5));
    *(undefined4 *)(&DAT_100ba938 + iVar5) = 0;
    *(undefined4 *)(&DAT_100ba93c + iVar5) = 0;
    *(undefined4 *)(&DAT_100ba940 + iVar5) = 0;
  }
  return;
}

