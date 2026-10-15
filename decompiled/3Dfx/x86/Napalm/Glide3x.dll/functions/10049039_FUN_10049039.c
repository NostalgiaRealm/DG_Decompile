/*
 * FUN_10049039 at 10049039
 * undefined __stdcall FUN_10049039(int param_1, uint param_2, uint param_3)
 * Address ranges: 10049039-100490a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049039(int param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  LARGE_INTEGER local_c;
  
  if ((param_2 != 0xffffffff) || (param_3 != 0xffffffff)) {
    *(undefined4 *)(param_1 + 0xd50) = 0;
    *(undefined4 *)(param_1 + 0xd54) = 0;
    *(undefined4 *)(param_1 + 0xd48) = 0;
    *(undefined4 *)(param_1 + 0xd4c) = 0;
    if (param_2 != 0) {
      QueryPerformanceFrequency(&local_c);
      lVar1 = __allmul(param_3,0,local_c.s.LowPart,local_c.s.HighPart);
      uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_2,0);
      *(undefined8 *)(param_1 + 0xd48) = uVar2;
    }
  }
  return;
}

