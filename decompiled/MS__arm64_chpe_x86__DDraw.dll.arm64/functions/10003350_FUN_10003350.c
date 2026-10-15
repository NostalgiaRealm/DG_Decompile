/*
 * FUN_10003350 at 10003350
 * undefined FUN_10003350(void)
 * Address ranges: 10003350-1000362b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003350(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auStack_50 [16];
  
  if (*(int *)*param_1 == -0x7fffffff) {
    iVar10 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar10 == 0) {
      FUN_10001c10(0);
    }
    uVar11 = 0;
    if (DAT_100be13c != 0) {
      do {
        iVar10 = *(int *)(DAT_100be138 + uVar11 * 4);
        uVar4 = *(uint *)(iVar10 + 0x20);
        if (((uVar4 != 0) && (uVar5 = *(uint *)(*param_1 + 0x18), uVar4 <= uVar5)) &&
           (uVar5 < uVar4 + (uint)*(ushort *)(iVar10 + 0xc) * *(int *)(iVar10 + 0x14))) {
          FUN_100a9d50(auStack_50);
          pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
          piVar1 = (int *)(iVar10 + 0x24);
          if (*piVar1 == 0) {
            FUN_10007548(iVar10);
            pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
            (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11_02)(iVar10);
            if ((*(uint *)(iVar10 + 0x34) & 1) == 0) {
              (*pcVar8)();
              cVar9 = (*extraout_w11_03)(iVar10);
              if (cVar9 != '\0') {
                (*pcVar8)();
                (*extraout_w11_04)(iVar10,0xffffffff);
              }
            }
          }
          else {
            (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(iVar10);
            uVar11 = (int)((uVar5 - uVar4) + ((uint)((int)(uVar5 - uVar4) >> 0xb) >> 0x14)) >> 0xc;
            pbVar2 = (byte *)((uVar11 & 7) + 0x100b33e8);
            bVar6 = *pbVar2;
            if ((*(byte *)(*piVar1 + (uVar11 >> 3)) & bVar6) == 0) {
              bVar6 = *(byte *)(*(int *)(iVar10 + 0x28) + (uVar11 >> 3)) & bVar6;
              if (bVar6 == 0) {
                bVar7 = false;
              }
              else {
                (*pcVar8)();
                cVar9 = (*extraout_w11_00)(iVar10);
                bVar7 = cVar9 == '\0' && bVar6 != 0;
              }
              if (!bVar7) {
                (*pcVar8)();
                cVar9 = (*extraout_w11_01)(iVar10,uVar11);
                if (cVar9 == '\0') goto LAB_100035fc;
              }
              pbVar3 = (byte *)(*piVar1 + (uVar11 >> 3));
              bVar6 = *pbVar2;
              *pbVar3 = *pbVar3 | bVar6;
              pbVar2 = (byte *)(*(int *)(iVar10 + 0x28) + (uVar11 >> 3));
              *pbVar2 = *pbVar2 | bVar6;
            }
          }
LAB_100035fc:
          *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) | 5;
          FUN_100a9ca0(auStack_50);
          (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
          return 0xffffffff;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < DAT_100be13c);
    }
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  return 0;
}

