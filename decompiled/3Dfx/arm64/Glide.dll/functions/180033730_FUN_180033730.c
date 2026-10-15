/*
 * FUN_180033730 at 180033730
 * undefined8 __cdecl FUN_180033730(uint * param_1, uint * param_2, byte param_3)
 * Address ranges: 180033730-180033a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180033730(uint *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  SIZE_T dwNumberOfBytesToMap;
  DWORD DVar2;
  HANDLE hFileMappingObject;
  LPVOID pvVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  *(byte *)(param_1 + 0x12) = param_3;
  *(bool *)((longlong)param_1 + 0x49) = param_2[3] < param_2[5];
  param_1[10] = *param_2;
  param_1[0xb] = param_2[1];
  param_1[0xc] = param_2[2];
  param_1[8] = param_2[3];
  uVar5 = param_2[4];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x11] = 0;
  param_1[9] = uVar5;
  uVar5 = 0x38;
  if (param_3 == 0) {
    uVar5 = 0x1c;
  }
  param_1[1] = uVar5;
  param_1[5] = param_2[6];
  param_1[2] = param_2[7];
  param_1[3] = param_2[8];
  param_1[4] = param_2[9];
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  FUN_18002ab30((longlong)param_1);
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  param_1[0x1a] = uVar1;
  DVar2 = uVar5 * uVar1 * 4 + 0x8000;
  hFileMappingObject =
       CreateFileMappingA((HANDLE)0x0,(LPSECURITY_ATTRIBUTES)0x0,4,0,DVar2,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x14) = hFileMappingObject;
  dwNumberOfBytesToMap = (SIZE_T)DVar2;
  pvVar3 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,dwNumberOfBytesToMap);
  *(LPVOID *)(param_1 + 0x18) = pvVar3;
  pvVar3 = MapViewOfFile(*(HANDLE *)(param_1 + 0x14),0xf001f,0,0,dwNumberOfBytesToMap);
  *(LPVOID *)(param_1 + 0x16) = pvVar3;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    param_1[0x4a] = 0xffffffff;
    param_1[0x4b] = 0xffffffff;
    param_1[0x56] = 0xffffffff;
    param_1[0x57] = 0xffffffff;
    param_1[0x40] = 0xffffffff;
    param_1[0x41] = 0xffffffff;
    param_1[0x3a] = 0xffffffff;
    param_1[0x3b] = 0xffffffff;
    param_1[0x4c] = 0xffffffff;
    param_1[0x58] = 0xffffffff;
    if ((param_1[2] != 9) &&
       (uVar4 = FUN_180032f98(param_1,(ulonglong)*param_2,param_2[1],param_2[2],
                              (longlong *)(param_1 + 0x36),(longlong *)(param_1 + 0x38),
                              param_1 + 0x3a,param_1 + 0x3b), (uVar4 & 1) != 0)) {
      uVar4 = FUN_180032b30(param_1,(longlong *)(param_1 + 0x44),(ulonglong)param_2[3],param_2[4],
                            0x35,0x39,param_2[5] << 1);
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_180032b30(param_1,(longlong *)(param_1 + 0x50),(ulonglong)param_2[3],param_2[4],
                              0x27,0x2a,param_2[5] << 2);
        if ((uVar4 & 1) != 0) {
          if (((param_3 & 1) == 0) ||
             (uVar4 = FUN_180033470(param_1,(ulonglong)*param_2,param_2[1],param_2[2],
                                    (uint)(byte)param_2[10],(longlong *)(param_1 + 0x3e),
                                    param_1 + 0x40,param_1 + 0x41), (uVar4 & 1) != 0)) {
            if (*(longlong *)(param_1 + 0x36) != 0) {
              *(ulonglong *)(param_1 + 0x36) =
                   *(longlong *)(param_1 + 0x36) +
                   (ulonglong)
                   *(uint *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x28 + 0x30);
            }
            return 1;
          }
          lVar6 = *(longlong *)(param_1 + 0x32);
          if ((*(char *)(lVar6 + 0x14c4) != '\0') &&
             (DVar2 = GetCurrentThreadId(), *(DWORD *)(lVar6 + 0x14b4) != DVar2)) {
            FUN_180043f90(*(longlong *)(param_1 + 0x32) + 0x12c0);
          }
          FUN_180049be8(*(longlong *)(param_1 + 0x30),*(longlong **)(param_1 + 0x54));
          FUN_180049be8(*(longlong *)(param_1 + 0x30),*(longlong **)(param_1 + 0x50));
          FUN_180049be8(*(longlong *)(param_1 + 0x30),*(longlong **)(param_1 + 0x52));
          param_1[0x50] = 0;
          param_1[0x51] = 0;
          param_1[0x52] = 0;
          param_1[0x53] = 0;
          uVar5 = param_1[0x57];
          if (uVar5 != 0xffffffff) {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
            FUN_18004a7d8(lVar6,uVar5,2);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
          }
          uVar5 = param_1[0x56];
          if (uVar5 != 0xffffffff) {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
            FUN_18004a7d8(lVar6,uVar5,2);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
          }
          param_1[0x56] = 0xffffffff;
          param_1[0x57] = 0xffffffff;
        }
        FUN_180032eb0((longlong)param_1,(undefined8 *)(param_1 + 0x44));
      }
      FUN_1800332e0((longlong)param_1);
    }
    FUN_18002aa58((longlong)param_1,*(LPCVOID *)(param_1 + 0x18));
  }
  return 0;
}

