/*
 * FUN_1007d288 at 1007d288
 * undefined FUN_1007d288(void)
 * Address ranges: 1007d288-1007d8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007d288(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 local_70;
  int *local_68;
  ulonglong local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  
  local_50 = param_1 + 0x18;
  (*(code *)PTR_FUN_100a003c)(local_50);
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x44);
  puVar2 = (uint *)(param_1 + 0x54);
  uVar20 = *puVar2;
  bVar9 = false;
  if (uVar20 == 0xffffffff) {
LAB_1007d328:
    puVar4 = (uint *)(param_1 + 0x48);
    puVar3 = (uint *)(param_1 + 0x4c);
    uVar20 = *puVar4;
    uVar21 = *puVar3;
    if (uVar20 == uVar21) {
      uVar19 = uVar21 << 1;
      if (uVar21 == 0) {
        uVar19 = 0x10;
      }
      iVar14 = uVar19 * 0xc;
      if ((ulonglong)uVar19 * 0xc >> 0x20 != 0) {
        iVar14 = -1;
      }
      iVar14 = FUN_1007dd60(iVar14);
      if (iVar14 == 0) goto LAB_1007d710;
      FUN_1007e4a0(iVar14,*piVar1,((ulonglong)(*puVar3 * 3) & 0x3fffffff) << 2);
      FUN_1007dd80(*piVar1);
      *piVar1 = iVar14;
      *puVar3 = uVar19;
    }
    puVar12 = (undefined4 *)(*piVar1 + *puVar4 * 0xc);
    *puVar12 = param_2;
    *(undefined8 *)(puVar12 + 1) = 0xffffffffffffffff;
    *puVar4 = *puVar4 + 1;
    if (*puVar2 != 0xffffffff) {
      *(uint *)(*piVar1 + *puVar2 * 0xc + 8) = uVar20;
      *(uint *)(*piVar1 + uVar20 * 0xc + 4) = *puVar2;
    }
    *puVar2 = uVar20;
    if (*(uint *)(param_1 + 0x50) == 0xffffffff) {
      *(uint *)(param_1 + 0x50) = uVar20;
    }
    if (uVar20 == 0xffffffff) goto LAB_1007d710;
  }
  else {
    piVar15 = (int *)(*piVar1 + uVar20 * 0xc);
    if ((*piVar15 != 0) && (uVar20 = piVar15[2], uVar20 == 0xffffffff)) goto LAB_1007d328;
    *(undefined4 *)(*piVar1 + uVar20 * 0xc) = param_2;
    *puVar2 = uVar20;
  }
  local_48 = 0;
  local_60 = 0;
  (*pcVar10)();
  (*extraout_w11)(param_1,param_2,&local_48,&local_60);
  piVar15 = (int *)(param_1 + 0x34);
  local_70 = CONCAT44(uVar20,param_2);
  puVar12 = (undefined4 *)FUN_10078778(piVar15,&local_60);
  if (puVar12 == (undefined4 *)0x0) {
    puVar13 = (undefined8 *)FUN_1007dc70(0xc);
    if (puVar13 == (undefined8 *)0x0) goto LAB_1007d710;
    *puVar13 = 0;
    *(undefined4 *)(puVar13 + 1) = 0;
    uVar17 = FUN_1007d8f0(puVar13,&local_70);
    uVar16 = local_60;
    if ((uVar17 & 1) == 0) {
      FUN_1007dd80(*(undefined4 *)puVar13);
      FUN_1007dd10(puVar13,0xc);
      goto LAB_1007d710;
    }
    puVar2 = (uint *)(param_1 + 0x3c);
    uVar21 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + local_48;
    uVar20 = *puVar2;
    local_68 = piVar15;
    if (uVar20 != 0) {
      uVar19 = 0;
      uVar18 = uVar20;
      do {
        uVar21 = uVar18 + uVar19 >> 1;
        uVar17 = *(ulonglong *)(*(int *)(param_1 + 0x38) + uVar21 * 0x18);
        uVar11 = uVar21;
        if (uVar17 <= local_60) {
          if (local_60 <= uVar17) break;
          uVar19 = uVar21 + 1;
          uVar21 = uVar19;
          uVar11 = uVar18;
        }
        uVar18 = uVar11;
      } while (uVar18 != uVar19);
      if ((uVar21 != uVar20) &&
         (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x38) + uVar21 * 0x18), *puVar5 == local_60)) {
        *(undefined8 **)(puVar5 + 2) = puVar13;
        goto LAB_1007d6f4;
      }
    }
    piVar15 = (int *)(param_1 + 0x38);
    local_58 = CONCAT44(local_58._4_4_,puVar2);
    puVar4 = (uint *)(param_1 + 0x40);
    uVar19 = *puVar4;
    if (uVar19 == uVar20) {
      iVar14 = 0x10;
      if (uVar19 != 0) {
        iVar14 = uVar19 << 1;
      }
      local_70 = CONCAT44(local_70._4_4_,iVar14);
      iVar14 = FUN_1007dd60(iVar14 * 0x18);
      piVar8 = local_68;
      if (iVar14 != 0) {
        if (*(int *)local_58 != 0) {
          uVar20 = 0;
          do {
            uVar19 = uVar20 + 1;
            puVar6 = (undefined8 *)(*(int *)(param_1 + 0x38) + uVar20 * 0x18);
            puVar7 = (undefined8 *)(iVar14 + uVar20 * 0x18);
            uVar22 = *puVar6;
            puVar7[1] = puVar6[1];
            *puVar7 = uVar22;
            puVar7[2] = puVar6[2];
            uVar20 = uVar19;
          } while (uVar19 < *(uint *)(param_1 + 0x3c));
        }
        FUN_1007dd80(*local_68);
        *piVar8 = iVar14;
        piVar15 = piVar8 + 1;
        *piVar15 = iVar14;
        *puVar4 = (uint)local_70;
      }
    }
    uVar20 = *puVar2;
    if (*puVar4 != uVar20) {
      for (; uVar21 < uVar20; uVar20 = uVar20 - 1) {
        puVar6 = (undefined8 *)(*piVar15 + uVar20 * 0x18);
        puVar6[1] = puVar6[-2];
        *puVar6 = puVar6[-3];
        puVar6[2] = puVar6[-1];
      }
      *puVar2 = *puVar2 + 1;
      *(ulonglong *)(*piVar15 + uVar21 * 0x18 + 8) = local_60;
      *(undefined8 **)(*piVar15 + uVar21 * 0x18 + 0x10) = puVar13;
      *(ulonglong *)(*piVar15 + uVar21 * 0x18) = uVar16;
    }
  }
  else {
    uVar16 = FUN_1007d8f0(*puVar12,&local_70);
    if ((uVar16 & 1) == 0) goto LAB_1007d710;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + local_48;
  }
LAB_1007d6f4:
  bVar9 = true;
LAB_1007d710:
  puVar5 = (ulonglong *)(param_1 + 0x10);
  if (*(ulonglong *)(param_1 + 8) < *puVar5) {
    do {
      iVar14 = FUN_1007d010(piVar1);
      if (iVar14 == 0) break;
      local_58 = 0;
      local_70 = 0;
      (*pcVar10)();
      (*extraout_w11_00)(param_1,iVar14,&local_58,&local_70);
      piVar15 = (int *)FUN_10078778(param_1 + 0x34,&local_70);
      if (piVar15 != (int *)0x0) {
        piVar8 = (int *)*piVar15;
        puVar2 = (uint *)(piVar8 + 1);
        uVar20 = *puVar2;
        if (uVar20 != 0) {
          uVar21 = 0;
LAB_1007d7a4:
          uVar19 = uVar21 + 1;
          if (*(int *)(*piVar8 + uVar21 * 8) != iVar14) goto code_r0x1007d7b8;
          if (uVar19 < uVar20) {
            do {
              puVar13 = (undefined8 *)(*piVar8 + uVar19 * 8);
              uVar19 = uVar19 + 1;
              puVar13[-1] = *puVar13;
            } while (uVar19 < *puVar2);
          }
          *puVar2 = *puVar2 - 1;
          puVar12 = (undefined4 *)*piVar15;
          if (puVar12[1] == 0) {
            if (puVar12 != (undefined4 *)0x0) {
              FUN_1007dd80(*puVar12);
              FUN_1007dd10(puVar12,0xc);
            }
            FUN_10078808(param_1 + 0x34,&local_70);
          }
          *puVar5 = *puVar5 - local_58;
        }
      }
LAB_1007d854:
      (*pcVar10)();
      (*extraout_w11_01)(param_1,iVar14);
    } while (*(ulonglong *)(param_1 + 8) < *puVar5);
  }
  (*(code *)PTR_FUN_100a0090)(local_50);
  if (!bVar9) {
    (*pcVar10)();
    (*extraout_w11_02)(param_1,param_2);
  }
  return;
code_r0x1007d7b8:
  uVar21 = uVar19;
  if (uVar20 <= uVar19) goto LAB_1007d854;
  goto LAB_1007d7a4;
}

