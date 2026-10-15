/*
 * FUN_140012770 at 140012770
 * undefined8 __cdecl FUN_140012770(longlong param_1)
 * Address ranges: 140012770-14001295b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140012770(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar2 = (undefined8 *)FUN_1400247f0(0x5b0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_140028ff0;
    puVar5 = puVar2 + 1;
    lVar6 = 0x10;
    do {
      lVar6 = lVar6 + -1;
      FUN_1400148e8(puVar5);
      puVar5 = puVar5 + 5;
    } while (lVar6 != 0);
    puVar2[0x5f] = 0;
    *(undefined2 *)(puVar2 + 0x60) = 0;
    puVar2[0x61] = &PTR_s_DGD3D11ROOT_14002c118;
    puVar2[0x62] = 0;
    puVar2[99] = 0;
    puVar2[100] = 0;
    *puVar2 = &PTR_FUN_140028fa8;
    lVar6 = 0x10;
    puVar2[0x51] = 0;
    puVar2[0x52] = 0;
    puVar2[0x53] = 0;
    puVar2[0x54] = 0;
    puVar2[0x55] = 0;
    puVar2[0x56] = 0;
    puVar2[0x57] = 0;
    puVar2[0x58] = 0;
    puVar2[0x59] = 0;
    puVar2[0x5a] = 0;
    puVar2[0x5b] = 0;
    puVar2[0x5c] = 0;
    puVar2[0x5d] = 0;
    puVar2[0x5e] = 0;
    *(undefined1 *)((longlong)puVar2 + 0x302) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x304) = 0;
    puVar2[0x65] = 0;
    puVar5 = puVar2 + 0x66;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar6 = lVar6 + -1;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x9100;
      puVar5 = puVar5 + 5;
    } while (lVar6 != 0);
  }
  *(undefined8 **)(param_1 + 0x480) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  if ((puVar2[0x52] == 0) && (puVar2[0x59] == 0)) {
    pHVar3 = LoadLibraryA("DXGI.DLL");
    puVar2[0x52] = pHVar3;
    if (pHVar3 == (HMODULE)0x0) goto LAB_14001292c;
    pFVar4 = GetProcAddress(pHVar3,"CreateDXGIFactory1");
    puVar2[0x55] = pFVar4;
    if (pFVar4 != (FARPROC)0x0) {
      pHVar3 = LoadLibraryA(*(LPCSTR *)(puVar2[0x61] + 0x10));
      puVar2[0x59] = pHVar3;
      if (pHVar3 != (HMODULE)0x0) {
        pFVar4 = GetProcAddress(pHVar3,*(LPCSTR *)(puVar2[0x61] + 0x18));
        puVar2[0x5a] = pFVar4;
        if (pFVar4 != (FARPROC)0x0) goto LAB_1400128cc;
        FreeLibrary((HMODULE)puVar2[0x59]);
        puVar2[0x59] = 0;
      }
    }
    pHVar3 = (HMODULE)puVar2[0x52];
  }
  else {
LAB_1400128cc:
    iVar1 = (*(code *)puVar2[0x55])(&DAT_140028fe0,puVar2 + 0x5b);
    if (-1 < iVar1) {
      *(undefined1 *)(puVar2 + 0x60) = 1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x480);
      return 1;
    }
    if ((HMODULE)puVar2[0x59] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)puVar2[0x59]);
      puVar2[0x59] = 0;
    }
    pHVar3 = (HMODULE)puVar2[0x52];
    if (pHVar3 == (HMODULE)0x0) goto LAB_14001292c;
  }
  FreeLibrary(pHVar3);
  puVar2[0x52] = 0;
LAB_14001292c:
  puVar2 = *(undefined8 **)(param_1 + 0x480);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x480) = 0;
  return 0;
}

