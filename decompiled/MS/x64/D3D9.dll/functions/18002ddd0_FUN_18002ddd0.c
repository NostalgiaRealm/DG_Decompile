/*
 * FUN_18002ddd0 at 18002ddd0
 * undefined8 __fastcall FUN_18002ddd0(undefined8 * param_1, uint param_2)
 * Address ranges: 18002ddd0-18002e2b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002ddd0(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *in_RAX;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  longlong lVar17;
  undefined1 local_res10 [8];
  
  uVar15 = (ulonglong)param_2;
  lVar17 = uVar15 * 600;
  uVar16 = 1;
  LOCK();
  (&DAT_1801128e8)[uVar15 * 0x96] = (&DAT_1801128e8)[uVar15 * 0x96] + 1;
  lVar6 = DAT_180111f20;
  UNLOCK();
  uVar13 = 0;
  if ((&DAT_1801128e0)[uVar15 * 0x4b] != 0) goto LAB_18002e298;
  if (*(uint *)(param_1 + 1) < 7) {
    uVar8 = uVar13;
    do {
      if (((&DAT_1801128fc)[uVar8 * 0x96] == (&DAT_1801128fc)[uVar15 * 0x96]) &&
         (uVar12 = (&DAT_1801128e0)[uVar8 * 0x4b], (&DAT_1801128e0)[uVar8 * 0x4b] != 0)) break;
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      uVar12 = uVar13;
    } while (uVar10 < 0x20);
    *(undefined8 *)(&DAT_180112af8 + lVar17) = *(undefined8 *)(DAT_180111f20 + 0x85c);
    if ((longlong *)*param_1 != (longlong *)0x0) {
      *(longlong *)*param_1 = lVar6 + 0xd0;
    }
    if (uVar12 == 0) {
      iVar4 = (**(code **)(*DAT_180111f18 + 0x48))();
      uVar1 = (&DAT_1801128fc)[uVar15 * 0x96];
      if (iVar4 == 2) {
        lVar6 = FUN_1800fbccc(0x1d198);
        plVar14 = (longlong *)(lVar6 + 0x17U & 0xfffffffffffffff0);
        plVar14[-1] = lVar6;
        FUN_1800a94c0(plVar14,uVar1);
        plVar14[0x39e2] = 0;
        *plVar14 = (longlong)&PTR_FUN_1801032d8;
        plVar14[0x39e3] = 0;
        plVar14[3] = (longlong)&PTR_FUN_180102b50;
        plVar14[0x39e4] = 0;
        plVar14[0x39f9] = 0;
        plVar14[0x39fa] = 0;
        plVar14[0x3a25] = 0;
        plVar14[0x3a26] = 0;
        plVar14[0x3a27] = 0;
        plVar14[0x3a28] = 0;
        *(undefined4 *)(plVar14 + 0x3a29) = 0;
        plVar14[0x3a2a] = 0;
        *(undefined4 *)(plVar14 + 0x3a2b) = 0xffffffff;
        *(undefined8 *)((longlong)plVar14 + 0x1d15c) = 0;
        *(undefined8 *)((longlong)plVar14 + 0x1d164) = 0;
        *(undefined4 *)((longlong)plVar14 + 0x1d16c) = 0;
        plVar14[0x3a2e] = 0;
        FUN_1800fbea0((undefined1 *)(plVar14 + 0x39e5),0,0xa0);
        FUN_1800fbea0((undefined1 *)(plVar14 + 0x39fb),0,0x140);
        in_RAX = (undefined1 *)0x0;
        plVar14[0x3a23] = 0;
        plVar14[0x3a24] = 0;
      }
      else {
        lVar6 = FUN_1800fbccc(0x1d518);
        plVar14 = (longlong *)(lVar6 + 0x17U & 0xfffffffffffffff0);
        plVar14[-1] = lVar6;
        FUN_1800a94c0(plVar14,uVar1);
        plVar14[0x39e2] = 0;
        *plVar14 = (longlong)&PTR_FUN_180102b58;
        plVar14[0x39e3] = 0;
        plVar14[3] = (longlong)&PTR_FUN_180102b50;
        plVar14[0x3a0e] = 0;
        plVar14[0x3a0f] = 0;
        plVar14[0x3a10] = 0;
        plVar14[0x3a11] = 0;
        *(undefined4 *)(plVar14 + 0x3a12) = 0;
        lVar6 = thunk_FUN_1800fbccc(0xc0);
        plVar14[0x3a13] = lVar6;
        plVar14[0x3a14] = 8;
        plVar14[0x3a15] = 0;
        *(undefined1 *)(plVar14 + 0x3a16) = 0;
        plVar14[14999] = 0;
        plVar14[15000] = 0;
        lVar6 = thunk_FUN_1800fbccc(0x4800);
        plVar14[0x3a99] = lVar6;
        plVar14[0x3a9a] = 0x100;
        plVar14[0x3a9b] = 0;
        *(undefined4 *)(plVar14 + 0x3a9c) = 0;
        plVar14[0x3a9d] = 0;
        plVar14[0x3a9e] = 0;
        plVar14[0x3a9f] = 0;
        FUN_1800fbea0((undefined1 *)(plVar14 + 0x39e4),0,0x140);
        plVar14[0x3a0c] = 0;
        plVar14[0x3a0d] = 0;
        FUN_1800fbea0((undefined1 *)(plVar14 + 0x3a17),0,0x200);
        FUN_1800fbea0((undefined1 *)(plVar14 + 0x3a57),0,0x200);
        in_RAX = FUN_1800fbea0((undefined1 *)(plVar14 + 0x2018),0,0xc180);
      }
      (&DAT_1801128e0)[uVar15 * 0x4b] = plVar14;
      if (plVar14 != (longlong *)0x0) {
        iVar4 = *(int *)(DAT_180111f20 + 0x9db);
        if (iVar4 == 0) {
          iVar11 = *(int *)(DAT_180111f20 + 0x8d2);
          if (iVar11 == 0) {
            iVar4 = 0x2a;
          }
          else {
            if ((iVar11 != 2) && (iVar11 = iVar11 + -3, iVar11 != 0)) goto LAB_18002e16a;
LAB_18002e14f:
            iVar4 = 0x16;
          }
        }
        else {
          iVar11 = iVar4 + -2;
          if (iVar11 == 0) {
            iVar4 = iVar4 + 0x13;
          }
          else {
LAB_18002e16a:
            if (iVar11 == 1) goto LAB_18002e14f;
            iVar4 = 6;
          }
        }
        cVar3 = (**(code **)(*plVar14 + 0x10))
                          (plVar14,DAT_180111f20 + 0x800,&PTR_PTR_18010f190,iVar4);
        if (cVar3 != '\0') {
          uVar7 = FUN_18002f604(plVar14,param_2,(&DAT_180112900)[uVar15 * 0x96]);
          plVar14 = DAT_180111f18;
          if ((char)uVar7 != '\0') {
            uVar10 = *(uint *)((longlong)&DAT_180112a70 + lVar17 + 4);
            uVar2 = *(uint *)(&DAT_180112a70 + uVar15 * 0x4b);
            if (0x500 < *(uint *)(&DAT_180112a70 + uVar15 * 0x4b)) {
              uVar2 = 0x500;
            }
            if (0x400 < uVar10) {
              uVar10 = 0x400;
            }
            uVar8 = (ulonglong)
                    ((*(uint *)((longlong)&DAT_180112a80 + lVar17 + 4) >> 3) * uVar10 * uVar2);
            uVar1 = (&DAT_1801128fc)[uVar15 * 0x96];
            *(ulonglong *)(&DAT_180112b00 + lVar17) =
                 -(ulonglong)(uVar8 < *(ulonglong *)(&DAT_180112af8 + lVar17)) &
                 *(ulonglong *)(&DAT_180112af8 + lVar17) - uVar8;
            uVar5 = (**(code **)(*plVar14 + 0x50))(plVar14,uVar1);
            plVar14 = DAT_180111f18;
            uVar1 = (&DAT_1801128fc)[uVar15 * 0x96];
            *(undefined4 *)(&DAT_180112ac4 + lVar17) = uVar5;
            puVar9 = (undefined4 *)(**(code **)(*plVar14 + 0x58))(plVar14,local_res10,uVar1);
            lVar6 = DAT_180111f20;
            *(undefined4 *)(&DAT_180112ae8 + lVar17) = *puVar9;
            if (*(int *)(lVar6 + 0x9d7) == 1) {
              uVar13 = 0x18;
            }
            else if (*(int *)(lVar6 + 0x9d7) == 2) {
              uVar13 = 0x20;
            }
            in_RAX = (undefined1 *)
                     (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar15 * 0x4b] + 0x118))
                               ((longlong *)(&DAT_1801128e0)[uVar15 * 0x4b],uVar13);
            goto LAB_18002e298;
          }
          (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar15 * 0x4b] + 0x18))();
        }
        in_RAX = (undefined1 *)(**(code **)(*(longlong *)(&DAT_1801128e0)[uVar15 * 0x4b] + 8))();
      }
      (&DAT_1801128e0)[uVar15 * 0x4b] = 0;
    }
    else {
      uVar1 = (&DAT_180112900)[uVar15 * 0x96];
      (&DAT_1801128e0)[uVar15 * 0x4b] = uVar12;
      in_RAX = (undefined1 *)FUN_18002f604(lVar6,param_2,uVar1);
      if ((char)in_RAX != '\0') {
        uVar10 = *(uint *)((longlong)&DAT_180112a70 + lVar17 + 4);
        uVar2 = *(uint *)(&DAT_180112a70 + uVar15 * 0x4b);
        if (0x500 < *(uint *)(&DAT_180112a70 + uVar15 * 0x4b)) {
          uVar2 = 0x500;
        }
        if (0x400 < uVar10) {
          uVar10 = 0x400;
        }
        uVar13 = (ulonglong)
                 ((*(uint *)((longlong)&DAT_180112a80 + lVar17 + 4) >> 3) * uVar10 * uVar2);
        in_RAX = (undefined1 *)
                 (-(ulonglong)(uVar13 < *(ulonglong *)(&DAT_180112af8 + lVar17)) &
                 *(ulonglong *)(&DAT_180112af8 + lVar17) - uVar13);
        *(undefined1 **)(&DAT_180112b00 + lVar17) = in_RAX;
        goto LAB_18002e298;
      }
    }
  }
  LOCK();
  (&DAT_1801128e8)[uVar15 * 0x96] = (&DAT_1801128e8)[uVar15 * 0x96] + -1;
  UNLOCK();
  uVar16 = 0;
LAB_18002e298:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar16);
}

