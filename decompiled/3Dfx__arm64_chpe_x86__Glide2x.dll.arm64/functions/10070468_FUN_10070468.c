/*
 * FUN_10070468 at 10070468
 * undefined FUN_10070468(void)
 * Address ranges: 10070468-10070793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10070468(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined8 uVar13;
  undefined8 uVar14;
  uint local_40 [4];
  
  iVar8 = FUN_100702e0(param_1,param_2);
  if (iVar8 == -1) {
    bVar7 = false;
  }
  else {
    param_1 = param_1 + iVar8 * 0xc;
    piVar1 = (int *)(param_1 + 0x10);
    FUN_1007a060(*(undefined4 *)(*piVar1 + param_3 * 4));
    piVar2 = (int *)(param_1 + 0xd0);
    *(undefined4 *)(*piVar1 + param_3 * 4) = 0;
    *(undefined4 *)(*piVar2 + param_3 * 8) = 0;
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_40[0] = 0;
    local_40[1] = 0;
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar8 = (*extraout_w11)(uVar9,param_3,local_40 + 1);
    if (-1 < iVar8) {
      uVar9 = (*pcVar6)();
      (*extraout_w11_00)(uVar9,0x1c,param_4,local_40,0);
      uVar9 = (undefined4)((ulonglong)local_40[0] * 0x1c);
      if ((ulonglong)local_40[0] * 0x1c >> 0x20 != 0) {
        uVar9 = 0xffffffff;
      }
      iVar8 = FUN_1007a040(uVar9);
      if (iVar8 != 0) {
        *(int *)(*piVar1 + param_3 * 4) = iVar8;
        uVar9 = (*pcVar6)();
        iVar10 = (*extraout_w11_01)(uVar9,0x1c,2,local_40,iVar8);
        if (iVar10 < 0) {
          FUN_1007a060(iVar8);
          *(undefined4 *)(*piVar1 + param_3 * 4) = 0;
        }
        else {
          *(uint *)(*piVar2 + param_3 * 8) = local_40[0];
          *(undefined4 *)(*piVar2 + param_3 * 8 + 4) = param_4;
          uVar11 = 1;
          if (1 < *(uint *)(*piVar2 + param_3 * 8)) {
            do {
              if (uVar11 != 0) {
                piVar1 = (int *)(iVar8 + uVar11 * 0x1c);
                uVar12 = uVar11;
LAB_10070630:
                if ((((*(int *)(iVar8 + -0x1c + uVar12 * 0x1c) != *piVar1) ||
                     (iVar10 = iVar8 + uVar12 * 0x1c, *(int *)(iVar10 + -0x18) != piVar1[1])) ||
                    (*(int *)(iVar10 + -0x14) != piVar1[2])) ||
                   (*(int *)(iVar10 + -0x10) != piVar1[3])) goto LAB_10070688;
                piVar1 = (int *)(*piVar2 + param_3 * 8);
                *piVar1 = *piVar1 + -1;
                if (uVar11 < *(uint *)(*piVar2 + param_3 * 8)) {
                  uVar12 = uVar11;
                  do {
                    puVar4 = (undefined8 *)(iVar8 + 0x1c + uVar12 * 0x1c);
                    uVar3 = uVar12 + 1;
                    puVar5 = (undefined8 *)(iVar8 + uVar12 * 0x1c);
                    uVar14 = *puVar4;
                    uVar13 = puVar4[2];
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar14;
                    puVar5[2] = uVar13;
                    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar4 + 3);
                    uVar12 = uVar3;
                  } while (uVar3 < *(uint *)(*piVar2 + param_3 * 8));
                }
                uVar11 = uVar11 - 1;
              }
LAB_1007070c:
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(*piVar2 + param_3 * 8));
          }
        }
      }
      uVar9 = (*pcVar6)();
      (*extraout_w11_02)(uVar9);
    }
    bVar7 = *(int *)(*piVar2 + param_3 * 8) != 0;
  }
  return bVar7;
LAB_10070688:
  uVar12 = uVar12 - 1;
  if (uVar12 == 0) goto LAB_1007070c;
  goto LAB_10070630;
}

