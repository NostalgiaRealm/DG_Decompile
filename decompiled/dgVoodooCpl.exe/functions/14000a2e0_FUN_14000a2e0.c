/*
 * FUN_14000a2e0 at 14000a2e0
 * undefined __fastcall FUN_14000a2e0(longlong param_1)
 * Address ranges: 14000a2e0-14000a706
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000a2e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  LPARAM LVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  char cVar16;
  uint uVar17;
  DWORD DVar18;
  HWND pHVar19;
  LRESULT LVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  longlong lVar24;
  uint local_508 [132];
  undefined8 local_2f8 [8];
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined4 local_2ac;
  WCHAR local_248 [268];
  
  if (*(char *)(param_1 + 0x1e28) == '\0') {
    return;
  }
  if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
    SendMessageW(*(HWND *)(param_1 + 0x1b48),0x402,0,*(LPARAM *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x1b50) = 0;
    *(undefined8 *)(param_1 + 7000) = 0;
    *(undefined8 *)(param_1 + 0x1b48) = 0;
  }
  uVar17 = FUN_14000e460(param_1,0x402);
  uVar17 = FUN_14000e270(param_1,0x402,(ulonglong)uVar17);
  iVar2 = *(int *)((ulonglong)uVar17 * 0x218 + *(longlong *)(param_1 + 0x1b38));
  pHVar19 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar19,(uint)(iVar2 == 0));
  FUN_1400098a8((undefined8 *)local_508);
  local_2b4 = 0xffffffffffffffff;
  local_2ac = 0xffffffff;
  FUN_14002511c((undefined1 *)local_2f8,0,0x40);
  FUN_140009a68((longlong)local_508);
  local_2b8 = *(undefined4 *)(param_1 + 0x1db0);
  FUN_140024620(local_2f8,(undefined8 *)(param_1 + 0x1d70),0x40);
  uVar17 = FUN_14000e460(param_1,0x402);
  uVar17 = FUN_14000e270(param_1,0x402,(ulonglong)uVar17);
  pHVar19 = *(HWND *)((ulonglong)uVar17 * 0x218 + 8 + *(longlong *)(param_1 + 0x1b38));
  if (pHVar19 != (HWND)0x0) {
    LVar20 = SendMessageW(pHVar19,0x40a,0,0);
    if ((int)LVar20 == 0) {
      LVar20 = SendMessageW(pHVar19,0x401,0,(LPARAM)*(HWND *)(param_1 + 0x18));
      if (LVar20 != 0) {
        LVar3 = *(LPARAM *)(param_1 + 0x18);
        DVar18 = GetCurrentProcessId();
        LVar20 = SendMessageW(pHVar19,0x403,(ulonglong)DVar18,LVar3);
        LVar3 = *(LPARAM *)(param_1 + 0x18);
        *(LRESULT *)(param_1 + 0x1b50) = LVar20;
        DVar18 = GetCurrentProcessId();
        LVar20 = SendMessageW(pHVar19,0x404,(ulonglong)DVar18,LVar3);
        *(LRESULT *)(param_1 + 7000) = LVar20;
        if ((*(longlong *)(param_1 + 0x1b50) != 0) && (LVar20 != 0)) {
          *(HWND *)(param_1 + 0x1b48) = pHVar19;
          LVar20 = SendMessageW(pHVar19,0x405,0,*(LPARAM *)(param_1 + 0x18));
          if (LVar20 == 0) goto LAB_14000a566;
          cVar16 = FUN_140014680((int *)local_508,*(undefined8 *)(param_1 + 0x1b50),
                                 (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U));
          goto LAB_14000a55e;
        }
      }
      MessageBoxA(*(HWND *)(param_1 + 0x18),"Cannot attach to the specified application!",
                  (LPCSTR)0x0,0x10);
      FUN_14000e4a0(param_1,0x402,0);
    }
    else {
      cVar16 = '\0';
      MessageBoxA(*(HWND *)(param_1 + 0x18),
                  "Another instance of setup is already attached to this application!",(LPCSTR)0x0,
                  0x10);
      FUN_14000e4a0(param_1,0x402,0);
LAB_14000a55e:
      if (cVar16 != '\0') goto LAB_14000a62b;
    }
  }
LAB_14000a566:
  FUN_14000a228(param_1,local_248);
  cVar16 = FUN_140014464((int *)local_508,local_248,
                         (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U));
  if (cVar16 == '\0') {
    FUN_14002511c((undefined1 *)local_248,0,0x20c);
    puVar21 = FUN_1400098a8((undefined8 *)local_248);
    lVar24 = 4;
    puVar15 = local_508;
    do {
      puVar23 = puVar15;
      puVar22 = puVar21;
      uVar11 = puVar22[1];
      *(undefined8 *)puVar23 = *puVar22;
      *(undefined8 *)(puVar23 + 2) = uVar11;
      uVar11 = puVar22[3];
      *(undefined8 *)(puVar23 + 4) = puVar22[2];
      *(undefined8 *)(puVar23 + 6) = uVar11;
      uVar11 = puVar22[5];
      *(undefined8 *)(puVar23 + 8) = puVar22[4];
      *(undefined8 *)(puVar23 + 10) = uVar11;
      uVar11 = puVar22[7];
      *(undefined8 *)(puVar23 + 0xc) = puVar22[6];
      *(undefined8 *)(puVar23 + 0xe) = uVar11;
      uVar11 = puVar22[9];
      *(undefined8 *)(puVar23 + 0x10) = puVar22[8];
      *(undefined8 *)(puVar23 + 0x12) = uVar11;
      uVar11 = puVar22[0xb];
      *(undefined8 *)(puVar23 + 0x14) = puVar22[10];
      *(undefined8 *)(puVar23 + 0x16) = uVar11;
      uVar11 = puVar22[0xd];
      *(undefined8 *)(puVar23 + 0x18) = puVar22[0xc];
      *(undefined8 *)(puVar23 + 0x1a) = uVar11;
      uVar11 = puVar22[0xf];
      *(undefined8 *)(puVar23 + 0x1c) = puVar22[0xe];
      *(undefined8 *)(puVar23 + 0x1e) = uVar11;
      lVar24 = lVar24 + -1;
      puVar21 = puVar22 + 0x10;
      puVar15 = puVar23 + 0x20;
    } while (lVar24 != 0);
    uVar11 = *(undefined8 *)((longlong)puVar22 + 0x84);
    *(undefined8 *)(puVar23 + 0x1f) = *(undefined8 *)((longlong)puVar22 + 0x7c);
    *(undefined8 *)(puVar23 + 0x21) = uVar11;
  }
  else {
    FUN_14001dcd4(local_508);
  }
LAB_14000a62b:
  if (*(int *)(param_1 + 0x1db8) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (longlong)*(int *)(param_1 + 0x1db8) * 8) + 0x20
                ))();
  }
  lVar24 = 5;
  puVar21 = (undefined8 *)(param_1 + 0x1b60);
  puVar15 = local_508;
  do {
    puVar23 = puVar15;
    puVar22 = puVar21;
    uVar11 = *(undefined8 *)(puVar23 + 2);
    uVar12 = *(undefined8 *)(puVar23 + 4);
    uVar13 = *(undefined8 *)(puVar23 + 6);
    *puVar22 = *(undefined8 *)puVar23;
    puVar22[1] = uVar11;
    uVar11 = *(undefined8 *)(puVar23 + 8);
    uVar14 = *(undefined8 *)(puVar23 + 10);
    puVar22[2] = uVar12;
    puVar22[3] = uVar13;
    uVar12 = *(undefined8 *)(puVar23 + 0xc);
    uVar13 = *(undefined8 *)(puVar23 + 0xe);
    puVar22[4] = uVar11;
    puVar22[5] = uVar14;
    uVar11 = *(undefined8 *)(puVar23 + 0x10);
    uVar14 = *(undefined8 *)(puVar23 + 0x12);
    puVar22[6] = uVar12;
    puVar22[7] = uVar13;
    uVar12 = *(undefined8 *)(puVar23 + 0x14);
    uVar13 = *(undefined8 *)(puVar23 + 0x16);
    puVar22[8] = uVar11;
    puVar22[9] = uVar14;
    uVar11 = *(undefined8 *)(puVar23 + 0x18);
    uVar14 = *(undefined8 *)(puVar23 + 0x1a);
    puVar22[10] = uVar12;
    puVar22[0xb] = uVar13;
    uVar12 = *(undefined8 *)(puVar23 + 0x1c);
    uVar13 = *(undefined8 *)(puVar23 + 0x1e);
    puVar22[0xc] = uVar11;
    puVar22[0xd] = uVar14;
    puVar22[0xe] = uVar12;
    puVar22[0xf] = uVar13;
    lVar24 = lVar24 + -1;
    puVar21 = puVar22 + 0x10;
    puVar15 = puVar23 + 0x20;
  } while (lVar24 != 0);
  uVar11 = *(undefined8 *)(puVar23 + 0x22);
  plVar1 = (longlong *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(puVar23 + 0x24);
  uVar13 = *(undefined8 *)(puVar23 + 0x26);
  puVar22[0x10] = *(undefined8 *)(puVar23 + 0x20);
  puVar22[0x11] = uVar11;
  uVar17 = puVar23[0x28];
  uVar4 = puVar23[0x29];
  uVar5 = puVar23[0x2a];
  uVar6 = puVar23[0x2b];
  puVar22[0x12] = uVar12;
  puVar22[0x13] = uVar13;
  uVar7 = puVar23[0x2c];
  uVar8 = puVar23[0x2d];
  uVar9 = puVar23[0x2e];
  uVar10 = puVar23[0x2f];
  *(uint *)(puVar22 + 0x14) = uVar17;
  *(uint *)((longlong)puVar22 + 0xa4) = uVar4;
  *(uint *)(puVar22 + 0x15) = uVar5;
  *(uint *)((longlong)puVar22 + 0xac) = uVar6;
  *(uint *)(puVar22 + 0x16) = uVar7;
  *(uint *)((longlong)puVar22 + 0xb4) = uVar8;
  *(uint *)(puVar22 + 0x17) = uVar9;
  *(uint *)((longlong)puVar22 + 0xbc) = uVar10;
  (**(code **)*plVar1)(plVar1);
  (**(code **)(*plVar1 + 8))(plVar1);
  pHVar19 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
  EnableWindow(pHVar19,0);
  *(undefined1 *)(param_1 + 0x1e1c) = 1;
  return;
}

