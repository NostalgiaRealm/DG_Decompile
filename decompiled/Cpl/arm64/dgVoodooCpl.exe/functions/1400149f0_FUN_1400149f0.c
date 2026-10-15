/*
 * FUN_1400149f0 at 1400149f0
 * undefined8 __cdecl FUN_1400149f0(longlong param_1)
 * Address ranges: 1400149f0-140014c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400149f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *local_180;
  longlong *local_178;
  int local_170 [2];
  undefined1 auStack_168 [296];
  int local_40;
  int iStack_3c;
  
  local_178 = (longlong *)0x0;
  if ((*(longlong **)(param_1 + 0x310) == (longlong *)0x0) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x68))(), iVar3 == 0)) {
    iVar3 = (**(code **)(param_1 + 0x2a8))(&DAT_140028fe0,&local_178);
    if (-1 < iVar3) {
      if (*(longlong **)(param_1 + 0x310) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x310) + 0x10))();
      }
      *(longlong **)(param_1 + 0x310) = local_178;
    }
    local_178 = *(longlong **)(param_1 + 0x310);
    if (local_178 == (longlong *)0x0) {
      return 0;
    }
    thunk_FUN_140024830(*(LPVOID *)(param_1 + 0x318));
    local_180 = (longlong *)0x0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    iVar3 = 0;
    while (iVar4 = (**(code **)(*local_178 + 0x60))(local_178,iVar3,&local_180), -1 < iVar4) {
      iVar4 = (**(code **)(*local_180 + 0x50))(local_180,auStack_168);
      if (-1 < iVar4) {
        uVar5 = 0xffffffff;
        uVar7 = 0;
        do {
          lVar8 = uVar7 * 0x28;
          if (((*(int *)(param_1 + 0x10 + lVar8) == local_40) &&
              (*(int *)(param_1 + lVar8 + 0x14) == iStack_3c)) &&
             ((local_40 != 0 || (iStack_3c != 0)))) {
            (**(code **)(*local_180 + 0x10))();
            local_180 = (longlong *)0x0;
            goto LAB_140014b0c;
          }
          uVar2 = uVar5;
          if (uVar5 == 0xffffffff) {
            uVar2 = (uint)uVar7;
          }
          uVar1 = (uint)uVar7 + 1;
          uVar7 = (ulonglong)uVar1;
          if (*(longlong *)(param_1 + lVar8 + 8) == 0) {
            uVar5 = uVar2;
          }
        } while (uVar1 < 0x10);
        uVar7 = (ulonglong)uVar5;
LAB_140014b0c:
        iVar4 = (int)uVar7;
        if (local_180 == (longlong *)0x0) {
          if (iVar4 != -1) goto LAB_140014b70;
        }
        else if (iVar4 == -1) {
          (**(code **)(*local_180 + 0x10))();
        }
        else {
          *(longlong **)(param_1 + 8 + (longlong)iVar4 * 0x28) = local_180;
          lVar8 = param_1 + (longlong)iVar4 * 0x28;
          *(ulonglong *)(lVar8 + 0x10) = CONCAT44(iStack_3c,local_40);
          *(undefined1 *)(lVar8 + 0x1c) = 1;
LAB_140014b70:
          local_170[0] = iVar4;
          FUN_140013ed0((longlong *)(param_1 + 0x318),local_170);
        }
      }
      iVar3 = iVar3 + 1;
    }
    uVar7 = 0;
    do {
      lVar8 = uVar7 * 0x28;
      if (*(char *)(param_1 + 0x1c + lVar8) != '\0') {
        if (*(uint *)(param_1 + 800) != 0) {
          uVar6 = 0;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x318) + uVar6 * 4) == (int)uVar7) {
              if ((int)uVar6 != -1) goto LAB_140014c08;
              break;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(param_1 + 800));
        }
        (**(code **)(**(longlong **)(param_1 + 8 + lVar8) + 0x10))();
        *(undefined1 *)(param_1 + 0x1c + lVar8) = 0;
      }
LAB_140014c08:
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < 0x10);
  }
  return 1;
}

