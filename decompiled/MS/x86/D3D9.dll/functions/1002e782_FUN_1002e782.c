/*
 * FUN_1002e782 at 1002e782
 * uint __fastcall FUN_1002e782(int param_1)
 * Address ranges: 1002e782-1002e9c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002e782(int param_1)

{
  ushort uVar1;
  int iVar2;
  HMODULE pHVar3;
  bool bVar4;
  WNDPROC pWVar5;
  uint uVar6;
  wchar_t *pwVar7;
  undefined *puVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar11;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined2 *puVar12;
  uint local_c;
  byte local_5;
  
  pWVar5 = FUN_100b7069(DAT_100dea9c,&PTR_s_DGD3D11ROOT_100dd540,0);
  *(WNDPROC *)(param_1 + 0x148) = pWVar5;
  uVar6 = 0;
  if (pWVar5 != (WNDPROC)0x0) {
    *(WNDPROC *)(param_1 + 0x150) = pWVar5 + *(int *)(param_1 + 0x14c) * 0x1510 + 0x510;
    uVar6 = FUN_1002e4a3(param_1);
    if ((char)uVar6 != '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x14c) * 0x1510 + 0x520 + (int)*(void **)(param_1 + 0x148)
                      );
      pwVar7 = u_ilorudef_100dc128 + 8;
      if (iVar2 != 0xa000) {
        pwVar7 = (wchar_t *)&DAT_100dc114;
      }
      bVar4 = FUN_100b461a(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),DAT_100dea9c,0x12,
                           (int)pwVar7,(int *)(param_1 + 0x8c));
      if (bVar4) {
        puVar8 = &DAT_100dc0bc;
        if (iVar2 < 0xb000) {
          puVar8 = &DAT_100dc0ac;
        }
        bVar4 = FUN_100b496f(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),&DAT_100dc0ac,
                             &DAT_100dc0ac,(int)puVar8,(undefined4 *)(param_1 + 0x118));
        uVar11 = extraout_ECX;
        if (bVar4) {
          puVar12 = (undefined2 *)&DAT_100dc0f0;
          if (iVar2 < 0xb000) {
            puVar12 = &DAT_100dc0cc;
          }
          bVar4 = FUN_100b487c(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),extraout_ECX,
                               extraout_ECX,(int)puVar12,(int *)(param_1 + 0xd4));
          uVar11 = extraout_ECX_00;
          if (bVar4) {
            bVar4 = FUN_100b4723(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),DAT_100dea9c,
                                 1,0x100dc0a8,0x100dc068,(int *)(param_1 + 0x138),param_1 + 0x134);
            uVar11 = extraout_ECX_01;
            if (bVar4) {
              uVar11 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),1);
              local_5 = 1;
              local_c = 0;
              do {
                pHVar3 = DAT_100dea9c;
                uVar1 = puVar12[local_c];
                if (uVar1 == 0) {
                  *(undefined4 *)(param_1 + 4 + local_c * 4) = 0;
                  *(undefined4 *)(param_1 + 0x48 + local_c * 4) = 0;
                }
                else {
                  DVar9 = FUN_100cf280(DAT_100dea9c,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
                  puVar10 = FUN_100cf310(pHVar3,(LPCWSTR)(uint)uVar1,L"RT_CUSTOM");
                  if (puVar10 == (undefined4 *)0x0) {
                    DVar9 = 0;
                  }
                  else {
                    *(undefined4 **)(param_1 + 4 + local_c * 4) = puVar10;
                    *(DWORD *)(param_1 + 0x48 + local_c * 4) = DVar9;
                  }
                  local_5 = local_5 & puVar10 != (undefined4 *)0x0;
                  uVar11 = CONCAT31((int3)(DVar9 >> 8),local_5);
                }
                local_c = local_c + 1;
              } while (local_c < 0x11);
              if ((char)uVar11 != '\0') {
                return CONCAT31((int3)(local_c >> 8),1);
              }
              FUN_100b4834(uVar11,1,param_1 + 0x138,param_1 + 0x134);
              uVar11 = extraout_ECX_02;
            }
            FUN_100b4945(uVar11,uVar11,param_1 + 0xd4);
            uVar11 = extraout_ECX_03;
          }
          FUN_100b4a29(uVar11,uVar11,param_1 + 0x118);
          uVar11 = extraout_ECX_04;
        }
        FUN_100b46f4(uVar11,0x12,param_1 + 0x8c);
      }
      FUN_100b4bd9(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),*(int **)(param_1 + 0x13c))
      ;
    }
    uVar6 = FUN_100b42a6(*(int **)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  return uVar6 & 0xffffff00;
}

