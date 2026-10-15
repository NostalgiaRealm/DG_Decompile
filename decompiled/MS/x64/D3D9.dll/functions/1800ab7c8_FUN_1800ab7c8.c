/*
 * FUN_1800ab7c8 at 1800ab7c8
 * undefined __fastcall FUN_1800ab7c8(longlong * param_1, longlong param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5)
 * Address ranges: 1800ab7c8-1800ab84b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ab7c8(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong *plVar4;
  LARGE_INTEGER local_38 [3];
  
  plVar4 = param_1;
  plVar3 = FUN_1800aaccc((longlong)param_1,param_2);
  if (plVar3 != (longlong *)0x0) {
    FUN_1800aaf90(plVar4,plVar3);
    cVar1 = (**(code **)(*param_1 + 0x168))(param_1,param_3,param_4,param_5);
    if (cVar1 == '\0') {
      BVar2 = QueryPerformanceFrequency(local_38);
      if (BVar2 != 0) {
        Sleep((DWORD)((param_1[(ulonglong)*(uint *)((longlong)plVar3 + 0x1c) * 0x183 + 0x2198] *
                      1000) / local_38[0].QuadPart));
      }
    }
  }
  return;
}

