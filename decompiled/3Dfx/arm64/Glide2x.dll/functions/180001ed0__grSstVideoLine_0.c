/*
 * _grSstVideoLine@0 at 180001ed0
 * undefined4 __cdecl _grSstVideoLine@0(void)
 * Address ranges: 180001ed0-180001f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _grSstVideoLine_0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
                    /* 0x1ed0  80  _grSstVideoLine@0
                       0x1ed0  237  grSstVideoLine */
  lVar2 = FUN_180016878();
  uVar1 = 0;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x90))();
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return uVar1;
}

