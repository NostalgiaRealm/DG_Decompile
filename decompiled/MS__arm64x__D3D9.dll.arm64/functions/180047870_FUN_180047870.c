/*
 * FUN_180047870 at 180047870
 * undefined FUN_180047870(void)
 * Address ranges: 180047870-1800478f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047870(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_30 [4];
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  lVar5 = *param_1;
  FUN_180057910(lVar5,uVar2,iVar3,(int)param_1[2]);
  if ((uVar2 < 0x10 && iVar3 == 0xb) &&
     (local_30[0] = *(undefined4 *)(lVar5 + 0xf680),
     (*(byte *)((longlong)local_30 + (longlong)((int)uVar2 >> 3)) >> (ulonglong)(uVar2 & 7) & 1) !=
     0)) {
    lVar1 = lVar5 + (ulonglong)uVar2 * 8;
    lVar4 = lVar1 + 0x8000;
    FUN_180038eb0(lVar5,*(undefined8 *)(lVar1 + 0xfe10));
    *(undefined8 *)(lVar4 + 0x7e10) = 0;
  }
  return;
}

