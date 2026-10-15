/*
 * FUN_100034c0 at 100034c0
 * undefined FUN_100034c0(void)
 * Address ranges: 100034c0-10003503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100034c0(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  iVar2 = 0;
  while( true ) {
    if (cVar1 == -1) {
      return 0;
    }
    if ((byte)param_1[iVar2] == param_2) break;
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  return 1;
}

