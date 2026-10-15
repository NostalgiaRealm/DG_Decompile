/*
 * FUN_1000494a at 1000494a
 * int __fastcall FUN_1000494a(char * param_1, char * param_2, int param_3)
 * Address ranges: 1000494a-10004970
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000494a(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint3 uVar3;
  
  do {
    cVar1 = *param_1;
    param_3 = param_3 + -1;
    cVar2 = *param_2;
    uVar3 = (uint3)((uint)param_3 >> 8);
    if ((cVar1 == cVar2) && (cVar1 == '\0')) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (cVar1 != cVar2) {
      return (uint)uVar3 << 8;
    }
  } while (param_3 != 0);
  return CONCAT31(uVar3,1);
}

