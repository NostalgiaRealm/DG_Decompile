/*
 * FUN_10023ac1 at 10023ac1
 * undefined __stdcall FUN_10023ac1(void)
 * Address ranges: 10023ac1-10023b0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023ac1(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  LOCK();
  iVar1 = DAT_100ba2cc + -1;
  UNLOCK();
  bVar3 = DAT_100ba2cc == 1;
  DAT_100ba2cc = iVar1;
  if ((bVar3) && (DAT_100ba2bc != (undefined4 *)0x0)) {
    FUN_10021e32((uint)DAT_100ba2bc);
    puVar2 = DAT_100ba2bc;
    if (DAT_100ba2bc != (undefined4 *)0x0) {
      FUN_10021c0f(DAT_100ba2bc);
      FUN_100ad48c(puVar2);
    }
    DAT_100ba2bc = (undefined4 *)0x0;
  }
  return;
}

