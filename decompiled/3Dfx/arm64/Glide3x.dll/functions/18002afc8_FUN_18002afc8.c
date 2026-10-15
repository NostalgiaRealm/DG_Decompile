/*
 * FUN_18002afc8 at 18002afc8
 * undefined __cdecl FUN_18002afc8(longlong param_1, undefined4 param_2)
 * Address ranges: 18002afc8-18002afcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002afc8(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined ****in_x3;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (*(char *)(lVar2 + 0x2c83) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)(lVar2 + ((ulonglong)*(uint *)(lVar2 + 0x2af0) + 0x33a) * 0x10)
              );
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0x2af0) * 0x10 + 0x33a8))
    ;
    *(int *)(lVar2 + 0x2af0) = *(int *)(lVar2 + 0x2af0) + 1;
  }
  FUN_18002b068(param_1,0,param_2,in_x3);
  FUN_1800109c0(*(longlong *)(param_1 + 0x140));
  return;
}

