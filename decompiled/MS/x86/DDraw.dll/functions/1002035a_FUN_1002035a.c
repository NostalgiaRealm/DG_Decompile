/*
 * FUN_1002035a at 1002035a
 * int __fastcall FUN_1002035a(int param_1)
 * Address ranges: 1002035a-1002045e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100203fc) */

int __fastcall FUN_1002035a(int param_1)

{
  uint3 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  float fVar8;
  longlong lVar9;
  LARGE_INTEGER local_14;
  int local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xcecc) = 0x3f800000;
  if (*(int *)(uVar2 + 0xd6) != 0) {
    QueryPerformanceCounter(&local_14);
    local_8 = *(uint *)(param_1 + 0x80);
    local_c = *(int *)(param_1 + 0x84);
    if (local_8 == 0 && local_c == 0) {
      *(DWORD *)(param_1 + 0x80) = local_14.s.LowPart;
      *(LONG *)(param_1 + 0x84) = local_14.s.HighPart;
      local_8 = local_14.s.LowPart;
      local_c = local_14.s.HighPart;
    }
    lVar9 = __allmul(*(uint *)(*(int *)(param_1 + 4) + 0xd6),0,*(uint *)(param_1 + 0x78),
                     *(int *)(param_1 + 0x7c));
    uVar2 = (uint)lVar9;
    uVar6 = local_14.s.LowPart - uVar2;
    iVar4 = (local_14.s.HighPart - (int)((ulonglong)lVar9 >> 0x20)) -
            (uint)(local_14.s.LowPart < uVar2);
    iVar7 = uVar6 - local_8;
    iVar3 = iVar4 - local_c;
    iVar5 = iVar3 - (uint)(uVar6 < local_8);
    if ((-1 < iVar5) &&
       ((iVar5 != 0 && SBORROW4(iVar4,local_c) == SBORROW4(iVar3,(uint)(uVar6 < local_8)) ||
        (uVar6 != local_8)))) {
      lVar9 = __alldiv(*(uint *)(param_1 + 0x78),*(uint *)(param_1 + 0x7c),2,0);
      local_c = (int)((ulonglong)lVar9 >> 0x20);
      uVar2 = (uint)lVar9;
      if (CONCAT44(iVar5,iVar7) < lVar9) {
        local_8 = uVar2;
        FUN_10061ae5();
        local_14.s.HighPart = in_XMM0_Db;
        local_14.s.LowPart = in_XMM0_Da;
        uVar2 = FUN_10061ae5();
        fVar8 = 1.0 - (float)(local_14.QuadPart / (double)CONCAT44(in_XMM0_Db,in_XMM0_Da));
      }
      else {
        fVar8 = 0.0;
      }
      *(float *)(param_1 + 0xcecc) = fVar8;
    }
  }
  fVar8 = *(float *)(param_1 + 0xcecc);
  uVar1 = CONCAT21((short)(uVar2 >> 0x10),(fVar8 == 0.0) << 6 | NAN(fVar8) << 2 | 2U | fVar8 < 0.0);
  if (fVar8 == 0.0) {
    iVar3 = (uint)uVar1 << 8;
  }
  else {
    iVar3 = CONCAT31(uVar1,1);
  }
  return iVar3;
}

