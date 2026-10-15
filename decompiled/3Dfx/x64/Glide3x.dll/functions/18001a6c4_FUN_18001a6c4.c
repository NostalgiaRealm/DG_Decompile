/*
 * FUN_18001a6c4 at 18001a6c4
 * undefined __fastcall FUN_18001a6c4(longlong * param_1)
 * Address ranges: 18001a6c4-18001a745
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a6c4(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)(param_1 + 7);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  FUN_180021ac4(lVar3 + 0x42a0,0,0);
  if (param_1 + 1 != (longlong *)0x0) {
    FUN_18004bf70(*(longlong *)(*(longlong *)(lVar3 + 0x3340) + 0x1508),
                  *(ulonglong *)(lVar3 + 0x3380),*(longlong *)(lVar3 + 0x3340) + 0x16d0,
                  (longlong)(param_1 + 1),uVar1);
  }
  uVar4 = 3;
  do {
    FUN_180028688(lVar3,uVar4,uVar1,iVar2 + uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  return;
}

