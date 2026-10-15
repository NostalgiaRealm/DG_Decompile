/*
 * FUN_100ba550 at 100ba550
 * undefined FUN_100ba550(void)
 * Address ranges: 100ba550-100bb513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100ba550(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,ulonglong param_5)

{
  uint *puVar1;
  char *pcVar2;
  longlong *plVar3;
  uint *puVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  ulonglong *puVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  undefined2 uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar24;
  byte bVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  char cVar35;
  code *extraout_w11;
  ulonglong uVar36;
  ulonglong extraout_x11;
  uint extraout_w12;
  ulonglong uVar37;
  int extraout_w15;
  uint *puVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  char local_50 [4];
  uint auStack_4c [3];
  
  uVar19 = FUN_100013c0();
  iVar13 = extraout_w15 * -0x10;
  pcVar9 = local_50 + iVar13;
  *(int *)(&stack0xffffffd0 + iVar13) = extraout_w1;
  *(int *)(&stack0xffffffe8 + iVar13) = param_4;
  *(undefined4 *)(&stack0xffffffec + iVar13) = 0x8876086c;
  *(undefined4 *)(&stack0xffffffc0 + iVar13) = param_3;
  if ((extraout_w1 == 0) || (param_4 == 0)) goto LAB_100bb4f0;
  uVar42 = *(uint *)(uVar19 - 0x4dd4);
  *(uint *)(&stack0xffffffdc + iVar13) = (uint)param_5 & 0xe0;
  iVar30 = DAT_1013d014;
  if (((((uVar42 >> 6 & 1) == 0) || ((param_5 & 0xe0) != 0)) &&
      (((uVar42 >> 5 & 1) == 0 || (*(int *)(&stack0xffffffdc + iVar13) != 0)))) &&
     (((uVar42 >> 7 & 1) == 0 || (*(int *)(&stack0xffffffdc + iVar13) != 0)))) goto LAB_100bb4f0;
  if (((uVar42 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    *pcVar9 = '\0';
    *(undefined4 *)(iVar30 + 0x1c) = 1;
  }
  else {
    *pcVar9 = '\x01';
    iVar30 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar30 == 0) {
      FUN_10006560(0);
    }
  }
  **(undefined4 **)(&stack0xffffffe8 + iVar13) = 0;
  FUN_100ff690(&stack0x00000d10 + iVar13,0,0x4858);
  iVar30 = *(int *)(&stack0xffffffc0 + iVar13);
  uVar42 = 0;
  auStack_4c[extraout_w15 * -4] = 0;
  if (iVar30 == 0) {
    bVar16 = 1;
    bVar15 = true;
  }
  else {
    bVar15 = false;
    uVar20 = FUN_100035c0(*(undefined4 *)(uVar19 + 0x10),*(undefined4 *)(uVar19 - 0x4ddc));
    bVar16 = FUN_1001eda8(iVar30,uVar20);
    uVar42 = auStack_4c[extraout_w15 * -4];
    if (*(uint *)(*(int *)(uVar19 + 0x14) + 0xc4) <
        ((uint)(byte)(&stack0x00005565)[iVar13] |
        ((byte)(&stack0x00005564)[iVar13] | 0xfffffe00) << 8)) {
      bVar16 = 0;
    }
  }
  if (bVar16 != 0) {
    puVar38 = *(uint **)(&stack0xffffffd0 + iVar13);
    FUN_10083260(&stack0x00000000 + iVar13);
    iVar21 = *(int *)(&stack0x00000008 + iVar13);
    auStack_4c[extraout_w15 * -4] = uVar42;
    auStack_4c[extraout_w15 * -4 + 1] = uVar19;
    uVar41 = 0;
    *(undefined8 *)(&stack0xfffffff8 + iVar13) = 0;
    *(undefined8 *)(&stack0xfffffff0 + iVar13) = 0;
    *(int *)(&stack0xffffffc4 + iVar13) = iVar21;
    iVar31 = 0;
    uVar42 = 0xffffffff;
    iVar30 = 0;
    bVar12 = false;
    bVar11 = false;
    bVar10 = false;
LAB_100ba71c:
    do {
      if (bVar10) {
        uVar19 = auStack_4c[extraout_w15 * -4];
        uVar36 = (ulonglong)uVar19;
        uVar42 = auStack_4c[extraout_w15 * -4 + 1];
        *(int *)(&stack0xffffffc4 + iVar13) = iVar21;
        if (!bVar15) {
          *(int *)(&stack0xffffffc8 + iVar13) = iVar31;
          *(uint *)(&stack0xffffffcc + iVar13) = uVar41;
          auStack_4c[extraout_w15 * -4] = 2;
          *(undefined4 *)(&stack0x00000004 + iVar13) = 2;
          uVar41 = 0;
          goto LAB_100bab3c;
        }
        bVar17 = FUN_100b5220(uVar42 - 0x58e0,&stack0x00000000 + iVar13);
        if ((&stack0x00000018)[iVar13] == '\x02') {
          uVar22 = 1;
          if ((&stack0x0000002c)[iVar13] != -1) {
            uVar22 = 2;
          }
          auStack_4c[extraout_w15 * -4] = uVar22;
          *(uint *)(&stack0x00000004 + iVar13) = uVar22;
        }
        else {
          auStack_4c[extraout_w15 * -4] = 0;
          *(undefined4 *)(&stack0x00000004 + iVar13) = 0;
        }
        if ((bVar17 & bVar16) != 0) {
          *(int *)(&stack0xffffffc8 + iVar13) = iVar31;
          *(uint *)(&stack0xffffffcc + iVar13) = uVar41;
          goto LAB_100bab64;
        }
        break;
      }
      uVar22 = *puVar38;
      if (7 < uVar22 >> 0x1d) break;
      puVar38 = puVar38 + 1;
      switch(uVar22 >> 0x1d) {
      case 0:
        bVar16 = uVar22 == 0 & bVar16;
        break;
      case 1:
        uVar42 = uVar22 & 0xf;
        cVar35 = (&stack0xfffffff0)[uVar42 + iVar13];
        (&stack0xfffffff0)[uVar42 + iVar13] = '\x01';
        bVar16 = ((uVar22 & 0x1ffffff0) == 0 && cVar35 == '\0') & bVar16;
        iVar30 = 0;
        bVar12 = true;
        break;
      case 2:
        uVar39 = uVar22 & 0x1f;
        if ((uVar42 == 0xffffffff) || (bVar17 = 1, (uVar22 & 0xff0ffe0) != 0)) {
          bVar17 = 0;
        }
        if (0x10 < uVar39) {
          bVar17 = 0;
        }
        uVar33 = uVar22 & 0x10000000;
        if ((uVar33 != 0) || (bVar25 = 0, (&stack0x00000014)[uVar39 * 8 + iVar13] == -1)) {
          bVar25 = 1;
        }
        bVar16 = (!bVar15 || uVar33 == 0) & (bVar12 || bVar11) & bVar25 & bVar17 & bVar16;
        if ((bool)bVar16 == false) break;
        uVar22 = uVar22 >> 0x10 & 0xf;
        if (uVar33 != 0) {
          iVar23 = uVar22 << 2;
          if (uVar42 != 0) {
            iVar23 = 0;
          }
          iVar31 = iVar23 + iVar31;
          iVar30 = uVar22 + iVar30;
          goto LAB_100ba71c;
        }
        pcVar2 = &stack0x00000014 + uVar39 * 8 + iVar13;
        if (*pcVar2 != -1) {
          bVar16 = false;
        }
        if ((bool)bVar16 == false) break;
        *pcVar2 = (char)uVar42;
        pcVar2[3] = (char)iVar30;
        if (uVar39 < 0x11) {
          cVar35 = (&DAT_1012ca28)[uVar39];
        }
        else {
          cVar35 = -1;
        }
        pcVar2[5] = cVar35;
        uVar41 = 1 << (ulonglong)(uVar42 & 0x1f) | uVar41;
        switch(uVar22) {
        case 0:
          pcVar2[1] = '\x01';
          pcVar2[2] = '\x04';
          pcVar2[4] = '\0';
          goto LAB_100ba8b8;
        case 1:
          pcVar2[1] = '\x02';
          pcVar2[2] = '\b';
          pcVar2[4] = '\x01';
          goto LAB_100ba8d8;
        case 2:
          pcVar2[1] = '\x03';
          pcVar2[2] = '\f';
          pcVar2[4] = '\x02';
          iVar30 = iVar30 + 3;
          break;
        case 3:
          pcVar2[1] = '\x04';
          pcVar2[2] = '\x10';
          pcVar2[4] = '\x03';
          iVar30 = iVar30 + 4;
          break;
        case 4:
          pcVar2[1] = '\x04';
          pcVar2[2] = '\x04';
          pcVar2[4] = '\x04';
          goto LAB_100ba8b8;
        case 5:
          pcVar2[1] = '\x04';
          pcVar2[2] = '\x04';
          cVar35 = '\x05';
          goto LAB_100ba93c;
        case 6:
          pcVar2[1] = '\x02';
          pcVar2[2] = '\x04';
          cVar35 = '\x06';
LAB_100ba93c:
          pcVar2[4] = cVar35;
LAB_100ba8b8:
          iVar30 = iVar30 + 1;
          break;
        case 7:
          pcVar2[1] = '\x04';
          pcVar2[2] = '\b';
          pcVar2[4] = '\a';
LAB_100ba8d8:
          iVar30 = iVar30 + 2;
          break;
        default:
          bVar16 = false;
        }
        pcVar2[6] = *(char *)((byte)pcVar2[4] + 0x1012ca40);
        if (uVar42 == 0) {
          uVar22 = (uint)(byte)pcVar2[2];
        }
        else {
          uVar22 = 0;
        }
        iVar31 = uVar22 + iVar31;
        (&stack0x0000009c)[*(int *)(&stack0x00000008 + iVar13) + iVar13] = (char)uVar39;
        bVar11 = true;
        iVar21 = *(int *)(&stack0x00000008 + iVar13) + 1;
        *(int *)(&stack0x00000008 + iVar13) = iVar21;
        bVar12 = false;
        break;
      default:
        goto switchD_100ba744_caseD_3;
      case 4:
        uVar39 = uVar22 & 0x7f;
        bVar16 = (uVar39 < *(uint *)(uVar19 - 0x4dd0) && ((uVar22 & 0x1ffff80) == 0 && !bVar12)) &
                 bVar16;
        if ((bool)bVar16 != false) {
          uVar33 = uVar22 >> 0x19 & 0xf;
          uVar22 = 0;
          if (uVar33 != 0) {
            iVar23 = uVar39 + iVar13;
            do {
              uVar44 = *puVar38;
              (&stack0x0000115f)[uVar22 + iVar23] = 1;
              uVar22 = uVar22 + 1;
              *(uint *)(&stack0x00001560 + uVar39 * 0x10 + iVar13) = uVar44;
              puVar4 = puVar38 + 2;
              *(uint *)(&stack0x00001564 + uVar39 * 0x10 + iVar13) = puVar38[1];
              puVar1 = puVar38 + 3;
              puVar38 = puVar38 + 4;
              *(uint *)(&stack0x00001568 + uVar39 * 0x10 + iVar13) = *puVar4;
              iVar43 = uVar39 * 0x10;
              uVar39 = uVar39 + 1;
              *(uint *)(&stack0x0000156c + iVar43 + iVar13) = *puVar1;
            } while (uVar22 < uVar33);
          }
        }
        bVar12 = false;
        bVar11 = false;
        break;
      case 7:
        bVar16 = uVar22 == 0xffffffff;
        bVar10 = true;
      }
    } while ((bool)bVar16 != false);
  }
  goto switchD_100ba744_caseD_3;
LAB_100bad60:
  uVar41 = uVar41 + 1;
  if (uVar22 <= uVar41) goto code_r0x100bad6c;
  goto LAB_100bad08;
code_r0x100bad6c:
  uVar42 = auStack_4c[extraout_w15 * -4 + 1];
  uVar41 = *(uint *)(&stack0xffffffd8 + iVar13);
  goto LAB_100bad74;
LAB_100bb248:
  puVar38 = puVar38 + (uVar22 >> 0x10) + 1;
  goto LAB_100bb0dc;
  while (uVar41 = uVar41 + 1, uVar41 < 0x10) {
LAB_100bab3c:
    if (((&stack0x00000d20)[uVar41 + iVar13] != '\0') &&
       ((&stack0x00000014)[uVar41 * 8 + iVar13] == -1)) goto switchD_100ba744_caseD_3;
  }
LAB_100bab64:
  uVar41 = 3;
  *(undefined4 *)(&stack0xffffffe0 + iVar13) = 3;
  uVar33 = *(uint *)(uVar42 + 0x34);
  uVar39 = (int)puVar38 - *(int *)(&stack0xffffffd0 + iVar13) >> 2;
  uVar40 = (ulonglong)uVar39;
  uVar22 = 0;
  if (uVar33 != 0) {
    do {
      uVar44 = *(uint *)(*(int *)(uVar42 + 0x30) + uVar22 * 0x9a0 + 0x14);
      if (uVar44 == uVar41) {
        uVar41 = uVar41 + 2;
        *(uint *)(&stack0xffffffe0 + iVar13) = uVar41;
      }
      else if (uVar41 < uVar44) break;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar33);
    *(undefined4 *)(&stack0xffffffc8 + iVar13) = *(undefined4 *)(&stack0xffffffc8 + iVar13);
    *(undefined4 *)(&stack0xffffffcc + iVar13) = *(undefined4 *)(&stack0xffffffcc + iVar13);
  }
  if (*(int *)(&stack0xffffffc0 + iVar13) == 0) {
    *(undefined8 *)(&stack0xfffffff0 + iVar13) = 0;
  }
  else {
    lVar34 = 0;
    uVar28 = 0;
    if (uVar39 != 0) {
      do {
        iVar30 = (int)uVar28;
        uVar37 = uVar28 & 1;
        uVar22 = iVar30 + 1;
        uVar28 = (ulonglong)uVar22;
        lVar34 = ((ulonglong)*(uint *)(*(int *)(&stack0xffffffd0 + iVar13) + iVar30 * 4) <<
                 (uVar37 << 5)) + lVar34;
      } while (uVar22 < uVar39);
    }
    lVar32 = 0;
    uVar28 = 0;
    if (uVar19 != 0) {
      do {
        iVar30 = (int)uVar28;
        uVar37 = uVar28 & 1;
        uVar22 = iVar30 + 1;
        uVar28 = (ulonglong)uVar22;
        lVar32 = ((ulonglong)*(uint *)(*(int *)(&stack0xffffffc0 + iVar13) + iVar30 * 4) <<
                 (uVar37 << 5)) + lVar32;
      } while (uVar22 < uVar19);
    }
    uVar22 = *(uint *)(uVar42 + 0x20);
    uVar28 = lVar32 + lVar34;
    *(ulonglong *)(&stack0xfffffff0 + iVar13) = uVar28;
    if (uVar22 != 0) {
      uVar33 = 0;
      uVar44 = uVar22;
      do {
        uVar29 = uVar44 + uVar33 >> 1;
        uVar37 = *(ulonglong *)(*(int *)(uVar42 + 0x1c) + uVar29 * 0x18);
        uVar14 = uVar29;
        if (uVar37 <= uVar28) {
          if (uVar28 <= uVar37) break;
          uVar33 = uVar29 + 1;
          uVar29 = uVar33;
          uVar14 = uVar44;
        }
        uVar44 = uVar14;
      } while (uVar44 != uVar33);
      if (((uVar29 != uVar22) &&
          (plVar3 = (longlong *)(*(int *)(uVar42 + 0x1c) + uVar29 * 0x18),
          *plVar3 == *(longlong *)(&stack0xfffffff0 + iVar13))) &&
         (plVar3 = plVar3 + 2, plVar3 != (longlong *)0x0)) {
        uVar22 = (*(int **)plVar3)[1];
        if (uVar22 != 0) {
          iVar30 = **(int **)plVar3;
          *(uint **)(&stack0xffffffe4 + iVar13) = (uint *)(uVar42 + 0x34);
          *(longlong **)(&stack0xffffffd4 + iVar13) = plVar3;
          *(uint *)(&stack0xffffffd8 + iVar13) = uVar41;
          uVar20 = *(undefined4 *)(&stack0xffffffd0 + iVar13);
          uVar41 = 0;
          auStack_4c[extraout_w15 * -4 + 1] = uVar42;
          auStack_4c[extraout_w15 * -4 + 2] = 0;
LAB_100bad08:
          if (((*(uint *)(iVar30 + 0x970 + uVar41 * 0x990) != uVar39) ||
              (puVar7 = (undefined4 *)(iVar30 + uVar41 * 0x990), puVar7[0x25d] != uVar19)) ||
             ((iVar21 = FUN_100ff610(uVar20,puVar7[0x25e],(uVar40 & 0x3fffffff) << 2), iVar21 != 0
              || (iVar21 = FUN_100ff610(*(undefined4 *)(&stack0xffffffc0 + iVar13),puVar7[0x25f],
                                        (uVar36 & 0x3fffffff) << 2), iVar21 != 0))))
          goto LAB_100bad60;
          uVar22 = *(uint *)(&stack0xffffffd8 + iVar13);
          auStack_4c[extraout_w15 * -4 + 2] = uVar41;
          uVar42 = auStack_4c[extraout_w15 * -4 + 1];
          puVar4 = *(uint **)(&stack0xffffffe4 + iVar13);
          puVar7[1] = uVar22;
          puVar7[0x2d] = uVar22 | 0x80000000;
          *puVar7 = *(undefined4 *)(&stack0xffffffdc + iVar13);
          FUN_100bd770(uVar42 + 0x2c,&stack0xffffffe0 + iVar13,puVar7);
          piVar5 = (int *)**(int **)(&stack0xffffffd4 + iVar13);
          puVar38 = (uint *)(piVar5 + 1);
          uVar41 = *puVar38;
          if (auStack_4c[extraout_w15 * -4 + 2] < uVar41) {
            uVar22 = auStack_4c[extraout_w15 * -4 + 2] + 1;
            if (uVar22 < uVar41) {
              do {
                iVar30 = *piVar5 + uVar22 * 0x990;
                FUN_100ff660(iVar30 + -0x990,iVar30,0x990);
                uVar41 = *puVar38;
                uVar22 = uVar22 + 1;
              } while (uVar22 < uVar41);
            }
            *puVar38 = uVar41 - 1;
          }
          uVar22 = *puVar4;
          uVar41 = *(uint *)(&stack0xffffffe0 + iVar13);
          if (uVar22 == 0) {
LAB_100bafe4:
            puVar27 = (ulonglong *)0x0;
          }
          else {
            uVar33 = 0;
            uVar44 = uVar22;
            do {
              uVar29 = uVar44 + uVar33 >> 1;
              uVar28 = *(ulonglong *)(*(int *)(uVar42 + 0x30) + uVar29 * 0x9a0);
              uVar14 = uVar29;
              if (uVar28 <= uVar41) {
                if (uVar28 < uVar41) {
                  uVar33 = uVar29 + 1;
                  uVar29 = uVar33;
                  uVar14 = uVar44;
                  goto LAB_100bafb4;
                }
                break;
              }
LAB_100bafb4:
              uVar44 = uVar14;
            } while (uVar44 != uVar33);
            if ((uVar29 == uVar22) ||
               (puVar8 = (ulonglong *)(*(int *)(uVar42 + 0x30) + uVar29 * 0x9a0),
               puVar27 = puVar8 + 2, *puVar8 != (ulonglong)uVar41)) goto LAB_100bafe4;
          }
          if (puVar27 == (ulonglong *)0x0) goto LAB_100bad74;
          goto LAB_100bb47c;
        }
      }
    }
  }
LAB_100bad74:
  iVar30 = uVar39 * 4;
  if (uVar39 >> 0x1e != 0) {
    iVar30 = -1;
  }
  uVar22 = FUN_100fece0(iVar30);
  auStack_4c[extraout_w15 * -4 + 1] = uVar22;
  if (uVar22 != 0) {
    iVar30 = 0;
    *(undefined8 *)(&stack0x00000168 + iVar13) = *(undefined8 *)(&stack0x00000008 + iVar13);
    *(undefined8 *)(&stack0x00000160 + iVar13) = *(undefined8 *)(&stack0x00000000 + iVar13);
    *(undefined8 *)(&stack0x00000178 + iVar13) = *(undefined8 *)(&stack0x00000018 + iVar13);
    *(undefined8 *)(&stack0x00000170 + iVar13) = *(undefined8 *)(&stack0x00000010 + iVar13);
    *(undefined8 *)(&stack0x00000188 + iVar13) = *(undefined8 *)(&stack0x00000028 + iVar13);
    *(undefined8 *)(&stack0x00000180 + iVar13) = *(undefined8 *)(&stack0x00000020 + iVar13);
    *(undefined8 *)(&stack0x00000198 + iVar13) = *(undefined8 *)(&stack0x00000038 + iVar13);
    *(undefined8 *)(&stack0x00000190 + iVar13) = *(undefined8 *)(&stack0x00000030 + iVar13);
    *(undefined8 *)(&stack0x000001a8 + iVar13) = *(undefined8 *)(&stack0x00000048 + iVar13);
    *(undefined8 *)(&stack0x000001a0 + iVar13) = *(undefined8 *)(&stack0x00000040 + iVar13);
    *(undefined8 *)(&stack0x000001b8 + iVar13) = *(undefined8 *)(&stack0x00000058 + iVar13);
    *(undefined8 *)(&stack0x000001b0 + iVar13) = *(undefined8 *)(&stack0x00000050 + iVar13);
    *(undefined8 *)(&stack0x000001c8 + iVar13) = *(undefined8 *)(&stack0x00000068 + iVar13);
    *(undefined8 *)(&stack0x000001c0 + iVar13) = *(undefined8 *)(&stack0x00000060 + iVar13);
    *(undefined8 *)(&stack0x000001d8 + iVar13) = *(undefined8 *)(&stack0x00000078 + iVar13);
    *(undefined8 *)(&stack0x000001d0 + iVar13) = *(undefined8 *)(&stack0x00000070 + iVar13);
    *(undefined8 *)(&stack0x000001e8 + iVar13) = *(undefined8 *)(&stack0x00000088 + iVar13);
    *(undefined8 *)(&stack0x000001e0 + iVar13) = *(undefined8 *)(&stack0x00000080 + iVar13);
    *(undefined8 *)(&stack0x000001f8 + iVar13) = *(undefined8 *)(&stack0x00000098 + iVar13);
    *(undefined8 *)(&stack0x000001f0 + iVar13) = *(undefined8 *)(&stack0x00000090 + iVar13);
    *(undefined8 *)(&stack0x00000208 + iVar13) = *(undefined8 *)(&stack0x000000a8 + iVar13);
    *(undefined8 *)(&stack0x00000200 + iVar13) = *(undefined8 *)(&stack0x000000a0 + iVar13);
    if (*(int *)(&stack0x00000010 + iVar13) == 1) {
      *(undefined8 *)(&stack0x000000b8 + iVar13) = *(undefined8 *)(&stack0x00000008 + iVar13);
      *(undefined8 *)(&stack0x000000b0 + iVar13) = *(undefined8 *)(&stack0x00000000 + iVar13);
      *(undefined8 *)(&stack0x000000c8 + iVar13) = *(undefined8 *)(&stack0x00000018 + iVar13);
      *(undefined8 *)(&stack0x000000c0 + iVar13) = *(undefined8 *)(&stack0x00000010 + iVar13);
      *(undefined8 *)(&stack0x000000d8 + iVar13) = *(undefined8 *)(&stack0x00000028 + iVar13);
      *(undefined8 *)(&stack0x000000d0 + iVar13) = *(undefined8 *)(&stack0x00000020 + iVar13);
      *(undefined8 *)(&stack0x000000e8 + iVar13) = *(undefined8 *)(&stack0x00000038 + iVar13);
      *(undefined8 *)(&stack0x000000e0 + iVar13) = *(undefined8 *)(&stack0x00000030 + iVar13);
      *(undefined8 *)(&stack0x000000f8 + iVar13) = *(undefined8 *)(&stack0x00000048 + iVar13);
      *(undefined8 *)(&stack0x000000f0 + iVar13) = *(undefined8 *)(&stack0x00000040 + iVar13);
      *(undefined8 *)(&stack0x00000108 + iVar13) = *(undefined8 *)(&stack0x00000058 + iVar13);
      *(undefined8 *)(&stack0x00000100 + iVar13) = *(undefined8 *)(&stack0x00000050 + iVar13);
      *(undefined8 *)(&stack0x00000118 + iVar13) = *(undefined8 *)(&stack0x00000068 + iVar13);
      *(undefined8 *)(&stack0x00000110 + iVar13) = *(undefined8 *)(&stack0x00000060 + iVar13);
      *(undefined8 *)(&stack0x00000128 + iVar13) = *(undefined8 *)(&stack0x00000078 + iVar13);
      *(undefined8 *)(&stack0x00000120 + iVar13) = *(undefined8 *)(&stack0x00000070 + iVar13);
      *(undefined8 *)(&stack0x00000138 + iVar13) = *(undefined8 *)(&stack0x00000088 + iVar13);
      *(undefined8 *)(&stack0x00000130 + iVar13) = *(undefined8 *)(&stack0x00000080 + iVar13);
      *(undefined8 *)(&stack0x00000148 + iVar13) = *(undefined8 *)(&stack0x00000098 + iVar13);
      *(undefined8 *)(&stack0x00000140 + iVar13) = *(undefined8 *)(&stack0x00000090 + iVar13);
      *(undefined8 *)(&stack0x00000158 + iVar13) = *(undefined8 *)(&stack0x000000a8 + iVar13);
      *(undefined8 *)(&stack0x00000150 + iVar13) = *(undefined8 *)(&stack0x000000a0 + iVar13);
    }
    else {
      FUN_10083260(&stack0x000000b0 + iVar13);
      uVar22 = auStack_4c[extraout_w15 * -4];
      uVar33 = *(uint *)(&stack0xffffffc4 + iVar13);
      *(undefined4 *)(&stack0x000000b0 + iVar13) = *(undefined4 *)(&stack0x00000000 + iVar13);
      *(uint *)(&stack0x000000b4 + iVar13) = uVar22;
      *(undefined4 *)(&stack0x000000c0 + iVar13) = 1;
      iVar21 = 0;
      uVar22 = 0;
      *(uint *)(&stack0x000000b8 + iVar13) = uVar33;
      if (uVar33 != 0) {
        auStack_4c[extraout_w15 * -4 + 2] = uVar39;
        do {
          bVar16 = (&stack0x000001fc)[uVar22 + iVar13];
          iVar31 = uVar22 + iVar13;
          uVar22 = uVar22 + 1;
          (&stack0x0000014c)[iVar31] = bVar16;
          uVar39 = (uint)bVar16;
          (&stack0x000000c4)[(uint)bVar16 * 8 + iVar13] = 0;
          uVar6 = (&stack0x00000178)[uVar39 * 8 + iVar13];
          (&stack0x000000c5)[uVar39 * 8 + iVar13] = (&stack0x00000175)[uVar39 * 8 + iVar13];
          uVar44 = (uint)bVar16;
          bVar16 = (&stack0x00000176)[uVar39 * 8 + iVar13];
          (&stack0x000000c6)[uVar44 * 8 + iVar13] = bVar16;
          (&stack0x000000c7)[uVar44 * 8 + iVar13] = (char)iVar21;
          iVar21 = iVar21 + (uint)(bVar16 >> 2);
          (&stack0x000000c8)[uVar44 * 8 + iVar13] = uVar6;
          (&stack0x000000c9)[uVar44 * 8 + iVar13] = (&stack0x00000179)[uVar44 * 8 + iVar13];
        } while (uVar22 < uVar33);
        uVar40 = (ulonglong)auStack_4c[extraout_w15 * -4 + 2];
      }
      *(int *)(&stack0x000000bc + iVar13) = iVar21 << 2;
    }
    iVar21 = 0;
    *(int *)(&stack0xffffffd4 + iVar13) = *(int *)(&stack0xffffffc0 + iVar13);
    if (*(int *)(&stack0xffffffc0 + iVar13) == 0) {
      iVar23 = 0;
      iVar31 = 0;
      bVar15 = true;
LAB_100bb378:
      if (bVar15) {
        *(uint *)(&stack0x00000160 + iVar13) = uVar41;
        *(uint *)(&stack0x000000b0 + iVar13) = uVar41 | 0x80000000;
        *(undefined4 *)(&stack0x0000016c + iVar13) = *(undefined4 *)(&stack0xffffffc8 + iVar13);
        *(undefined4 *)(&stack0x00000170 + iVar13) = *(undefined4 *)(&stack0xffffffcc + iVar13);
        *(undefined4 *)(&stack0x00000380 + iVar13) = *(undefined4 *)(&stack0xffffffdc + iVar13);
        *(undefined8 *)(&stack0x0000038c + iVar13) = *(undefined8 *)(&stack0x00000168 + iVar13);
        *(undefined8 *)(&stack0x00000384 + iVar13) = *(undefined8 *)(&stack0x00000160 + iVar13);
        *(undefined8 *)(&stack0x0000039c + iVar13) = *(undefined8 *)(&stack0x00000178 + iVar13);
        *(undefined8 *)(&stack0x00000394 + iVar13) = *(undefined8 *)(&stack0x00000170 + iVar13);
        *(undefined8 *)(&stack0x000003ac + iVar13) = *(undefined8 *)(&stack0x00000188 + iVar13);
        *(undefined8 *)(&stack0x000003a4 + iVar13) = *(undefined8 *)(&stack0x00000180 + iVar13);
        *(undefined8 *)(&stack0x000003bc + iVar13) = *(undefined8 *)(&stack0x00000198 + iVar13);
        *(undefined8 *)(&stack0x000003b4 + iVar13) = *(undefined8 *)(&stack0x00000190 + iVar13);
        *(undefined8 *)(&stack0x000003cc + iVar13) = *(undefined8 *)(&stack0x000001a8 + iVar13);
        *(undefined8 *)(&stack0x000003c4 + iVar13) = *(undefined8 *)(&stack0x000001a0 + iVar13);
        *(undefined8 *)(&stack0x000003dc + iVar13) = *(undefined8 *)(&stack0x000001b8 + iVar13);
        *(undefined8 *)(&stack0x000003d4 + iVar13) = *(undefined8 *)(&stack0x000001b0 + iVar13);
        *(undefined8 *)(&stack0x000003ec + iVar13) = *(undefined8 *)(&stack0x000001c8 + iVar13);
        *(undefined8 *)(&stack0x000003e4 + iVar13) = *(undefined8 *)(&stack0x000001c0 + iVar13);
        *(undefined8 *)(&stack0x000003fc + iVar13) = *(undefined8 *)(&stack0x000001d8 + iVar13);
        *(undefined8 *)(&stack0x000003f4 + iVar13) = *(undefined8 *)(&stack0x000001d0 + iVar13);
        *(undefined8 *)(&stack0x0000040c + iVar13) = *(undefined8 *)(&stack0x000001e8 + iVar13);
        *(undefined8 *)(&stack0x00000404 + iVar13) = *(undefined8 *)(&stack0x000001e0 + iVar13);
        *(undefined8 *)(&stack0x0000041c + iVar13) = *(undefined8 *)(&stack0x000001f8 + iVar13);
        *(undefined8 *)(&stack0x00000414 + iVar13) = *(undefined8 *)(&stack0x000001f0 + iVar13);
        *(undefined8 *)(&stack0x0000042c + iVar13) = *(undefined8 *)(&stack0x00000208 + iVar13);
        *(undefined8 *)(&stack0x00000424 + iVar13) = *(undefined8 *)(&stack0x00000200 + iVar13);
        *(undefined8 *)(&stack0x0000043c + iVar13) = *(undefined8 *)(&stack0x000000b8 + iVar13);
        *(undefined8 *)(&stack0x00000434 + iVar13) = *(undefined8 *)(&stack0x000000b0 + iVar13);
        *(undefined8 *)(&stack0x0000044c + iVar13) = *(undefined8 *)(&stack0x000000c8 + iVar13);
        *(undefined8 *)(&stack0x00000444 + iVar13) = *(undefined8 *)(&stack0x000000c0 + iVar13);
        *(undefined8 *)(&stack0x0000045c + iVar13) = *(undefined8 *)(&stack0x000000d8 + iVar13);
        *(undefined8 *)(&stack0x00000454 + iVar13) = *(undefined8 *)(&stack0x000000d0 + iVar13);
        *(undefined8 *)(&stack0x0000046c + iVar13) = *(undefined8 *)(&stack0x000000e8 + iVar13);
        *(undefined8 *)(&stack0x00000464 + iVar13) = *(undefined8 *)(&stack0x000000e0 + iVar13);
        *(undefined8 *)(&stack0x0000047c + iVar13) = *(undefined8 *)(&stack0x000000f8 + iVar13);
        *(undefined8 *)(&stack0x00000474 + iVar13) = *(undefined8 *)(&stack0x000000f0 + iVar13);
        *(undefined8 *)(&stack0x0000048c + iVar13) = *(undefined8 *)(&stack0x00000108 + iVar13);
        *(undefined8 *)(&stack0x00000484 + iVar13) = *(undefined8 *)(&stack0x00000100 + iVar13);
        *(undefined8 *)(&stack0x0000049c + iVar13) = *(undefined8 *)(&stack0x00000118 + iVar13);
        *(undefined8 *)(&stack0x00000494 + iVar13) = *(undefined8 *)(&stack0x00000110 + iVar13);
        *(undefined8 *)(&stack0x000004ac + iVar13) = *(undefined8 *)(&stack0x00000128 + iVar13);
        *(undefined8 *)(&stack0x000004a4 + iVar13) = *(undefined8 *)(&stack0x00000120 + iVar13);
        *(undefined8 *)(&stack0x000004bc + iVar13) = *(undefined8 *)(&stack0x00000138 + iVar13);
        *(undefined8 *)(&stack0x000004b4 + iVar13) = *(undefined8 *)(&stack0x00000130 + iVar13);
        *(undefined8 *)(&stack0x000004cc + iVar13) = *(undefined8 *)(&stack0x00000148 + iVar13);
        *(undefined8 *)(&stack0x000004c4 + iVar13) = *(undefined8 *)(&stack0x00000140 + iVar13);
        *(undefined8 *)(&stack0x000004dc + iVar13) = *(undefined8 *)(&stack0x00000158 + iVar13);
        *(undefined8 *)(&stack0x000004d4 + iVar13) = *(undefined8 *)(&stack0x00000150 + iVar13);
        *(undefined2 *)(&stack0x000004ec + iVar13) = 0xffff;
        uVar20 = *(undefined4 *)(uVar42 + 0x28);
        *(int *)(&stack0x000004e4 + iVar13) = iVar21;
        *(int *)(&stack0x000004e8 + iVar13) = iVar23;
        *(undefined4 *)(&stack0x00000d04 + iVar13) = 0;
        FUN_1000af50(uVar20,&stack0x0000115f + iVar13,&stack0x000004ec + iVar13,0x400);
        uVar41 = auStack_4c[extraout_w15 * -4 + 1];
        FUN_100ff660(uVar41,*(undefined4 *)(&stack0xffffffd0 + iVar13),(uVar40 & 0x3fffffff) << 2);
        *(int *)(&stack0x00000cf0 + iVar13) = (int)uVar40;
        *(uint *)(&stack0x00000cf4 + iVar13) = uVar19;
        *(uint *)(&stack0x00000cf8 + iVar13) = uVar41;
        *(int *)(&stack0x00000cfc + iVar13) = iVar31;
        *(int *)(&stack0x00000d00 + iVar13) = iVar30;
        *(undefined8 *)(&stack0x00000d08 + iVar13) = *(undefined8 *)(&stack0xfffffff0 + iVar13);
        iVar21 = FUN_100bd770(uVar42 + 0x2c,&stack0xffffffe0 + iVar13,&stack0x00000380 + iVar13);
        puVar27 = (ulonglong *)(iVar21 + 8);
        if (puVar27 != (ulonglong *)0x0) {
LAB_100bb47c:
          *(undefined4 *)(&stack0xffffffec + iVar13) = 0;
          **(undefined4 **)(&stack0xffffffe8 + iVar13) = *(undefined4 *)((int)puVar27 + 4);
          goto switchD_100ba744_caseD_3;
        }
      }
    }
    else {
      iVar31 = uVar19 * 4;
      if (uVar19 >> 0x1e != 0) {
        iVar31 = -1;
      }
      iVar31 = FUN_100fece0(iVar31);
      iVar23 = FUN_100febf0(0x4858);
      if ((iVar31 != 0) && (iVar23 != 0)) {
        uVar20 = (undefined4)((ulonglong)*(uint *)(&stack0x00005560 + iVar13) * 0x14);
        if ((ulonglong)*(uint *)(&stack0x00005560 + iVar13) * 0x14 >> 0x20 != 0) {
          uVar20 = 0xffffffff;
        }
        iVar30 = FUN_100fece0(uVar20);
        if (iVar30 != 0) {
          FUN_100ff690(iVar30,0,((ulonglong)(uint)(*(int *)(&stack0x00005560 + iVar13) * 5) &
                                0x3fffffff) << 2);
          iVar21 = *(int *)(&stack0xffffffd4 + iVar13);
          *(int *)(&stack0xffffffc4 + iVar13) = iVar23;
          *(undefined4 *)(&stack0xffffffd4 + iVar13) = 0;
          *(uint *)(&stack0xffffffd8 + iVar13) = uVar41;
          auStack_4c[extraout_w15 * -4] = uVar19;
          puVar38 = (uint *)(iVar21 + 4);
          *(int *)(&stack0xffffffe4 + iVar13) = iVar31;
          auStack_4c[extraout_w15 * -4 + 2] = (uint)uVar40;
          iVar43 = 0;
LAB_100bb0dc:
          uVar22 = *puVar38;
          uVar19 = 0;
          uVar41 = uVar22 & 0xffff;
          switch(uVar41) {
          case 0:
            puVar38 = puVar38 + 1;
            goto LAB_100bb0dc;
          case 1:
          case 6:
          case 7:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x13:
switchD_100bb100_caseD_1:
            uVar19 = 1;
            break;
          case 2:
          case 5:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0x11:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
            uVar19 = 2;
            break;
          case 3:
          case 0x12:
            break;
          case 4:
            uVar19 = 3;
            break;
          default:
            if (uVar41 == 0xfffe) goto LAB_100bb248;
            if (uVar41 != 0xffff) {
              if (uVar41 - 0x4e < 2) goto switchD_100bb100_caseD_1;
              break;
            }
            uVar40 = (ulonglong)auStack_4c[extraout_w15 * -4 + 2];
            uVar36 = (ulonglong)auStack_4c[extraout_w15 * -4];
            iVar21 = *(int *)(&stack0xffffffd4 + iVar13);
            uVar41 = *(uint *)(&stack0xffffffd8 + iVar13);
            iVar31 = *(int *)(&stack0xffffffe4 + iVar13);
            iVar23 = *(int *)(&stack0xffffffc4 + iVar13);
            *(undefined1 *)(iVar30 + iVar43 * 0x14) = 0xff;
            goto LAB_100bb280;
          }
          uVar41 = 0;
          iVar21 = iVar43 * 0x14;
          *(char *)(iVar30 + iVar21) = (char)uVar22;
          uVar22 = puVar38[1];
          if (uVar19 != 0) {
            uVar36 = ZEXT48(puVar38 + 2);
            uVar26 = (ulonglong)(iVar30 + 10);
            uVar37 = (ulonglong)(iVar30 + 0xd);
            uVar28 = (ulonglong)(iVar30 + 7);
            uVar40 = (ulonglong)(iVar30 + iVar43 * 0x14 + 1);
            uVar24 = 0x1000000;
            do {
              uVar18 = FUN_10015e38(*(undefined4 *)((int)uVar36 + uVar41 * 4));
              uVar41 = extraout_w1_00 + 1;
              *(undefined2 *)((int)uVar40 + extraout_w1_00 * 2) = uVar18;
              *(bool *)((int)uVar26 + iVar21) = (extraout_w12 & 0xf000000) == (uint)uVar24;
              *(byte *)((int)uVar37 + iVar21) = (byte)(extraout_w12 >> 0xd) & 1;
              *(char *)((int)uVar28 + iVar21) = (char)(extraout_w12 >> 0x10);
              iVar21 = iVar21 + 1;
              uVar36 = extraout_x11;
            } while (uVar41 < uVar19);
          }
          puVar38 = puVar38 + uVar19 + 2;
          if (uVar19 < 3) {
            FUN_100ff690(iVar30 + (uVar19 + iVar43 * 10) * 2 + 1,0xffff,(ulonglong)(3 - uVar19) << 1
                        );
            do {
              uVar19 = uVar19 + 1;
            } while (uVar19 < 3);
          }
          uVar18 = FUN_10015e38(uVar22);
          *(undefined2 *)(iVar30 + iVar43 * 0x14 + 0x11) = uVar18;
          *(byte *)(iVar30 + iVar43 * 0x14 + 0x10) = (byte)(uVar22 >> 0x10) & 0xf;
          iVar43 = iVar43 + 1;
          goto LAB_100bb0dc;
        }
LAB_100bb280:
        uVar19 = (uint)uVar36;
        bVar15 = iVar30 != 0;
        if (iVar30 != 0) {
          if (uVar19 != 0) {
            FUN_100ff660(iVar31,*(undefined4 *)(&stack0xffffffc0 + iVar13),
                         (uVar36 & 0x3fffffff) << 2);
          }
          FUN_100ff660(iVar23,&stack0x00000d10 + iVar13,0x4858);
          *(undefined4 *)(&stack0x00000370 + iVar13) = 0;
          *(undefined8 *)(&stack0x00000218 + iVar13) = *(undefined8 *)(&stack0x00000008 + iVar13);
          *(undefined8 *)(&stack0x00000210 + iVar13) = *(undefined8 *)(&stack0x00000000 + iVar13);
          *(undefined8 *)(&stack0x00000228 + iVar13) = *(undefined8 *)(&stack0x00000018 + iVar13);
          *(undefined8 *)(&stack0x00000220 + iVar13) = *(undefined8 *)(&stack0x00000010 + iVar13);
          *(undefined8 *)(&stack0x00000238 + iVar13) = *(undefined8 *)(&stack0x00000028 + iVar13);
          *(undefined8 *)(&stack0x00000230 + iVar13) = *(undefined8 *)(&stack0x00000020 + iVar13);
          *(undefined8 *)(&stack0x00000248 + iVar13) = *(undefined8 *)(&stack0x00000038 + iVar13);
          *(undefined8 *)(&stack0x00000240 + iVar13) = *(undefined8 *)(&stack0x00000030 + iVar13);
          *(undefined8 *)(&stack0x00000258 + iVar13) = *(undefined8 *)(&stack0x00000048 + iVar13);
          *(undefined8 *)(&stack0x00000250 + iVar13) = *(undefined8 *)(&stack0x00000040 + iVar13);
          *(undefined8 *)(&stack0x00000268 + iVar13) = *(undefined8 *)(&stack0x00000058 + iVar13);
          *(undefined8 *)(&stack0x00000260 + iVar13) = *(undefined8 *)(&stack0x00000050 + iVar13);
          *(undefined8 *)(&stack0x00000278 + iVar13) = *(undefined8 *)(&stack0x00000068 + iVar13);
          *(undefined8 *)(&stack0x00000270 + iVar13) = *(undefined8 *)(&stack0x00000060 + iVar13);
          *(undefined8 *)(&stack0x00000288 + iVar13) = *(undefined8 *)(&stack0x00000078 + iVar13);
          *(undefined8 *)(&stack0x00000280 + iVar13) = *(undefined8 *)(&stack0x00000070 + iVar13);
          *(undefined8 *)(&stack0x00000298 + iVar13) = *(undefined8 *)(&stack0x00000088 + iVar13);
          *(undefined8 *)(&stack0x00000290 + iVar13) = *(undefined8 *)(&stack0x00000080 + iVar13);
          *(undefined8 *)(&stack0x000002a8 + iVar13) = *(undefined8 *)(&stack0x00000098 + iVar13);
          *(undefined8 *)(&stack0x000002a0 + iVar13) = *(undefined8 *)(&stack0x00000090 + iVar13);
          *(undefined8 *)(&stack0x000002b8 + iVar13) = *(undefined8 *)(&stack0x000000a8 + iVar13);
          *(undefined8 *)(&stack0x000002b0 + iVar13) = *(undefined8 *)(&stack0x000000a0 + iVar13);
          *(undefined8 *)(&stack0x000002c8 + iVar13) = *(undefined8 *)(&stack0x000000b8 + iVar13);
          *(undefined8 *)(&stack0x000002c0 + iVar13) = *(undefined8 *)(&stack0x000000b0 + iVar13);
          *(undefined8 *)(&stack0x000002d8 + iVar13) = *(undefined8 *)(&stack0x000000c8 + iVar13);
          *(undefined8 *)(&stack0x000002d0 + iVar13) = *(undefined8 *)(&stack0x000000c0 + iVar13);
          *(undefined8 *)(&stack0x000002e8 + iVar13) = *(undefined8 *)(&stack0x000000d8 + iVar13);
          *(undefined8 *)(&stack0x000002e0 + iVar13) = *(undefined8 *)(&stack0x000000d0 + iVar13);
          *(undefined8 *)(&stack0x000002f8 + iVar13) = *(undefined8 *)(&stack0x000000e8 + iVar13);
          *(undefined8 *)(&stack0x000002f0 + iVar13) = *(undefined8 *)(&stack0x000000e0 + iVar13);
          *(undefined8 *)(&stack0x00000308 + iVar13) = *(undefined8 *)(&stack0x000000f8 + iVar13);
          *(undefined8 *)(&stack0x00000300 + iVar13) = *(undefined8 *)(&stack0x000000f0 + iVar13);
          *(undefined8 *)(&stack0x00000318 + iVar13) = *(undefined8 *)(&stack0x00000108 + iVar13);
          *(undefined8 *)(&stack0x00000310 + iVar13) = *(undefined8 *)(&stack0x00000100 + iVar13);
          *(undefined8 *)(&stack0x00000328 + iVar13) = *(undefined8 *)(&stack0x00000118 + iVar13);
          *(undefined8 *)(&stack0x00000320 + iVar13) = *(undefined8 *)(&stack0x00000110 + iVar13);
          *(undefined8 *)(&stack0x00000338 + iVar13) = *(undefined8 *)(&stack0x00000128 + iVar13);
          *(undefined8 *)(&stack0x00000330 + iVar13) = *(undefined8 *)(&stack0x00000120 + iVar13);
          *(undefined8 *)(&stack0x00000348 + iVar13) = *(undefined8 *)(&stack0x00000138 + iVar13);
          *(undefined8 *)(&stack0x00000340 + iVar13) = *(undefined8 *)(&stack0x00000130 + iVar13);
          *(undefined8 *)(&stack0x00000358 + iVar13) = *(undefined8 *)(&stack0x00000148 + iVar13);
          *(undefined8 *)(&stack0x00000350 + iVar13) = *(undefined8 *)(&stack0x00000140 + iVar13);
          *(undefined8 *)(&stack0x00000368 + iVar13) = *(undefined8 *)(&stack0x00000158 + iVar13);
          *(undefined8 *)(&stack0x00000360 + iVar13) = *(undefined8 *)(&stack0x00000150 + iVar13);
          uVar20 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          iVar21 = (*extraout_w11)(uVar20,iVar31,iVar23,&stack0x00000210 + iVar13);
          bVar15 = iVar21 != 0;
        }
        goto LAB_100bb378;
      }
    }
    FUN_100fec90(iVar30,0);
    FUN_100fec90(iVar23,0x4858);
    FUN_100fed00(auStack_4c[extraout_w15 * -4 + 1]);
    FUN_100fed00(iVar31);
  }
switchD_100ba744_caseD_3:
  if (*pcVar9 == '\0') {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  else {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
LAB_100bb4f0:
  return *(undefined4 *)(&stack0xffffffec + iVar13);
}

