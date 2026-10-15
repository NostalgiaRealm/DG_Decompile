/*
 * FUN_14000a740 at 14000a740
 * ulonglong __cdecl FUN_14000a740(ulonglong param_1, undefined8 param_2, undefined8 param_3, LPARAM param_4, undefined8 param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 14000a740-14000ac77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_14000a740(ulonglong param_1,undefined8 param_2,undefined8 param_3,LPARAM param_4,
                       undefined8 param_5,int *param_6,longlong param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  HWND pHVar7;
  LRESULT LVar8;
  HWND hWnd;
  undefined8 *puVar9;
  char *lpText;
  undefined4 *puVar10;
  uint uVar11;
  LPARAM LVar12;
  undefined **local_940 [2];
  undefined1 local_930;
  undefined **local_928;
  undefined8 local_920;
  undefined4 local_918;
  char *local_910;
  undefined4 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined1 local_8d8;
  undefined4 local_8d4;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined4 local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined4 local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined4 local_888;
  int aiStack_720 [132];
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined4 local_4d0;
  undefined8 uStack_4cc;
  undefined4 local_4c4;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined2 local_4a0;
  undefined8 uStack_49e;
  undefined8 uStack_496;
  undefined8 uStack_48e;
  undefined8 uStack_486;
  undefined8 uStack_47e;
  undefined8 uStack_476;
  undefined8 uStack_46e;
  undefined2 local_466;
  undefined1 local_464;
  undefined8 auStack_460 [66];
  undefined8 auStack_250 [66];
  
  if (*(char *)(param_1 + 0x1e28) == '\0') {
    return param_1;
  }
  if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
    param_4 = *(LPARAM *)(param_1 + 0x18);
    SendMessageW(*(HWND *)(param_1 + 0x1b48),0x402,0,param_4);
    *(undefined8 *)(param_1 + 7000) = 0;
    *(undefined8 *)(param_1 + 0x1b48) = 0;
    *(undefined8 *)(param_1 + 0x1b50) = 0;
  }
  uVar6 = FUN_14000ffb8(param_1,0x402);
  uVar6 = FUN_14000fd78(param_1,0x402,uVar6 & 0xffffffff);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x1b38) + (uVar6 & 0xffffffff) * 0x218);
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar7,(uint)(iVar2 == 0));
  FUN_1400090b0((undefined8 *)aiStack_720);
  uStack_4cc = 0xffffffffffffffff;
  local_4c4 = 0xffffffff;
  uStack_46e = 0x101010101010101;
  local_4d0 = *(undefined4 *)(param_1 + 0x1db0);
  local_4a0 = 0x101;
  local_466 = 0x101;
  local_510 = *(undefined8 *)(param_1 + 0x1d70);
  uStack_508 = *(undefined8 *)(param_1 + 0x1d78);
  local_464 = 1;
  uStack_4b8 = 0x101010101010101;
  local_4c0 = 0x101010101010101;
  uStack_4a8 = 0x101010101010101;
  uStack_4b0 = 0x101010101010101;
  uStack_496 = 0x101010101010101;
  uStack_49e = 0x101010101010101;
  uStack_486 = 0x101010101010101;
  uStack_48e = 0x101010101010101;
  uStack_476 = 0x101010101010101;
  uStack_47e = 0x101010101010101;
  local_500 = *(undefined8 *)(param_1 + 0x1d80);
  uStack_4f8 = *(undefined8 *)(param_1 + 0x1d88);
  local_4f0 = *(undefined8 *)(param_1 + 0x1d90);
  uStack_4e8 = *(undefined8 *)(param_1 + 0x1d98);
  local_4e0 = *(undefined8 *)(param_1 + 0x1da0);
  uStack_4d8 = *(undefined8 *)(param_1 + 0x1da8);
  uVar6 = FUN_14000ffb8(param_1,0x402);
  uVar6 = FUN_14000fd78(param_1,0x402,uVar6 & 0xffffffff);
  pHVar7 = *(HWND *)(*(longlong *)(param_1 + 0x1b38) + (uVar6 & 0xffffffff) * 0x218 + 8);
  if (pHVar7 != (HWND)0x0) {
    uVar11 = 0;
    LVar8 = SendMessageW(pHVar7,0x40a,0,0);
    hWnd = *(HWND *)(param_1 + 0x18);
    if ((int)LVar8 == 0) {
      LVar8 = SendMessageW(pHVar7,0x401,0,(LPARAM)hWnd);
      if (LVar8 == 0) {
LAB_14000aafc:
        lpText = "Cannot attach to the specified application!";
        hWnd = *(HWND *)(param_1 + 0x18);
        goto LAB_14000ab18;
      }
      LVar12 = *(LPARAM *)(param_1 + 0x18);
      DVar4 = GetCurrentProcessId();
      LVar8 = SendMessageW(pHVar7,0x403,(ulonglong)DVar4,LVar12);
      LVar12 = *(LPARAM *)(param_1 + 0x18);
      *(LRESULT *)(param_1 + 0x1b50) = LVar8;
      DVar4 = GetCurrentProcessId();
      LVar8 = SendMessageW(pHVar7,0x404,(ulonglong)DVar4,LVar12);
      *(LRESULT *)(param_1 + 7000) = LVar8;
      if ((*(longlong *)(param_1 + 0x1b50) == 0) || (LVar8 == 0)) goto LAB_14000aafc;
      param_4 = *(LPARAM *)(param_1 + 0x18);
      *(HWND *)(param_1 + 0x1b48) = pHVar7;
      LVar8 = SendMessageW(pHVar7,0x405,0,param_4);
      if (LVar8 == 0) goto LAB_14000ab3c;
      puVar1 = (undefined4 *)0x0;
      if (param_1 != 0) {
        puVar1 = (undefined4 *)(param_1 + 0x88);
      }
      FUN_1400090b0(auStack_250);
      local_940[0] = &PTR_FUN_140028808;
      local_930 = 0;
      uVar6 = FUN_14001cc98(aiStack_720,(longlong *)local_940);
      uVar11 = (uint)uVar6 & 0xff;
      if ((uVar6 & 0xff) == 0) {
        local_928 = &PTR_FUN_140029220;
        local_920 = 0;
        local_918 = 0;
        local_910 = (char *)0x0;
        local_908 = 0;
        local_900 = 0;
        uStack_8f8 = 0;
        local_8f0 = 0;
        uStack_8e8 = 0;
        local_8e0 = 0;
        local_8d8 = 1;
        local_8d4 = 0;
        local_8d0 = 0;
        uStack_8c8 = 0;
        local_8c0 = 0;
        local_8b8 = 0;
        uStack_8b0 = 0;
        local_8a8 = 0;
        local_8a0 = 0;
        local_898 = 0;
        uStack_890 = 0;
        local_888 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          bVar3 = param_1 != 0;
          puVar10 = (undefined4 *)&DAT_00000004;
          if (bVar3) {
            puVar10 = (undefined4 *)(param_1 + 0x8c);
          }
          local_920 = CONCAT44(*puVar10,*puVar1);
          puVar10 = (undefined4 *)&DAT_00000008;
          if (bVar3) {
            puVar10 = (undefined4 *)(param_1 + 0x90);
          }
          local_918 = *puVar10;
          local_910 = "[dgVoodoo IniParser] ";
          puVar10 = (undefined4 *)&DAT_00000018;
          if (bVar3) {
            puVar10 = (undefined4 *)(param_1 + 0xa0);
          }
          local_908 = *puVar10;
        }
        uVar5 = FUN_140015c30((longlong)&local_928,local_940,1);
        if ((uVar5 & 1) != 0) {
          uVar5 = FUN_14001a998((undefined4 *)auStack_250,(longlong *)&local_928,puVar1,param_4,
                                param_5,param_6,param_7,param_8);
          uVar11 = uVar5 & 0xff;
          if ((uVar5 & 0xff) == 0) {
            FUN_140025250((undefined1 *)auStack_460,0,0x20c);
            puVar9 = (undefined8 *)FUN_1400090b0(auStack_460);
          }
          else {
            thunk_FUN_140001000(auStack_460,auStack_250,0x20c);
            puVar9 = auStack_460;
          }
          thunk_FUN_140001000((undefined8 *)aiStack_720,puVar9,0x20c);
        }
        FUN_140015b60(&local_928);
      }
      FUN_14000f2c0(local_940);
    }
    else {
      lpText = "Another instance of setup is already attached to this application!";
LAB_14000ab18:
      param_4 = 0x10;
      MessageBoxA(hWnd,lpText,(LPCSTR)0x0,0x10);
      FUN_14000fff0(param_1,0x402,0);
    }
    if (uVar11 != 0) goto LAB_14000abe0;
  }
LAB_14000ab3c:
  uVar6 = FUN_14000ffb8(param_1,0x402);
  uVar6 = FUN_14000fd78(param_1,0x402,uVar6 & 0xffffffff);
  thunk_FUN_140001000(&local_928,
                      (undefined8 *)
                      (*(longlong *)(param_1 + 0x1b38) + (uVar6 & 0xffffffff) * 0x218 + 0x10),0x104)
  ;
  PathAppendW((LPWSTR)&local_928,L"dgVoodoo.conf");
  puVar1 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x88);
  }
  puVar10 = puVar1;
  uVar6 = FUN_140015870(aiStack_720,&local_928,puVar1);
  if ((uVar6 & 1) == 0) {
    FUN_140025250((undefined1 *)auStack_460,0,0x20c);
    puVar9 = (undefined8 *)FUN_1400090b0(auStack_460);
    thunk_FUN_140001000((undefined8 *)aiStack_720,puVar9,0x20c);
  }
  else {
    FUN_14001efa0((longlong)aiStack_720,puVar1,puVar10,param_4,param_5,param_6,param_7,param_8);
  }
LAB_14000abe0:
  if (*(int *)(param_1 + 0x1db8) != -1) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(param_1 + 0x1db8) * 8 + 0x1d70) + 0x20
                ))();
  }
  thunk_FUN_140001000((undefined8 *)(param_1 + 0x1b60),(undefined8 *)aiStack_720,0x2c0);
  (*(code *)**(undefined8 **)(param_1 + 0x80))(param_1 + 0x80);
  (**(code **)(*(longlong *)(param_1 + 0x80) + 8))(param_1 + 0x80);
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
  uVar11 = EnableWindow(pHVar7,0);
  *(undefined1 *)(param_1 + 0x1e1c) = 1;
  return (ulonglong)uVar11;
}

