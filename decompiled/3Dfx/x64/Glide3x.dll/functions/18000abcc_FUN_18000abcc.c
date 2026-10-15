/*
 * FUN_18000abcc at 18000abcc
 * bool __fastcall FUN_18000abcc(undefined8 param_1, byte * param_2, char param_3)
 * Address ranges: 18000abcc-18000ac3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000abcc(undefined8 param_1,byte *param_2,char param_3)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  
  if (*param_2 < 0xb) {
    bVar1 = false;
    if (((&DAT_1800628b0)[*param_2] & 2) != 0) {
      if (param_2[1] < 0xd) {
        bVar2 = (&DAT_1800628a0)[param_2[1]];
      }
      else {
        bVar2 = 0;
      }
      bVar3 = (bVar2 & 2) != 0;
      bVar1 = param_3 == '\x01' || bVar3;
      if ((bVar2 & 1) == 0) {
        bVar1 = bVar3;
      }
    }
    if ((((&DAT_1800628b0)[*param_2] & 1) != 0) && (param_2[3] == 1)) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

