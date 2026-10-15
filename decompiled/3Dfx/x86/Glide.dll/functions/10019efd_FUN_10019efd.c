/*
 * FUN_10019efd at 10019efd
 * bool __stdcall FUN_10019efd(byte * param_1, char param_2)
 * Address ranges: 10019efd-10019f58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10019efd(byte *param_1,char param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (*param_1 < 0xb) {
    bVar2 = false;
    if (((&DAT_10051a90)[*param_1] & 2) != 0) {
      if (param_1[1] < 0xd) {
        bVar1 = (&DAT_10051a80)[param_1[1]];
      }
      else {
        bVar1 = 0;
      }
      bVar2 = (bVar1 & 2) != 0;
      if ((bVar1 & 1) != 0) {
        bVar2 = bVar2 || param_2 == '\x01';
      }
    }
    if (((&DAT_10051a90)[*param_1] & 1) != 0) {
      bVar2 = (bool)(bVar2 | param_1[3] == 1);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

