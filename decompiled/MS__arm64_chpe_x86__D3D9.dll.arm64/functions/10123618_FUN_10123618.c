/*
 * FUN_10123618 at 10123618
 * undefined FUN_10123618(void)
 * Address ranges: 10123468-1012346b;10123618-10123667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_10123618(undefined4 *param_1,undefined8 param_2,byte param_3,uint param_4)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int *in_w7;
  ushort *puVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  ushort *in_w11;
  code *extraout_w11;
  byte *in_w13;
  int *in_w14;
  ushort *in_w15;
  undefined4 *unaff_w19;
  int iVar18;
  int *unaff_w20;
  ulonglong unaff_x21;
  ulonglong unaff_x22;
  ulonglong unaff_x23;
  int unaff_w26;
  undefined4 unaff_w29;
  undefined4 unaff_w30;
  undefined1 in_z2 [32];
  undefined8 in_d16;
  undefined8 in_register_00005208;
  undefined1 in_z25 [32];
  undefined4 in_p0;
  undefined4 *in_stack_00000000;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  byte *in_stack_0000000c;
  uint in_stack_00000010;
  undefined4 auStack_120 [60];
  undefined4 auStack_10 [4];
  bool bVar10;
  
  puVar12 = &stack0x00000000;
  puVar15 = (ushort *)(uint)param_3;
  bVar10 = param_3 != 0;
switchD_10123638_caseD_10123620:
  bVar8 = false;
  bVar9 = true;
  if (bVar10) {
    bVar9 = (ushort *)0x3 < puVar15;
    bVar8 = puVar15 == (ushort *)&DAT_00000004;
  }
  goto switchD_10123638_caseD_10123624;
switchD_10123638_caseD_10123708:
  goto switchD_10123638_caseD_101236f0;
switchD_10123638_caseD_10123768:
  while (!bVar8) {
switchD_10123638_caseD_1012376c:
    do {
      pbVar16 = pbVar16 + 1;
      if (in_w13 <= pbVar16) {
        return (undefined4 *)0x0;
      }
switchD_10123638_caseD_1012373c:
    } while ((ushort *)(*(int *)(pbVar16 + (int)param_1) + *in_w14) != in_w11);
    puVar15 = (ushort *)(*(int *)(pbVar16 + (int)param_1 + 4) + *in_w7);
switchD_10123638_caseD_10123764:
    bVar8 = puVar15 == in_w15;
  }
  param_1 = (undefined4 *)0x0;
switchD_10123638_caseD_10123788:
  return param_1;
switchD_10123638_caseD_10123624:
  if (bVar9 && !bVar8) {
    return param_1;
  }
  puVar17 = (undefined4 *)((int)puVar15 + -1);
  pbVar16 = &switchD_10123638::caseD_10123668;
  puVar15 = (ushort *)(int)*(char *)((int)puVar15 + 0x10123667);
switchD_10123638_caseD_10123634:
  puVar15 = (ushort *)(&switchD_10123638::caseD_10123668 + (int)puVar15 * 4);
  uVar14 = (uint)param_2;
  bVar10 = bVar9;
  switch(puVar15) {
  case (ushort *)0x10123468:
    SVE_add(in_z25,in_p0,in_z25,in_z2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x10123488:
    in_stack_0000000c = (byte *)((int)puVar15 * 0x10 | 0x101002);
    param_2 = 0x14;
    in_stack_00000008 = (ushort *)0x300005f;
    in_stack_00000004 = (ushort *)0x3;
    in_stack_00000000 = param_1;
    in_stack_00000010 = uVar14;
  case (ushort *)0x101234a8:
    param_1 = puVar12;
switchD_10123638_caseD_101234ac:
    param_1 = (undefined4 *)FUN_10122cd8(param_1,param_2);
switchD_10123638_caseD_101234b8:
    return param_1;
  case (ushort *)0x101234ac:
    goto switchD_10123638_caseD_101234ac;
  case (ushort *)0x101234b8:
    goto switchD_10123638_caseD_101234b8;
  case (ushort *)0x101234ec:
    in_stack_00000008 = (ushort *)0x400005f;
    in_stack_0000000c = &switchD_10123638::caseD_10123668;
    in_stack_00000004 = (ushort *)0x4;
    in_stack_00000000 = param_1;
    param_1 = (undefined4 *)FUN_10122cd8(puVar12);
switchD_10123638_caseD_10123508:
switchD_10123638_caseD_1012350c:
    return param_1;
  case (ushort *)0x10123508:
    goto switchD_10123638_caseD_10123508;
  case (ushort *)0x1012350c:
    goto switchD_10123638_caseD_1012350c;
  case (ushort *)0x10123510:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x10123528:
    in_stack_00000010 = uVar14;
  case (ushort *)0x1012352c:
    param_2 = 0x14;
    puVar17 = (undefined4 *)((int)puVar15 * 0x10 | 0x101002);
switchD_10123638_caseD_10123538:
    in_stack_00000008 = (ushort *)((param_4 & 0xf) << 0xb | 0x3000062);
    puVar15 = (ushort *)0x3;
    in_stack_0000000c = (byte *)puVar17;
switchD_10123638_caseD_1012354c:
    in_stack_00000000 = param_1;
    in_stack_00000004 = puVar15;
    param_1 = (undefined4 *)FUN_10122cd8(puVar12,param_2);
switchD_10123638_caseD_1012355c:
switchD_10123638_caseD_10123560:
    return param_1;
  case (ushort *)0x10123538:
    goto switchD_10123638_caseD_10123538;
  case (ushort *)0x1012354c:
    goto switchD_10123638_caseD_1012354c;
  case (ushort *)0x1012355c:
    goto switchD_10123638_caseD_1012355c;
  case (ushort *)0x10123560:
    goto switchD_10123638_caseD_10123560;
  case (ushort *)0x10123568:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x1012356c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x10123570:
    puVar12 = puVar12 + -4;
    *puVar12 = unaff_w29;
  case (ushort *)0x10123574:
    puVar12 = puVar12 + -8;
    puVar17 = (undefined4 *)((uint)param_3 << 4 | 0x101002);
switchD_10123638_caseD_10123588:
    puVar15 = (ushort *)0x4000064;
    pbVar16 = (byte *)(param_4 & 0xf);
switchD_10123638_caseD_10123590:
    pbVar16 = (byte *)((uint)puVar15 | (int)pbVar16 << 0xb);
    puVar12[4] = uVar14;
    puVar12[5] = 1;
switchD_10123638_caseD_1012359c:
    puVar12[2] = pbVar16;
    puVar12[3] = puVar17;
    *puVar12 = param_1;
    puVar12[1] = 4;
    param_1 = (undefined4 *)FUN_10122cd8(puVar12,0x18);
switchD_10123638_caseD_101235b4:
    return param_1;
  case (ushort *)0x10123588:
    goto switchD_10123638_caseD_10123588;
  case (ushort *)0x10123590:
    goto switchD_10123638_caseD_10123590;
  case (ushort *)0x1012359c:
    goto switchD_10123638_caseD_1012359c;
  case (ushort *)0x101235b4:
    goto switchD_10123638_caseD_101235b4;
  case (ushort *)0x101235c0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x101235e4:
    param_2 = 0x14;
switchD_10123638_caseD_101235e8:
    puVar15 = (ushort *)0x3000065;
switchD_10123638_caseD_101235ec:
    in_stack_00000004 = (ushort *)0x3;
    in_stack_00000000 = param_1;
    in_stack_00000008 = puVar15;
    puVar12 = (undefined4 *)FUN_10122cd8(puVar12,param_2);
    return puVar12;
  case (ushort *)0x101235e8:
    goto switchD_10123638_caseD_101235e8;
  case (ushort *)0x101235ec:
    goto switchD_10123638_caseD_101235ec;
  case (ushort *)0x10123610:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x10123614:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x10123620:
    goto switchD_10123638_caseD_10123620;
  case (ushort *)0x10123624:
    goto switchD_10123638_caseD_10123624;
  case (ushort *)0x10123634:
    goto switchD_10123638_caseD_10123634;
  case (ushort *)0x1012363c:
    puVar17 = param_1 + 5;
    break;
  case (ushort *)0x10123644:
    puVar17 = param_1 + 6;
    break;
  case (ushort *)0x1012364c:
    puVar17 = param_1 + 7;
    break;
  case (ushort *)0x10123658:
    goto switchD_10123638_caseD_10123658;
  case (ushort *)0x1012365c:
    goto switchD_10123638_caseD_1012365c;
  case (ushort *)0x10123660:
    goto switchD_10123638_caseD_10123660;
  case (ushort *)0x10123664:
    goto switchD_10123638_caseD_10123664;
  case (ushort *)0x10123668:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x1012366c:
                    /* WARNING: Does not return */
    uVar5 = UndefinedInstructionException(0,0x1012366c);
    (*(code *)uVar5)();
  case (ushort *)0x10123670:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffd0;
