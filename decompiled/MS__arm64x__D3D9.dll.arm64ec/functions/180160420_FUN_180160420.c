/*
 * FUN_180160420 at 180160420
 * undefined FUN_180160420(void)
 * Address ranges: 180160420-18016073b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180160420(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong uVar16;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong lStack_48;
  
  uVar9 = thunk_FUN_1802238d8();
  thunk_FUN_1802238c4(uVar9,1);
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  local_58 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18);
  cVar12 = *(char *)(param_1 + 0xb8);
  do {
    if (cVar12 != '\0') {
      return 0;
    }
    thunk_FUN_1802236f8(param_1 + 0x80);
    uVar11 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      (*(code *)puVar7)(0x180224000);
      uVar10 = (*extraout_x11)();
      if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
        local_68 = 0;
        uVar16 = (ulonglong)*(uint *)(param_1 + 0x50);
        local_60 = uVar10;
        do {
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar16 * 0x40);
          uVar10 = *puVar1;
          uVar11 = local_68;
          if ((uVar10 == 0) || (uVar11 = puVar1[2], local_60 < puVar1[2])) break;
          if (*(char *)((longlong)puVar1 + 0x3d) == '\0') {
            iVar8 = *(int *)(uVar10 + 0x10);
            if (iVar8 - 9U < 2) {
              uVar11 = 0;
              local_70 = 0;
              uVar10 = puVar1[4];
              lVar6 = (ulonglong)(uint)puVar1[5] * 8;
              lStack_48 = (ulonglong)((uint)puVar1[5] + 1) << 3;
              local_50 = lVar6;
              (*(code *)puVar7)(0x180224000);
              iVar8 = (*extraout_x11_00)(uVar10,0,&local_50,&local_70);
              if (-1 < iVar8) {
                uVar11 = *(ulonglong *)(lVar6 + local_70);
                local_50 = 0;
                lStack_48 = 0;
                (*(code *)puVar7)(0x180224000);
                (*extraout_x11_01)(uVar10,0,&local_50);
              }
              cVar12 = *(char *)((longlong)puVar1 + 0x3c);
              uVar10 = *puVar1;
LAB_1801605a4:
              FUN_18015ddc8(uVar10,uVar11,puVar1[1],cVar12);
            }
            else {
              if (iVar8 == 8) {
                cVar12 = '\x01';
                uVar11 = 1;
                goto LAB_1801605a4;
              }
              if (iVar8 == 0xb) {
                cVar12 = *(char *)((longlong)puVar1 + 0x3c);
                uVar11 = (ulonglong)(cVar12 == '\0');
                goto LAB_1801605a4;
              }
            }
            if ((*(char *)((longlong)puVar1 + 0x3c) != '\0') &&
               (uVar4 = *(uint *)(param_1 + 0x78), uVar4 != 0)) {
              uVar11 = *puVar1;
              uVar15 = 0;
              uVar13 = uVar4;
              do {
                uVar5 = uVar13 + uVar15 >> 1;
                uVar14 = (ulonglong)uVar5;
                uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar14 * 0x18);
                if (uVar10 <= uVar11) {
                  if (uVar11 <= uVar10) break;
                  uVar15 = uVar5 + 1;
                  uVar14 = (ulonglong)(uVar5 + 1);
                  uVar5 = uVar13;
                }
                uVar13 = uVar5;
              } while (uVar13 != uVar15);
              if (((uint)uVar14 != uVar4) &&
                 (*(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar14 * 0x18) == uVar11)) {
                uVar15 = (uint)uVar14 + 1;
                if (uVar15 < uVar4) {
                  do {
                    uVar11 = (ulonglong)uVar15;
                    puVar2 = (undefined8 *)
                             (*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar15 - 1) * 0x18);
                    uVar15 = uVar15 + 1;
                    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar11 * 0x18);
                    uVar9 = *puVar3;
                    puVar2[1] = puVar3[1];
                    *puVar2 = uVar9;
                    puVar2[2] = puVar3[2];
                  } while (uVar15 < *(uint *)(param_1 + 0x78));
                }
                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
              }
            }
          }
          uVar4 = (uint)puVar1[7];
          *puVar1 = 0;
          if ((uVar4 != 0xffffffff) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x40) != 0)) {
            *(uint *)(param_1 + 0x50) = uVar4;
            *(undefined4 *)(puVar1 + 7) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x40 +
                  0x38);
            *(int *)(*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x40 +
                    0x38) = (int)uVar16;
          }
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
          uVar11 = local_68;
          uVar16 = (ulonglong)uVar4;
        } while (uVar4 != 0xffffffff);
      }
    }
    thunk_FUN_18022370c(param_1 + 0x80);
    if (uVar11 != 0) {
      uVar9 = (*(code *)puVar7)(0x180224000);
      (*extraout_x11_02)(uVar9,uVar11,*(undefined8 *)(param_1 + 0xb0));
    }
    thunk_FUN_1802238ec(*(undefined8 *)(param_1 + 0xb0),0xffffffff);
    cVar12 = *(char *)(param_1 + 0xb8);
  } while( true );
}

