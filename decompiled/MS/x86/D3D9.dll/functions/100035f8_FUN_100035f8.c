/*
 * FUN_100035f8 at 100035f8
 * undefined4 __fastcall FUN_100035f8(undefined4 * param_1)
 * Address ranges: 100035f8-10003911
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100035f8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  SIZE_T SVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *this;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  uint local_40;
  uint local_3c;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    local_20 = param_1;
    FUN_10001e2c();
    param_1[2] = *(undefined4 *)(DAT_100dea74 + 0x7bc);
    FUN_1002ac48();
    LOCK();
    iVar2 = DAT_100dea78 + 1;
    UNLOCK();
    bVar12 = DAT_100dea78 == 0;
    DAT_100dea78 = iVar2;
    if (bVar12) {
      DAT_100dea80 = AddVectoredExceptionHandler(1,FUN_1002abe7);
      DAT_100dea84 = AddVectoredContinueHandler(1,FUN_1002abe7);
    }
    this = param_1 + 0x12;
    local_34 = 0;
    do {
      uVar9 = local_34;
      if (((&DAT_100df4d0)[local_34 * 0x228] != '\0') &&
         (cVar3 = FUN_10029c75(param_1 + 1,local_34), cVar3 != '\0')) {
        FUN_10003d8f(this,&local_34);
      }
      uVar9 = uVar9 + 1;
      local_34 = uVar9;
    } while (uVar9 < 0x20);
    local_3c = 0;
    local_34 = local_20[0x13];
    puVar8 = local_20;
    if (local_34 != 0) {
      do {
        local_30 = *this;
        uVar9 = 0;
        local_2c = 0;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        local_24 = 0;
        local_c = 0;
        local_40 = 0x7fffffff;
        if (local_34 != 0) {
          uVar7 = 0;
          iVar2 = *(int *)(local_30 + local_3c * 4);
          local_28 = iVar2 * 0x228;
          local_1c = (undefined4 *)(&DAT_100df2f8)[iVar2 * 0x8a];
          uVar11 = 0;
          do {
            local_24 = uVar11;
            iVar1 = *(int *)(local_30 + uVar9 * 4);
            uVar11 = local_24;
            if (local_1c == (undefined4 *)(&DAT_100df2f8)[iVar1 * 0x8a]) {
              local_10 = local_10 + 1;
              if ((uint)(&DAT_100df2fc)[iVar1 * 0x8a] < local_40) {
                local_2c = uVar9;
              }
              uVar4 = (&DAT_100df2fc)[iVar1 * 0x8a];
              if (local_40 <= (uint)(&DAT_100df2fc)[iVar1 * 0x8a]) {
                uVar4 = local_40;
              }
              uVar11 = local_24 + 1;
              if ((uint)(&DAT_100df2fc)[iVar2 * 0x8a] <= (uint)(&DAT_100df2fc)[iVar1 * 0x8a]) {
                uVar11 = local_24;
              }
              local_40 = uVar4;
              local_18 = local_2c;
              local_14 = uVar11;
              if (local_3c != uVar9) {
                uVar7 = uVar7 | 1 << (uVar9 & 0x1f);
                local_c = uVar7;
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_34);
          this = local_20 + 0x12;
          puVar8 = local_20;
        }
        iVar2 = puVar8[0x17];
        if (puVar8[0x16] == iVar2) {
          if (iVar2 == 0) {
            uVar9 = 0x10;
          }
          else {
            uVar9 = iVar2 * 2;
          }
          SVar5 = (SIZE_T)((ulonglong)uVar9 * 0x10);
          if ((int)((ulonglong)uVar9 * 0x10 >> 0x20) != 0) {
            SVar5 = 0xffffffff;
          }
          local_1c = (undefined4 *)FUN_100cfd89(SVar5);
          if (local_1c != (undefined4 *)0x0) {
            FUN_100cff00(local_1c,(undefined4 *)puVar8[0x15],puVar8[0x17] << 4);
            thunk_FUN_100cfd6c((LPVOID)puVar8[0x15]);
            puVar8[0x15] = local_1c;
            puVar8[0x17] = uVar9;
            goto LAB_10003801;
          }
        }
        else {
LAB_10003801:
          puVar10 = (uint *)(puVar8[0x16] * 0x10 + puVar8[0x15]);
          *puVar10 = local_18;
          puVar10[1] = local_14;
          puVar10[2] = local_10;
          puVar10[3] = local_c;
          puVar8[0x16] = puVar8[0x16] + 1;
          this = puVar8 + 0x12;
        }
        local_34 = puVar8[0x13];
        local_3c = local_3c + 1;
      } while (local_3c < local_34);
      uVar9 = local_34;
      if (local_34 != 0) {
        uVar11 = 0;
        if (local_34 != 0) {
          while( true ) {
            bVar12 = FUN_1002a0dd(*(int *)(puVar8[0x12] + uVar11 * 4));
            if (!bVar12) break;
            iVar2 = *(int *)(puVar8[0x12] + uVar11 * 4);
            local_20 = (undefined4 *)(&DAT_100df500 + iVar2 * 0x228);
            FUN_1000fc01(local_20);
            local_1c = (undefined4 *)(&DAT_100df2f8)[iVar2 * 0x8a];
            local_28 = (**(code **)(*DAT_100dea70 + 0x48))(local_1c);
            uVar9 = 0;
            if (local_28 != 0) {
              do {
                local_24 = (**(code **)(*DAT_100dea70 + 0x4c))(local_1c,uVar9);
                uVar6 = FUN_10003d8f(local_20,&local_24);
                if ((char)uVar6 == '\0') {
                  FUN_1000fc01(local_20);
                  goto LAB_100038d7;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < local_28);
            }
            uVar11 = uVar11 + 1;
            if ((uint)puVar8[0x13] <= uVar11) break;
          }
        }
LAB_100038d7:
        if ((uVar11 == puVar8[0x13]) && (uVar9 = FUN_1001749a(puVar8 + 3), (char)uVar9 != '\0')) {
          *(undefined1 *)(puVar8 + 9) = 1;
          return CONCAT31((int3)(uVar9 >> 8),1);
        }
        for (; uVar9 = local_34, uVar11 != 0; uVar11 = uVar11 - 1) {
          FUN_10029e79(*(int *)(puVar8[0x12] + -4 + uVar11 * 4));
        }
      }
    }
    local_34 = uVar9;
    in_EAX = FUN_1002b0a1();
  }
  return in_EAX & 0xffffff00;
}

