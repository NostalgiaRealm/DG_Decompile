/*
 * FUN_140013f88 at 140013f88
 * undefined8 __cdecl FUN_140013f88(longlong param_1)
 * Address ranges: 140013f88-1400141b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140013f88(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar2 = (undefined8 *)FUN_1400247f0(0x5b8);
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
    puVar2[0x61] = &PTR_s_DGD3D12ROOT_14002c138;
    puVar2[0x62] = 0;
    puVar5 = puVar2 + 0x66;
    puVar2[99] = 0;
    puVar2[100] = 0;
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
    lVar6 = 0x10;
    *(undefined1 *)((longlong)puVar2 + 0x302) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x304) = 0;
    puVar2[0x65] = 0;
    do {
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
      *(undefined4 *)(puVar5 + 2) = 0xc000;
      *(undefined4 *)(puVar5 + 3) = 0;
      *(undefined1 *)((longlong)puVar5 + 0x1d) = 0;
      puVar5 = puVar5 + 4;
    } while (lVar6 != 0);
    puVar2[0xa6] = 0;
    *puVar2 = &PTR_FUN_140029078;
  }
  *(undefined8 **)(param_1 + 0x480) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  if ((puVar2[0x52] == 0) && (puVar2[0x59] == 0)) {
    pHVar3 = LoadLibraryA("DXGI.DLL");
    puVar2[0x52] = pHVar3;
    if (pHVar3 == (HMODULE)0x0) goto LAB_140014184;
    pFVar4 = GetProcAddress(pHVar3,"CreateDXGIFactory1");
    puVar2[0x55] = pFVar4;
    if (pFVar4 != (FARPROC)0x0) {
      pHVar3 = LoadLibraryA(*(LPCSTR *)(puVar2[0x61] + 0x10));
      puVar2[0x59] = pHVar3;
      if (pHVar3 != (HMODULE)0x0) {
        pFVar4 = GetProcAddress(pHVar3,*(LPCSTR *)(puVar2[0x61] + 0x18));
        puVar2[0x5a] = pFVar4;
        if (pFVar4 != (FARPROC)0x0) goto LAB_1400140f4;
        FreeLibrary((HMODULE)puVar2[0x59]);
        puVar2[0x59] = 0;
      }
    }
    pHVar3 = (HMODULE)puVar2[0x52];
  }
  else {
LAB_1400140f4:
    iVar1 = (*(code *)puVar2[0x55])(&DAT_140028fe0,puVar2 + 0x5b);
    if (-1 < iVar1) {
      *(undefined1 *)(puVar2 + 0x60) = 1;
      pFVar4 = GetProcAddress((HMODULE)puVar2[0x59],"D3D12SerializeRootSignature");
      puVar2[0xa6] = pFVar4;
      if (pFVar4 != (FARPROC)0x0) {
        *(undefined1 *)((longlong)puVar2 + 0x302) = 0;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x480);
        return 1;
      }
      FUN_140014980((ulonglong)puVar2);
      goto LAB_140014184;
    }
    if ((HMODULE)puVar2[0x59] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)puVar2[0x59]);
      puVar2[0x59] = 0;
    }
    pHVar3 = (HMODULE)puVar2[0x52];
    if (pHVar3 == (HMODULE)0x0) goto LAB_140014184;
  }
  FreeLibrary(pHVar3);
  puVar2[0x52] = 0;
LAB_140014184:
  puVar2 = *(undefined8 **)(param_1 + 0x480);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x480) = 0;
  return 0;
}

