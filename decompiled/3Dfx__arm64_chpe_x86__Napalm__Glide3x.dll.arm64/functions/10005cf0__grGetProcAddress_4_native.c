/*
 * _grGetProcAddress@4_native at 10005cf0
 * undefined _grGetProcAddress@4_native(void)
 * Address ranges: 10005cf0-10005d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * _grGetProcAddress_4_native(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar1 = PTR_s_grGetGammaTableExt_100a9160;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    uVar3 = FUN_10083500(param_1,(&PTR_s_grGetGammaTableExt_100a9160)[iVar5 * 3]);
    if ((int)uVar3 == 0) break;
    iVar5 = iVar5 + 1;
    puVar1 = (&PTR_s_grGetGammaTableExt_100a9160)[iVar5 * 3];
  }
  uVar2 = FUN_1000ae60(uVar3,(&DAT_100a9168)[iVar5 * 0xc]);
  uVar4 = FUN_1000a8c8(uVar2);
  if ((uVar4 & 1) == 0) {
    return (undefined *)0x0;
  }
  return (&PTR__grGetGammaTableExt_16_native_100a9164)[iVar5 * 3];
}