switchD_10123638_caseD_10123674:
    *(ulonglong *)((int)register0x00000008 + 0x10) = unaff_x21;
    *(ulonglong *)((int)register0x00000008 + 0x18) = unaff_x22;
    *(ulonglong *)((int)register0x00000008 + 0x20) = unaff_x23;
    *(undefined4 *)((int)register0x00000008 + -0x10) = unaff_w29;
    *(undefined4 *)((int)register0x00000008 + -0xc) = unaff_w30;
    puVar15 = *(ushort **)(unaff_w26 + 0x18);
switchD_10123638_caseD_10123688:
switchD_10123638_caseD_1012368c:
    puVar15 = puVar15 + 0x18;
switchD_10123638_caseD_10123690:
    puVar15 = *(ushort **)puVar15;
switchD_10123638_caseD_10123694:
    unaff_x21 = ZEXT48((undefined4 *)(*(int *)(puVar15 + 6) + 0x14));
    unaff_w20 = *(int **)(*(int *)(puVar15 + 6) + 0x14);
switchD_10123638_caseD_101236a4:
    bVar8 = *unaff_w20 == (int)unaff_x21;
switchD_10123638_caseD_101236ac:
    if (bVar8) goto LAB_101236ec;
    puVar15 = (ushort *)&DAT_1015c000;
