/*
 * FUN_1002959c at 1002959c
 * char __stdcall FUN_1002959c(void)
 * Address ranges: 1002959c-100295fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1002959c(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_100dea7c;
  cVar4 = '\x01';
  puVar5 = (undefined4 *)(DAT_100dea7c + 0x14);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)(uVar1 + 0x38);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if ((*(byte *)(*(int *)(uVar1 + 4) + 0x846) & 1) != 0) {
    uVar2 = FUN_100292cd(uVar1);
    cVar4 = (char)uVar2;
  }
  if ((*(byte *)(*(int *)(uVar1 + 4) + 0x846) & 2) != 0) {
    if (cVar4 == '\0') goto LAB_100295ee;
    uVar2 = FUN_10029423(uVar1);
    cVar4 = (char)uVar2;
  }
  if (cVar4 != '\0') {
    return cVar4;
  }
LAB_100295ee:
  FUN_100294ca(uVar1);
  return '\0';
}

