/*
 * FUN_100154f0 at 100154f0
 * int __fastcall FUN_100154f0(uint param_1, uint param_2, undefined4 param_3, uint param_4, uint param_5, int param_6)
 * Address ranges: 100154f0-10015642
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall
FUN_100154f0(uint param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int extraout_EDX;
  uint uVar10;
  bool bVar11;
  undefined4 local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_1004b40f(param_3);
  iVar2 = FUN_1004b4b8(param_3);
  uVar3 = FUN_1004b4fd(param_3);
  uVar4 = FUN_1004b53a(param_3);
  local_20 = 0;
  local_8 = 0;
  iVar9 = 0;
  iVar8 = extraout_EDX;
  if (param_4 != 0) {
    do {
      local_10 = 0;
      if (param_5 != 0) {
        uVar6 = param_1;
        uVar7 = param_2;
        do {
          if (iVar8 == 0) {
            if (uVar6 < uVar3) {
              uVar5 = 1;
            }
            else {
              uVar5 = uVar6 / uVar3;
            }
            iVar8 = uVar5 * iVar2;
            if (uVar7 < uVar4) {
              local_c = 1;
            }
            else {
              local_c = uVar7 / uVar4;
            }
          }
          else {
            iVar8 = uVar6 * iVar8;
            local_c = uVar7;
          }
          uVar5 = local_8 + 0x1ffU & 0xfffffe00;
          iVar9 = local_10 * 0x20 + local_20 * param_5 * 0x20;
          uVar10 = iVar8 + 0xffU & 0xffffff00;
          *(uint *)(iVar9 + *(int *)(param_6 + 0x14)) = uVar5;
          *(uint *)(*(int *)(param_6 + 0x14) + 8 + iVar9) = uVar10;
          iVar8 = uVar10 * local_c;
          local_8 = uVar5 + iVar8;
          *(int *)(*(int *)(param_6 + 0x14) + 4 + iVar9) = iVar8;
          uVar5 = uVar6 >> 1;
          bVar11 = uVar6 != 1;
          uVar6 = 1;
          if (bVar11) {
            uVar6 = uVar5;
          }
          uVar5 = uVar7 >> 1;
          bVar11 = uVar7 != 1;
          uVar7 = 1;
          if (bVar11) {
            uVar7 = uVar5;
          }
          local_10 = local_10 + 1;
          iVar8 = iVar1;
        } while (local_10 < param_5);
      }
      local_20 = local_20 + 1;
      iVar9 = local_8;
    } while (local_20 < param_4);
  }
  return iVar9;
}

