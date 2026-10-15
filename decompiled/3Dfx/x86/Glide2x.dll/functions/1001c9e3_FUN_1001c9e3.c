/*
 * FUN_1001c9e3 at 1001c9e3
 * uint __fastcall FUN_1001c9e3(int * param_1)
 * Address ranges: 1001c9e3-1001caa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001c9e3(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  LARGE_INTEGER local_18;
  int local_10;
  int *local_c;
  uint local_8;
  
  local_c = param_1;
  (**(code **)(*param_1 + 0x150))();
  local_10 = FUN_1001c0cf(param_1[0xc57]);
  QueryPerformanceCounter(&local_18);
  iVar1 = param_1[0xc57];
  iVar2 = param_1[0x27];
  uVar6 = *(uint *)(iVar1 + 0x14);
  local_8 = *(uint *)(iVar1 + 0x10);
  uVar7 = __allrem(local_18.s.LowPart - *(uint *)(iVar1 + 0x18),
                   (local_18.s.HighPart - *(int *)(iVar1 + 0x1c)) -
                   (uint)(local_18.s.LowPart < *(uint *)(iVar1 + 0x18)),local_8,uVar6);
  lVar3 = (uVar7 & 0xffffffff) * (ulonglong)(iVar2 + 1U);
  uVar8 = __aulldiv((uint)lVar3,
                    (int)(uVar7 >> 0x20) * (iVar2 + 1U) + (int)((ulonglong)lVar3 >> 0x20),local_8,
                    uVar6);
  piVar4 = local_c;
  if (((int)uVar8 != local_c[0x27]) || (uVar6 = 0xffff03f, (int)((ulonglong)uVar8 >> 0x20) != 0)) {
    uVar6 = 0xffff07f;
  }
  cVar5 = (**(code **)(*local_c + 0x154))();
  return -(uint)(cVar5 != '\0') & 0x280 |
         (local_10 << 0x12 | *(uint *)(piVar4[0xc57] + 0x120)) << 10 | uVar6;
}

