/*
 * FUN_1004cc90 at 1004cc90
 * undefined FUN_1004cc90(void)
 * Address ranges: 1004cc90-1004cd3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1004cc90(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_50 [12];
  int local_44;
  
  iVar1 = *(int *)(param_1 + 0x40);
  pcVar2 = (&PTR_DAT_100bd658)[iVar1 * 0x6a];
  if (*pcVar2 != -1) {
    iVar3 = 0;
    do {
      FUN_10038b50(param_1,auStack_50,pcVar2[iVar3]);
      pcVar2 = (&PTR_DAT_100bd658)[iVar1 * 0x6a];
      if (local_44 == param_2) {
        return (ulonglong)(byte)pcVar2[iVar3];
      }
      iVar3 = iVar3 + 1;
    } while (pcVar2[iVar3] != -1);
  }
  return 0xffffffff;
}