switchD_10123638_caseD_101236b4:
    unaff_x23 = (ulonglong)*(uint *)(puVar15 + 8);
switchD_10123638_caseD_101236bc:
    goto switchD_10123638_caseD_101236c0;
  case (ushort *)0x10123674:
    goto switchD_10123638_caseD_10123674;
  case (ushort *)0x10123688:
    goto switchD_10123638_caseD_10123688;
  case (ushort *)0x1012368c:
    goto switchD_10123638_caseD_1012368c;
  case (ushort *)0x10123690:
    goto switchD_10123638_caseD_10123690;
  case (ushort *)0x10123694:
    goto switchD_10123638_caseD_10123694;
  case (ushort *)0x101236a4:
    goto switchD_10123638_caseD_101236a4;
  case (ushort *)0x101236ac:
    goto switchD_10123638_caseD_101236ac;
  case (ushort *)0x101236b4:
    goto switchD_10123638_caseD_101236b4;
  case (ushort *)0x101236bc:
    goto switchD_10123638_caseD_101236bc;
  case (ushort *)0x101236c0:
    goto switchD_10123638_caseD_101236c0;
  case (ushort *)0x101236c4:
    goto switchD_10123638_caseD_101236c4;
  case (ushort *)0x101236c8:
    goto switchD_10123638_caseD_101236c8;
  case (ushort *)0x101236d4:
    goto switchD_10123638_caseD_101236d4;
  case (ushort *)0x101236d8:
    goto switchD_10123638_caseD_101236d8;
  case (ushort *)0x101236e4:
    goto switchD_10123638_caseD_101236e4;
  case (ushort *)0x101236e8:
    goto switchD_10123638_caseD_101236e8;
  case (ushort *)0x101236f0:
    goto switchD_10123638_caseD_101236f0;
  case (ushort *)0x101236f4:
    goto switchD_10123638_caseD_101236f4;
  case (ushort *)0x10123704:
    goto switchD_10123638_caseD_10123704;
  case (ushort *)0x10123708:
    goto switchD_10123638_caseD_10123708;
  case (ushort *)0x1012370c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (ushort *)0x10123718:
    pbVar16 = (byte *)0x0;
