/*
 * FUN_1002b0d1 at 1002b0d1
 * undefined __stdcall FUN_1002b0d1(void)
 * Address ranges: 1002b0d1-1002b132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b0d1(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  LOCK();
  iVar1 = DAT_100dea8c + 1;
  UNLOCK();
  bVar3 = DAT_100dea8c == 0;
  DAT_100dea8c = iVar1;
  if (bVar3) {
    DAT_100dea7c = (undefined4 *)FUN_100cfd55(0x5c);
    if (DAT_100dea7c != (undefined4 *)0x0) {
      DAT_100dea7c[1] = DAT_100dea74;
      *DAT_100dea7c = &PTR_FUN_100d50f8;
      DAT_100dea7c[2] = 0;
      DAT_100dea7c[3] = 0;
      DAT_100dea7c[4] = 0;
      puVar2 = DAT_100dea7c + 5;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = DAT_100dea7c + 0xe;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      FUN_1002959c();
      return;
    }
    DAT_100dea7c = (undefined4 *)0x0;
  }
  return;
}

