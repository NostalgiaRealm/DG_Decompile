/*
 * FUN_180036db0 at 180036db0
 * undefined __cdecl FUN_180036db0(longlong param_1, int param_2, undefined8 param_3, undefined * * * * param_4)
 * Address ranges: 180036db0-180036e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036db0(longlong param_1,int param_2,undefined8 param_3,undefined ****param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (*(char *)(lVar2 + 0x2beb) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)(lVar2 + ((ulonglong)*(uint *)(lVar2 + 0x2a58) + 0x322) * 0x10)
              );
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0x2a58) * 0x10 + 0x3228))
    ;
    *(int *)(lVar2 + 0x2a58) = *(int *)(lVar2 + 0x2a58) + 1;
  }
  FUN_180036e48(param_1,0,param_2,param_4);
  FUN_18001d270(*(longlong *)(param_1 + 0x140));
  return;
}

