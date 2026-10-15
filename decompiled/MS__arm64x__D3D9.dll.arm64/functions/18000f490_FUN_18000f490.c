/*
 * FUN_18000f490 at 18000f490
 * undefined FUN_18000f490(void)
 * Address ranges: 18000f490-18000f4fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000f490(longlong param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  bVar2 = false;
  uVar4 = 0;
  do {
    if (bVar2) {
      return;
    }
    lVar3 = uVar4 * 3;
    if (((*(char *)(param_1 + 3 + lVar3) != *param_2) ||
        (*(char *)(param_1 + 4 + lVar3) != param_2[1])) ||
       (bVar2 = true, (*(byte *)(param_1 + 5 + lVar3) & param_2[2]) == 0)) {
      bVar2 = false;
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while (uVar1 < 3);
  return;
}

