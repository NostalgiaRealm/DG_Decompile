/*
 * _grSstOrigin@4 at 1800022d0
 * undefined __cdecl _grSstOrigin@4(uint param_1)
 * Address ranges: 1800022d0-180002373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstOrigin_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x22d0  69  _grSstOrigin@4
                       0x22d0  226  grSstOrigin */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if ((param_1 != *(byte *)((longlong)plVar2 + 0x12a)) && (param_1 < 2)) {
      (**(code **)(*plVar2 + 0x80))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x12a) = (char)param_1;
      plVar2 = *(longlong **)(lVar1 + 0x18);
      if (*(char *)((longlong)plVar2 + 0x112) != '\0') {
        uVar3 = 1;
        if (*(char *)((longlong)plVar2 + 0x112) == '\x01') {
          uVar3 = 2;
        }
        (**(code **)(*plVar2 + 0x188))(plVar2,uVar3);
      }
      plVar2 = *(longlong **)(lVar1 + 0x18);
      (**(code **)(*plVar2 + 0x198))(plVar2,(longlong)plVar2 + 0x11a);
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

