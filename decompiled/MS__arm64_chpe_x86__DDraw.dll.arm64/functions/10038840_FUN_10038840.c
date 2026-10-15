/*
 * FUN_10038840 at 10038840
 * undefined FUN_10038840(void)
 * Address ranges: 10038840-10038893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10038840(int param_1,uint param_2,ulonglong *param_3)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x11c) * 0x228;
  uVar3 = *(ulonglong *)(&DAT_100be348 + iVar1);
  bVar2 = param_2 <= uVar3;
  if (bVar2) {
    *(ulonglong *)(&DAT_100be348 + iVar1) = uVar3 - param_2;
    uVar3 = *(ulonglong *)(&DAT_100be348 + *(int *)(param_1 + 0x11c) * 0x228);
  }
  *param_3 = uVar3;
  return bVar2;
}

