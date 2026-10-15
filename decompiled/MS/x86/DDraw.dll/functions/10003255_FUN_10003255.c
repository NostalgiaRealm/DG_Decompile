/*
 * FUN_10003255 at 10003255
 * undefined __stdcall FUN_10003255(void)
 * Address ranges: 10003255-100032b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003255(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  LOCK();
  iVar1 = DAT_1006c218 + 1;
  UNLOCK();
  bVar3 = DAT_1006c218 == 0;
  DAT_1006c218 = iVar1;
  if (bVar3) {
    DAT_1006c204 = (undefined4 *)FUN_10060bca(0x5c);
    if (DAT_1006c204 != (undefined4 *)0x0) {
      DAT_1006c204[1] = DAT_1006c210;
      *DAT_1006c204 = &PTR_FUN_100625f8;
      DAT_1006c204[2] = 0;
      DAT_1006c204[3] = 0;
      DAT_1006c204[4] = 0;
      puVar2 = DAT_1006c204 + 5;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = DAT_1006c204 + 0xe;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      FUN_100016f0();
      return;
    }
    DAT_1006c204 = (undefined4 *)0x0;
  }
  return;
}