switchD_10123638_caseD_1012371c:
    in_w13 = (byte *)(uVar14 - 8);
    if (in_w13 == (byte *)0x0) {
      return (undefined4 *)0x0;
    }
    in_w7 = &DAT_1016f9e8;
switchD_10123638_caseD_1012372c:
    in_w14 = &DAT_1016f9ec;
    in_w11 = (ushort *)0xb9da14ba;
switchD_10123638_caseD_10123738:
    in_w15 = (ushort *)0xf1bdb2c;
    goto switchD_10123638_caseD_1012373c;
  case (ushort *)0x1012371c:
    goto switchD_10123638_caseD_1012371c;
  case (ushort *)0x1012372c:
    goto switchD_10123638_caseD_1012372c;
  case (ushort *)0x10123738:
    goto switchD_10123638_caseD_10123738;
  case (ushort *)0x1012373c:
    goto switchD_10123638_caseD_1012373c;
  case (ushort *)0x10123764:
    goto switchD_10123638_caseD_10123764;
  case (ushort *)0x10123768:
    goto switchD_10123638_caseD_10123768;
  case (ushort *)0x1012376c:
    goto switchD_10123638_caseD_1012376c;
  case (ushort *)0x10123788:
    goto switchD_10123638_caseD_10123788;
  case (ushort *)0x101237ac:
  case (ushort *)0x101237b0:
    puVar12 = puVar12 + -0x48;
switchD_10123638_caseD_101237b4:
    *puVar12 = unaff_w29;
    puVar12[1] = unaff_w30;
switchD_10123638_caseD_101237b8:
switchD_10123638_caseD_101237bc:
    puVar17 = (undefined4 *)0x10175000;
    unaff_x21 = ZEXT48(&DAT_10175b80);
    in_w11 = (ushort *)(param_1 + 0xb);
    pbVar16 = DAT_10175c7c;
    unaff_w19 = param_1;
switchD_10123638_caseD_101237d4:
    if (((uint)pbVar16 & 1) == 0) {
      puVar17[799] = (uint)pbVar16 | 1;
      in_register_00005208 = 0x50b943729bd05598;
      in_d16 = 0xbc2bdf056d99cbf4;
switchD_10123638_caseD_101237e4:
      puVar15 = (ushort *)0x446f;
switchD_10123638_caseD_101237e8:
      puVar6 = (undefined8 *)unaff_x21;
      puVar6[1] = in_register_00005208;
      *puVar6 = in_d16;
      *(short *)(puVar6 + 2) = (short)puVar15;
    }
    if ((*in_w11 & 0xfffe) != 0x12) {
      return (undefined4 *)0x0;
    }
    puVar15 = (ushort *)0x10165000;
switchD_10123638_caseD_10123804:
    unaff_x22 = ZEXT48(puVar15 + 0x568);
