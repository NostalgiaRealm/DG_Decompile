/*
 * FUN_100395c8 at 100395c8
 * undefined FUN_100395c8(void)
 * Address ranges: 100395c8-10039693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100395c8(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = FUN_10039570(param_1);
  piVar1 = (int *)(param_1 + 0x11c);
  if (cVar3 == '\0') {
    iVar2 = *piVar1;
    *param_2 = *(undefined4 *)(&DAT_100be2e8 + iVar2 * 0x228);
    uVar4 = *(undefined4 *)(&DAT_100be2cc + iVar2 * 0x45);
  }
  else {
    *param_2 = 1;
    uVar4 = 1;
  }
  param_2[1] = uVar4;
  if (cVar3 == '\0') {
    uVar4 = *(undefined4 *)(&DAT_100be2ec + *piVar1 * 0x228);
  }
  else {
    uVar4 = 1;
  }
  param_2[2] = uVar4;
  if (cVar3 == '\0') {
    uVar4 = *(undefined4 *)((int)&DAT_100be2cc + *piVar1 * 0x228 + 4);
  }
  else {
    uVar4 = 1;
  }
  param_2[3] = uVar4;
  return param_2;
}

