/*
 * FUN_18002efb0 at 18002efb0
 * bool __fastcall FUN_18002efb0(ulonglong param_1, undefined8 param_2, HDC param_3, undefined4 * param_4)
 * Address ranges: 18002efb0-18002f090
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18002efb0(ulonglong param_1,undefined8 param_2,HDC param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong lVar2;
  LPCRITICAL_SECTION p_Var3;
  longlong lVar4;
  bool bVar5;
  char local_res8 [16];
  
  lVar4 = (param_1 & 0xffffffff) * 600;
  bVar5 = false;
  if ((param_3 == *(HDC *)(&DAT_180112ad8 + lVar4)) &&
     (bVar5 = false, *(HDC *)(&DAT_180112ad8 + lVar4) != (HDC)0x0)) {
    FUN_18002db9c(local_res8);
    piVar1 = (int *)(&DAT_180112ae0 + lVar4);
    *piVar1 = *piVar1 + -1;
    bVar5 = *piVar1 == 0;
    if (bVar5) {
      lVar2 = *(longlong *)(&DAT_180112ad0 + lVar4);
      SelectObject(param_3,*(HGDIOBJ *)(lVar2 + 0x68));
      *(undefined8 *)(lVar2 + 0x68) = 0;
      DeleteDC(param_3);
      *(undefined1 *)(lVar2 + 0x8d) = 1;
      *(undefined8 *)(&DAT_180112ad8 + lVar4) = 0;
    }
    *param_4 = 1;
    p_Var3 = DAT_1801123a8;
    if (local_res8[0] == '\0') {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
    else {
      LeaveCriticalSection(DAT_1801123a8);
      p_Var3 = DAT_1801123a8;
    }
    LOCK();
    p_Var3[1].LockCount = p_Var3[1].LockCount + -1;
    UNLOCK();
  }
  return bVar5;
}

