/*
 * FUN_100032b7 at 100032b7
 * undefined __stdcall FUN_100032b7(void)
 * Address ranges: 100032b7-10003300
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100032b7(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  LOCK();
  iVar1 = DAT_1006c218 + -1;
  UNLOCK();
  bVar3 = DAT_1006c218 == 1;
  DAT_1006c218 = iVar1;
  if ((bVar3) && (DAT_1006c204 != (undefined4 *)0x0)) {
    FUN_1000161e((uint)DAT_1006c204);
    puVar2 = DAT_1006c204;
    if (DAT_1006c204 != (undefined4 *)0x0) {
      FUN_100013fb(DAT_1006c204);
      FUN_10060be1(puVar2);
    }
    DAT_1006c204 = (undefined4 *)0x0;
  }
  return;
}

