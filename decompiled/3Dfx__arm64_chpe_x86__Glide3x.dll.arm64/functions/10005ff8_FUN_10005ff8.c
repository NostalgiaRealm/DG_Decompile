/*
 * FUN_10005ff8 at 10005ff8
 * undefined FUN_10005ff8(void)
 * Address ranges: 10005ff8-100069fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10005ff8(void)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int extraout_w15;
  undefined4 *puVar17;
  uint local_50 [4];
  
  FUN_10001280();
  iVar10 = extraout_w15 * -0x10;
  uVar8 = (*(code *)PTR_FUN_100a006c)(0);
  iVar9 = (*(code *)PTR_FUN_100a016c)(uVar8,s_DGDRIVERROOT_10099498,&stack0x00000078 + iVar10);
  if ((iVar9 != 0) &&
     (puVar11 = *(undefined4 **)(&stack0x00000080 + iVar10), puVar11 != (undefined4 *)0x0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar10 = (*extraout_w11)(puVar11);
    if (iVar10 != 0x287) {
      puVar11 = (undefined4 *)0x0;
    }
    goto LAB_100069b4;
  }
  puVar11 = (undefined4 *)FUN_1007dc70(0x974);
  if (puVar11 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined2 *)(puVar11 + 0x13) = 0;
  *(undefined8 *)(puVar11 + 0x14) = 0;
  *(undefined8 *)(puVar11 + 0x16) = 0;
  *(undefined8 *)(puVar11 + 0x18) = 0;
  *(undefined8 *)(puVar11 + 0x1a) = 0;
  *(undefined8 *)(puVar11 + 0x1c) = 0;
  *(undefined8 *)(puVar11 + 0x27) = 0;
  puVar11[0x29] = 1;
  puVar11[0x2a] = s_grAuxBufferExt_10099438 + 0xf;
  *(undefined8 *)(puVar11 + 0x2b) = 0;
  *(undefined8 *)(puVar11 + 1) = 0;
  *(undefined8 *)(puVar11 + 3) = 0;
  *(undefined8 *)(puVar11 + 5) = 0;
  *(undefined8 *)(puVar11 + 7) = 0;
  *(undefined8 *)(puVar11 + 9) = 0;
  *(undefined8 *)(puVar11 + 0xb) = 0;
  *(undefined8 *)(puVar11 + 0xd) = 0;
  *(undefined8 *)(puVar11 + 0xf) = 0;
  *(undefined8 *)(puVar11 + 0x11) = 0;
  *puVar11 = &PTR_FUN_100985d0;
  *(undefined8 *)(puVar11 + 0x2d) = 0;
  *(undefined8 *)(puVar11 + 0x2f) = 0;
  *(undefined8 *)(puVar11 + 0x31) = 0x287;
  *(undefined8 *)(puVar11 + 0x33) = 0;
  *(undefined8 *)(puVar11 + 0x35) = 0;
  *(undefined8 *)(puVar11 + 0x37) = 0;
  puVar11[0x39] = 0;
  *(undefined8 *)(puVar11 + 0x3a) = 0;
  *(undefined8 *)(puVar11 + 0x3c) = 0;
  puVar11[0x3e] = 0;
  FUN_10005bc8(puVar11 + 0xd0);
  FUN_10005bc8(puVar11 + 0x153);
  FUN_10005bc8(puVar11 + 0x1d9);
  *(undefined2 *)(puVar11 + 0x25c) = 0x101;
  FUN_1007e4d0(puVar11 + 0x3f,0,0x20c);
  *(undefined8 *)(puVar11 + 0x1d7) = 0;
  *(undefined8 *)(&stack0xffffffe4 + iVar10) = 0;
  *(undefined8 *)(&stack0xffffffd8 + iVar10) = 0x30;
  puVar17 = puVar11;
  if (puVar11 == (undefined4 *)0xffffffb8) {
    puVar17 = (undefined4 *)0x0;
  }
  *(undefined4 **)(&stack0xffffffe0 + iVar10) = puVar17;
  iVar9 = DAT_100a2894;
  uVar8 = (*(code *)PTR_FUN_100a006c)(0);
  *(undefined8 *)(&stack0xfffffff0 + iVar10) = 0;
  *(undefined8 *)(&stack0xfffffff8 + iVar10) = 0;
  *(char **)(&stack0x00000000 + iVar10) = s_DGDRIVERROOT_10099498;
  *(undefined4 *)(&stack0x00000004 + iVar10) = 0;
  *(undefined4 *)(&stack0xffffffec + iVar10) = uVar8;
  sVar7 = (*(code *)PTR_FUN_100a01d0)(&stack0xffffffd8 + iVar10);
  *(short *)(puVar11 + 0x13) = sVar7;
  if (sVar7 == 0) {
    iVar9 = 0;
  }
  puVar11[0x14] = iVar9;
  if (iVar9 != 0) {
    (*(code *)PTR_FUN_100a0064)(iVar9,&stack0x00000ee0 + iVar10,0x400);
    iVar9 = (*(code *)PTR_FUN_100a0094)(&stack0x00000ee0 + iVar10);
    if (iVar9 == 0) {
      puVar11[0x14] = 0;
    }
  }
  if (*(short *)(puVar11 + 0x13) != 0) {
    puVar11[0x32] = 0;
    FUN_1007e4d0(puVar11 + 0xc2,0,0x454);
    puVar1 = puVar11 + 0x27;
    puVar1[0] = 1;
    puVar1[1] = 1;
    local_50[extraout_w15 * -4 + 2] = (uint)(puVar11 + 0x28);
    local_50[extraout_w15 * -4 + 3] = (uint)(puVar11 + 0x29);
    puVar11[0x29] = 1;
    *(undefined4 **)(&stack0xffffffc0 + iVar10) = puVar11 + 0x2a;
    puVar11[0x2a] = s__dgVoodoo__10099448;
    *(undefined4 **)(&stack0xffffffc4 + iVar10) = puVar11 + 0x2b;
    *(undefined8 *)(puVar11 + 0x2b) = 0;
    local_50[extraout_w15 * -4] = (uint)(puVar11 + 0x2c);
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (DAT_100a2890 == '\0') {
      if (DAT_100a2894 != 0) {
        (*(code *)PTR_FUN_100a0068)(DAT_100a2894,&stack0x000002b0 + iVar10,0x104);
        (*(code *)PTR_FUN_100a0124)(&stack0x000002b0 + iVar10);
        (*(code *)PTR_FUN_100a011c)(&stack0x000002b0 + iVar10,&DAT_10099458);
        puVar3 = (uint *)0x0;
        if (puVar11 != (undefined4 *)0x0) {
          puVar3 = puVar1;
        }
        uVar15 = FUN_100475a8(puVar11 + 0x1d9,&stack0x000002b0 + iVar10,puVar3);
        if ((uVar15 & 1) != 0) goto LAB_1000630c;
      }
      (*(code *)PTR_FUN_100a0068)(0,&stack0x000004b8 + iVar10,0x104);
      (*(code *)PTR_FUN_100a0124)(&stack0x000004b8 + iVar10);
      (*(code *)PTR_FUN_100a011c)(&stack0x000004b8 + iVar10,&DAT_10099458);
      iVar9 = (*(code *)PTR_FUN_100a0128)(&stack0x000004b8 + iVar10,&stack0x000002b0 + iVar10);
      if (iVar9 != 0) {
        puVar3 = (uint *)0x0;
        if (puVar11 != (undefined4 *)0x0) {
          puVar3 = puVar1;
        }
        uVar15 = FUN_100475a8(puVar11 + 0x1d9,&stack0x000004b8 + iVar10,puVar3);
        if ((uVar15 & 1) != 0) goto LAB_1000630c;
      }
      iVar9 = (*(code *)PTR_FUN_100a0114)(0,0x1a,0,0,&stack0x000000a8 + iVar10);
      if (-1 < iVar9) {
        (*(code *)PTR_FUN_100a011c)(&stack0x000000a8 + iVar10,0x10099478);
        FUN_10047d90(&stack0x00000008 + iVar10,1,1,1);
        FUN_1007e420(&stack0x000006c0 + iVar10,&stack0x000000a8 + iVar10);
        (*(code *)PTR_FUN_100a011c)(&stack0x000006c0 + iVar10,0x1009a158);
        (*(code *)PTR_FUN_100a0104)
                  (0,0x200,&stack0x000006c0 + iVar10,0xffffffff,&stack0x00000bd0 + iVar10,0x30a,0,0)
        ;
        (*pcVar5)();
        cVar6 = (*extraout_w11_01)(&stack0x00000008 + iVar10,&stack0x000006c0 + iVar10,1);
        puVar17 = puVar11 + 0x1d9;
        if (cVar6 != '\0') {
          *(undefined1 **)(&stack0xffffffc8 + iVar10) = &stack0x00000008 + iVar10;
          *(undefined1 **)(&stack0xffffffcc + iVar10) = &stack0x000000a8 + iVar10;
          *(undefined4 *)(&stack0xffffffd0 + iVar10) = 0x104;
          uVar16 = 0;
          (*pcVar5)();
          iVar9 = (*extraout_w11_02)(&stack0x00000008 + iVar10);
          puVar17 = puVar11 + 0x1d9;
          if (iVar9 != 0) {
            local_50[extraout_w15 * -4 + 1] = (uint)(puVar11 + 0x1d9);
            do {
              (*pcVar5)();
              iVar9 = (*extraout_w11_03)(&stack0x00000008 + iVar10,uVar16);
              if (iVar9 == 0) {
                puVar17 = (undefined4 *)local_50[extraout_w15 * -4 + 1];
                FUN_100477c0(&stack0xffffffc8 + iVar10,uVar16);
                goto LAB_100068d4;
              }
              uVar16 = uVar16 + 1;
              (*pcVar5)();
              uVar14 = (*extraout_w11_04)(&stack0x00000008 + iVar10);
            } while (uVar16 < uVar14);
            puVar17 = (undefined4 *)local_50[extraout_w15 * -4 + 1];
          }
        }
LAB_100068d4:
        (*(code *)PTR_FUN_100a011c)(&stack0x000000a8 + iVar10,&DAT_10099458);
        puVar3 = (uint *)0x0;
        if (puVar11 != (undefined4 *)0x0) {
          puVar3 = puVar1;
        }
        FUN_100475a8(puVar17,&stack0x000000a8 + iVar10,puVar3);
        FUN_10047e40(&stack0x00000008 + iVar10);
      }
    }
    else {
      FUN_1007e4a0(puVar11 + 0x1d9,0x1009c560,0x20c);
    }
LAB_1000630c:
    (*(code *)PTR_FUN_100a0064)(0,&stack0x000008c8 + iVar10,0x200);
    puVar12 = (undefined1 *)(*(code *)PTR_FUN_100a0120)(&stack0x000008c8 + iVar10);
    if (puVar12 != &stack0x000008c8 + iVar10) {
      FUN_1007dda0(puVar12);
      if ((*(int *)((int)puVar11 + 0x822) == 0) &&
         (iVar9 = FUN_1007dee0(puVar12,&DAT_1009948c), iVar9 != 0)) {
        *(int *)((int)puVar11 + 0x822) = 1;
      }
    }
    iVar9 = *(int *)((int)puVar11 + 0x967);
    uVar16 = (uint)(*(int *)((int)puVar11 + 0x95f) == 1);
    if (*(int *)((int)puVar11 + 0x95f) == 2) {
      uVar16 = 2;
    }
    *puVar1 = uVar16;
    uVar16 = (uint)(*(int *)((int)puVar11 + 0x963) == 1);
    if (*(int *)((int)puVar11 + 0x963) == 2) {
      uVar16 = 2;
    }
    *(uint *)local_50[extraout_w15 * -4 + 2] = uVar16;
    uVar16 = (uint)(iVar9 == 1);
    if (iVar9 == 2) {
      uVar16 = 2;
    }
    *(uint *)local_50[extraout_w15 * -4 + 3] = uVar16;
    **(undefined4 **)(&stack0xffffffc0 + iVar10) = s__dgVoodoo__10099448;
    **(undefined4 **)(&stack0xffffffc4 + iVar10) = *(undefined4 *)((int)puVar11 + 0x96b);
    *(undefined4 *)local_50[extraout_w15 * -4] = 0;
    iVar9 = (*(code *)PTR_FUN_100a0094)(s_USER32_DLL_100994a8);
    if (iVar9 != 0) {
      iVar13 = (*(code *)PTR_FUN_100a0070)(iVar9,s_CallWindowProcA_100994b8);
      puVar11[0x2d] = iVar13;
      if (iVar13 != 0) {
        iVar9 = (*(code *)PTR_FUN_100a0070)(iVar9,s_CallWindowProcW_100994c8);
        puVar11[0x2e] = iVar9;
        if (iVar9 != 0) {
          iVar9 = (*(code *)PTR_FUN_100a00f0)(0,0x1000,0x1000,0x40);
          puVar11[0x2f] = iVar9;
          if (iVar9 != 0) {
            iVar9 = (*(code *)PTR_FUN_100a00f0)(0,0x2000,0x1000,0x40);
            puVar11[0x30] = iVar9;
            if (iVar9 != 0) {
              iVar9 = (*(code *)PTR_FUN_100a00f0)(0,0x2400,0x1000,0x40);
              puVar11[0x1e] = iVar9;
              if (iVar9 != 0) {
                puVar3 = (uint *)0x0;
                if (puVar11 != (undefined4 *)0x0) {
                  puVar3 = puVar1;
                }
                puVar11[4] = puVar3;
                puVar11[5] = 0x287;
                iVar9 = (*(code *)PTR_FUN_100a0094)(s_SampleAddon_dll_1009a108);
                if (iVar9 != 0) {
                  (*(code *)PTR_FUN_100a0064)(iVar9,&stack0x00000ac8 + iVar10,0x104);
                  iVar10 = (*(code *)PTR_FUN_100a0070)(iVar9,s_AddOnInit_1009a118);
                  iVar13 = (*(code *)PTR_FUN_100a0070)(iVar9,s_AddOnExit_1009a128);
                  local_50[extraout_w15 * -4] = iVar13;
                  if ((iVar10 != 0) && (iVar13 != 0)) {
                    (*pcVar5)();
                    cVar6 = (*extraout_w11_00)(puVar11);
                    if (cVar6 != '\0') {
                      piVar2 = puVar11 + 1;
                      puVar1 = puVar11 + 3;
                      puVar3 = puVar11 + 2;
                      uVar16 = *puVar1;
                      if (*puVar3 == uVar16) {
                        uVar14 = uVar16 << 1;
                        if (uVar16 == 0) {
                          uVar14 = 0x10;
                        }
                        uVar8 = (undefined4)((ulonglong)uVar14 * 0xc);
                        if ((ulonglong)uVar14 * 0xc >> 0x20 != 0) {
                          uVar8 = 0xffffffff;
                        }
                        iVar13 = FUN_1007dd60(uVar8);
                        if (iVar13 == 0) goto LAB_1000691c;
                        FUN_1007e4a0(iVar13,*piVar2,*puVar1 * 0xc);
                        FUN_1007dd80(*piVar2);
                        *piVar2 = iVar13;
                        *puVar1 = uVar14;
                      }
                      iVar13 = local_50[extraout_w15 * -4];
                      piVar2 = (int *)(*piVar2 + *puVar3 * 0xc);
                      *piVar2 = iVar9;
                      piVar2[1] = iVar10;
                      piVar2[2] = iVar13;
                      *puVar3 = *puVar3 + 1;
                      goto LAB_1000691c;
                    }
                  }
                  (*(code *)PTR_FUN_100a0044)(iVar9);
                }
LAB_1000691c:
                *(undefined8 *)(puVar11 + 0x21) = 0;
                *(undefined8 *)(puVar11 + 0x1f) = 0;
                *(undefined8 *)(puVar11 + 0x25) = 0;
                *(undefined8 *)(puVar11 + 0x23) = 0;
                FUN_1007dd80(puVar11[0x18]);
                *(undefined8 *)(puVar11 + 0x18) = 0;
                puVar11[0x1a] = 0;
                goto LAB_100069b4;
              }
            }
          }
        }
      }
    }
    if (*(short *)(puVar11 + 0x13) != 0) {
      uVar8 = (*(code *)PTR_FUN_100a006c)(0);
      (*(code *)PTR_FUN_100a0210)(*(short *)(puVar11 + 0x13),uVar8);
      iVar10 = puVar11[0x14];
      if (iVar10 != 0) {
        (*(code *)PTR_FUN_100a0044)(iVar10);
        puVar11[0x14] = 0;
      }
    }
  }
  FUN_10005f90(puVar11);
  FUN_1007dd10(puVar11,0x974);
  puVar11 = (undefined4 *)0x0;
LAB_100069b4:
  if (puVar11 != (undefined4 *)0x0) {
    piVar2 = puVar11 + 0x12;
    do {
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
  }
  return puVar11;
}

