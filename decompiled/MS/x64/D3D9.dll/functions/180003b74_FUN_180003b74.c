/*
 * FUN_180003b74 at 180003b74
 * undefined8 __fastcall FUN_180003b74(longlong param_1)
 * Address ranges: 180003b74-180003ec6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180003b74(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong in_RAX;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  bool bVar21;
  uint local_res8 [8];
  
  if (*(char *)(param_1 + 0x45) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_180111f20 + 0x858);
    FUN_18002f264();
    LOCK();
    iVar17 = DAT_180111f30 + 1;
    UNLOCK();
    bVar21 = DAT_180111f30 == 0;
    DAT_180111f30 = iVar17;
    if (bVar21) {
      DAT_180111f28 = AddVectoredExceptionHandler(1,FUN_18002f094);
      DAT_180111f40 = AddVectoredContinueHandler(1,FUN_18002f094);
    }
    local_res8[0] = 0;
    uVar13 = 0;
    do {
      if (((&DAT_180112aec)[uVar13 * 600] != '\0') &&
         (uVar7 = FUN_18002ddd0((undefined8 *)(param_1 + 8),local_res8[0]), (char)uVar7 != '\0')) {
        FUN_180004454((longlong *)(param_1 + 0x68),local_res8);
      }
      local_res8[0] = (int)uVar13 + 1;
      uVar13 = (ulonglong)local_res8[0];
    } while (local_res8[0] < 0x20);
    uVar6 = *(uint *)(param_1 + 0x70);
    if (uVar6 != 0) {
      uVar13 = 0;
      do {
        uVar12 = 0;
        iVar17 = 0;
        iVar20 = 0;
        local_res8[0] = 0;
        uVar18 = 0;
        if (uVar6 != 0) {
          uVar15 = 0;
          uVar16 = 0x7fffffff;
          uVar10 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar13 * 4);
          iVar17 = 0;
          iVar20 = 0;
          do {
            uVar11 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar15 * 4);
            iVar14 = (int)uVar15;
            if ((&DAT_1801128fc)[uVar10 * 0x96] == (&DAT_1801128fc)[uVar11 * 0x96]) {
              uVar1 = (&DAT_180112900)[uVar11 * 0x96];
              uVar12 = uVar12 + 1;
              uVar4 = uVar1;
              iVar5 = iVar14;
              if (uVar16 <= uVar1) {
                uVar4 = uVar16;
                iVar5 = iVar17;
              }
              iVar17 = iVar5;
              uVar16 = uVar4;
              iVar5 = iVar20 + 1;
              if ((uint)(&DAT_180112900)[uVar10 * 0x96] <= uVar1) {
                iVar5 = iVar20;
              }
              iVar20 = iVar5;
              if ((int)uVar13 != iVar14) {
                uVar18 = uVar18 | 1 << ((byte)uVar15 & 0x1f);
              }
            }
            uVar15 = (ulonglong)(iVar14 + 1U);
            local_res8[0] = uVar12;
          } while (iVar14 + 1U < uVar6);
        }
        plVar19 = (longlong *)(param_1 + 0x68);
        iVar14 = *(int *)(param_1 + 0x84);
        if (*(int *)(param_1 + 0x80) == iVar14) {
          uVar6 = 0x10;
          if (iVar14 != 0) {
            uVar6 = iVar14 * 2;
          }
          puVar8 = SUB168(ZEXT816(0x10) * ZEXT416(uVar6),0);
          if (SUB168(ZEXT816(0x10) * ZEXT416(uVar6),8) != 0) {
            puVar8 = (uint *)0xffffffffffffffff;
          }
          puVar9 = (undefined8 *)thunk_FUN_1800fbccc(puVar8);
          if (puVar9 != (undefined8 *)0x0) {
            FUN_1800fbec0(puVar9,*(undefined8 **)(param_1 + 0x78),
                          (ulonglong)*(uint *)(param_1 + 0x84) << 4);
            FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x78));
            *(uint *)(param_1 + 0x84) = uVar6;
            *(undefined8 **)(param_1 + 0x78) = puVar9;
            goto LAB_180003d4f;
          }
        }
        else {
LAB_180003d4f:
          uVar10 = (ulonglong)*(uint *)(param_1 + 0x80);
          lVar3 = *(longlong *)(param_1 + 0x78);
          puVar8 = (uint *)(uVar10 * 2);
          *(int *)(lVar3 + uVar10 * 0x10) = iVar17;
          *(int *)(lVar3 + 4 + uVar10 * 0x10) = iVar20;
          *(uint *)(lVar3 + 8 + uVar10 * 0x10) = local_res8[0];
          *(uint *)(lVar3 + 0xc + uVar10 * 0x10) = uVar18;
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        }
        uVar6 = *(uint *)(param_1 + 0x70);
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < uVar6);
      if (uVar6 != 0) {
        uVar13 = 0;
        if (uVar6 == 0) {
LAB_180003e84:
          bVar21 = (int)uVar13 == *(int *)(param_1 + 0x70);
        }
        else {
          do {
            puVar8 = (uint *)(param_1 + 8);
            bVar21 = FUN_18002e3d4(puVar8,(ulonglong)*(uint *)(*plVar19 + uVar13 * 4));
            if (!bVar21) goto LAB_180003e84;
            uVar10 = (ulonglong)*(uint *)(*plVar19 + uVar13 * 4);
            FUN_1800fbcf0((LPVOID)(&DAT_180112b28)[uVar10 * 0x4b]);
            puVar8 = DAT_180111f18;
            (&DAT_180112b28)[uVar10 * 0x4b] = 0;
            (&DAT_180112b30)[uVar10 * 0x4b] = 0;
            uVar2 = (&DAT_1801128fc)[uVar10 * 0x96];
            uVar6 = (**(code **)(*(longlong *)puVar8 + 0x90))(puVar8,uVar2);
            uVar12 = 0;
            if (uVar6 != 0) {
              do {
                local_res8[0] =
                     (**(code **)(*(longlong *)DAT_180111f18 + 0x98))(DAT_180111f18,uVar2,uVar12);
                puVar8 = (uint *)(&DAT_180112b28 + uVar10 * 0x4b);
                uVar7 = FUN_180004454((longlong *)puVar8,local_res8);
                if ((char)uVar7 == '\0') {
                  puVar8 = (uint *)(&DAT_180112b28)[uVar10 * 0x4b];
                  FUN_1800fbcf0(puVar8);
                  (&DAT_180112b28)[uVar10 * 0x4b] = 0;
                  (&DAT_180112b30)[uVar10 * 0x4b] = 0;
                  goto LAB_180003e84;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar6);
            }
            uVar6 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar6;
            bVar21 = uVar6 == *(uint *)(param_1 + 0x70);
          } while (uVar6 < *(uint *)(param_1 + 0x70));
        }
        if (bVar21) {
          puVar8 = (uint *)(param_1 + 0x18);
          uVar7 = FUN_18001ade0((longlong *)puVar8);
          if ((char)uVar7 != '\0') {
            *(undefined1 *)(param_1 + 0x44) = 1;
            return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
        }
        while ((int)uVar13 != 0) {
          uVar13 = (ulonglong)((int)uVar13 - 1);
          FUN_18002e2b4(puVar8,(ulonglong)*(uint *)(*plVar19 + uVar13 * 4));
        }
      }
    }
    in_RAX = FUN_18002f81c();
  }
  return in_RAX & 0xffffffffffffff00;
}

