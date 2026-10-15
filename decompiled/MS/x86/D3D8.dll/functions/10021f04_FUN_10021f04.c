/*
 * FUN_10021f04 at 10021f04
 * char __stdcall FUN_10021f04(void)
 * Address ranges: 10021f04-10021f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10021f04(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_100ba2bc;
  cVar4 = '\x01';
  puVar5 = (undefined4 *)(DAT_100ba2bc + 0x14);
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
    uVar2 = FUN_10021c35(uVar1);
    cVar4 = (char)uVar2;
  }
  if ((*(byte *)(*(int *)(uVar1 + 4) + 0x846) & 2) != 0) {
    if (cVar4 == '\0') goto LAB_10021f56;
    uVar2 = FUN_10021d8b(uVar1);
    cVar4 = (char)uVar2;
  }
  if (cVar4 != '\0') {
    return cVar4;
  }
LAB_10021f56:
  FUN_10021e32(uVar1);
  return '\0';
}

