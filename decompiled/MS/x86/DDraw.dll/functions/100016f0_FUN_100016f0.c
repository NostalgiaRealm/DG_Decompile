/*
 * FUN_100016f0 at 100016f0
 * char __stdcall FUN_100016f0(void)
 * Address ranges: 100016f0-1000174f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100016f0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_1006c204;
  cVar4 = '\x01';
  puVar5 = (undefined4 *)(DAT_1006c204 + 0x14);
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
    uVar2 = FUN_10001421(uVar1);
    cVar4 = (char)uVar2;
  }
  if ((*(byte *)(*(int *)(uVar1 + 4) + 0x846) & 2) != 0) {
    if (cVar4 == '\0') goto LAB_10001742;
    uVar2 = FUN_10001577(uVar1);
    cVar4 = (char)uVar2;
  }
  if (cVar4 != '\0') {
    return cVar4;
  }
LAB_10001742:
  FUN_1000161e(uVar1);
  return '\0';
}

