/*
 * FUN_140014658 at 140014658
 * undefined8 * __cdecl FUN_140014658(void)
 * Address ranges: 140014658-14001465f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140014658(void)

{
  int iVar1;
  longlong lVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar2 = FUN_1400247f0(0x5f8);
  lVar6 = 0x10;
  puVar5 = (undefined8 *)(lVar2 + 0x47U & 0xffffffffffffffc0);
  puVar5[-1] = lVar2;
  *puVar5 = &PTR_FUN_140028ff0;
  puVar7 = (undefined8 *)((ulonglong)puVar5 | 8);
  do {
    lVar6 = lVar6 + -1;
    FUN_1400148e8(puVar7);
    puVar7 = puVar7 + 5;
  } while (lVar6 != 0);
  puVar5[0x5f] = 0;
  *(undefined2 *)(puVar5 + 0x60) = 0;
  puVar5[0x61] = &PTR_s_DGD3D11ROOT_14002c118;
  puVar5[0x62] = 0;
  puVar5[99] = 0;
  puVar5[100] = 0;
  *puVar5 = &PTR_FUN_140028fa8;
  lVar2 = 0x10;
  puVar5[0x51] = 0;
  puVar5[0x52] = 0;
  puVar5[0x53] = 0;
  puVar5[0x54] = 0;
  puVar5[0x55] = 0;
  puVar5[0x56] = 0;
  puVar5[0x57] = 0;
  puVar5[0x58] = 0;
  puVar5[0x59] = 0;
  puVar5[0x5a] = 0;
  puVar5[0x5b] = 0;
  puVar5[0x5c] = 0;
  puVar5[0x5d] = 0;
  puVar5[0x5e] = 0;
  *(undefined1 *)((longlong)puVar5 + 0x302) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x304) = 0;
  puVar5[0x65] = 0;
  puVar7 = puVar5 + 0x66;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    lVar2 = lVar2 + -1;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x9100;
    puVar7 = puVar7 + 5;
  } while (lVar2 != 0);
  if ((puVar5[0x52] == 0) && (puVar5[0x59] == 0)) {
    pHVar3 = LoadLibraryA("DXGI.DLL");
    puVar5[0x52] = pHVar3;
    if (pHVar3 == (HMODULE)0x0) goto LAB_140014800;
    pFVar4 = GetProcAddress(pHVar3,"CreateDXGIFactory1");
    puVar5[0x55] = pFVar4;
    if (pFVar4 != (FARPROC)0x0) {
      pHVar3 = LoadLibraryA(*(LPCSTR *)(puVar5[0x61] + 0x10));
      puVar5[0x59] = pHVar3;
      if (pHVar3 != (HMODULE)0x0) {
        pFVar4 = GetProcAddress(pHVar3,*(LPCSTR *)(puVar5[0x61] + 0x18));
        puVar5[0x5a] = pFVar4;
        if (pFVar4 != (FARPROC)0x0) goto LAB_1400147a8;
        FreeLibrary((HMODULE)puVar5[0x59]);
        puVar5[0x59] = 0;
      }
    }
    pHVar3 = (HMODULE)puVar5[0x52];
  }
  else {
LAB_1400147a8:
    iVar1 = (*(code *)puVar5[0x55])(&DAT_140028fe0,puVar5 + 0x5b);
    if (-1 < iVar1) {
      *(undefined1 *)(puVar5 + 0x60) = 1;
      return puVar5;
    }
    if ((HMODULE)puVar5[0x59] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)puVar5[0x59]);
      puVar5[0x59] = 0;
    }
    pHVar3 = (HMODULE)puVar5[0x52];
    if (pHVar3 == (HMODULE)0x0) goto LAB_140014800;
  }
  FreeLibrary(pHVar3);
  puVar5[0x52] = 0;
LAB_140014800:
  (**(code **)*puVar5)(puVar5,0);
  FUN_1400252b0((LPVOID)puVar5[-1]);
  return (undefined8 *)0x0;
}

