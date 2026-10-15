/*
 * _grLfbLock@24 at 180003f48
 * bool __cdecl _grLfbLock@24(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined8 param_6)
 * Address ranges: 180003f48-180003fef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbLock_24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
                    /* 0x3f48  54  _grLfbLock@24
                       0x3f48  211  grLfbLock */
  lVar3 = FUN_180016878();
  bVar1 = false;
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar3 + 0x60));
    cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0xe8))
                      (*(longlong **)(lVar3 + 0x18),param_1,param_2,param_3,param_4,param_5 != 0,
                       param_6,0);
    bVar1 = cVar2 != '\0';
    FUN_1800608a0((uint *)(lVar3 + 0x60));
  }
  return bVar1;
}

