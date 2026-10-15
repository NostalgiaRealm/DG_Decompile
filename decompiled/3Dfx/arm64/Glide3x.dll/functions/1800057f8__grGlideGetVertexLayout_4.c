/*
 * _grGlideGetVertexLayout@4 at 1800057f8
 * undefined __cdecl _grGlideGetVertexLayout@4(void)
 * Address ranges: 1800057f8-180005837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _grGlideGetVertexLayout_4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *extraout_x11;
  
                    /* 0x57f8  45  _grGlideGetVertexLayout@4
                       0x57f8  145  grGlideGetVertexLayout */
  FUN_180008ce0();
  uVar3 = uRam000000018006f9f8;
  uVar2 = _DAT_18006f9f0;
  uVar1 = _DAT_18006f9e0;
  extraout_x11[1] = uRam000000018006f9e8;
  *extraout_x11 = uVar1;
  extraout_x11[3] = uVar3;
  extraout_x11[2] = uVar2;
  uVar3 = uRam000000018006fa18;
  uVar2 = _DAT_18006fa10;
  uVar1 = _DAT_18006fa00;
  extraout_x11[5] = uRam000000018006fa08;
  extraout_x11[4] = uVar1;
  extraout_x11[7] = uVar3;
  extraout_x11[6] = uVar2;
  uVar3 = uRam000000018006fa38;
  uVar2 = _DAT_18006fa30;
  uVar1 = _DAT_18006fa20;
  extraout_x11[9] = uRam000000018006fa28;
  extraout_x11[8] = uVar1;
  extraout_x11[0xb] = uVar3;
  extraout_x11[10] = uVar2;
  uVar1 = _DAT_18006fa40;
  extraout_x11[0xd] = uRam000000018006fa48;
  extraout_x11[0xc] = uVar1;
  return;
}

