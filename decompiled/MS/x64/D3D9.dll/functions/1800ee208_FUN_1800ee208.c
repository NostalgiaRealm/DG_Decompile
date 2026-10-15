/*
 * FUN_1800ee208 at 1800ee208
 * byte __fastcall FUN_1800ee208(byte param_1, byte param_2)
 * Address ranges: 1800ee208-1800ee25b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800ee208(byte param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar4 = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    for (; (param_2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  if (param_2 != 0) {
    do {
      cVar2 = (char)uVar5;
      cVar3 = (char)iVar1;
      if ((param_2 >> (uVar5 & 0x1f) & 1) != 0) {
        cVar3 = cVar2;
      }
      uVar5 = uVar5 + 1;
      bVar4 = bVar4 | (param_1 >> (cVar3 * '\x02' & 0x1fU) & 3) << (cVar2 * '\x02' & 0x1fU);
    } while (uVar5 < 4);
  }
  return bVar4;
}

