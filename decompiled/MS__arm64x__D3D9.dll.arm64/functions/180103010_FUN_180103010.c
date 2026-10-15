/*
 * FUN_180103010 at 180103010
 * undefined FUN_180103010(void)
 * Address ranges: 180103010-18010306f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180103010(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  if (DAT_18024d8ec != 0) {
    puVar1 = DAT_18024d8e0 + DAT_18024d8ec;
    puVar2 = DAT_18024d8e0;
    while (puVar2 < puVar1) {
      puVar4 = puVar2 + 1;
      pcVar3 = (code *)*puVar2;
      puVar2 = puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
    }
  }
  FUN_180103118(DAT_18024d8e0);
  return;
}

