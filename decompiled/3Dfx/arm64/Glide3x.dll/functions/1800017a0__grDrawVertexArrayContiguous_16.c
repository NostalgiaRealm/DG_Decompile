/*
 * _grDrawVertexArrayContiguous@16 at 1800017a0
 * undefined __cdecl _grDrawVertexArrayContiguous@16(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 1800017a0-180001823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawVertexArrayContiguous_16
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x17a0  32  _grDrawVertexArrayContiguous@16
                       0x17a0  132  grDrawVertexArrayContiguous */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    FUN_18000b758(*(longlong *)(lVar1 + 0x18));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    (**(code **)(*plVar2 + 0x230))
              (plVar2,*(undefined4 *)((longlong)plVar2 + 0x2a4),param_1,param_2,param_3,param_4);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

