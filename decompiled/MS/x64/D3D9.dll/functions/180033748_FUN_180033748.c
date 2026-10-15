/*
 * FUN_180033748 at 180033748
 * ulonglong __fastcall FUN_180033748(longlong param_1)
 * Address ranges: 180033748-180033a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180033748(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  undefined8 *puVar9;
  ulonglong uVar10;
  HMODULE pHVar11;
  HMODULE pHVar12;
  LPCWSTR pWVar13;
  longlong lVar14;
  undefined2 *puVar15;
  byte bVar16;
  
  lVar6 = FUN_1800de604(DAT_1801123b0,&PTR_s_DGD3D11ROOT_180110708,0);
  lVar14 = 0;
  *(longlong *)(param_1 + 0x250) = lVar6;
  uVar10 = 0;
  if (lVar6 != 0) {
    *(ulonglong *)(param_1 + 0x260) = lVar6 + (ulonglong)*(uint *)(param_1 + 600) * 0x18c0 + 0x6b0;
    uVar7 = FUN_180033494(param_1);
    if ((char)uVar7 != '\0') {
      iVar2 = *(int *)((ulonglong)*(uint *)(param_1 + 600) * 0x18c0 + 0x6cc +
                      *(longlong *)(param_1 + 0x250));
      puVar8 = &DAT_18010f260;
      if (iVar2 == 0xa000) {
        puVar8 = &DAT_18010f288;
      }
      uVar7 = 0x12;
      pHVar11 = DAT_1801123b0;
      cVar4 = FUN_1800db224(*(longlong *)(param_1 + 0x250),(ulonglong)*(uint *)(param_1 + 600),
                            DAT_1801123b0,0x12,(longlong)puVar8,(LPCWSTR)(param_1 + 0xd8));
      if (cVar4 != '\0') {
        puVar8 = &DAT_18010f1f0;
        if (0xafff < iVar2) {
          puVar8 = &DAT_18010f200;
        }
        cVar4 = FUN_1800db6d4(*(longlong *)(param_1 + 0x250),(ulonglong)*(uint *)(param_1 + 600),
                              pHVar11,uVar7,(longlong)puVar8,(undefined8 *)(param_1 + 0x1f0));
        if (cVar4 != '\0') {
          puVar15 = (undefined2 *)&DAT_18010f210;
          if (0xafff < iVar2) {
            puVar15 = &DAT_18010f238;
          }
          cVar4 = FUN_1800db5a0(*(longlong *)(param_1 + 0x250),(ulonglong)*(uint *)(param_1 + 600),
                                pHVar11,uVar7,(longlong)puVar15,(undefined1 *)(param_1 + 0x168));
          if (cVar4 != '\0') {
            pWVar13 = (LPCWSTR)(ulonglong)*(uint *)(param_1 + 600);
            pHVar11 = *(HMODULE *)(param_1 + 0x250);
            cVar4 = FUN_1800db394((longlong)pHVar11,(ulonglong)pWVar13,DAT_1801123b0,1,0x18010f1a8,
                                  0x18010f198,(LPCWSTR)(param_1 + 0x230),param_1 + 0x228);
            uVar7 = CONCAT71(extraout_var,cVar4);
            if (cVar4 != '\0') {
              bVar16 = 1;
              do {
                pHVar12 = DAT_1801123b0;
                if (puVar15[lVar14] == 0) {
                  *(undefined8 *)(param_1 + 8 + lVar14 * 8) = 0;
                  *(undefined4 *)(param_1 + 0x90 + lVar14 * 4) = 0;
                }
                else {
                  uVar1 = puVar15[lVar14];
                  uVar5 = FUN_1800fbab0(DAT_1801123b0,(LPCWSTR)(ulonglong)uVar1,L"RT_CUSTOM");
                  pWVar13 = (LPCWSTR)(ulonglong)uVar1;
                  puVar9 = FUN_1800fb980(pHVar12,pWVar13,L"RT_CUSTOM");
                  if (puVar9 == (undefined8 *)0x0) {
                    uVar7 = 0;
                  }
                  else {
                    *(undefined8 **)(param_1 + 8 + lVar14 * 8) = puVar9;
                    *(undefined4 *)(param_1 + 0x90 + lVar14 * 4) = uVar5;
                    uVar7 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
                  }
                  bVar16 = bVar16 & (byte)uVar7;
                  pHVar11 = pHVar12;
                }
                lVar14 = lVar14 + 1;
              } while (lVar14 != 0x11);
              if (bVar16 != 0) {
                return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              }
              FUN_1800db540(pHVar11,pWVar13,1,param_1 + 0x230,param_1 + 0x228);
            }
            lVar6 = 0;
            do {
              plVar3 = *(longlong **)(param_1 + 0x168 + lVar6 * 8);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x10))();
                *(undefined8 *)(param_1 + 0x168 + lVar6 * 8) = 0;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x11);
          }
          lVar6 = 0;
          do {
            plVar3 = *(longlong **)(param_1 + 0x1f0 + lVar6 * 8);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))();
              *(undefined8 *)(param_1 + 0x1f0 + lVar6 * 8) = 0;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 6);
        }
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(param_1 + 0xd8 + lVar6 * 8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
            *(undefined8 *)(param_1 + 0xd8 + lVar6 * 8) = 0;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x12);
      }
      FUN_1800dba14(*(longlong *)(param_1 + 0x250),*(uint *)(param_1 + 600),
                    *(longlong **)(param_1 + 0x238));
    }
    uVar10 = FUN_1800de65c(*(longlong **)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  return uVar10 & 0xffffffffffffff00;
}

