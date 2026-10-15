/*
 * FUN_1800ab488 at 1800ab488
 * LPRECT __fastcall FUN_1800ab488(longlong param_1, LPRECT param_2, undefined4 param_3)
 * Address ranges: 1800ab488-1800ab54a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_1800ab488(longlong param_1,LPRECT param_2,undefined4 param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong *local_res8;
  tagMONITORINFO local_d8 [5];
  HMONITOR local_10;
  
  SetRectEmpty(param_2);
  local_res8 = (longlong *)0x0;
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x30) + 0x38))
                    ((longlong *)**(undefined8 **)(param_1 + 0x30),param_3,&local_res8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_res8 + 0x38))();
    if (-1 < iVar1) {
      FUN_1800fbea0((undefined1 *)&local_d8[0].rcMonitor,0,100);
      local_d8[0].cbSize = 0x68;
      BVar2 = GetMonitorInfoW(local_10,local_d8);
      if (BVar2 != 0) {
        param_2->left = local_d8[0].rcMonitor.left;
        param_2->top = local_d8[0].rcMonitor.top;
        param_2->right = local_d8[0].rcMonitor.right;
        param_2->bottom = local_d8[0].rcMonitor.bottom;
      }
    }
    (**(code **)(*local_res8 + 0x10))();
  }
  return param_2;
}

