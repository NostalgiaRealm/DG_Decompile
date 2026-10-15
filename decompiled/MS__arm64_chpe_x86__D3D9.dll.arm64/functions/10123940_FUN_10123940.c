/*
 * FUN_10123940 at 10123940
 * undefined FUN_10123940(void)
 * Address ranges: 10123940-10123a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10123940(int param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  if ((DAT_10175c78 & 1) == 0) {
    DAT_10175c78 = DAT_10175c78 | 1;
    uRam10175ba8 = 0x42eccba4669342e0;
    _DAT_10175ba0 = 0x5cac678e53eedcd5;
  }
  uVar1 = (uint)(*(ushort *)(param_1 + 0x2c) >> 1);
  if (7 < uVar1) {
    uVar4 = 0;
    if (uVar1 != 8) {
      do {
        uVar3 = 0;
        do {
          sVar2 = FUN_101330c0(*(undefined2 *)(*(int *)(param_1 + 0x30) + uVar4 * 2 + uVar3 * 2));
          if ((&DAT_10175ba0)[uVar3] != (short)(sVar2 - (&DAT_10165ac0)[uVar3])) goto LAB_101239e8;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 8);
        if (uVar3 == 8) {
          return 1;
        }
LAB_101239e8:
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1 - 8);
    }
  }
  return 0;
}

