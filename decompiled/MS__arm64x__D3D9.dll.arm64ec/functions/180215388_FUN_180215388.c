/*
 * FUN_180215388 at 180215388
 * undefined FUN_180215388(void)
 * Address ranges: 180215388-180215457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180215388(longlong param_1)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_180258ce8 & 1) == 0) {
    DAT_180258ce8 = DAT_180258ce8 | 1;
    uRam0000000180258a68 = 0x42eccba4669342e0;
    _DAT_180258a60 = 0x5cac678e53eedcd5;
  }
  uVar2 = (uint)(*(ushort *)(param_1 + 0x58) >> 1);
  if (7 < uVar2) {
    uVar5 = 0;
    if (uVar2 != 8) {
      do {
        uVar4 = 0;
        do {
          sVar1 = (&DAT_1802391c0)[uVar4];
          sVar3 = FUN_180223620(*(undefined2 *)
                                 (*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar4 + uVar5) * 2));
          if ((&DAT_180258a60)[uVar4] != (short)(sVar3 - sVar1)) goto LAB_180215428;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
        if (uVar4 == 8) {
          return 1;
        }
LAB_180215428:
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2 - 8);
    }
  }
  return 0;
}

