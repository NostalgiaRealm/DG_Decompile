/*
 * FUN_1001c8ff at 1001c8ff
 * undefined4 __fastcall FUN_1001c8ff(int param_1)
 * Address ranges: 1001c8ff-1001c974
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001c8ff(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint3 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  LARGE_INTEGER local_14;
  int local_c;
  uint local_8;
  
  QueryPerformanceCounter(&local_14);
  iVar2 = *(int *)(param_1 + 0x315c);
  local_8 = *(uint *)(iVar2 + 0x10);
  uVar3 = *(uint *)(iVar2 + 0x14);
  local_c = *(int *)(param_1 + 0x9c);
  uVar1 = local_c + 1;
  uVar6 = __allrem(local_14.s.LowPart - *(uint *)(iVar2 + 0x18),
                   (local_14.s.HighPart - *(int *)(iVar2 + 0x1c)) -
                   (uint)(local_14.s.LowPart < *(uint *)(iVar2 + 0x18)),*(uint *)(iVar2 + 0x10),
                   uVar3);
  lVar4 = (uVar6 & 0xffffffff) * (ulonglong)uVar1;
  uVar7 = __aulldiv((uint)lVar4,(int)(uVar6 >> 0x20) * uVar1 + (int)((ulonglong)lVar4 >> 0x20),
                    local_8,uVar3);
  uVar5 = (uint3)((ulonglong)uVar7 >> 8);
  if (((int)uVar7 == local_c) && ((int)((ulonglong)uVar7 >> 0x20) == 0)) {
    return CONCAT31(uVar5,1);
  }
  return (uint)uVar5 << 8;
}

