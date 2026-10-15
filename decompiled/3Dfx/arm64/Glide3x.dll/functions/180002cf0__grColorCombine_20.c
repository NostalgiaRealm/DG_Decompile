/*
 * _grColorCombine@20 at 180002cf0
 * undefined __cdecl _grColorCombine@20(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 180002cf0-180002e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grColorCombine_20(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2cf0  15  _grColorCombine@20
                       0x2cf0  115  grColorCombine */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if ((((param_1 != *(byte *)((longlong)plVar2 + 0x156)) ||
         (param_2 != *(byte *)((longlong)plVar2 + 0x157))) || (param_3 != *(byte *)(plVar2 + 0x2b)))
       || (((param_4 != *(byte *)((longlong)plVar2 + 0x159) ||
            (param_5 != *(uint *)((longlong)plVar2 + 0x15a))) ||
           (*(char *)((longlong)plVar2 + 0x29e) != '\0')))) {
      (**(code **)(*plVar2 + 400))(plVar2,param_1,param_2,param_3,param_4,param_5,0);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x156) = (char)param_1;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x157) = (char)param_2;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x158) = (char)param_3;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x159) = (char)param_4;
      *(uint *)(*(longlong *)(lVar1 + 0x18) + 0x15a) = param_5 & 0xff;
      *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x29e) = 0;
      FUN_18000a6b8(lVar1);
      *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x2a4) = 0;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

