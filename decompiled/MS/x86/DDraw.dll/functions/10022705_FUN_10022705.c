/*
 * FUN_10022705 at 10022705
 * undefined4 __stdcall FUN_10022705(void)
 * Address ranges: 10022705-10022793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10022705(void)

{
  undefined4 in_EAX;
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_1006c238 != (int *)0x0) {
LAB_10022776:
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  DAT_1006c234 = LoadLibraryA("D3DImm.DLL");
  uVar4 = 0;
  if (DAT_1006c234 != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(DAT_1006c234,"GetD3DInterface");
    if (pFVar1 != (FARPROC)0x0) {
      pFVar2 = GetProcAddress(DAT_1006c234,"GetD3DVersion");
      if (pFVar2 != (FARPROC)0x0) {
        iVar3 = (*pFVar2)();
        if (iVar3 == 0x287) {
          DAT_1006c238 = (int *)(*pFVar1)();
          (**(code **)*DAT_1006c238)(DAT_1006c254);
          in_EAX = (**(code **)(*DAT_1006c238 + 4))(&DAT_1006b440);
          goto LAB_10022776;
        }
      }
    }
    uVar4 = FreeLibrary(DAT_1006c234);
    DAT_1006c234 = (HMODULE)0x0;
  }
  return uVar4 & 0xffffff00;
}

