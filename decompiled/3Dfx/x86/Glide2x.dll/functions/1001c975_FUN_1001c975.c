/*
 * FUN_1001c975 at 1001c975
 * uint __fastcall FUN_1001c975(int param_1)
 * Address ranges: 1001c975-1001c9e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001c975(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  LARGE_INTEGER local_14;
  uint local_c;
  uint local_8;
  
  QueryPerformanceCounter(&local_14);
  iVar2 = *(int *)(param_1 + 0x315c);
  local_8 = *(uint *)(iVar2 + 0x10);
  uVar3 = *(uint *)(iVar2 + 0x14);
  local_c = *(uint *)(param_1 + 0x9c);
  uVar1 = local_c + 1;
  uVar5 = __allrem(local_14.s.LowPart - *(uint *)(iVar2 + 0x18),
                   (local_14.s.HighPart - *(int *)(iVar2 + 0x1c)) -
                   (uint)(local_14.s.LowPart < *(uint *)(iVar2 + 0x18)),*(uint *)(iVar2 + 0x10),
                   uVar3);
  lVar4 = (uVar5 & 0xffffffff) * (ulonglong)uVar1;
  uVar6 = __aulldiv((uint)lVar4,(int)(uVar5 >> 0x20) * uVar1 + (int)((ulonglong)lVar4 >> 0x20),
                    local_8,uVar3);
  return -(uint)((uint)uVar6 < local_c) & (uint)uVar6;
}

