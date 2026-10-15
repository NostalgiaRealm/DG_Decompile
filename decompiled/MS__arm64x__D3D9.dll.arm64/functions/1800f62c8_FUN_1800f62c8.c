/*
 * FUN_1800f62c8 at 1800f62c8
 * undefined FUN_1800f62c8(void)
 * Address ranges: 1800f62c8-1800f6393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800f62c8(longlong param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((DAT_180258cf8 & 1) == 0) {
    DAT_180258cf8 = DAT_180258cf8 | 1;
    uRam0000000180258b98 = 0x42eccba4669342e0;
    _DAT_180258b90 = 0x5cac678e53eedcd5;
  }
  uVar3 = (uint)(*(ushort *)(param_1 + 0x58) >> 1);
  if (7 < uVar3) {
    uVar6 = 0;
    if (uVar3 != 8) {
      do {
        uVar5 = 0;
        do {
          sVar2 = (&DAT_1802391c0)[uVar5];
          sVar4 = func_0x000180223620(*(undefined2 *)
                                       (*(longlong *)(param_1 + 0x60) +
                                       (ulonglong)((int)uVar5 + uVar6) * 2));
          if ((&DAT_180258b90)[uVar5] != (short)(sVar4 - sVar2)) goto LAB_1800f6364;
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar1;
        } while (uVar1 < 8);
        if (uVar1 == 8) {
          return 1;
        }
LAB_1800f6364:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3 - 8);
    }
  }
  return 0;
}

