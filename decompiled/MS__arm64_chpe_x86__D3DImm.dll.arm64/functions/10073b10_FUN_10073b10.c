/*
 * FUN_10073b10 at 10073b10
 * undefined FUN_10073b10(void)
 * Address ranges: 10073b10-10073e33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10073b10(undefined4 param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *extraout_w8;
  int iVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 *puVar12;
  uint uVar13;
  
  iVar9 = FUN_10081cb0(0x17344);
  puVar4 = (undefined4 *)(iVar9 + 0x43U & 0xffffffc0);
  puVar4[-1] = iVar9;
  FUN_10070d90(puVar4,param_1,&PTR_s_DGD3D12ROOT_100a2020);
  puVar12 = puVar4 + 0x148;
  iVar9 = 0x10;
  do {
    *puVar12 = 0;
    puVar12[2] = 0xc000;
    puVar12[4] = 0;
    *(undefined1 *)((int)puVar12 + 0x15) = 0;
    iVar9 = iVar9 + -1;
    puVar12 = puVar12 + 6;
  } while (iVar9 != 0);
  puVar4[0x1a8] = 0;
  puVar4[0x144] = puVar4;
  puVar4[0x147] = 0;
  *puVar4 = &DAT_1009cf80;
  *(undefined8 *)(puVar4 + 0x145) = 0;
  puVar12 = puVar4 + 0x1b0;
  puVar4[0x142] = &PTR_FUN_1009d05c;
  puVar4[0x143] = &PTR_FUN_1009cfc8;
  iVar9 = 0x10;
  do {
    iVar9 = iVar9 + -1;
    FUN_1007dd50(puVar12);
    puVar12 = puVar12 + 0x5b0;
  } while (iVar9 != 0);
  uVar10 = FUN_10077890();
  puVar4[0x5cb0] = uVar10;
  cVar8 = FUN_100700b0(puVar4);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (cVar8 != '\0') {
    iVar9 = (*(code *)PTR_FUN_100a102c)(puVar4[0xae],s_D3D12SerializeRootSignature_1009eb68);
    puVar4[0x1a8] = iVar9;
    if (iVar9 != 0) {
      *(undefined1 *)((int)puVar4 + 0x2d6) = 0;
      if (param_2 != (int *)0x0) {
        piVar1 = puVar4 + 0x145;
        FUN_10081dc0(*piVar1);
        puVar2 = puVar4 + 0x147;
        piVar1[0] = 0;
        piVar1[1] = 0;
        *puVar2 = 0;
        puVar3 = puVar4 + 0x146;
        uVar13 = 0;
        if (param_2[1] != 0) {
          do {
            uVar5 = *puVar2;
            iVar9 = *param_2;
            if (*puVar3 == uVar5) {
              uVar6 = uVar5 << 1;
              if (uVar5 == 0) {
                uVar6 = 0x10;
              }
              iVar11 = uVar6 * 4;
              if (uVar6 >> 0x1e != 0) {
                iVar11 = -1;
              }
              iVar11 = FUN_10081da0(iVar11);
              if (iVar11 != 0) {
                FUN_10081ee0(iVar11,*piVar1,((ulonglong)*puVar2 & 0x3fffffff) << 2);
                FUN_10081dc0(*piVar1);
                *piVar1 = iVar11;
                *puVar2 = uVar6;
                goto LAB_10073d1c;
              }
            }
            else {
LAB_10073d1c:
              *(undefined4 *)(*piVar1 + *puVar3 * 4) = *(undefined4 *)(iVar9 + uVar13 * 4);
              *puVar3 = *puVar3 + 1;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uint)param_2[1]);
        }
      }
      cVar8 = '\x01';
      uVar13 = 0;
      if (puVar4[0x146] == 0) {
        return puVar4;
      }
      do {
        if (cVar8 == '\0') goto LAB_10073dd8;
        uVar10 = (*pcVar7)();
        cVar8 = (*extraout_w11)(uVar10,*extraout_w8,puVar4 + 0x143);
        uVar13 = uVar13 + 1;
      } while (uVar13 < (uint)puVar4[0x146]);
      if (cVar8 != '\0') {
        return puVar4;
      }
    }
LAB_10073dd8:
    FUN_10070900(puVar4);
  }
  (*pcVar7)();
  (*extraout_w11_00)(puVar4,0);
  FUN_10081dd0(puVar4[-1]);
  return (undefined4 *)0x0;
}

