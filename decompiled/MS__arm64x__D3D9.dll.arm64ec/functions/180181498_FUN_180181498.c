/*
 * FUN_180181498 at 180181498
 * undefined FUN_180181498(void)
 * Address ranges: 180181498-1801814fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180181498(undefined8 param_1,longlong param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_10 [4];
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    iVar2 = (int)uVar4 >> 3;
    local_10[0] = *(undefined4 *)(param_2 + 8);
    uVar1 = uVar4 & 7;
    uVar4 = uVar4 + 1;
    if ((*(byte *)((longlong)local_10 + (longlong)iVar2) >> (ulonglong)uVar1 & 1) != 0) {
      uVar3 = uVar3 + 1;
    }
  } while (uVar4 < 6);
  *param_3 = (&DAT_18022c4d8)[uVar3];
  *param_4 = (&DAT_18022c4d0)[uVar3];
  return;
}

