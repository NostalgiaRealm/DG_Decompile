/*
 * FUN_1008f940 at 1008f940
 * undefined __stdcall FUN_1008f940(void)
 * Address ranges: 1008f940-1008f964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f940(void)

{
  WNDPROC pWVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  
  pWVar1 = FUN_100cc325();
  if (pWVar1 != (WNDPROC)0x0) {
    pcVar3 = pWVar1 + 0x9c;
    puVar4 = &DAT_100ddf10;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      puVar4 = puVar4 + 1;
    }
    FUN_100cc3aa((undefined4 *)pWVar1);
    return;
  }
  return;
}

