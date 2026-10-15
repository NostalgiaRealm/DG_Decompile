/*
 * FUN_180007c88 at 180007c88
 * undefined __fastcall FUN_180007c88(longlong param_1, int param_2)
 * Address ranges: 180007c88-180007d9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007c88(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))();
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0xf0);
    *(char *)(*(longlong *)(param_1 + 0x18) + 0xf0) = (char)param_2;
    if (param_2 == 6) {
      if ((cVar1 != '\x06') &&
         (lVar2 = *(longlong *)(param_1 + 0x18), *(char *)(lVar2 + 0x19e) == '\0')) {
        *(undefined8 *)(lVar2 + 0x18e) = *(undefined8 *)(lVar2 + 0x11a);
        *(undefined8 *)(lVar2 + 0x196) = *(undefined8 *)(lVar2 + 0x122);
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x19e) = 1;
        lVar2 = *(longlong *)(param_1 + 0x18);
        *(undefined4 *)(lVar2 + 0x18e) = *(undefined4 *)(lVar2 + 0x11a);
        *(undefined4 *)(lVar2 + 0x192) = *(undefined4 *)(lVar2 + 0x11e);
        *(undefined4 *)(lVar2 + 0x196) = *(undefined4 *)(lVar2 + 0x122);
        *(undefined4 *)(lVar2 + 0x19a) = *(undefined4 *)(lVar2 + 0x126);
        lVar2 = *(longlong *)(param_1 + 0x18);
        SetRect((LPRECT)(lVar2 + 0x11a),0,0,*(int *)(lVar2 + 0x166),*(int *)(lVar2 + 0x16a));
        plVar3 = *(longlong **)(param_1 + 0x18);
        (**(code **)(*plVar3 + 0x1b8))(plVar3,(longlong)plVar3 + 0x11a);
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (*(char *)(lVar2 + 0x19e) != '\0') {
        *(undefined4 *)(lVar2 + 0x11a) = *(undefined4 *)(lVar2 + 0x18e);
        *(undefined4 *)(lVar2 + 0x11e) = *(undefined4 *)(lVar2 + 0x192);
        *(undefined4 *)(lVar2 + 0x122) = *(undefined4 *)(lVar2 + 0x196);
        *(undefined4 *)(lVar2 + 0x126) = *(undefined4 *)(lVar2 + 0x19a);
        plVar3 = *(longlong **)(param_1 + 0x18);
        (**(code **)(*plVar3 + 0x1b8))(plVar3,(longlong)plVar3 + 0x11a);
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x19e) = 0;
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

