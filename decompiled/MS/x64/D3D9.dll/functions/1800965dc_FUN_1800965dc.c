/*
 * FUN_1800965dc at 1800965dc
 * undefined __fastcall FUN_1800965dc(longlong param_1)
 * Address ranges: 1800965dc-18009688e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800965dc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x1cf10) != 0) {
    FUN_180093dac((undefined8 *)(param_1 + 0x1d128));
    FUN_1800fb1f0(*(longlong *)(param_1 + 0x1cf18) + 0x12c0);
    FUN_1800e2ae8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 8,'\0');
    plVar3 = *(longlong **)(param_1 + 0x1d150);
    if (plVar3 != (longlong *)0x0) {
      FUN_1800ea1d0(*(longlong **)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),(ulonglong)plVar3,
                    '\x01');
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    uVar1 = *(uint *)(param_1 + 0x1d158);
    *(undefined8 *)(param_1 + 0x1d150) = 0;
    if (uVar1 != 0xffffffff) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
      FUN_1800e149c(lVar4,uVar1,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
    }
    plVar3 = *(longlong **)(param_1 + 0x1cf20);
    if (plVar3 != (longlong *)0x0) {
      FUN_1800ea1d0(*(longlong **)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),(ulonglong)plVar3,
                    '\x01');
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x28) * 0x1ac0;
    *(undefined8 *)(param_1 + 0x1cf20) = 0;
    *(longlong *)(param_1 + 0x1cf18) = *(longlong *)(param_1 + 0x1cf10) + 0x900 + lVar4;
    FUN_1800e78b0((longlong *)(*(longlong *)(param_1 + 0x1cf10) + 0x22d8 + lVar4),
                  *(longlong *)(param_1 + 0x1d120));
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x1d120));
    *(undefined8 *)(param_1 + 0x1d120) = 0;
    if (*(undefined8 **)(param_1 + 0x1cfc8) != (undefined8 *)0x0) {
      FUN_1800428b0(*(undefined8 **)(param_1 + 0x1cfc8),1);
    }
    *(undefined8 *)(param_1 + 0x1cfc8) = 0;
    if (*(undefined8 **)(param_1 + 0x1cfd0) != (undefined8 *)0x0) {
      FUN_1800428b0(*(undefined8 **)(param_1 + 0x1cfd0),1);
    }
    *(undefined8 *)(param_1 + 0x1cfd0) = 0;
    lVar4 = *(longlong *)(param_1 + 0x1d118);
    if (lVar4 != 0) {
      FUN_1800e7600((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x19d8),lVar4);
    }
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x1cfd8 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1800e7600((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x19d8),lVar2);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x28);
    FUN_1800e7560((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x19d8),
                  *(longlong *)(param_1 + 0x1cf28));
    if (*(ulonglong *)(param_1 + 0x1cf28) != 0) {
      FUN_1800ea030(*(longlong *)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),
                    *(ulonglong *)(param_1 + 0x1cf28),(undefined *)0x0,'\x01');
    }
    plVar3 = *(longlong **)(param_1 + 0x1cf28);
    (**(code **)(*plVar3 + 0x10))();
    *(undefined8 *)(param_1 + 0x1cf28) = 0;
    FUN_1800e6470(plVar3,1,param_1 + 0x1d118);
    FUN_1800e6470(plVar3,0x28,param_1 + 0x1cfd8);
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x1cf10) + 0x618);
    LOCK();
    if (param_1 == *plVar3) {
      *plVar3 = 0;
    }
    UNLOCK();
    FUN_1800f1bc0(*(longlong *)(param_1 + 0x1cf10),*(uint *)(param_1 + 0x28));
    FUN_1800de65c(*(longlong **)(param_1 + 0x1cf10));
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x1d170));
    *(undefined8 *)(param_1 + 0x1d170) = 0;
  }
  return;
}

