/*
 * FUN_1004cef0 at 1004cef0
 * undefined FUN_1004cef0(void)
 * Address ranges: 1004cef0-1004cfa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1004cef0(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  int iVar4;
  int local_40 [8];
  
  iVar1 = *(int *)(param_1 + 0x40);
  pcVar3 = (&PTR_DAT_100bd65c)[iVar1 * 0x6a];
  if (*pcVar3 != -1) {
    iVar4 = 0;
    do {
      FUN_10038b50(param_1,local_40,pcVar3[iVar4]);
      if ((local_40[0] != 0) && (uVar2 = FUN_1004cb90(param_2 + 0x48,local_40,0), (uVar2 & 1) != 0))
      {
        return (ulonglong)(byte)(&PTR_DAT_100bd65c)[iVar1 * 0x6a][iVar4];
      }
      pcVar3 = (&PTR_DAT_100bd65c)[iVar1 * 0x6a];
      iVar4 = iVar4 + 1;
    } while (pcVar3[iVar4] != -1);
  }
  return 0xffffffff;
}

