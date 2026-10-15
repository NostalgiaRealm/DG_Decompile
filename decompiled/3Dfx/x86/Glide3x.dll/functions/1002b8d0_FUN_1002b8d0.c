/*
 * FUN_1002b8d0 at 1002b8d0
 * undefined __stdcall FUN_1002b8d0(void)
 * Address ranges: 1002b8d0-1002ba92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b8d0(void)

{
  int iVar1;
  double in_XMM0_Qa;
  double dVar2;
  undefined4 uVar3;
  double in_XMM1_Qa;
  undefined4 uVar4;
  double dVar5;
  longlong lVar6;
  double local_20;
  
  dVar5 = 0.0;
  uVar3 = SUB84(in_XMM1_Qa,0);
  uVar4 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  if (in_XMM0_Qa == 0.0) {
    return;
  }
  local_20 = in_XMM1_Qa;
  if (in_XMM0_Qa != 2.0) {
    dVar2 = in_XMM0_Qa;
    FUN_1002bb70();
    local_20 = (dVar2 * (double)CONCAT44(uVar4,uVar3)) / 0.6931471805599453;
  }
  if (local_20 < dVar5) {
    local_20 = -local_20;
  }
  lVar6 = FUN_10053160();
  if ((((int)((ulonglong)lVar6 >> 0x20) == 0 || lVar6 < 0) && ((lVar6 < 0 || ((uint)lVar6 < 0x40))))
     && ((local_20 = local_20 - (double)lVar6, 0.0 <= in_XMM0_Qa || (local_20 == 0.0)))) {
    iVar1 = 0;
    do {
      local_20 = local_20 + local_20;
      if (1.0 <= local_20) {
        local_20 = local_20 - 1.0;
      }
      local_20 = local_20 + local_20;
      if (1.0 <= local_20) {
        local_20 = local_20 - 1.0;
      }
      local_20 = local_20 + local_20;
      if (1.0 <= local_20) {
        local_20 = local_20 - 1.0;
      }
      local_20 = local_20 + local_20;
      if (1.0 <= local_20) {
        local_20 = local_20 - 1.0;
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x10);
    if (in_XMM1_Qa < 0.0) {
      return;
    }
    return;
  }
  return;
}

