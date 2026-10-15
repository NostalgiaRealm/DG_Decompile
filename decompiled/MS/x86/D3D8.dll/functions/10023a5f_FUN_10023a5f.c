/*
 * FUN_10023a5f at 10023a5f
 * undefined __stdcall FUN_10023a5f(void)
 * Address ranges: 10023a5f-10023ac0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023a5f(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  LOCK();
  iVar1 = DAT_100ba2cc + 1;
  UNLOCK();
  bVar3 = DAT_100ba2cc == 0;
  DAT_100ba2cc = iVar1;
  if (bVar3) {
    DAT_100ba2bc = (undefined4 *)FUN_100ad475(0x5c);
    if (DAT_100ba2bc != (undefined4 *)0x0) {
      DAT_100ba2bc[1] = DAT_100ba2b4;
      *DAT_100ba2bc = &PTR_FUN_100b1c48;
      DAT_100ba2bc[2] = 0;
      DAT_100ba2bc[3] = 0;
      DAT_100ba2bc[4] = 0;
      puVar2 = DAT_100ba2bc + 5;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = DAT_100ba2bc + 0xe;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      FUN_10021f04();
      return;
    }
    DAT_100ba2bc = (undefined4 *)0x0;
  }
  return;
}

