/*
 * FUN_18000452c at 18000452c
 * undefined __fastcall FUN_18000452c(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 18000452c-180004a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000452c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 local_res10 [6];
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_8c;
  undefined8 uStack_84;
  
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0x6810) = 0;
  *(undefined4 *)(param_1 + 0x680c) = 0;
  FUN_1800fbea0(*(undefined1 **)(param_1 + 0xe10),0,0x87b0);
  FUN_1800fbea0(local_b8,0,0x40);
  uVar6 = uVar9;
  do {
    lVar4 = *(longlong *)(param_1 + 0xe10);
    uVar10 = (uint)uVar6;
    lVar5 = (longlong)(int)uVar10 * 0x40;
    *(undefined4 *)(lVar4 + lVar5) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x14 + lVar5) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x28 + lVar5) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x3c + lVar5) = 0x3f800000;
    puVar2 = (undefined8 *)(lVar4 + 4 + lVar5);
    *puVar2 = local_b4;
    puVar2[1] = uStack_ac;
    puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar5);
    *puVar2 = local_a0;
    puVar2[1] = uStack_98;
    puVar2 = (undefined8 *)(lVar4 + 0x2c + lVar5);
    *puVar2 = local_8c;
    puVar2[1] = uStack_84;
    FUN_18001ce18(param_1,uVar10);
    uVar6 = (ulonglong)(uVar10 + 1);
  } while (uVar10 + 1 < 0x10a);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x418),0,0x60);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x478),0,0x348);
  uVar6 = uVar9;
  if (*(longlong *)(param_1 + 8) != 0) {
    do {
      *(undefined4 *)(param_1 + 0x478 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + 4 + uVar6 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xd2);
  }
  uVar10 = 1;
LAB_18000463d:
  do {
    if ((&DAT_1800ff1e0)[uVar10] != '\0') {
      if (uVar10 == 0x1a) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9cf);
        uVar6 = uVar9;
        if (iVar7 != 0) {
          if ((iVar7 == 1) && (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9cb) != 0)) {
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x4e0);
          }
          else {
            uVar6 = 1;
          }
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                  (*(longlong **)(param_1 + 0x28),0x1a,uVar6);
        uVar10 = 0x1b;
        goto LAB_18000463d;
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                (*(longlong **)(param_1 + 0x28),uVar10,
                 *(undefined4 *)(param_1 + 0x478 + (ulonglong)uVar10 * 4));
    }
    uVar10 = uVar10 + 1;
    if (0xd1 < uVar10) {
      FUN_1800fbea0((undefined1 *)(param_1 + 0x7c0),0,0x420);
      iVar7 = 8;
      uVar6 = uVar9;
      uVar11 = uVar9;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        do {
          uVar10 = (uint)uVar11;
          lVar4 = param_1 + uVar11 * 4;
          uVar12 = uVar9;
          do {
            iVar8 = (int)uVar12;
            uVar3 = *(undefined4 *)
                     ((ulonglong)(-(uint)(iVar8 != 0) & 4) + 4 +
                     *(longlong *)(param_1 + 0x10) + uVar11 * 0xc);
            *(undefined4 *)(lVar4 + 0x7c0 + uVar12 * 0x84) = uVar3;
            if (uVar10 == 0xb) {
              *(int *)(lVar4 + 0x7c0 + uVar12 * 0x84) = iVar8;
            }
            else if (uVar10 < 7) {
              *(undefined4 *)(lVar4 + 0xbe0 + uVar12 * 0x1c) = uVar3;
            }
            uVar12 = (ulonglong)(iVar8 + 1U);
          } while (iVar8 + 1U < 8);
          uVar11 = (ulonglong)(uVar10 + 1);
        } while (uVar10 + 1 < 0x21);
      }
      do {
        uVar10 = 1;
        do {
          FUN_18001b55c(param_1,(int)uVar6,uVar10,
                        (ulonglong)*(uint *)(uVar6 * 0x84 + param_1 + 0x7c0 + (ulonglong)uVar10 * 4)
                       );
          uVar10 = uVar10 + 1;
        } while (uVar10 < 0x21);
        uVar10 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar10;
      } while (uVar10 < 8);
      *(undefined4 *)(param_1 + 0x368) = 3;
      *(undefined4 *)(param_1 + 0x374) = 0x3f800000;
      plVar1 = (longlong *)(param_1 + 0x358);
      *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x36c) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x3b0) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x378) = 0;
      *(undefined8 *)(param_1 + 900) = 0;
      *(undefined4 *)(param_1 + 0x380) = 0;
      *(undefined8 *)(param_1 + 0x394) = 0;
      *(undefined8 *)(param_1 + 0x38c) = 0;
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      *(undefined4 *)(param_1 + 0x39c) = 0;
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      *(undefined8 *)(param_1 + 0x3b8) = 0;
      *(undefined8 *)(param_1 + 0x3c0) = 0;
      *(undefined8 *)(param_1 + 0x3c8) = 0;
      *(undefined1 *)(param_1 + 0x3d0) = 0;
      FUN_1800fbcf0((LPVOID)*plVar1);
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x360) = 0;
      iVar8 = 8;
      do {
        local_res10[0] = 0xffffffff;
        FUN_180004454(plVar1,local_res10);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x318));
      *(undefined8 *)(param_1 + 0x318) = 0;
      *(undefined8 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0;
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x330));
      *(undefined8 *)(param_1 + 0x330) = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined8 *)(param_1 + 0x340) = 0;
      if (*(uint *)(param_1 + 0x360) < 9) {
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar9 * 4) != -1) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                      (*(longlong **)(param_1 + 0x28),uVar9,0);
            *(undefined4 *)(*plVar1 + uVar9 * 4) = 0xffffffff;
          }
          uVar10 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 < 8);
      }
      else {
        do {
          if (*(int *)(*plVar1 + uVar9 * 4) != -1) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                      (*(longlong **)(param_1 + 0x28),uVar9,0);
          }
          uVar10 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 < 8);
        FUN_1800fbcf0((LPVOID)*plVar1);
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        do {
          local_res10[0] = 0xffffffff;
          FUN_180004454(plVar1,local_res10);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      bVar13 = *(longlong *)(param_1 + 0x50) != 0;
      *(undefined8 *)(param_1 + 0x2ec) = 0;
      *(undefined8 *)(param_1 + 0x2e4) = 0;
      *(undefined8 *)(param_1 + 0x2fc) = 0;
      *(undefined8 *)(param_1 + 0x2f4) = 0;
      *(undefined8 *)(param_1 + 0x30c) = 0;
      *(undefined8 *)(param_1 + 0x304) = 0;
      *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x2d4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x314) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = param_2;
      *(undefined4 *)(param_1 + 100) = param_3;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xd14) = 0xff;
      uVar10 = (uint)bVar13;
      if (*(uint *)(param_1 + 0x494) != uVar10) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                  (*(longlong **)(param_1 + 0x28),7,bVar13);
      }
      *(uint *)(param_1 + 0x494) = uVar10;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                (*(longlong **)(param_1 + 0x28),param_1 + 0x58);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3f4));
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x60))
                (*(longlong **)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40e));
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
                (*(longlong **)(param_1 + 0x28),*(undefined1 *)(DAT_180111f20 + 0x885));
      *(undefined4 *)(param_1 + 0x3d4) = 0;
      *(undefined4 *)(param_1 + 0x3d8) = 0xfff;
      *(undefined8 *)(param_1 + 0x3dc) = 0x45000000;
      *(undefined8 *)(param_1 + 0x3e4) = 0x45000000;
      *(undefined8 *)(param_1 + 0x3ec) = 0;
      return;
    }
  } while( true );
}

