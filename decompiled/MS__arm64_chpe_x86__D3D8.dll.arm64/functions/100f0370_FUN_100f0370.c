/*
 * FUN_100f0370 at 100f0370
 * undefined FUN_100f0370(void)
 * Address ranges: 100f0370-100f0447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f0370(int param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  if ((DAT_1013d2cc & 1) == 0) {
    DAT_1013d2cc = DAT_1013d2cc | 1;
    uRam1013d1d8 = 0x42eccba4669342e0;
    _DAT_1013d1d0 = 0x5cac678e53eedcd5;
  }
  uVar1 = (uint)(*(ushort *)(param_1 + 0x2c) >> 1);
  if (7 < uVar1) {
    uVar4 = 0;
    if (uVar1 != 8) {
      do {
        uVar3 = 0;
        do {
          sVar2 = FUN_100ffaf0(*(undefined2 *)(*(int *)(param_1 + 0x30) + uVar4 * 2 + uVar3 * 2));
          if ((&DAT_1013d1d0)[uVar3] != (short)(sVar2 - (&DAT_1012ec60)[uVar3])) goto LAB_100f0418;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 8);
        if (uVar3 == 8) {
          return 1;
        }
LAB_100f0418:
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1 - 8);
    }
  }
  return 0;
}

