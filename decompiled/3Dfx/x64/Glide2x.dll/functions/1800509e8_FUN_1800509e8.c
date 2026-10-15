/*
 * FUN_1800509e8 at 1800509e8
 * undefined __fastcall FUN_1800509e8(longlong param_1, longlong param_2)
 * Address ranges: 1800509e8-180050afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800509e8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  LARGE_INTEGER local_res10;
  
  if ((param_2 != 0) && (0 < *(longlong *)(param_2 + 0xd58))) {
    QueryPerformanceCounter(&local_res10);
    lVar4 = *(longlong *)(param_2 + 0xd60);
    if (0 < lVar4) {
      while (local_res10.QuadPart - lVar4 < *(longlong *)(param_2 + 0xd58)) {
        uVar3 = (((lVar4 + *(longlong *)(param_2 + 0xd58)) - (longlong)local_res10) * 10) /
                *(longlong *)(param_1 + 0x6a0);
        uVar1 = (uint)uVar3;
        if ((0x10 < uVar1) && (*(code **)(param_1 + 0x300) != (code *)0x0)) {
          if (*(char *)(param_1 + 0x314) == '\0') {
            iVar2 = (**(code **)(param_1 + 0x300))(1);
            if (iVar2 == 0) {
              *(undefined1 *)(param_1 + 0x314) = 1;
            }
            else {
              *(undefined8 *)(param_1 + 0x300) = 0;
              *(undefined8 *)(param_1 + 0x308) = 0;
            }
          }
          iVar2 = (int)((uVar3 & 0xffffffff) / 10);
          Sleep(iVar2 - (uint)(uVar1 + iVar2 * -10 < 6));
        }
        QueryPerformanceCounter(&local_res10);
        lVar4 = *(longlong *)(param_2 + 0xd60);
      }
    }
    ((LARGE_INTEGER *)(param_2 + 0xd60))->QuadPart = (LONGLONG)local_res10;
  }
  return;
}

