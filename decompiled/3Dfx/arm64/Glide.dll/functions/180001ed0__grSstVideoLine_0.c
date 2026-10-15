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
  
                    /* 0x1ed0  86  _grSstVideoLine@0
                       0x1ed0  247  grSstVideoLine */
  lVar2 = FUN_180017788();
  uVar1 = 0;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x90))();
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return uVar1;
}

