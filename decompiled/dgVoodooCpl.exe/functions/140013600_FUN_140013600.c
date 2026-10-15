/*
 * FUN_140013600 at 140013600
 * undefined8 __fastcall FUN_140013600(longlong param_1)
 * Address ranges: 140013600-140013902
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140013600(longlong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *local_res8;
  longlong *local_res10;
  undefined1 local_168 [296];
  int local_40;
  int iStack_3c;
  
  uVar11 = 0;
  local_res10 = (longlong *)0x0;
  if ((*(longlong **)(param_1 + 0x310) == (longlong *)0x0) ||
     (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x68))(), (int)uVar4 == 0)) {
    iVar3 = (**(code **)(param_1 + 0x2a8))(&DAT_140028f80,&local_res10);
    if (-1 < iVar3) {
      if (*(longlong **)(param_1 + 0x310) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x310) + 0x10))();
      }
      *(longlong **)(param_1 + 0x310) = local_res10;
    }
    local_res10 = *(longlong **)(param_1 + 0x310);
    if (local_res10 == (longlong *)0x0) {
      return 0;
    }
    FUN_140024260(*(LPVOID *)(param_1 + 0x318));
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    local_res8 = (longlong *)0x0;
    iVar3 = (**(code **)(*local_res10 + 0x60))(local_res10,0,&local_res8);
    uVar4 = uVar11;
    while (uVar9 = uVar11, -1 < iVar3) {
      iVar3 = (**(code **)(*local_res8 + 0x50))(local_res8,local_168);
      if (-1 < iVar3) {
        uVar8 = 0xffffffff;
        do {
          if (((*(int *)(param_1 + 0x10 + uVar9 * 0x28) == local_40) &&
              (*(int *)(param_1 + 0x14 + uVar9 * 0x28) == iStack_3c)) &&
             ((local_40 != 0 || (iStack_3c != 0)))) {
            (**(code **)(*local_res8 + 0x10))();
            local_res8 = (longlong *)0x0;
            goto LAB_1400137ac;
          }
          if (*(longlong *)(param_1 + 8 + uVar9 * 0x28) == 0) {
            uVar10 = (uint)uVar9;
            if ((uint)uVar8 != 0xffffffff) {
              uVar10 = (uint)uVar8;
            }
            uVar8 = (ulonglong)uVar10;
          }
          uVar10 = (uint)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 < 0x10);
        iVar3 = (int)uVar8;
        uVar9 = uVar8;
        if (local_res8 == (longlong *)0x0) {
LAB_1400137ac:
          iVar3 = (int)uVar9;
          if (iVar3 != -1) goto LAB_1400137b5;
        }
        else if (iVar3 == -1) {
          (**(code **)(*local_res8 + 0x10))(local_res8);
        }
        else {
          lVar7 = (longlong)iVar3;
          *(longlong **)(param_1 + 8 + lVar7 * 0x28) = local_res8;
          *(ulonglong *)(param_1 + 0x10 + lVar7 * 0x28) = CONCAT44(iStack_3c,local_40);
          *(undefined1 *)(param_1 + 0x1c + lVar7 * 0x28) = 1;
LAB_1400137b5:
          iVar1 = *(int *)(param_1 + 0x324);
          if (*(int *)(param_1 + 800) == iVar1) {
            uVar9 = 0x10;
            if (iVar1 != 0) {
              uVar9 = (ulonglong)(uint)(iVar1 * 2);
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar9;
            uVar5 = SUB168(ZEXT816(4) * auVar2,0);
            if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
              uVar5 = 0xffffffffffffffff;
            }
            puVar6 = (undefined8 *)thunk_FUN_14002423c(uVar5);
            if (puVar6 == (undefined8 *)0x0) goto LAB_140013836;
            FUN_140024620(puVar6,*(undefined8 **)(param_1 + 0x318),
                          (ulonglong)*(uint *)(param_1 + 0x324) << 2);
            FUN_140024260(*(LPVOID *)(param_1 + 0x318));
            *(undefined8 **)(param_1 + 0x318) = puVar6;
            *(int *)(param_1 + 0x324) = (int)uVar9;
          }
          *(int *)(*(longlong *)(param_1 + 0x318) + (ulonglong)*(uint *)(param_1 + 800) * 4) = iVar3
          ;
          *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
        }
      }
LAB_140013836:
      uVar4 = (ulonglong)((int)uVar4 + 1);
      iVar3 = (**(code **)(*local_res10 + 0x60))(local_res10,uVar4,&local_res8);
    }
    do {
      uVar4 = uVar9;
      if (*(char *)(param_1 + 0x1c + uVar9 * 0x28) != '\0') {
        if (*(uint *)(param_1 + 800) != 0) {
          uVar4 = uVar11;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x318) + uVar4 * 4) == (int)uVar9) {
              if ((int)uVar4 != -1) goto LAB_1400138d4;
              break;
            }
            uVar10 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar10;
          } while (uVar10 < *(uint *)(param_1 + 800));
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8 + uVar9 * 0x28) + 0x10))();
        *(undefined1 *)(param_1 + 0x1c + uVar9 * 0x28) = 0;
      }
LAB_1400138d4:
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < 0x10);
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}

