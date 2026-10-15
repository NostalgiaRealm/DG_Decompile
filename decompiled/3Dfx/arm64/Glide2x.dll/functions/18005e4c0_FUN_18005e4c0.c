/*
 * FUN_18005e4c0 at 18005e4c0
 * undefined __cdecl FUN_18005e4c0(longlong param_1, uint param_2)
 * Address ranges: 18005e4c0-18005e5ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e4c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + (ulonglong)param_2 * 0x18c0;
  if (*(longlong *)(lVar1 + 0x1f08) != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x1f10) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f10) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1ef8) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1ef8) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f18) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f18) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f00) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f00) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f08) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f08) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1ef0) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1ef0) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f58) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f58) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f48) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f48) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f50) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f50) = 0;
    (**(code **)(**(longlong **)(lVar1 + 8000) + 0x10))();
    *(undefined8 *)(lVar1 + 8000) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f38) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f38) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f30) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f30) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f28) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f28) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x1f20) + 0x10))();
    *(undefined8 *)(lVar1 + 0x1f20) = 0;
  }
  return;
}

