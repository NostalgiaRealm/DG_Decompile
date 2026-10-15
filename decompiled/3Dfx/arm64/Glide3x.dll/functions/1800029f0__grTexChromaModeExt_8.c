/*
 * _grTexChromaModeExt@8 at 1800029f0
 * undefined __cdecl _grTexChromaModeExt@8(int param_1, int param_2)
 * Address ranges: 1800029f0-180002aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexChromaModeExt_8(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
                    /* 0x29f0  70  _grTexChromaModeExt@8
                       0x29f0  170  grTexChromaModeExt */
  lVar3 = FUN_180008ce0();
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar3 + 0x60));
    bVar1 = FUN_180009768(lVar3);
    if (((bVar1 & 1) != 0) &&
       (uVar2 = FUN_18000a930(lVar3), (&DAT_18006f27c)[(ulonglong)uVar2 * 0x20] != '\0')) {
      plVar4 = *(longlong **)(lVar3 + 0x18);
      if (param_2 != *(int *)((longlong)plVar4 + (longlong)param_1 * 0x55 + 0x1c6)) {
        (**(code **)(*plVar4 + 0x280))(plVar4,param_1,param_2);
        *(int *)((longlong)param_1 * 0x55 + *(longlong *)(lVar3 + 0x18) + 0x1c6) = param_2;
      }
    }
    FUN_1800643d0((uint *)(lVar3 + 0x60));
  }
  return;
}

