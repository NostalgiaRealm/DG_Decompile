/*
 * _grGetProcAddress@4 at 1800033bc
 * undefined * __fastcall _grGetProcAddress@4(byte * param_1)
 * Address ranges: 1800033bc-180003425
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * _grGetProcAddress_4(byte *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  WNDPROC pWVar4;
  uint uVar5;
  ulonglong uVar6;
  
                    /* 0x33bc  42  _grGetProcAddress@4
                       0x33bc  142  grGetProcAddress */
  uVar6 = 0;
  puVar1 = PTR_s_grGetGammaTableExt_18006263f_1_18006c150;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    iVar3 = FUN_180060b28(param_1,(&PTR_s_grGetGammaTableExt_18006263f_1_18006c150)[uVar6 * 3]);
    if (iVar3 == 0) break;
    uVar6 = (ulonglong)((int)uVar6 + 1);
    puVar1 = (&PTR_s_grGetGammaTableExt_18006263f_1_18006c150)[uVar6 * 3];
  }
  uVar5 = (uint)(byte)(&DAT_18006c160)[uVar6 * 0x18];
  pWVar4 = (WNDPROC)FUN_1800069ac();
  bVar2 = FUN_180006754(pWVar4,uVar5);
  if (!bVar2) {
    return (undefined *)0x0;
  }
  return (&PTR__grGetGammaTableExt_16_18006c158)[uVar6 * 3];
}

