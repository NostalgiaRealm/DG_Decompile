/*
 * _grGlideSetVertexLayout@4 at 180005838
 * undefined __cdecl _grGlideSetVertexLayout@4(undefined8 * param_1)
 * Address ranges: 180005838-1800058af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _grGlideSetVertexLayout_4(undefined8 *param_1)

{
  longlong lVar1;
  
                    /* 0x5838  48  _grGlideSetVertexLayout@4
                       0x5838  148  grGlideSetVertexLayout */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x240))(*(longlong **)(lVar1 + 0x18),param_1);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  uRam000000018006f9e8 = param_1[1];
  _DAT_18006f9e0 = *param_1;
  uRam000000018006f9f8 = param_1[3];
  _DAT_18006f9f0 = param_1[2];
  uRam000000018006fa08 = param_1[5];
  _DAT_18006fa00 = param_1[4];
  uRam000000018006fa18 = param_1[7];
  _DAT_18006fa10 = param_1[6];
  uRam000000018006fa28 = param_1[9];
  _DAT_18006fa20 = param_1[8];
  uRam000000018006fa38 = param_1[0xb];
  _DAT_18006fa30 = param_1[10];
  uRam000000018006fa48 = param_1[0xd];
  _DAT_18006fa40 = param_1[0xc];
  return;
}

