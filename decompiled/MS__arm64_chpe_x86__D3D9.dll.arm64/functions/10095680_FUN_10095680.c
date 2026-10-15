/*
 * FUN_10095680 at 10095680
 * undefined FUN_10095680(void)
 * Address ranges: 10095680-10095703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10095680(undefined8 param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_10 [4];
  
  iVar3 = 0;
  uVar4 = 0;
  do {
    local_10[0] = *(undefined4 *)(param_2 + 8);
    iVar2 = (int)uVar4 >> 3;
    uVar1 = uVar4 & 7;
    uVar4 = uVar4 + 1;
    if ((*(byte *)((int)local_10 + iVar2) >> (ulonglong)uVar1 & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
  } while (uVar4 < 6);
  *param_3 = *(undefined1 *)(iVar3 + 0x101623f8);
  *param_4 = *(undefined1 *)(iVar3 + 0x101623f0);
  return iVar3;
}

