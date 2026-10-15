/*
 * FUN_140002af8 at 140002af8
 * bool __cdecl FUN_140002af8(longlong param_1, int param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140002af8-140002cef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140002af8(longlong param_1,int param_2,LPWSTR param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  tagMONITORINFO local_180;
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [256];
  HMONITOR local_18;
  
  switch(param_2) {
  case 0x422:
    lVar4 = 0;
    break;
  case 0x423:
    lVar4 = 1;
    break;
  case 0x424:
    lVar4 = 2;
    break;
  case 0x425:
    lVar4 = 3;
    break;
  case 0x426:
    lVar4 = 4;
    break;
  case 0x427:
    lVar4 = 5;
    break;
  case 0x428:
    lVar4 = 6;
    break;
  case 0x429:
    lVar4 = 7;
    break;
  case 0x42a:
    lVar4 = 8;
    break;
  case 0x42b:
    lVar4 = 9;
    break;
  case 0x42c:
    lVar4 = 10;
    break;
  case 0x42d:
    lVar4 = 0xb;
    break;
  case 0x42e:
    lVar4 = 0xc;
    break;
  case 0x42f:
    lVar4 = 0xd;
    break;
  case 0x430:
    lVar4 = 0xe;
    break;
  case 0x431:
    lVar4 = 0xf;
    break;
  case 0x432:
    lVar4 = 0x12;
    break;
  case 0x433:
    lVar4 = 0x13;
    break;
  case 0x434:
    lVar4 = 0x10;
    break;
  case 0x435:
    lVar4 = 0x11;
    break;
  case 0x436:
    lVar4 = 0x14;
    break;
  case 0x437:
    lVar4 = 0x15;
    break;
  case 0x438:
    lVar4 = 0x16;
    break;
  case 0x439:
    lVar4 = 0x17;
    break;
  case 0x43a:
    lVar4 = 0x18;
    break;
  case 0x43b:
    lVar4 = 0x19;
    break;
  case 0x43c:
    lVar4 = 0x1a;
    break;
  case 0x43d:
    lVar4 = 0x1b;
    break;
  case 0x43e:
    lVar4 = 0x1c;
    break;
  case 0x43f:
    lVar4 = 0x1d;
    break;
  case 0x440:
    lVar4 = 0x1e;
    break;
  case 0x441:
    lVar4 = 0x1f;
    break;
  default:
    iVar2 = LoadStringW((HINSTANCE)0x0,param_2 + 0x4300,param_3,param_4);
    return iVar2 != 0;
  }
  lVar4 = param_1 + lVar4 * 8;
  plVar3 = *(longlong **)
            (*(longlong *)(param_1 + 0x88) +
             (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8 + 0x210);
  cVar1 = (**(code **)(*plVar3 + 0x48))
                    (plVar3,*(undefined4 *)(lVar4 + 0x138),*(undefined4 *)(lVar4 + 0x13c),
                     auStack_158);
  if (cVar1 != '\0') {
    local_180.cbSize = 0x28;
    local_180.rcMonitor.right = 0;
    local_180.rcMonitor.bottom = 0;
    local_180.rcMonitor.left = 0;
    local_180.rcMonitor.top = 0;
    local_180.rcWork.right = 0;
    local_180.rcWork.bottom = 0;
    local_180.rcWork.left = 0;
    local_180.rcWork.top = 0;
    local_180.dwFlags = 0;
    GetMonitorInfoW(local_18,&local_180);
    wsprintfW(param_3,L"Adapter: %s\nDisplay output: %s\nDisplay output rect: (%d, %d, %d, %d)",
              wsprintfW_exref,auStack_158,auStack_118,local_180.rcMonitor._0_8_ & 0xffffffff,
              (ulonglong)local_180.rcMonitor._0_8_ >> 0x20,local_180.rcMonitor._8_8_ & 0xffffffff,
              (ulonglong)local_180.rcMonitor._8_8_ >> 0x20);
  }
  return cVar1 != '\0';
}

