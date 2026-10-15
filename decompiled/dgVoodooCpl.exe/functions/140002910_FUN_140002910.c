/*
 * FUN_140002910 at 140002910
 * bool __fastcall FUN_140002910(longlong param_1, int param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140002910-140002a0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Inspection export repair: Ghidra originally failed with overlapping input varnodes. Relaxed inferred signature source. Original inferred signature: bool __fastcall FUN_140002910(longlong param_1, int param_2, LPWSTR param_3, int param_4). Machine code unchanged; new types remain inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Inspection export repair: Ghidra originally failed with overlapping input varnodes. Relaxed
   inferred signature source. Original inferred signature: bool __fastcall FUN_140002910(longlong
   param_1, int param_2, LPWSTR param_3, int param_4). Machine code unchanged; new types remain
   inferred. */

bool FUN_140002910(longlong param_1,int param_2,LPWSTR param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  tagMONITORINFO local_188;
  undefined1 local_158 [64];
  undefined1 local_118 [256];
  HMONITOR local_18;
  
  uVar4 = FUN_140002714(param_1,param_2);
  if ((int)uVar4 == -1) {
    bVar3 = FUN_140023e70((HINSTANCE)0x0,param_2 + 0x4300,param_3,param_4);
  }
  else {
    bVar3 = false;
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x88) + 0x210 +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
    cVar2 = (**(code **)(*plVar1 + 0x48))
                      (plVar1,*(undefined4 *)(param_1 + 0x138 + (uVar4 & 0xffffffff) * 8),
                       *(undefined4 *)(param_1 + 0x13c + (uVar4 & 0xffffffff) * 8),local_158);
    if (cVar2 != '\0') {
      local_188.cbSize = 0x28;
      local_188.rcMonitor.left = 0;
      local_188.rcMonitor.top = 0;
      local_188.rcMonitor.right = 0;
      local_188.rcMonitor.bottom = 0;
      local_188.dwFlags = 0;
      local_188.rcWork.left = 0;
      local_188.rcWork.top = 0;
      local_188.rcWork.right = 0;
      local_188.rcWork.bottom = 0;
      GetMonitorInfoW(local_18,&local_188);
      wsprintfW(param_3,L"Adapter: %s\nDisplay output: %s\nDisplay output rect: (%d, %d, %d, %d)",
                local_158,local_118);
      bVar3 = true;
    }
  }
  return bVar3;
}

