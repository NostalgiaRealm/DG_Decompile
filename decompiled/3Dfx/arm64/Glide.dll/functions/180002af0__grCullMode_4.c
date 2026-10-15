/*
 * _grCullMode@4 at 180002af0
 * undefined __cdecl _grCullMode@4(uint param_1)
 * Address ranges: 180002af0-180002b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grCullMode_4(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x2af0  26  _grCullMode@4
                       0x2af0  187  grCullMode */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    plVar3 = *(longlong **)(lVar2 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar3 + 0x112)) {
      if (param_1 == 0) {
        param_1 = 0;
      }
      else if ((*(char *)((longlong)plVar3 + 0x12a) == '\x01') &&
              (bVar1 = param_1 == 1, param_1 = 1, bVar1)) {
        param_1 = 2;
      }
      (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
      *(char *)(*(longlong *)(lVar2 + 0x18) + 0x112) = (char)param_1;
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

