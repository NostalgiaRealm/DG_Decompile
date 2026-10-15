/*
 * FUN_10002b10 at 10002b10
 * undefined FUN_10002b10(void)
 * Address ranges: 10002b10-10002ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002b10(int param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 8) {
    uVar2 = 0x29;
  }
  else {
    uVar2 = 0;
    pcVar1 = (&PTR_DAT_1016d454)[*(int *)(param_1 + 8) * 100];
    if (*pcVar1 != -1) {
      iVar3 = 0;
      do {
        if (*(byte *)((byte)pcVar1[iVar3] + 0x101607d8) == param_2) {
          return *(undefined4 *)(&DAT_10160810 + (uint)(byte)pcVar1[iVar3] * 4);
        }
        iVar3 = iVar3 + 1;
      } while (pcVar1[iVar3] != -1);
    }
  }
  return uVar2;
}

