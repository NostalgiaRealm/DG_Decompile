/*
 * FUN_180019840 at 180019840
 * bool __cdecl FUN_180019840(uint param_1, int param_2)
 * Address ranges: 180019840-18001987f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180019840(uint param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 3) {
    bVar1 = true;
  }
  else {
    bVar2 = 0xff;
    if (param_1 < 9) {
      bVar2 = (&DAT_180064bb8)[(int)param_1];
    }
    bVar1 = (bool)(bVar2 & 1) == (param_2 != 1);
  }
  return bVar1;
}

