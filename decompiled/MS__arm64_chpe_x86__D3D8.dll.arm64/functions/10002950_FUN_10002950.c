/*
 * FUN_10002950 at 10002950
 * undefined FUN_10002950(void)
 * Address ranges: 10002950-100029ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10002950(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = DAT_1013ced4;
  if (DAT_1013ced4 != 0) {
    do {
      piVar1 = (int *)(DAT_1013ced8 + uVar4 * 4);
      if (*piVar1 == param_1) {
        DAT_1013ced4 = uVar3 - 1;
        uVar3 = DAT_1013ced4;
        if (DAT_1013ced4 - uVar4 != 0) {
          FUN_100ff660(piVar1,piVar1 + 1,((ulonglong)(DAT_1013ced4 - uVar4) & 0x3fffffff) << 2);
          uVar3 = DAT_1013ced4;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_10002b38();
  bVar2 = DAT_1013ced4 == 0;
  if (bVar2) {
    FUN_100fed00(DAT_1013ced8);
    DAT_1013ced8 = 0;
  }
  return bVar2;
}

