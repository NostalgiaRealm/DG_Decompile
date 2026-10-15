/*
 * _grGetProcAddress@4 at 180005e20
 * undefined * __cdecl _grGetProcAddress@4(byte * param_1)
 * Address ranges: 180005e20-180005e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * _grGetProcAddress_4(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  
                    /* 0x5e20  42  _grGetProcAddress@4
                       0x5e20  142  grGetProcAddress */
  uVar4 = 0;
  puVar3 = PTR_s_grGetGammaTableExt_18006559f_1_18006e110;
  while( true ) {
    if (puVar3 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    uVar2 = FUN_1800637c8(param_1,(&PTR_s_grGetGammaTableExt_18006559f_1_18006e110)[uVar4 * 3]);
    if (uVar2 == 0) break;
    uVar4 = (ulonglong)((int)uVar4 + 1);
    puVar3 = (&PTR_s_grGetGammaTableExt_18006559f_1_18006e110)[uVar4 * 3];
  }
  auVar5 = FUN_180008ce0();
  bVar1 = FUN_180008a20(auVar5._0_8_,auVar5._8_4_);
  if ((bVar1 & 1) == 0) {
    return (undefined *)0x0;
  }
  return (&PTR__grGetGammaTableExt_16_18006e118)[uVar4 * 3];
}

