/*
 * FUN_14000b1b4 at 14000b1b4
 * undefined __fastcall FUN_14000b1b4(longlong param_1)
 * Address ranges: 14000b1b4-14000b628
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000b1b4(longlong param_1)

{
  ushort *puVar1;
  LPCWSTR pszPath;
  uint *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  DWORD DVar17;
  uint uVar18;
  ushort *puVar19;
  HWND pHVar20;
  undefined8 uVar21;
  LPVOID pvVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  LPCWSTR pWVar25;
  LPWSTR pWVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  uint uVar30;
  undefined4 *puVar31;
  longlong lVar32;
  undefined8 local_698 [4];
  WCHAR local_678 [264];
  WCHAR local_468 [264];
  int local_258 [134];
  
  lVar32 = 4;
  lVar29 = 4;
  puVar1 = (ushort *)(param_1 + 0x288);
  puVar19 = puVar1;
  pWVar26 = (LPWSTR)(param_1 + 0x1520);
  do {
    uVar21 = *(undefined8 *)(puVar19 + 4);
    uVar13 = *(undefined8 *)(puVar19 + 8);
    uVar14 = *(undefined8 *)(puVar19 + 0xc);
    *(undefined8 *)pWVar26 = *(undefined8 *)puVar19;
    *(undefined8 *)(pWVar26 + 4) = uVar21;
    uVar21 = *(undefined8 *)(puVar19 + 0x10);
    uVar15 = *(undefined8 *)(puVar19 + 0x14);
    *(undefined8 *)(pWVar26 + 8) = uVar13;
    *(undefined8 *)(pWVar26 + 0xc) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x18);
    uVar14 = *(undefined8 *)(puVar19 + 0x1c);
    *(undefined8 *)(pWVar26 + 0x10) = uVar21;
    *(undefined8 *)(pWVar26 + 0x14) = uVar15;
    uVar21 = *(undefined8 *)(puVar19 + 0x20);
    uVar15 = *(undefined8 *)(puVar19 + 0x24);
    *(undefined8 *)(pWVar26 + 0x18) = uVar13;
    *(undefined8 *)(pWVar26 + 0x1c) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x28);
    uVar14 = *(undefined8 *)(puVar19 + 0x2c);
    *(undefined8 *)(pWVar26 + 0x20) = uVar21;
    *(undefined8 *)(pWVar26 + 0x24) = uVar15;
    uVar5 = *(undefined4 *)(puVar19 + 0x30);
    uVar6 = *(undefined4 *)(puVar19 + 0x32);
    uVar7 = *(undefined4 *)(puVar19 + 0x34);
    uVar8 = *(undefined4 *)(puVar19 + 0x36);
    *(undefined8 *)(pWVar26 + 0x28) = uVar13;
    *(undefined8 *)(pWVar26 + 0x2c) = uVar14;
    uVar9 = *(undefined4 *)(puVar19 + 0x38);
    uVar10 = *(undefined4 *)(puVar19 + 0x3a);
    uVar11 = *(undefined4 *)(puVar19 + 0x3c);
    uVar12 = *(undefined4 *)(puVar19 + 0x3e);
    puVar19 = puVar19 + 0x40;
    *(undefined4 *)(pWVar26 + 0x30) = uVar5;
    *(undefined4 *)(pWVar26 + 0x32) = uVar6;
    *(undefined4 *)(pWVar26 + 0x34) = uVar7;
    *(undefined4 *)(pWVar26 + 0x36) = uVar8;
    *(undefined4 *)(pWVar26 + 0x38) = uVar9;
    *(undefined4 *)(pWVar26 + 0x3a) = uVar10;
    *(undefined4 *)(pWVar26 + 0x3c) = uVar11;
    *(undefined4 *)(pWVar26 + 0x3e) = uVar12;
    pWVar26 = pWVar26 + 0x40;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  *(undefined8 *)pWVar26 = *(undefined8 *)puVar19;
  PathAppendW((LPWSTR)(param_1 + 0x1520),L"dgVoodoo.conf");
  pszPath = (LPCWSTR)(param_1 + 0x1728);
  lVar29 = 4;
  puVar19 = puVar1;
  pWVar25 = pszPath;
  do {
    uVar21 = *(undefined8 *)(puVar19 + 4);
    uVar13 = *(undefined8 *)(puVar19 + 8);
    uVar14 = *(undefined8 *)(puVar19 + 0xc);
    *(undefined8 *)pWVar25 = *(undefined8 *)puVar19;
    *(undefined8 *)(pWVar25 + 4) = uVar21;
    uVar21 = *(undefined8 *)(puVar19 + 0x10);
    uVar15 = *(undefined8 *)(puVar19 + 0x14);
    *(undefined8 *)(pWVar25 + 8) = uVar13;
    *(undefined8 *)(pWVar25 + 0xc) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x18);
    uVar14 = *(undefined8 *)(puVar19 + 0x1c);
    *(undefined8 *)(pWVar25 + 0x10) = uVar21;
    *(undefined8 *)(pWVar25 + 0x14) = uVar15;
    uVar21 = *(undefined8 *)(puVar19 + 0x20);
    uVar15 = *(undefined8 *)(puVar19 + 0x24);
    *(undefined8 *)(pWVar25 + 0x18) = uVar13;
    *(undefined8 *)(pWVar25 + 0x1c) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x28);
    uVar14 = *(undefined8 *)(puVar19 + 0x2c);
    *(undefined8 *)(pWVar25 + 0x20) = uVar21;
    *(undefined8 *)(pWVar25 + 0x24) = uVar15;
    uVar5 = *(undefined4 *)(puVar19 + 0x30);
    uVar6 = *(undefined4 *)(puVar19 + 0x32);
    uVar7 = *(undefined4 *)(puVar19 + 0x34);
    uVar8 = *(undefined4 *)(puVar19 + 0x36);
    *(undefined8 *)(pWVar25 + 0x28) = uVar13;
    *(undefined8 *)(pWVar25 + 0x2c) = uVar14;
    uVar9 = *(undefined4 *)(puVar19 + 0x38);
    uVar10 = *(undefined4 *)(puVar19 + 0x3a);
    uVar11 = *(undefined4 *)(puVar19 + 0x3c);
    uVar12 = *(undefined4 *)(puVar19 + 0x3e);
    puVar19 = puVar19 + 0x40;
    *(undefined4 *)(pWVar25 + 0x30) = uVar5;
    *(undefined4 *)(pWVar25 + 0x32) = uVar6;
    *(undefined4 *)(pWVar25 + 0x34) = uVar7;
    *(undefined4 *)(pWVar25 + 0x36) = uVar8;
    *(undefined4 *)(pWVar25 + 0x38) = uVar9;
    *(undefined4 *)(pWVar25 + 0x3a) = uVar10;
    *(undefined4 *)(pWVar25 + 0x3c) = uVar11;
    *(undefined4 *)(pWVar25 + 0x3e) = uVar12;
    pWVar25 = pWVar25 + 0x40;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  *(undefined8 *)pWVar25 = *(undefined8 *)puVar19;
  PathAppendW(pszPath,L"dgVoodooSetupPaths.dat");
  pHVar20 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  SendMessageW(pHVar20,0x14b,0,0);
  FUN_140023fa0(local_698,pszPath,'\0');
  DVar17 = FUN_1400240a0((longlong)local_698);
  uVar30 = DVar17 / 0x208;
  if (0x800 < uVar30) {
    uVar30 = 0x800;
  }
  auVar4 = ZEXT816(2) * ZEXT416(uVar30 * 0x104);
  uVar21 = auVar4._0_8_;
  if (auVar4._8_8_ != 0) {
    uVar21 = 0xffffffffffffffff;
  }
  pvVar22 = (LPVOID)thunk_FUN_14002423c(uVar21);
  if (pvVar22 != (LPVOID)0x0) {
    FUN_140024260(*(LPVOID *)(param_1 + 0x1b38));
    *(undefined8 *)(param_1 + 0x1b38) = 0;
    *(undefined8 *)(param_1 + 0x1b40) = 0;
    FUN_1400240e0((longlong)local_698,uVar30 * 0x208,pvVar22,(DWORD *)0x0);
    uVar27 = 0;
    if (uVar30 != 0) {
      do {
        puVar19 = (ushort *)((longlong)pvVar22 + (ulonglong)(uVar27 * 0x104) * 2);
        uVar18 = FUN_14000a708(param_1,puVar19);
        if (uVar18 == 0xffffffff) {
          FUN_14000a9b8(param_1,puVar19,0,'\0');
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar30);
    }
    FUN_140024260(pvVar22);
  }
  FUN_140024020(local_698);
  FUN_14000ad34(param_1);
  uVar30 = FUN_14000a708(param_1,puVar1);
  if (uVar30 == 0xffffffff) {
    FUN_14000a9b8(param_1,puVar1,0,'\x01');
  }
  else {
    FUN_14000e4a0(param_1,0x402,uVar30);
  }
  FUN_14000a2e0(param_1);
  GetModuleFileNameW((HMODULE)0x0,local_678,0x104);
  GetModuleFileNameW((HMODULE)0x0,local_468,0x104);
  PathRemoveFileSpecW(local_678);
  PathRemoveFileSpecW(local_468);
  PathAppendW(local_468,L"dgVoodoo.conf");
  FUN_1400098a8((undefined8 *)local_258);
  uVar30 = 0;
  puVar31 = (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U);
  cVar16 = FUN_140014464(local_258,local_468,puVar31);
  if (cVar16 != '\0') {
    uVar30 = FUN_14000a708(param_1,(ushort *)local_678);
    if ((int)uVar30 < 0) {
      FUN_14000a9b8(param_1,(ushort *)local_678,0,'\x01');
      uVar30 = FUN_14000a708(param_1,(ushort *)local_678);
    }
    if ((int)uVar30 < 0) {
      uVar30 = 0;
    }
  }
  FUN_14000e4a0(param_1,0x402,uVar30);
  FUN_14000a228(param_1,(LPWSTR)(param_1 + 0x1930));
  puVar2 = (uint *)(param_1 + 0x1b60);
  cVar16 = FUN_140014464((int *)puVar2,(LPWSTR)(param_1 + 0x1930),puVar31);
  if (cVar16 == '\0') {
    FUN_14002511c((undefined1 *)local_258,0,0x20c);
    puVar23 = FUN_1400098a8((undefined8 *)local_258);
    do {
      puVar28 = puVar2;
      puVar24 = puVar23;
      uVar21 = puVar24[1];
      *(undefined8 *)puVar28 = *puVar24;
      *(undefined8 *)(puVar28 + 2) = uVar21;
      uVar21 = puVar24[3];
      *(undefined8 *)(puVar28 + 4) = puVar24[2];
      *(undefined8 *)(puVar28 + 6) = uVar21;
      uVar21 = puVar24[5];
      *(undefined8 *)(puVar28 + 8) = puVar24[4];
      *(undefined8 *)(puVar28 + 10) = uVar21;
      uVar21 = puVar24[7];
      *(undefined8 *)(puVar28 + 0xc) = puVar24[6];
      *(undefined8 *)(puVar28 + 0xe) = uVar21;
      uVar21 = puVar24[9];
      *(undefined8 *)(puVar28 + 0x10) = puVar24[8];
      *(undefined8 *)(puVar28 + 0x12) = uVar21;
      uVar21 = puVar24[0xb];
      *(undefined8 *)(puVar28 + 0x14) = puVar24[10];
      *(undefined8 *)(puVar28 + 0x16) = uVar21;
      uVar21 = puVar24[0xd];
      *(undefined8 *)(puVar28 + 0x18) = puVar24[0xc];
      *(undefined8 *)(puVar28 + 0x1a) = uVar21;
      uVar21 = puVar24[0xf];
      *(undefined8 *)(puVar28 + 0x1c) = puVar24[0xe];
      *(undefined8 *)(puVar28 + 0x1e) = uVar21;
      lVar32 = lVar32 + -1;
      puVar23 = puVar24 + 0x10;
      puVar2 = puVar28 + 0x20;
    } while (lVar32 != 0);
    uVar21 = *(undefined8 *)((longlong)puVar24 + 0x84);
    *(undefined8 *)(puVar28 + 0x1f) = *(undefined8 *)((longlong)puVar24 + 0x7c);
    *(undefined8 *)(puVar28 + 0x21) = uVar21;
  }
  else {
    FUN_14001dcd4(puVar2);
  }
  FUN_14000e4d0(param_1,0x402);
  uVar30 = FUN_14000e460(param_1,0x402);
  uVar30 = FUN_14000e270(param_1,0x402,(ulonglong)uVar30);
  iVar3 = *(int *)((ulonglong)uVar30 * 0x218 + *(longlong *)(param_1 + 0x1b38));
  pHVar20 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar20,(uint)(iVar3 == 0));
  pHVar20 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
                    /* WARNING: Could not recover jumptable at 0x00014000b622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar20,0);
  return;
}

