/*
 * _grTexNCCTable@4 at 180003ee0
 * undefined __cdecl _grTexNCCTable@4(undefined4 param_1)
 * Address ranges: 180003ee0-180003f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexNCCTable_4(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x3ee0  87  _grTexNCCTable@4
                       0x3ee0  187  grTexNCCTable */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    iVar3 = 0;
    if (0 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      do {
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x2c0))
                  (*(longlong **)(lVar2 + 0x18),iVar3,param_1);
        lVar1 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        *(char *)(*(longlong *)(lVar2 + 0x18) + lVar1 + 0x147) = (char)param_1;
      } while (iVar3 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833));
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

