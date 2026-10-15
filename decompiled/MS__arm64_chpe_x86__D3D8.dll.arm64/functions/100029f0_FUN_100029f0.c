/*
 * FUN_100029f0 at 100029f0
 * undefined FUN_100029f0(void)
 * Address ranges: 100029f0-10002a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100029f0(int param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 8) {
    uVar2 = 0x29;
  }
  else {
    uVar2 = 0;
    pcVar1 = (&PTR_DAT_101353a8)[*(int *)(param_1 + 8) * 0x4d];
    if (*pcVar1 != -1) {
      iVar3 = 0;
      do {
        if (*(byte *)((byte)pcVar1[iVar3] + 0x1012af68) == param_2) {
          return *(undefined4 *)(&DAT_1012af90 + (uint)(byte)pcVar1[iVar3] * 4);
        }
        iVar3 = iVar3 + 1;
      } while (pcVar1[iVar3] != -1);
    }
  }
  return uVar2;
}