switchD_10123638_caseD_10123808:
    unaff_w20 = (int *)0x0;
    unaff_x23 = ZEXT48(in_w11 + 2);
    do {
      puVar15 = (ushort *)*(undefined4 *)unaff_x23;
switchD_10123638_caseD_10123814:
      param_1 = (undefined4 *)FUN_101330c0(puVar15[(int)unaff_w20]);
switchD_10123638_caseD_10123820:
      puVar15 = (ushort *)((int)unaff_x21 + (int)unaff_w20 * 2);
      pbVar16 = (byte *)(uint)*(ushort *)((int)unaff_x22 + (int)unaff_w20 * 2);
switchD_10123638_caseD_1012382c:
      register0x00000008 = (BADSPACEBASE *)puVar12;
      if ((uint)*puVar15 != ((int)param_1 - (int)pbVar16 & 0xffffU)) {
        return (undefined4 *)0x0;
      }
      unaff_w20 = (int *)((int)unaff_w20 + 1);
      puVar12 = (undefined4 *)register0x00000008;
    } while (unaff_w20 < (int *)0x9);
    if (unaff_w20 == (int *)0x9) {
      unaff_w20 = (int *)unaff_w19[6];
switchD_10123638_caseD_10123854:
      puVar15 = (ushort *)(unaff_w20 + 0xf);
switchD_10123638_caseD_10123858:
      if (*(int *)((int)unaff_w20 + *(int *)puVar15 + 0x7c) != 0) {
        iVar18 = *(int *)((int)unaff_w20 + *(int *)puVar15 + 0x78);
        uVar14 = 0;
        iVar3 = *(int *)((int)unaff_w20 + iVar18 + 0x20);
        puVar1 = (uint *)((int)unaff_w20 + iVar18 + 0x18);
        if (*puVar1 != 0) {
          do {
            iVar18 = 0;
            pcVar2 = (char *)(*(int *)((int)unaff_w20 + uVar14 * 4 + iVar3) + (int)unaff_w20);
            cVar4 = *pcVar2;
            while (cVar4 != '\0') {
              uVar11 = FUN_10133100(pcVar2[iVar18]);
              iVar7 = iVar18 + 0x10;
              iVar18 = iVar18 + 1;
              *(undefined1 *)((int)register0x00000008 + iVar7) = uVar11;
              cVar4 = pcVar2[iVar18];
            }
            uVar13 = FUN_10123710((undefined1 *)((int)register0x00000008 + 0x10),iVar18);
            if ((uVar13 & 1) != 0) {
              return (undefined4 *)0x1;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *puVar1);
        }
      }
    }
    return (undefined4 *)0x0;
  case (ushort *)0x101237b4:
    goto switchD_10123638_caseD_101237b4;
  case (ushort *)0x101237b8:
    goto switchD_10123638_caseD_101237b8;
  case (ushort *)0x101237bc:
    goto switchD_10123638_caseD_101237bc;
  case (ushort *)0x101237d4:
    goto switchD_10123638_caseD_101237d4;
  case (ushort *)0x101237e4:
    goto switchD_10123638_caseD_101237e4;
  case (ushort *)0x101237e8:
    goto switchD_10123638_caseD_101237e8;
  case (ushort *)0x10123804:
    goto switchD_10123638_caseD_10123804;
  case (ushort *)0x10123808:
    goto switchD_10123638_caseD_10123808;
  case (ushort *)0x10123814:
    goto switchD_10123638_caseD_10123814;
  case (ushort *)0x10123820:
    goto switchD_10123638_caseD_10123820;
  case (ushort *)0x1012382c:
    goto switchD_10123638_caseD_1012382c;
  case (ushort *)0x10123854:
    goto switchD_10123638_caseD_10123854;
  case (ushort *)0x10123858:
    goto switchD_10123638_caseD_10123858;
  }
  pbVar16 = (byte *)(1 << (ulonglong)(uVar14 & 0x1f));
switchD_10123638_caseD_10123658:
  puVar15 = (ushort *)*puVar17;
switchD_10123638_caseD_1012365c:
  puVar15 = (ushort *)((uint)pbVar16 | (uint)puVar15);
switchD_10123638_caseD_10123660:
  *puVar17 = puVar15;
switchD_10123638_caseD_10123664:
  return param_1;
  while( true ) {
    unaff_w20 = (int *)*unaff_w20;
    puVar15 = (ushort *)*unaff_w20;
switchD_10123638_caseD_101236e4:
    bVar8 = puVar15 == (ushort *)unaff_x21;
switchD_10123638_caseD_101236e8:
    if (bVar8) break;
switchD_10123638_caseD_101236c0:
switchD_10123638_caseD_101236c4:
switchD_10123638_caseD_101236c8:
    (*(code *)unaff_x23)(unaff_w20 + -2);
    param_1 = (undefined4 *)(*extraout_w11)();
switchD_10123638_caseD_101236d4:
    puVar15 = (ushort *)((uint)param_1 & 0xff);
switchD_10123638_caseD_101236d8:
    if (puVar15 != (ushort *)0x0) {
switchD_10123638_caseD_10123704:
      param_1 = (undefined4 *)0x1;
      goto switchD_10123638_caseD_10123708;
    }
  }
LAB_101236ec:
  param_1 = (undefined4 *)0x0;
switchD_10123638_caseD_101236f0:
switchD_10123638_caseD_101236f4:
  return param_1;
}

