/*
 * FUN_1002b133 at 1002b133
 * undefined __stdcall FUN_1002b133(void)
 * Address ranges: 1002b133-1002b17c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b133(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  LOCK();
  iVar1 = DAT_100dea8c + -1;
  UNLOCK();
  bVar3 = DAT_100dea8c == 1;
  DAT_100dea8c = iVar1;
  if ((bVar3) && (DAT_100dea7c != (undefined4 *)0x0)) {
    FUN_100294ca((uint)DAT_100dea7c);
    puVar2 = DAT_100dea7c;
    if (DAT_100dea7c != (undefined4 *)0x0) {
      FUN_100292a7(DAT_100dea7c);
      FUN_100cfd6c(puVar2);
    }
    DAT_100dea7c = (undefined4 *)0x0;
  }
  return;
}

