/*
 * _grLoadGammaTable@16 at 180003468
 * undefined __cdecl _grLoadGammaTable@16(undefined8 param_1, longlong param_2, longlong param_3, longlong param_4)
 * Address ranges: 180003468-18000352b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLoadGammaTable_16(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
                    /* 0x3468  58  _grLoadGammaTable@16
                       0x3468  158  grLoadGammaTable */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    lVar4 = 0;
    do {
      *(float *)(*(longlong *)(lVar2 + 0x18) + lVar4 * 0xc + 0x11e8) =
           (float)*(uint *)(param_2 + lVar4 * 4) / 255.0;
      *(float *)(*(longlong *)(lVar2 + 0x18) + lVar4 * 0xc + 0x11ec) =
           (float)*(uint *)(param_3 + lVar4 * 4) / 255.0;
      lVar1 = lVar4 + 1;
      *(float *)(*(longlong *)(lVar2 + 0x18) + lVar4 * 0xc + 0x11f0) =
           (float)*(uint *)(param_4 + lVar4 * 4) / 255.0;
      lVar4 = lVar1;
    } while (lVar1 != 0x100);
    plVar3 = *(longlong **)(lVar2 + 0x18);
    (**(code **)(*plVar3 + 0x68))(plVar3,plVar3 + 0x23d);
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

