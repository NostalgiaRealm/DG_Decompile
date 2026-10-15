/*
 * _grDrawPoint@4 at 1800013b0
 * undefined __cdecl _grDrawPoint@4(undefined8 param_1)
 * Address ranges: 1800013b0-18000140b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPoint_4(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x13b0  29  _grDrawPoint@4
                       0x13b0  129  grDrawPoint */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    FUN_18000b758(*(longlong *)(lVar1 + 0x18));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    (**(code **)(*plVar2 + 0x210))(plVar2,*(undefined4 *)((longlong)plVar2 + 0x2a4),param_1);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

