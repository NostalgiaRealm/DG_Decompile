/*
 * FUN_10002dae at 10002dae
 * undefined __stdcall FUN_10002dae(void)
 * Address ranges: 10002dae-10002ffa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002dae(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  LONG *pLVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  LONG *pLVar11;
  uint *puVar12;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint auStack_1a4 [3];
  undefined1 auStack_198 [16];
  undefined4 uStack_188;
  undefined4 uStack_184;
  tagMONITORINFO atStack_180 [9];
  HMONITOR pHStack_18;
  
  cVar2 = (**(code **)(*DAT_1006c21c + 8))();
  if (cVar2 != '\0') {
    uVar9 = 0;
    do {
      bVar3 = FUN_1000297e((HMONITOR)(&DAT_1006c408)[uVar9 * 0x8a],(LPMONITORINFO)0x0);
      (&DAT_1006c498)[uVar9 * 0x228] = bVar3;
      if (!bVar3 && (&DAT_1006c2b0)[uVar9 * 0x8a] == 0) {
        FUN_10060d45(&DAT_1006c2b0 + uVar9 * 0x8a,0,0x228);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x20);
    uStack_1ac = 0;
    auStack_1a4[2] = (**(code **)(*DAT_1006c21c + 0x34))();
    auStack_1a4[0] = 0;
    if (auStack_1a4[2] != 0) {
      do {
        uVar9 = auStack_1a4[0];
        auStack_1a4[1] = (**(code **)(*DAT_1006c21c + 0x40))(auStack_1a4[0]);
        uVar6 = 0;
        if (auStack_1a4[1] != 0) {
          do {
            if (((0x1f < uStack_1ac) ||
                ((*(uint *)(DAT_1006c210 + 0x953) & 1 << ((byte)uStack_1ac & 0x1f)) != 0)) &&
               ((*(int *)(DAT_1006c210 + 0x76c) == 0 ||
                (*(int *)(DAT_1006c210 + 0x76c) - 1U == uVar6)))) {
              uStack_1b4 = (**(code **)(*DAT_1006c21c + 0x38))(uVar9);
              (**(code **)(*DAT_1006c21c + 0x44))(&atStack_180[0].dwFlags,uVar9,uVar6);
              uVar10 = 0;
              do {
                if (((uStack_1b0 == (&DAT_1006c2c0)[uVar10 * 0x8a]) &&
                    (uVar6 == (&DAT_1006c2c4)[uVar10 * 0x8a])) &&
                   (bVar3 = FUN_1000297e((HMONITOR)(&DAT_1006c408)[uVar10 * 0x8a],(LPMONITORINFO)0x0
                                        ), bVar3)) break;
                uVar10 = uVar10 + 1;
              } while (uVar10 < 0x20);
              if ((uVar10 == 0x20) && (bVar3 = FUN_1000297e(pHStack_18,atStack_180), bVar3)) {
LAB_10002f23:
                if (uStack_1b4 < 0x20) {
                  if ((&DAT_1006c408)[uStack_1b4 * 0x8a] != 0) goto code_r0x10002f1e;
                  (**(code **)(*DAT_1006c21c + 0xc))(auStack_198,uStack_1b0,uVar6);
                  *(uint *)((int)&DAT_1006c2c0 + uStack_1b4) = uStack_1b0;
                  *(undefined4 *)((int)&DAT_1006c2b0 + uStack_1b4) = 0;
                  pLVar7 = &atStack_180[0].rcWork.right;
                  pLVar11 = (LONG *)(&DAT_1006c2c8 + uStack_1b4);
                  for (iVar5 = 0x53; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *pLVar11 = *pLVar7;
                    pLVar7 = pLVar7 + 1;
                    pLVar11 = pLVar11 + 1;
                  }
                  *(undefined4 *)((int)&DAT_1006c2b4 + uStack_1b4) = 0;
                  *(undefined4 *)(&DAT_1006c480 + uStack_1b4) = 0;
                  puVar8 = auStack_1a4;
                  puVar12 = (uint *)(&DAT_1006c414 + uStack_1b4);
                  for (iVar5 = 6; piVar1 = DAT_1006c21c, iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar12 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar12 = puVar12 + 1;
                  }
                  *(undefined4 *)(&DAT_1006c484 + uStack_1b4) = 0;
                  *(undefined4 *)(&DAT_1006c470 + uStack_1b4) = uStack_188;
                  *(uint *)((int)&DAT_1006c2c4 + uStack_1b4) = uVar6;
                  (&DAT_1006c498)[uStack_1b4] = 1;
                  (&DAT_1006c499)[uStack_1b4] = (byte)atStack_180[0].rcWork.top & 1;
                  *(undefined4 *)(&DAT_1006c474 + uStack_1b4) = uStack_184;
                  (&DAT_1006c49a)[uStack_1b4] = 0;
                  *(DWORD *)(&DAT_1006c478 + uStack_1b4) = atStack_180[0].cbSize;
                  *(LONG *)(&DAT_1006c47c + uStack_1b4) = atStack_180[0].rcMonitor.left;
                  uVar4 = (**(code **)(*piVar1 + 0x3c))(uStack_1b0);
                  (&DAT_1006c49b)[uStack_1b4 * 0x228] = uVar4;
                  uVar9 = uStack_1b0;
                }
              }
            }
            uStack_1ac = uStack_1ac + 1;
            uVar6 = uVar6 + 1;
          } while (uVar6 < auStack_1a4[1]);
        }
        auStack_1a4[0] = uVar9 + 1;
      } while (auStack_1a4[0] < auStack_1a4[2]);
    }
  }
  return;
code_r0x10002f1e:
  uStack_1b4 = uStack_1b4 + 1;
  goto LAB_10002f23;
}

