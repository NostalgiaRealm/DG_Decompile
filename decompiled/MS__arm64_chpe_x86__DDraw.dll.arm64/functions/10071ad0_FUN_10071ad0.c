/*
 * FUN_10071ad0 at 10071ad0
 * undefined FUN_10071ad0(void)
 * Address ranges: 10071ad0-10071ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10071ad0(int param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  if ((DAT_100c2a8c & 1) == 0) {
    DAT_100c2a8c = DAT_100c2a8c | 1;
    uRam100c29c8 = 0x42eccba4669342e0;
    _DAT_100c29c0 = 0x5cac678e53eedcd5;
  }
  uVar1 = (uint)(*(ushort *)(param_1 + 0x2c) >> 1);
  if (7 < uVar1) {
    uVar4 = 0;
    if (uVar1 != 8) {
      do {
        uVar3 = 0;
        do {
          sVar2 = FUN_10092290(*(undefined2 *)(*(int *)(param_1 + 0x30) + uVar4 * 2 + uVar3 * 2));
          if ((&DAT_100c29c0)[uVar3] != (short)(sVar2 - (&DAT_100b5600)[uVar3])) goto LAB_10071b78;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 8);
        if (uVar3 == 8) {
          return 1;
        }
LAB_10071b78:
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1 - 8);
    }
  }
  return 0;
}

