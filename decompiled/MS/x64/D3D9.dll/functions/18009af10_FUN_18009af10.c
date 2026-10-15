/*
 * FUN_18009af10 at 18009af10
 * int __fastcall FUN_18009af10(uint param_1, ulonglong param_2, int param_3, uint param_4, uint param_5, longlong param_6)
 * Address ranges: 18009af10-18009b093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009af10(uint param_1,ulonglong param_2,int param_3,uint param_4,uint param_5,
                 longlong param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint local_48;
  
  uVar14 = (ulonglong)param_1;
  uVar8 = param_2;
  uVar2 = FUN_1800e1d60(param_3);
  uVar3 = FUN_1800e1ee0(param_3);
  uVar4 = FUN_1800e1f30(param_3);
  uVar5 = FUN_1800e1f7c(param_3);
  iVar12 = 0;
  local_48 = 0;
  if (param_4 != 0) {
    do {
      uVar16 = uVar8 & 0xffffffff;
      if (param_5 != 0) {
        uVar9 = 0;
        do {
          uVar1 = 1;
          uVar13 = (uint)uVar14;
          uVar15 = (uint)uVar16;
          if ((int)uVar2 == 0) {
            uVar7 = uVar1;
            if ((uint)uVar4 <= uVar13) {
              uVar7 = (uint)((uVar14 & 0xffffffff) / (uVar4 & 0xffffffff));
            }
            iVar10 = uVar7 * (int)uVar3;
            if ((uint)uVar5 <= uVar15) {
              uVar1 = (uint)(uVar16 / (uVar5 & 0xffffffff));
            }
          }
          else {
            iVar10 = uVar13 * (int)uVar2;
            uVar1 = uVar15;
          }
          lVar6 = (ulonglong)(local_48 * param_5 + uVar9) * 0x20;
          uVar7 = iVar12 + 0x1ffU & 0xfffffe00;
          uVar11 = iVar10 + 0xffU & 0xffffff00;
          *(uint *)(lVar6 + *(longlong *)(param_6 + 0x24)) = uVar7;
          *(uint *)(*(longlong *)(param_6 + 0x24) + 8 + lVar6) = uVar11;
          iVar12 = uVar11 * uVar1;
          *(int *)(*(longlong *)(param_6 + 0x24) + 4 + lVar6) = iVar12;
          iVar12 = iVar12 + uVar7;
          uVar1 = 1;
          if (uVar13 != 1) {
            uVar1 = (uint)(uVar14 >> 1) & 0x7fffffff;
          }
          uVar14 = (ulonglong)uVar1;
          uVar1 = 1;
          if (uVar15 != 1) {
            uVar1 = (uint)(uVar16 >> 1);
          }
          uVar9 = uVar9 + 1;
          uVar16 = (ulonglong)uVar1;
        } while (uVar9 < param_5);
        uVar8 = param_2 & 0xffffffff;
      }
      uVar14 = (ulonglong)param_1;
      local_48 = local_48 + 1;
    } while (local_48 < param_4);
  }
  return iVar12;
}

