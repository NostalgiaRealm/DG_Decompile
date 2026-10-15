/*
 * _grSstOrigin@4 at 180002388
 * undefined __cdecl _grSstOrigin@4(uint param_1)
 * Address ranges: 180002388-18000242b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstOrigin_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x2388  65  _grSstOrigin@4
                       0x2388  165  grSstOrigin */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if ((param_1 != *(byte *)((longlong)plVar2 + 0x12a)) && (param_1 < 2)) {
      (**(code **)(*plVar2 + 0x88))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x12a) = (char)param_1;
      plVar2 = *(longlong **)(lVar1 + 0x18);
      if (*(char *)((longlong)plVar2 + 0x112) != '\0') {
        uVar3 = 1;
        if (*(char *)((longlong)plVar2 + 0x112) == '\x01') {
          uVar3 = 2;
        }
        (**(code **)(*plVar2 + 0x1a8))(plVar2,uVar3);
      }
      plVar2 = *(longlong **)(lVar1 + 0x18);
      (**(code **)(*plVar2 + 0x1b8))(plVar2,(longlong)plVar2 + 0x11a);
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

