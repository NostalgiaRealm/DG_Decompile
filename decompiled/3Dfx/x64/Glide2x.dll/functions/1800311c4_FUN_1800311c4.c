/*
 * FUN_1800311c4 at 1800311c4
 * undefined8 __fastcall FUN_1800311c4(longlong * param_1, uint * param_2)
 * Address ranges: 1800311c4-1800313eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800311c4(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 local_res8 [4];
  
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = 0;
  uVar9 = (((ulonglong)(param_2[8] * 5) +
           ((ulonglong)(param_2[0xc] * 3) +
            ((ulonglong)(param_2[9] * 3) * 0x10 + (ulonglong)(param_2[4] * 3)) * 2 +
           (ulonglong)(param_2[0xb] * 5)) * 2) * 0x10 + (ulonglong)(param_2[10] * 9) +
          (ulonglong)(param_2[7] * 7)) * 0x400000 +
          (ulonglong)
          ((((((param_2[6] - 1) * 0x10 | param_2[5] - 1) << 3 | param_2[3]) << 3 | param_2[2]) << 3
           | param_2[1]) << 8 | *param_2);
  if (uVar11 != 0) {
    uVar8 = 0;
    do {
      uVar7 = uVar11 + uVar8 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + (ulonglong)uVar7 * 0x48);
      uVar6 = uVar7;
      if (uVar10 <= uVar9) {
        if (uVar9 <= uVar10) break;
        uVar8 = uVar7 + 1;
        uVar6 = uVar11;
        uVar7 = uVar8;
      }
      uVar11 = uVar6;
    } while (uVar11 != uVar8);
  }
  uVar10 = (ulonglong)uVar7;
  if ((uVar7 == *(uint *)((longlong)param_1 + 0xc)) ||
     (lVar3 = *param_1, *(ulonglong *)(lVar3 + uVar10 * 0x48) != uVar9)) {
    FUN_1800313ec(param_1,uVar7,uVar9,(undefined8 *)param_2);
  }
  else if (((((*param_2 != *(uint *)(lVar3 + 8 + uVar10 * 0x48)) ||
             (param_2[1] != *(uint *)(lVar3 + 0xc + uVar10 * 0x48))) ||
            (param_2[2] != *(uint *)(lVar3 + 0x10 + uVar10 * 0x48))) ||
           (((param_2[3] != *(uint *)(lVar3 + 0x14 + uVar10 * 0x48) ||
             (param_2[5] != *(uint *)(lVar3 + 0x1c + uVar10 * 0x48))) ||
            ((param_2[6] != *(uint *)(lVar3 + 0x20 + uVar10 * 0x48) ||
             ((param_2[4] != *(uint *)(lVar3 + 0x18 + uVar10 * 0x48) ||
              (param_2[7] != *(uint *)(lVar3 + 0x24 + uVar10 * 0x48))))))))) ||
          ((param_2[8] != *(uint *)(lVar3 + 0x28 + uVar10 * 0x48) ||
           ((((param_2[9] != *(uint *)(lVar3 + 0x2c + uVar10 * 0x48) ||
              (param_2[10] != *(uint *)(lVar3 + 0x30 + uVar10 * 0x48))) ||
             (param_2[0xc] != *(uint *)(lVar3 + 0x38 + uVar10 * 0x48))) ||
            (param_2[0xb] != *(uint *)(lVar3 + 0x34 + uVar10 * 0x48))))))) {
    FUN_18004ca44(param_1[2],*(uint *)(param_1 + 3),*(longlong **)(lVar3 + 0x40 + uVar10 * 0x48));
    local_res8[0] = 0;
    *(ulonglong *)(*param_1 + uVar10 * 0x48) = uVar9;
    lVar3 = *param_1;
    uVar5 = *(undefined8 *)(param_2 + 2);
    puVar1 = (undefined8 *)(lVar3 + 8 + uVar10 * 0x48);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar5;
    uVar11 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    puVar2 = (uint *)(lVar3 + 0x18 + uVar10 * 0x48);
    *puVar2 = param_2[4];
    puVar2[1] = uVar11;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    uVar11 = param_2[9];
    uVar7 = param_2[10];
    uVar8 = param_2[0xb];
    puVar2 = (uint *)(lVar3 + 0x28 + uVar10 * 0x48);
    *puVar2 = param_2[8];
    puVar2[1] = uVar11;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(uint *)(lVar3 + 0x38 + uVar10 * 0x48) = param_2[0xc];
    plVar4 = *(longlong **)((ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0 + param_1[2]);
    (**(code **)(*plVar4 + 0xb8))(plVar4,param_2,local_res8);
    *(undefined8 *)(*param_1 + 0x40 + uVar10 * 0x48) = local_res8[0];
  }
  return *(undefined8 *)(*param_1 + 0x40 + uVar10 * 0x48);
}

