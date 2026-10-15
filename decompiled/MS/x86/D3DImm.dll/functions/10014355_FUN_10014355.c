/*
 * FUN_10014355 at 10014355
 * uint __fastcall FUN_10014355(int param_1)
 * Address ranges: 10014355-1001452e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10014355(int param_1)

{
  ushort uVar1;
  void *this;
  int iVar2;
  HMODULE pHVar3;
  bool bVar4;
  char cVar5;
  WNDPROC pWVar6;
  uint uVar7;
  undefined *puVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar11;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined2 *puVar12;
  uint local_c;
  byte local_5;
  
  pWVar6 = FUN_1005104f(DAT_1006bbd4,&PTR_s_DGD3D11ROOT_10061c50);
  *(WNDPROC *)(param_1 + 0x130) = pWVar6;
  uVar7 = 0;
  if (pWVar6 != (WNDPROC)0x0) {
    *(WNDPROC *)(param_1 + 0x138) = pWVar6 + *(int *)(param_1 + 0x134) * 0x1510 + 0x510;
    uVar7 = FUN_10014076(param_1);
    if ((char)uVar7 != '\0') {
      this = *(void **)(param_1 + 0x130);
      iVar2 = *(int *)(*(int *)(param_1 + 0x134) * 0x1510 + 0x520 + (int)this);
      puVar8 = &DAT_100610e8;
      if (iVar2 != 0xa000) {
        puVar8 = &DAT_100610ac;
      }
      bVar4 = FUN_1004f630(this,*(int *)(param_1 + 0x134),this,this,(int)puVar8,
                           (int *)(param_1 + 0x6c));
      if (bVar4) {
        puVar12 = (undefined2 *)&DAT_10061090;
        if (iVar2 < 0xb000) {
          puVar12 = &DAT_10061074;
        }
        bVar4 = FUN_1004f812(*(void **)(param_1 + 0x130),*(int *)(param_1 + 0x134),extraout_ECX,
                             extraout_ECX,(int)puVar12,(int *)(param_1 + 0xe4));
        uVar11 = extraout_ECX_00;
        if (bVar4) {
          cVar5 = FUN_1004f718(*(void **)(param_1 + 0x130),*(int *)(param_1 + 0x134));
          uVar11 = extraout_ECX_01;
          if (cVar5 != '\0') {
            uVar11 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),1);
            local_5 = 1;
            local_c = 0;
            do {
              pHVar3 = DAT_1006bbd4;
              uVar1 = puVar12[local_c];
              if (uVar1 == 0) {
                *(undefined4 *)(param_1 + 4 + local_c * 4) = 0;
                *(undefined4 *)(param_1 + 0x38 + local_c * 4) = 0;
              }
              else {
                DVar9 = FUN_1005c3a0(DAT_1006bbd4,(LPCWSTR)(uint)uVar1);
                puVar10 = FUN_1005c3d0(pHVar3,(LPCWSTR)(uint)uVar1);
                if (puVar10 == (undefined4 *)0x0) {
                  DVar9 = 0;
                }
                else {
                  *(undefined4 **)(param_1 + 4 + local_c * 4) = puVar10;
                  *(DWORD *)(param_1 + 0x38 + local_c * 4) = DVar9;
                }
                local_5 = local_5 & puVar10 != (undefined4 *)0x0;
                uVar11 = CONCAT31((int3)(DVar9 >> 8),local_5);
              }
              local_c = local_c + 1;
            } while (local_c < 0xd);
            if ((char)uVar11 != '\0') {
              return CONCAT31((int3)(local_c >> 8),1);
            }
            FUN_1004f7df(uVar11,uVar11,(int *)(param_1 + 0x120),(int *)(param_1 + 0x11c));
            uVar11 = extraout_ECX_02;
          }
          FUN_1004f8d0(uVar11,uVar11,param_1 + 0xe4);
          uVar11 = extraout_ECX_03;
        }
        FUN_1004f6ee(uVar11,uVar11,param_1 + 0x6c);
      }
      FUN_1004f9b0(*(void **)(param_1 + 0x130),*(int *)(param_1 + 0x134),*(int **)(param_1 + 0x124))
      ;
    }
    uVar7 = FUN_1004f60d(*(int **)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return uVar7 & 0xffffff00;
}

