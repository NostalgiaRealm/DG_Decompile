/*
 * FUN_100353c0 at 100353c0
 * undefined FUN_100353c0(void)
 * Address ranges: 100353c0-10035427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100353c0(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (uVar2 = 0, DAT_100c2658 != 0)) {
    if (DAT_100c2658 == 0) {
      piVar1 = (int *)&DAT_00000004;
      goto LAB_100353f4;
    }
    do {
      piVar1 = (int *)(DAT_100c2650._4_4_ + uVar2 * 0x10 + 0xc);
LAB_100353f4:
      if (*(int *)(*piVar1 + 8) == param_2) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_100c2658);
  }
  return 1;
}

