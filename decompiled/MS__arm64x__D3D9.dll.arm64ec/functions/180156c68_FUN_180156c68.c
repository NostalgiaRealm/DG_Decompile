/*
 * FUN_180156c68 at 180156c68
 * undefined FUN_180156c68(void)
 * Address ranges: 180156c68-180156ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180156c68(longlong *param_1)

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
  FUN_180167a00(lVar5,uVar2,iVar3,(int)param_1[2]);
  if ((uVar2 < 0x10 && iVar3 == 0xb) &&
     (local_30[0] = *(undefined4 *)(lVar5 + 0xf680),
     (*(byte *)((longlong)local_30 + (longlong)((int)uVar2 >> 3)) >> (ulonglong)(uVar2 & 7) & 1) !=
     0)) {
    lVar1 = lVar5 + (ulonglong)uVar2 * 8;
    lVar4 = lVar1 + 0x8000;
    FUN_180147330(lVar5,*(undefined8 *)(lVar1 + 0xfe10));
    *(undefined8 *)(lVar4 + 0x7e10) = 0;
  }
  return;
}

