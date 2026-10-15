/*
 * FUN_10002a70 at 10002a70
 * undefined FUN_10002a70(void)
 * Address ranges: 10002a70-10002b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10002a70(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = DAT_10170ab8;
  if (DAT_10170ab8 != 0) {
    do {
      piVar1 = (int *)(DAT_10170abc + uVar4 * 4);
      if (*piVar1 == param_1) {
        DAT_10170ab8 = uVar3 - 1;
        uVar3 = DAT_10170ab8;
        if (DAT_10170ab8 - uVar4 != 0) {
          FUN_101325a0(piVar1,piVar1 + 1,((ulonglong)(DAT_10170ab8 - uVar4) & 0x3fffffff) << 2);
          uVar3 = DAT_10170ab8;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_10002c58();
  bVar2 = DAT_10170ab8 == 0;
  if (bVar2) {
    FUN_101322d0(DAT_10170abc);
    DAT_10170abc = 0;
  }
  return bVar2;
}

