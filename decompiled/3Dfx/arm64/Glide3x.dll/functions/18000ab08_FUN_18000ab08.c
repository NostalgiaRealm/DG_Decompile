/*
 * FUN_18000ab08 at 18000ab08
 * undefined __cdecl FUN_18000ab08(longlong param_1, int param_2)
 * Address ranges: 18000ab08-18000ac27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ab08(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))(*(longlong **)(param_1 + 0x18),param_2);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0xf0);
    *(char *)(*(longlong *)(param_1 + 0x18) + 0xf0) = (char)param_2;
    if (param_2 == 6) {
      if ((cVar1 != '\x06') &&
         (lVar3 = *(longlong *)(param_1 + 0x18), *(char *)(lVar3 + 0x19e) == '\0')) {
        *(undefined8 *)(lVar3 + 0x196) = *(undefined8 *)(lVar3 + 0x122);
        *(undefined8 *)(lVar3 + 0x18e) = *(undefined8 *)(lVar3 + 0x11a);
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x19e) = 1;
        lVar3 = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(lVar3 + 0x196) = *(undefined8 *)(lVar3 + 0x122);
        *(undefined8 *)(lVar3 + 0x18e) = *(undefined8 *)(lVar3 + 0x11a);
        lVar3 = *(longlong *)(param_1 + 0x18);
        SetRect((LPRECT)(lVar3 + 0x11a),0,0,*(int *)(lVar3 + 0x166),*(int *)(lVar3 + 0x16a));
        plVar2 = *(longlong **)(param_1 + 0x18);
        (**(code **)(*plVar2 + 0x1b8))(plVar2,(longlong)plVar2 + 0x11a);
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (*(char *)(lVar3 + 0x19e) != '\0') {
        *(undefined8 *)(lVar3 + 0x122) = *(undefined8 *)(lVar3 + 0x196);
        *(undefined8 *)(lVar3 + 0x11a) = *(undefined8 *)(lVar3 + 0x18e);
        plVar2 = *(longlong **)(param_1 + 0x18);
        (**(code **)(*plVar2 + 0x1b8))(plVar2,(longlong)plVar2 + 0x11a);
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x19e) = 0;
      }
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

